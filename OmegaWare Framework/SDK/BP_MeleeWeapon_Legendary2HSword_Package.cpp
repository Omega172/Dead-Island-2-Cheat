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
	 * 		Name   -> PredefinedFunction ABP_MeleeWeapon_Legendary2HSword_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MeleeWeapon_Legendary2HSword_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeleeWeapon_Legendary2HSword.BP_MeleeWeapon_Legendary2HSword_C");
		return ptr;
	}

}


