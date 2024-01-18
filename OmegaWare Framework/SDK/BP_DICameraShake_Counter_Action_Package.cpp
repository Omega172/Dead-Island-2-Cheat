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
	 * 		Name   -> PredefinedFunction UBP_DICameraShake_Counter_Action_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DICameraShake_Counter_Action_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DICameraShake_Counter_Action.BP_DICameraShake_Counter_Action_C");
		return ptr;
	}

}


