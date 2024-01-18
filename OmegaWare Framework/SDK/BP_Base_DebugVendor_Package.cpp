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
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.OnRep_Inventorypopulated
	 * 		Flags  -> ()
	 */
	void ABP_Base_DebugVendor_C::OnRep_Inventorypopulated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.OnRep_Inventorypopulated");
		
		ABP_Base_DebugVendor_C_OnRep_Inventorypopulated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.OnItemCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AItemActor*                                  Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItemSpecification*                          ItemSpecification                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_DebugVendor_C::OnItemCreated(bool Success, class AItemActor* Item, class UItemSpecification* ItemSpecification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.OnItemCreated");
		
		ABP_Base_DebugVendor_C_OnItemCreated_Params params {};
		params.Success = Success;
		params.Item = Item;
		params.ItemSpecification = ItemSpecification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.PopulateInventory
	 * 		Flags  -> ()
	 */
	void ABP_Base_DebugVendor_C::PopulateInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.PopulateInventory");
		
		ABP_Base_DebugVendor_C_PopulateInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.UpdateState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDebugVendorStates                                 NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_DebugVendor_C::UpdateState(EDebugVendorStates NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.UpdateState");
		
		ABP_Base_DebugVendor_C_UpdateState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__TriggerShape_K2Node_ComponentBoundEvent_0_InteractorEnteredSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_DebugVendor_C::BndEvt__TriggerShape_K2Node_ComponentBoundEvent_0_InteractorEnteredSignature__DelegateSignature(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__TriggerShape_K2Node_ComponentBoundEvent_0_InteractorEnteredSignature__DelegateSignature");
		
		ABP_Base_DebugVendor_C_BndEvt__TriggerShape_K2Node_ComponentBoundEvent_0_InteractorEnteredSignature__DelegateSignature_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__TriggerShape_K2Node_ComponentBoundEvent_1_InteractorLeftSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_DebugVendor_C::BndEvt__TriggerShape_K2Node_ComponentBoundEvent_1_InteractorLeftSignature__DelegateSignature(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__TriggerShape_K2Node_ComponentBoundEvent_1_InteractorLeftSignature__DelegateSignature");
		
		ABP_Base_DebugVendor_C_BndEvt__TriggerShape_K2Node_ComponentBoundEvent_1_InteractorLeftSignature__DelegateSignature_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.StateIdle
	 * 		Flags  -> ()
	 */
	void ABP_Base_DebugVendor_C::StateIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.StateIdle");
		
		ABP_Base_DebugVendor_C_StateIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.StateAttract
	 * 		Flags  -> ()
	 */
	void ABP_Base_DebugVendor_C::StateAttract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.StateAttract");
		
		ABP_Base_DebugVendor_C_StateAttract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.StateInMenu
	 * 		Flags  -> ()
	 */
	void ABP_Base_DebugVendor_C::StateInMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.StateInMenu");
		
		ABP_Base_DebugVendor_C_StateInMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_DebugVendor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.ReceiveBeginPlay");
		
		ABP_Base_DebugVendor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__Interactive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_DebugVendor_C::BndEvt__Interactive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__Interactive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature");
		
		ABP_Base_DebugVendor_C_BndEvt__Interactive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.MenuClosed
	 * 		Flags  -> ()
	 */
	void ABP_Base_DebugVendor_C::MenuClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.MenuClosed");
		
		ABP_Base_DebugVendor_C_MenuClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__Interactive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_DebugVendor_C::BndEvt__Interactive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.BndEvt__Interactive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature");
		
		ABP_Base_DebugVendor_C_BndEvt__Interactive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.OpenMenu
	 * 		Flags  -> ()
	 */
	void ABP_Base_DebugVendor_C::OpenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.OpenMenu");
		
		ABP_Base_DebugVendor_C_OpenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.ExecuteUbergraph_BP_Base_DebugVendor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_DebugVendor_C::ExecuteUbergraph_BP_Base_DebugVendor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_DebugVendor.BP_Base_DebugVendor_C.ExecuteUbergraph_BP_Base_DebugVendor");
		
		ABP_Base_DebugVendor_C_ExecuteUbergraph_BP_Base_DebugVendor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_DebugVendor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_DebugVendor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_DebugVendor.BP_Base_DebugVendor_C");
		return ptr;
	}

}


