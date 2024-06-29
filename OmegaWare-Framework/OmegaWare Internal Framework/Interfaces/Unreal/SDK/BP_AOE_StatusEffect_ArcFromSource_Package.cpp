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
	 * 		Name   -> PredefinedFunction UBP_AOE_StatusEffect_ArcFromSource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AOE_StatusEffect_ArcFromSource_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AOE_StatusEffect_ArcFromSource.BP_AOE_StatusEffect_ArcFromSource_C");
		return ptr;
	}

}


