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
	 * 		Name   -> PredefinedFunction ABP_Slobber_Firestorm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Slobber_Firestorm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Slobber_Firestorm.BP_Slobber_Firestorm_C");
		return ptr;
	}

}


