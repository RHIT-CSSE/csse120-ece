#!/usr/bin/env bash
# Put the edu_unit test runner from this repository on your PATH.
#
# The course ships a prebuilt edu_unit binary in the repository root, so there
# is nothing to compile. This script links that binary into ~/.local/bin and
# makes sure ~/.local/bin is on PATH for future shells.
#
# Run it once after cloning:
#   ./setup_edu_unit.sh
# then open a new terminal (or run: source ~/.bashrc).
set -euo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]:-$0}")" && pwd)"
REPO_DIR="$(cd -- "${SCRIPT_DIR}/../.." && pwd)"
BINARY="${REPO_DIR}/edu_unit"
BIN_DIR="${HOME}/.local/bin"
LINK="${BIN_DIR}/edu_unit"
RC="${HOME}/.bashrc"
MARKER="# csse120-ece: put ~/.local/bin on PATH"

fail() {
    printf 'setup_edu_unit: %s\n' "$*" >&2
    exit 1
}

[ -x "${BINARY}" ] || fail "no executable at ${BINARY}; run this script from a clone of the course repository"

if ! "${BINARY}" --help >/dev/null 2>&1; then
    fail "${BINARY} does not run on this machine (it is a Linux x86-64 binary); ask your instructor"
fi

mkdir -p "${BIN_DIR}"
ln -sfn "${BINARY}" "${LINK}"

touch "${RC}"
if ! grep -Fq "${MARKER}" "${RC}"; then
    {
        printf '\n%s\n' "${MARKER}"
        printf 'case ":$PATH:" in *":$HOME/.local/bin:"*) ;; *) export PATH="$HOME/.local/bin:$PATH" ;; esac\n'
    } >> "${RC}"
fi

printf 'Linked %s -> %s\n' "${BINARY}" "${LINK}"
printf 'Ensured ~/.local/bin is on PATH in %s\n' "${RC}"
printf 'Open a new terminal (or run: source ~/.bashrc), then try: edu_unit --help\n'
