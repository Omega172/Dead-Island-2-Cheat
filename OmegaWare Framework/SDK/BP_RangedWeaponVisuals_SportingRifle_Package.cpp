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
	 * 		Name   -> Function BP_RangedWeaponVisuals_SportingRifle.BP_RangedWeaponVisuals_SportingRifle_C.TickWeaponPosAndRot
	 * 		Flags  -> ()
	 */
	void ABP_RangedWeaponVisuals_SportingRifle_C::TickWeaponPosAndRot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RangedWeaponVisuals_SportingRifle.BP_RangedWeaponVisuals_SportingRifle_C.TickWeaponPosAndRot");
		
		ABP_RangedWeaponVisuals_SportingRifle_C_TickWeaponPosAndRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RangedWeaponVisuals_SportingRifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RangedWeaponVisuals_SportingRifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RangedWeaponVisuals_SportingRifle.BP_RangedWeaponVisuals_SportingRifle_C");
		return ptr;
	}

}


