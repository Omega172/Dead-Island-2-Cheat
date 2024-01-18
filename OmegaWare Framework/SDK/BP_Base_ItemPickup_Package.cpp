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
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ToggleLootOutline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_ItemPickup_C::ToggleLootOutline(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ToggleLootOutline");
		
		ABP_Base_ItemPickup_C_ToggleLootOutline_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ClearDisplayName
	 * 		Flags  -> ()
	 */
	void ABP_Base_ItemPickup_C::ClearDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ClearDisplayName");
		
		ABP_Base_ItemPickup_C_ClearDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ProceduralItemMeshHandling
	 * 		Flags  -> ()
	 */
	void ABP_Base_ItemPickup_C::ProceduralItemMeshHandling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ProceduralItemMeshHandling");
		
		ABP_Base_ItemPickup_C_ProceduralItemMeshHandling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.StandardItemMeshHandling
	 * 		Flags  -> ()
	 */
	void ABP_Base_ItemPickup_C::StandardItemMeshHandling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.StandardItemMeshHandling");
		
		ABP_Base_ItemPickup_C_StandardItemMeshHandling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.NullMeshes
	 * 		Flags  -> ()
	 */
	void ABP_Base_ItemPickup_C::NullMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.NullMeshes");
		
		ABP_Base_ItemPickup_C_NullMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.SetComponentName
	 * 		Flags  -> ()
	 */
	void ABP_Base_ItemPickup_C::SetComponentName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.SetComponentName");
		
		ABP_Base_ItemPickup_C_SetComponentName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Base_ItemPickup_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.UserConstructionScript");
		
		ABP_Base_ItemPickup_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ItemPickup_C::BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature");
		
		ABP_Base_ItemPickup_C_BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.OnCosmeticEffectsSetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemRarity                                        Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ItemPickup_C::OnCosmeticEffectsSetup(EItemRarity Rarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.OnCosmeticEffectsSetup");
		
		ABP_Base_ItemPickup_C_OnCosmeticEffectsSetup_Params params {};
		params.Rarity = Rarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.OnConfiguredFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemActor*                                  ItemActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ItemPickup_C::OnConfiguredFrom(class AItemActor* ItemActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.OnConfiguredFrom");
		
		ABP_Base_ItemPickup_C_OnConfiguredFrom_Params params {};
		params.ItemActor = ItemActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_ItemPickup_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ReceiveBeginPlay");
		
		ABP_Base_ItemPickup_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_1_InteractionEnabledStateChangedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_ItemPickup_C::BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_1_InteractionEnabledStateChangedDelegate__DelegateSignature(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_1_InteractionEnabledStateChangedDelegate__DelegateSignature");
		
		ABP_Base_ItemPickup_C_BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_1_InteractionEnabledStateChangedDelegate__DelegateSignature_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ExecuteUbergraph_BP_Base_ItemPickup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ItemPickup_C::ExecuteUbergraph_BP_Base_ItemPickup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ExecuteUbergraph_BP_Base_ItemPickup");
		
		ABP_Base_ItemPickup_C_ExecuteUbergraph_BP_Base_ItemPickup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ItemPickupActorUndocked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Base_ItemPickup_C*                       ItemPickupActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ItemPickup_C::ItemPickupActorUndocked__DelegateSignature(class ABP_Base_ItemPickup_C* ItemPickupActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ItemPickupActorUndocked__DelegateSignature");
		
		ABP_Base_ItemPickup_C_ItemPickupActorUndocked__DelegateSignature_Params params {};
		params.ItemPickupActor = ItemPickupActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_ItemPickup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_ItemPickup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_ItemPickup.BP_Base_ItemPickup_C");
		return ptr;
	}

}


