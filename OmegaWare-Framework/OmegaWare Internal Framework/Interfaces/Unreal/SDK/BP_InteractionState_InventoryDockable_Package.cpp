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
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.UserExitedRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryDockable_C::UserExitedRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.UserExitedRange");
		
		UBP_InteractionState_InventoryDockable_C_UserExitedRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.UserEnteredRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryDockable_C::UserEnteredRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.UserEnteredRange");
		
		UBP_InteractionState_InventoryDockable_C_UserEnteredRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.CacheRequiredComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryDockable_C::CacheRequiredComponents(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.CacheRequiredComponents");
		
		UBP_InteractionState_InventoryDockable_C_CacheRequiredComponents_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.InventoryUpdatedCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UItemArchetype*                              InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryDockable_C::InventoryUpdatedCheck(class UItemArchetype* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.InventoryUpdatedCheck");
		
		UBP_InteractionState_InventoryDockable_C_InventoryUpdatedCheck_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.SetInteractAction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InteractionState_InventoryDockable_C::SetInteractAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.SetInteractAction");
		
		UBP_InteractionState_InventoryDockable_C_SetInteractAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.CheckInventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADICharacter*                                UserIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ItemFound                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_InventoryDockable_C::CheckInventory(class ADICharacter* UserIn, bool* ItemFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.CheckInventory");
		
		UBP_InteractionState_InventoryDockable_C_CheckInventory_Params params {};
		params.UserIn = UserIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemFound != nullptr)
			*ItemFound = params.ItemFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.OnInventoryUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AItemActor*                                  Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryDockable_C::OnInventoryUpdated(class UItemArchetype* ItemArchetype, class AItemActor* Item, int32_t NewCount, int32_t Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.OnInventoryUpdated");
		
		UBP_InteractionState_InventoryDockable_C_OnInventoryUpdated_Params params {};
		params.ItemArchetype = ItemArchetype;
		params.Item = Item;
		params.NewCount = NewCount;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.OnInteractionComplete_Server
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryDockable_C::OnInteractionComplete_Server(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.OnInteractionComplete_Server");
		
		UBP_InteractionState_InventoryDockable_C_OnInteractionComplete_Server_Params params {};
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
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.Initialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       InInteractiveComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryDockable_C::Initialize(class UInteractiveComponent* InInteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.Initialize");
		
		UBP_InteractionState_InventoryDockable_C_Initialize_Params params {};
		params.InInteractiveComponent = InInteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.ExecuteUbergraph_BP_InteractionState_InventoryDockable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryDockable_C::ExecuteUbergraph_BP_InteractionState_InventoryDockable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C.ExecuteUbergraph_BP_InteractionState_InventoryDockable");
		
		UBP_InteractionState_InventoryDockable_C_ExecuteUbergraph_BP_InteractionState_InventoryDockable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_InventoryDockable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_InventoryDockable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_InventoryDockable.BP_InteractionState_InventoryDockable_C");
		return ptr;
	}

}


