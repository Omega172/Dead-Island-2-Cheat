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
	 * 		Name   -> PredefinedFunction UBP_Fluid_Droplet_Blood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Fluid_Droplet_Blood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fluid_Droplet_Blood.BP_Fluid_Droplet_Blood_C");
		return ptr;
	}

}


