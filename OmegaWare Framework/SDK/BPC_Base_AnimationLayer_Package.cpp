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
	 * 		Name   -> PredefinedFunction UBPC_Base_AnimationLayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Base_AnimationLayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Base_AnimationLayer.BPC_Base_AnimationLayer_C");
		return ptr;
	}

}


