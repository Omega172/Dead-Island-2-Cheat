/**
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
	 * 		Name   -> PredefinedFunction UBP_AnimSetDataDriven_StandardAttack_RepeatLimitDefault_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimSetDataDriven_StandardAttack_RepeatLimitDefault_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimSetDataDriven_StandardAttack_RepeatLimitDefault.BP_AnimSetDataDriven_StandardAttack_RepeatLimitDefault_C");
		return ptr;
	}

}


