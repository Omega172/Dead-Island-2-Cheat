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
	 * 		Name   -> PredefinedFunction UBPC_CombatMovementCoordinator_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_CombatMovementCoordinator_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CombatMovementCoordinator_AI.BPC_CombatMovementCoordinator_AI_C");
		return ptr;
	}

}


