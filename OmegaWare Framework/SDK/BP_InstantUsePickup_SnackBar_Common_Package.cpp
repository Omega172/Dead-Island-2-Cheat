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
	 * 		Name   -> PredefinedFunction ABP_InstantUsePickup_SnackBar_Common_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_InstantUsePickup_SnackBar_Common_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InstantUsePickup_SnackBar_Common.BP_InstantUsePickup_SnackBar_Common_C");
		return ptr;
	}

}


