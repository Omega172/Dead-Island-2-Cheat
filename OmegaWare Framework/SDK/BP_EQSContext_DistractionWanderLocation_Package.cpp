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
	 * 		Name   -> PredefinedFunction UBP_EQSContext_DistractionWanderLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_EQSContext_DistractionWanderLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EQSContext_DistractionWanderLocation.BP_EQSContext_DistractionWanderLocation_C");
		return ptr;
	}

}

