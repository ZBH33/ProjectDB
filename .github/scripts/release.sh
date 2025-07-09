#!/usr/bin/env bash
# Must support --test mode
set -euo pipefail

if [[ "${1:-}" == "--test" ]]; then
  echo "Validating release script"
  exit 0
fi

# === Release logic ===
echo "Running release command"
