#!/bin/bash

rm -rf build
mkdir build
cd build
cmake ../ -DOpenCL_INCLUDE_DIR=/share/apps/devel/intel-opencl-SRB5.0/include -DOpenCL_LIBRARY=/share/apps/devel/intel-opencl-SRB5.0/lib/libOpenCL.so
make

