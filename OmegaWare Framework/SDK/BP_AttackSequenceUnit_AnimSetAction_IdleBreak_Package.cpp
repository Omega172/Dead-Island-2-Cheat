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
	 * 		Name   -> PredefinedFunction UBP_AttackSequenceUnit_AnimSetAction_IdleBreak_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AttackSequenceUnit_AnimSetAction_IdleBreak_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AttackSequenceUnit_AnimSetAction_IdleBreak.BP_AttackSequenceUnit_AnimSetAction_IdleBreak_C");
		return ptr;
	}

}


