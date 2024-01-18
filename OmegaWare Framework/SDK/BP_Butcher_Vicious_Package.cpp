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
	 * 		Name   -> PredefinedFunction ABP_Butcher_Vicious_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Butcher_Vicious_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Butcher_Vicious.BP_Butcher_Vicious_C");
		return ptr;
	}

}


