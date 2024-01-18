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
	 * 		Name   -> Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.ActionHasEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterActionEndedReason                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_ActionHasJustEnded_Data_C::ActionHasEnded(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.ActionHasEnded");
		
		UBP_PerkCondition_ActionHasJustEnded_Data_C_ActionHasEnded_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.UnbindFromEndAction
	 * 		Flags  -> ()
	 */
	void UBP_PerkCondition_ActionHasJustEnded_Data_C::UnbindFromEndAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.UnbindFromEndAction");
		
		UBP_PerkCondition_ActionHasJustEnded_Data_C_UnbindFromEndAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.ListenToItemBeingEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponEquippableComponent*                  OnEquippable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_ActionHasJustEnded_Data_C::ListenToItemBeingEquipped(class UWeaponEquippableComponent* OnEquippable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.ListenToItemBeingEquipped");
		
		UBP_PerkCondition_ActionHasJustEnded_Data_C_ListenToItemBeingEquipped_Params params {};
		params.OnEquippable = OnEquippable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.EquippableAssigned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperDollSlot*                              PaperDollSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_ActionHasJustEnded_Data_C::EquippableAssigned(class UPaperDollSlot* PaperDollSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.EquippableAssigned");
		
		UBP_PerkCondition_ActionHasJustEnded_Data_C_EquippableAssigned_Params params {};
		params.PaperDollSlot = PaperDollSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.BindToEndAction
	 * 		Flags  -> ()
	 */
	void UBP_PerkCondition_ActionHasJustEnded_Data_C::BindToEndAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.BindToEndAction");
		
		UBP_PerkCondition_ActionHasJustEnded_Data_C_BindToEndAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.ExecuteUbergraph_BP_PerkCondition_ActionHasJustEnded_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_ActionHasJustEnded_Data_C::ExecuteUbergraph_BP_PerkCondition_ActionHasJustEnded_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C.ExecuteUbergraph_BP_PerkCondition_ActionHasJustEnded_Data");
		
		UBP_PerkCondition_ActionHasJustEnded_Data_C_ExecuteUbergraph_BP_PerkCondition_ActionHasJustEnded_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_ActionHasJustEnded_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_ActionHasJustEnded_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C");
		return ptr;
	}

}


