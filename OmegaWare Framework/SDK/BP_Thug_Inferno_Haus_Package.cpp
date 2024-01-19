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
	 * 		Name   -> PredefinedFunction ABP_Thug_Inferno_Haus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Thug_Inferno_Haus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Thug_Inferno_Haus.BP_Thug_Inferno_Haus_C");
		return ptr;
	}

}


