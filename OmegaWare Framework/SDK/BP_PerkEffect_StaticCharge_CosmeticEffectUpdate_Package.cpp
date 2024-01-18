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
	 * 		Name   -> Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.CacheEquippedVisualWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Base_Player_C*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C::CacheEquippedVisualWeapon(class ABP_Base_Player_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.CacheEquippedVisualWeapon");
		
		UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_CacheEquippedVisualWeapon_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.UpdateMaterialOnWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StackCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C::UpdateMaterialOnWeapon(int32_t StackCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.UpdateMaterialOnWeapon");
		
		UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_UpdateMaterialOnWeapon_Params params {};
		params.StackCount = StackCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnStackCountUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewStackCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C::OnStackCountUpdated(int32_t NewStackCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnStackCountUpdated");
		
		UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnStackCountUpdated_Params params {};
		params.NewStackCount = NewStackCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnEnd");
		
		UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnWeaponChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquippableComponent*                        PreviousItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UEquippableComponent*                        CurrentItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C::OnWeaponChanged(class UEquippableComponent* PreviousItem, class UEquippableComponent* CurrentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnWeaponChanged");
		
		UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnWeaponChanged_Params params {};
		params.PreviousItem = PreviousItem;
		params.CurrentItem = CurrentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnWeaponAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPerspective                                       Perspective                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C::OnWeaponAttached(class AActor* NewActor, EPerspective Perspective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnWeaponAttached");
		
		UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnWeaponAttached_Params params {};
		params.NewActor = NewActor;
		params.Perspective = Perspective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.OnStart");
		
		UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.ExecuteUbergraph_BP_PerkEffect_StaticCharge_CosmeticEffectUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C::ExecuteUbergraph_BP_PerkEffect_StaticCharge_CosmeticEffectUpdate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.ExecuteUbergraph_BP_PerkEffect_StaticCharge_CosmeticEffectUpdate");
		
		UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C_ExecuteUbergraph_BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_StaticCharge_CosmeticEffectUpdate.BP_PerkEffect_StaticCharge_CosmeticEffectUpdate_C");
		return ptr;
	}

}


