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
	 * 		Name   -> PredefinedFunction UBPC_CombatTarget_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_CombatTarget_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CombatTarget_Player.BPC_CombatTarget_Player_C");
		return ptr;
	}

}

