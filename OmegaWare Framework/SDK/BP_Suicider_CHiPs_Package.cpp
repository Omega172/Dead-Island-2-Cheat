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
	 * 		Name   -> PredefinedFunction ABP_Suicider_CHiPs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Suicider_CHiPs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Suicider_CHiPs.BP_Suicider_CHiPs_C");
		return ptr;
	}

}


