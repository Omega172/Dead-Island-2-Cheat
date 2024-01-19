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
	 * 		Name   -> Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.GetDockableArchetypes
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	TArray<class UItemArchetype*> UBPC_InventoryItem_DockingPoint_C::GetDockableArchetypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.GetDockableArchetypes");
		
		UBPC_InventoryItem_DockingPoint_C_GetDockableArchetypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ShouldLockActor
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPC_InventoryItem_DockingPoint_C::ShouldLockActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ShouldLockActor");
		
		UBPC_InventoryItem_DockingPoint_C_ShouldLockActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.UpdateInteractionState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasDocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_InventoryItem_DockingPoint_C::UpdateInteractionState(bool HasDocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.UpdateInteractionState");
		
		UBPC_InventoryItem_DockingPoint_C_UpdateInteractionState_Params params {};
		params.HasDocked = HasDocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_InventoryItem_DockingPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ReceiveBeginPlay");
		
		UBPC_InventoryItem_DockingPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.OnInteractionComplete_Server_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InventoryItem_DockingPoint_C::OnInteractionComplete_Server_Event(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.OnInteractionComplete_Server_Event");
		
		UBPC_InventoryItem_DockingPoint_C_OnInteractionComplete_Server_Event_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.BlueprintOnDocked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AItemPickupActor*                            Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InventoryItem_DockingPoint_C::BlueprintOnDocked(class AItemPickupActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.BlueprintOnDocked");
		
		UBPC_InventoryItem_DockingPoint_C_BlueprintOnDocked_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.BlueprintOnUndocked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AItemPickupActor*                            Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InventoryItem_DockingPoint_C::BlueprintOnUndocked(class AItemPickupActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.BlueprintOnUndocked");
		
		UBPC_InventoryItem_DockingPoint_C_BlueprintOnUndocked_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ExecuteUbergraph_BPC_InventoryItem_DockingPoint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InventoryItem_DockingPoint_C::ExecuteUbergraph_BPC_InventoryItem_DockingPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ExecuteUbergraph_BPC_InventoryItem_DockingPoint");
		
		UBPC_InventoryItem_DockingPoint_C_ExecuteUbergraph_BPC_InventoryItem_DockingPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ActorDocked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Base_ItemPickup_C*                       DockedActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InventoryItem_DockingPoint_C::ActorDocked__DelegateSignature(class ABP_Base_ItemPickup_C* DockedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C.ActorDocked__DelegateSignature");
		
		UBPC_InventoryItem_DockingPoint_C_ActorDocked__DelegateSignature_Params params {};
		params.DockedActor = DockedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_InventoryItem_DockingPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_InventoryItem_DockingPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_InventoryItem_DockingPoint.BPC_InventoryItem_DockingPoint_C");
		return ptr;
	}

}


