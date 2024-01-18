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
	 * 		Name   -> PredefinedFunction UBP_DICameraShake_Sharp_CriticalHit_Weighty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DICameraShake_Sharp_CriticalHit_Weighty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DICameraShake_Sharp_CriticalHit_Weighty.BP_DICameraShake_Sharp_CriticalHit_Weighty_C");
		return ptr;
	}

}


