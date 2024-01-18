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
	 * 		Name   -> PredefinedFunction UBP_DIPresetationProxyStepper_DefaultWithUIWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DIPresetationProxyStepper_DefaultWithUIWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DIPresetationProxyStepper_DefaultWithUIWarning.BP_DIPresetationProxyStepper_DefaultWithUIWarning_C");
		return ptr;
	}

}


