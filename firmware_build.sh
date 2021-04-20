#!/bin/sh

mkdir -p build/firmware
pushd build/firmware
cmake -GNinja -DPROJECT_SOURCE_DIRECTORY="../.." -DCMAKE_TOOLCHAIN_FILE="../toolchains/arm.toolchain.cmake" ../../code && ninja
popd
