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
	 * 		Name   -> Function BP_Weapon_LegendaryMachete.BP_Weapon_LegendaryMachete_C.VFXFinished
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_LegendaryMachete_C::VFXFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_LegendaryMachete.BP_Weapon_LegendaryMachete_C.VFXFinished");
		
		ABP_Weapon_LegendaryMachete_C_VFXFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_LegendaryMachete.BP_Weapon_LegendaryMachete_C.HandleVFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VFXDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_LegendaryMachete_C::HandleVFX(float VFXDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_LegendaryMachete.BP_Weapon_LegendaryMachete_C.HandleVFX");
		
		ABP_Weapon_LegendaryMachete_C_HandleVFX_Params params {};
		params.VFXDuration = VFXDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weapon_LegendaryMachete_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weapon_LegendaryMachete_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_LegendaryMachete.BP_Weapon_LegendaryMachete_C");
		return ptr;
	}

}


