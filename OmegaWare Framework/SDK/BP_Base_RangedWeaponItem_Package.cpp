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
	 * 		Name   -> Function BP_Base_RangedWeaponItem.BP_Base_RangedWeaponItem_C.BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_0_PaperDollEventMulticastDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_RangedWeaponItem_C::BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_0_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_RangedWeaponItem.BP_Base_RangedWeaponItem_C.BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_0_PaperDollEventMulticastDelegate__DelegateSignature");
		
		ABP_Base_RangedWeaponItem_C_BndEvt__EquippableComponent_K2Node_ComponentBoundEvent_0_PaperDollEventMulticastDelegate__DelegateSignature_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_RangedWeaponItem.BP_Base_RangedWeaponItem_C.ExecuteUbergraph_BP_Base_RangedWeaponItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_RangedWeaponItem_C::ExecuteUbergraph_BP_Base_RangedWeaponItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_RangedWeaponItem.BP_Base_RangedWeaponItem_C.ExecuteUbergraph_BP_Base_RangedWeaponItem");
		
		ABP_Base_RangedWeaponItem_C_ExecuteUbergraph_BP_Base_RangedWeaponItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_RangedWeaponItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_RangedWeaponItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_RangedWeaponItem.BP_Base_RangedWeaponItem_C");
		return ptr;
	}

}


