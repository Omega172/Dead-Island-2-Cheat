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
	 * 		Name   -> Function BP_ItemPickup_Weapon.BP_ItemPickup_Weapon_C.BndEvt__BPC_WeaponAttachmentComponent_K2Node_ComponentBoundEvent_0_AttachmentChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ItemPickup_Weapon_C::BndEvt__BPC_WeaponAttachmentComponent_K2Node_ComponentBoundEvent_0_AttachmentChangedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPickup_Weapon.BP_ItemPickup_Weapon_C.BndEvt__BPC_WeaponAttachmentComponent_K2Node_ComponentBoundEvent_0_AttachmentChangedDelegate__DelegateSignature");
		
		ABP_ItemPickup_Weapon_C_BndEvt__BPC_WeaponAttachmentComponent_K2Node_ComponentBoundEvent_0_AttachmentChangedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemPickup_Weapon.BP_ItemPickup_Weapon_C.ExecuteUbergraph_BP_ItemPickup_Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemPickup_Weapon_C::ExecuteUbergraph_BP_ItemPickup_Weapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPickup_Weapon.BP_ItemPickup_Weapon_C.ExecuteUbergraph_BP_ItemPickup_Weapon");
		
		ABP_ItemPickup_Weapon_C_ExecuteUbergraph_BP_ItemPickup_Weapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemPickup_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemPickup_Weapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemPickup_Weapon.BP_ItemPickup_Weapon_C");
		return ptr;
	}

}


