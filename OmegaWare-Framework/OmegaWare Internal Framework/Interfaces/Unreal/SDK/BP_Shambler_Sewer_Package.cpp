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
	 * 		Name   -> PredefinedFunction ABP_Shambler_Sewer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Shambler_Sewer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shambler_Sewer.BP_Shambler_Sewer_C");
		return ptr;
	}

}


