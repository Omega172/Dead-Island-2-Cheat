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
	 * 		Name   -> PredefinedFunction UBP_IndividualGameReward_XP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_IndividualGameReward_XP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_IndividualGameReward_XP.BP_IndividualGameReward_XP_C");
		return ptr;
	}

}


