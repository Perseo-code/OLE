#! /bin/bash

CURRENT_DIR=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)

cd "${CURRENT_DIR}"
if [ -e "build" ]; then
    rm -rf build
fi

cmake -B build
cmake --build build