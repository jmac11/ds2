//
// Copyright (c) 2014, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the University of Illinois/NCSA Open
// Source License found in the LICENSE file in the root directory of this
// source tree. An additional grant of patent rights can be found in the
// PATENTS file in the same directory.
//

#ifndef __DebugServer2_Architecture_CPUState_h
#define __DebugServer2_Architecture_CPUState_h

#include "DebugServer2/Types.h"

#if defined(ARCH_ARM)
#include "DebugServer2/Architecture/ARM/CPUState.h"
#elif defined(ARCH_ARM64)
#include "DebugServer2/Architecture/ARM/CPUState.h"
#include "DebugServer2/Architecture/ARM64/CPUState.h"
#elif defined(ARCH_X86)
#include "DebugServer2/Architecture/X86/CPUState.h"
#elif defined(ARCH_X86_64)
#include "DebugServer2/Architecture/X86/CPUState.h"
#include "DebugServer2/Architecture/X86_64/CPUState.h"
#else
#error "Architecture not supported."
#endif

namespace ds2 {
namespace Architecture {
#if defined(ARCH_ARM)
using ARM::CPUState;
#elif defined(ARCH_ARM64)
using ARM64::CPUState;
#elif defined(ARCH_X86)
using X86::CPUState;
#elif defined(ARCH_X86_64)
using X86_64::CPUState;
#else
#error "Architecture not supported."
#endif
}
}

#endif // !__DebugServer2_Architecture_CPUState_h
