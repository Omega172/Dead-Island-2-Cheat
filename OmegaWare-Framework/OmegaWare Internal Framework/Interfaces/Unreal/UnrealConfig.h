#pragma once
#if FRAMEWORK_UNREAL

#include "SDK.h"

#define SDK_IMPORTED 1
static_assert(SDK_IMPORTED, "Did you remember to copy in the CG SDK?");

// Reminder remember to incude these files in the project
// BasicTypes_Package.cpp
// CoreUObject_Package.cpp
// Engine_Package.cpp

// If using Dumper 7
// Basic.cpp
// CoreUObject_functions.cpp
// Engine_functions.cpp

#include "Unreal.h"

#endif