﻿/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Runner_Shocking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Runner_Shocking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Runner_Shocking.BP_Runner_Shocking_C");
		return ptr;
	}

}


