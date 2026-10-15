#!/usr/bin/env bash
# One-time setup of the Linux side (native Linux or WSL): compiler, MIPS binutils, decomp-permuter.
# Usage: bash tools/setup_linux.sh
set -e
base="$HOME/.local/share/gt4"
mkdir -p "$base"

echo "== packages (MIPS binutils, 32-bit libc for the compiler, python modules for the permuter)"
sudo dpkg --add-architecture i386 2>/dev/null || true
sudo apt-get update -qq
sudo apt-get install -y -qq binutils-mips-linux-gnu libc6:i386 python3-toml python3-levenshtein >/dev/null

echo "== ee-gcc 2.9 (GT3 default, decomp.me build)"
compiler_dir="$base/compilers/ee-gcc2.9-991111"
if [ ! -x "$compiler_dir/bin/ee-gcc" ]; then
    mkdir -p "$compiler_dir"
    curl -fLsS https://github.com/decompme/compilers/releases/download/compilers/ee-gcc2.9-991111.tar.xz \
        | tar -xJ -C "$compiler_dir"
fi
"$compiler_dir/bin/ee-gcc" --version | head -1

echo "== decomp-permuter"
if [ ! -d "$base/decomp-permuter" ]; then
    git clone -q --depth 1 https://github.com/simonlindholm/decomp-permuter "$base/decomp-permuter"
fi
python3 "$base/decomp-permuter/permuter.py" --help >/dev/null && echo "permuter ok"

echo "== splat (in a venv)"
sudo apt-get install -y -qq python3-venv >/dev/null
if [ ! -x "$base/venv/bin/python" ]; then python3 -m venv "$base/venv"; fi
"$base/venv/bin/pip" install -q "splat64[mips]"
"$base/venv/bin/python" -c "import splat; print('splat', splat.__version__)"
