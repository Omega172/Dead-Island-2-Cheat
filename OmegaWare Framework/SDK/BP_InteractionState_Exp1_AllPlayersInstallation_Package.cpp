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
	 * 		Name   -> PredefinedFunction UBP_InteractionState_Exp1_AllPlayersInstallation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_Exp1_AllPlayersInstallation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_Exp1_AllPlayersInstallation.BP_InteractionState_Exp1_AllPlayersInstallation_C");
		return ptr;
	}

}


