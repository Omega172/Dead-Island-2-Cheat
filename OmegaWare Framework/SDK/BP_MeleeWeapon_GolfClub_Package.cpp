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
	 * 		Name   -> PredefinedFunction ABP_MeleeWeapon_GolfClub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeleeWeapon_GolfClub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeleeWeapon_GolfClub.BP_MeleeWeapon_GolfClub_C");
		return ptr;
	}

}


