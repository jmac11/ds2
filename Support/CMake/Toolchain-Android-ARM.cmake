##
## Copyright (c) 2014, Facebook, Inc.
## All rights reserved.
##
## This source code is licensed under the University of Illinois/NCSA Open
## Source License found in the LICENSE file in the root directory of this
## source tree. An additional grant of patent rights can be found in the
## PATENTS file in the same directory.
##

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR ARM)

set(CMAKE_C_COMPILER /tmp/aosp-toolchain/arm-linux-androideabi-4.8/bin/arm-linux-androideabi-gcc)
set(CMAKE_CXX_COMPILER /tmp/aosp-toolchain/arm-linux-androideabi-4.8/bin/arm-linux-androideabi-g++)

set(STATIC 1)
