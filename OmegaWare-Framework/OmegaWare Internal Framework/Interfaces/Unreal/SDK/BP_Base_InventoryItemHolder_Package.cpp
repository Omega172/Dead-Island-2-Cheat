/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.CollectBlueprintLinks
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class AActor*> ABP_Base_InventoryItemHolder_C::CollectBlueprintLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.CollectBlueprintLinks");
		
		ABP_Base_InventoryItemHolder_C_CollectBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.MoveTo150cmOffTheGround
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_InventoryItemHolder_C::MoveTo150cmOffTheGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.MoveTo150cmOffTheGround");
		
		ABP_Base_InventoryItemHolder_C_MoveTo150cmOffTheGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.StopPoweredAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_InventoryItemHolder_C::StopPoweredAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.StopPoweredAudio");
		
		ABP_Base_InventoryItemHolder_C_StopPoweredAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.StartPoweredAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_InventoryItemHolder_C::StartPoweredAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.StartPoweredAudio");
		
		ABP_Base_InventoryItemHolder_C_StartPoweredAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.PowerStatusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPowered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_InventoryItemHolder_C::PowerStatusChanged(bool IsPowered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.PowerStatusChanged");
		
		ABP_Base_InventoryItemHolder_C_PowerStatusChanged_Params params {};
		params.IsPowered = IsPowered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_InventoryItemHolder_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.UserConstructionScript");
		
		ABP_Base_InventoryItemHolder_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.DoorCloseTL__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_InventoryItemHolder_C::DoorCloseTL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.DoorCloseTL__FinishedFunc");
		
		ABP_Base_InventoryItemHolder_C_DoorCloseTL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.DoorCloseTL__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Base_InventoryItemHolder_C::DoorCloseTL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.DoorCloseTL__UpdateFunc");
		
		ABP_Base_InventoryItemHolder_C_DoorCloseTL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_InventoryItemHolder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.ReceiveBeginPlay");
		
		ABP_Base_InventoryItemHolder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.CloseDoor
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_InventoryItemHolder_C::CloseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.CloseDoor");
		
		ABP_Base_InventoryItemHolder_C_CloseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_0_InventoryItemDockComponentMulticast__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AItemPickupActor*                            Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDockStateChangeSource                             Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_InventoryItemHolder_C::BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_0_InventoryItemDockComponentMulticast__DelegateSignature(class AItemPickupActor* Actor, EDockStateChangeSource Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_0_InventoryItemDockComponentMulticast__DelegateSignature");
		
		ABP_Base_InventoryItemHolder_C_BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_0_InventoryItemDockComponentMulticast__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_1_InventoryItemDockComponentMulticast__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AItemPickupActor*                            Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDockStateChangeSource                             Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_InventoryItemHolder_C::BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_1_InventoryItemDockComponentMulticast__DelegateSignature(class AItemPickupActor* Actor, EDockStateChangeSource Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_1_InventoryItemDockComponentMulticast__DelegateSignature");
		
		ABP_Base_InventoryItemHolder_C_BndEvt__BPC_InventoryItem_DockingPoint_K2Node_ComponentBoundEvent_1_InventoryItemDockComponentMulticast__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.ExecuteUbergraph_BP_Base_InventoryItemHolder
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_InventoryItemHolder_C::ExecuteUbergraph_BP_Base_InventoryItemHolder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.ExecuteUbergraph_BP_Base_InventoryItemHolder");
		
		ABP_Base_InventoryItemHolder_C_ExecuteUbergraph_BP_Base_InventoryItemHolder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.PowerChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPowered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_InventoryItemHolder_C::PowerChanged__DelegateSignature(bool IsPowered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C.PowerChanged__DelegateSignature");
		
		ABP_Base_InventoryItemHolder_C_PowerChanged__DelegateSignature_Params params {};
		params.IsPowered = IsPowered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_InventoryItemHolder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_InventoryItemHolder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_InventoryItemHolder.BP_Base_InventoryItemHolder_C");
		return ptr;
	}

}


