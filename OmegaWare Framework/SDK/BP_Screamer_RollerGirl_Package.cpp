﻿/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
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
	 * 		Name   -> PredefinedFunction ABP_Screamer_RollerGirl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Screamer_RollerGirl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Screamer_RollerGirl.BP_Screamer_RollerGirl_C");
		return ptr;
	}

}


