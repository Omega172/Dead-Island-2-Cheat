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
	 * 		Name   -> PredefinedFunction UBPC_HitDeathReactions_Suicider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_HitDeathReactions_Suicider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_HitDeathReactions_Suicider.BPC_HitDeathReactions_Suicider_C");
		return ptr;
	}

}


