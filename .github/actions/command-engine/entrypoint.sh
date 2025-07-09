#!/usr/bin/env bash
# Must support --test mode
set -euo pipefail

GLOSSARY="${1:-.github/commands.yml}"
mkdir -p logs/errors
timestamp=$(date +%Y%m%d_%H%M%S)

# Load yq if missing
if ! command -v yq &> /dev/null; then
  sudo wget https://github.com/mikefarah/yq/releases/latest/download/yq_linux_amd64 -O /usr/bin/yq
  sudo chmod +x /usr/bin/yq
fi

# Extract commit messages
msg=$(git log "${GITHUB_SHA}^1".."${GITHUB_SHA}" --pretty=format:%B)
echo -e "\033[1;36mDetected commands in commit messages:\033[0m"
cmds=$(echo "$msg" | grep -oE '!([a-zA-Z0-9_-]+)' | tr -d '!')
echo "$cmds"

# Deduplicate commands
readarray -t unique_cmds < <(printf "%s
" $cmds | awk '!x[$0]++')

for cmd in "${unique_cmds[@]}"; do
  script=$(yq -r ".${cmd}.script" "$GLOSSARY" 2>/dev/null || echo "null")
  description=$(yq -r ".${cmd}.description" "$GLOSSARY" 2>/dev/null || echo "")

  if [ "$script" = "null" ]; then
    echo -e "\033[1;33m⚠️ Command '$cmd' not found in glossary.\033[0m"
    continue
  fi

  echo -e "\033[1;34m📘 $cmd: $description\033[0m"

  script_path=".github/scripts/$script"
  if [ ! -x "$script_path" ]; then
    echo -e "\033[1;31m❌ Script '$script_path' is missing or/or not executable\033[0m"
    log_file="logs/errors/${timestamp}_${cmd}_priority-critical.log"
    echo "[$(date)] Missing or non-executable script: $script_path" >> "$log_file"
    exit 1
  fi

  # Dry-run
  echo -e "\033[1;35m🧪 Running dry run for $cmd...\033[0m"
  "$script_path" --test
  status=$?
  if [ $status -eq 127 ]; then
    echo -e "\033[1;31m❌ Script $script does not support --test mode.\033[0m"
    log_file="logs/errors/${timestamp}_${cmd}_priority-critical.log"
    echo "[$(date)] Script $script does not support --test mode." >> "$log_file"
    exit 1
  elif [ $status -ne 0 ]; then
    echo -e "\033[1;31m❌ Dry run failed for $cmd ($script). Logging error.\033[0m"
    log_file="logs/errors/${timestamp}_${cmd}_priority-high.log"
    echo "[$(date)] Dry run failed for $cmd ($script) with exit code $status" >> "$log_file"
    continue
  fi

  # Execute
  echo -e "\033[1;32m✅ Dry run passed. Executing $cmd → $script\033[0m"
  "$script_path"
done
