#!/bin/bash

if [ -d build ]; then
  ./build/tests/lib_creational_test
else
  echo "Nothing to test, please run ./build.sh first."
  exit 1
fi