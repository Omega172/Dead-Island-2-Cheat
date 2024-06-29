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
	 * 		Name   -> PredefinedFunction ABP_DecalActor_Temp_Water_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DecalActor_Temp_Water_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DecalActor_Temp_Water.BP_DecalActor_Temp_Water_C");
		return ptr;
	}

}


