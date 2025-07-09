#!/usr/bin/env bash
# Must support --test mode
set -euo pipefail

if [[ "${1:-}" == "--test" ]]; then
  echo "Running validation for $(basename "$0")"
  # Add validation logic here (exit non-zero on failure)
  exit 0
fi

# === main script logic ===
echo "Hello from $(basename "$0")"
