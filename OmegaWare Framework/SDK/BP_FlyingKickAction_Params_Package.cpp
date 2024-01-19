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
	 * 		Name   -> PredefinedFunction UBP_FlyingKickAction_Params_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FlyingKickAction_Params_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlyingKickAction_Params.BP_FlyingKickAction_Params_C");
		return ptr;
	}

}


