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
	 * 		Name   -> PredefinedFunction UBP_AOE_DamageOverTime_Electrocute_Fluid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AOE_DamageOverTime_Electrocute_Fluid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AOE_DamageOverTime_Electrocute_Fluid.BP_AOE_DamageOverTime_Electrocute_Fluid_C");
		return ptr;
	}

}


