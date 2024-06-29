/**
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
	 * 		Name   -> PredefinedFunction UBPC_CombatAggro_NPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_CombatAggro_NPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_CombatAggro_NPC.BPC_CombatAggro_NPC_C");
		return ptr;
	}

}


