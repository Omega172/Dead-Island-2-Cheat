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
	 * 		Name   -> PredefinedFunction UBP_ActionParams_Base_AreaMovement_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ActionParams_Base_AreaMovement_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionParams_Base_AreaMovement_AI.BP_ActionParams_Base_AreaMovement_AI_C");
		return ptr;
	}

}


