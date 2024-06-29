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
	 * 		Name   -> PredefinedFunction ABP_RangedWeaponVisuals_MachinePistol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RangedWeaponVisuals_MachinePistol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RangedWeaponVisuals_MachinePistol.BP_RangedWeaponVisuals_MachinePistol_C");
		return ptr;
	}

}


