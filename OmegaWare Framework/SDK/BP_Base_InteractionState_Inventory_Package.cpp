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
	 * 		Name   -> Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.GetItemArchetype
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Inventory_C::GetItemArchetype(class UItemArchetype** ItemArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.GetItemArchetype");
		
		UBP_Base_InteractionState_Inventory_C_GetItemArchetype_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemArchetype != nullptr)
			*ItemArchetype = params.ItemArchetype;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.UnbindFromInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Base_InteractionState_Inventory_C::UnbindFromInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.UnbindFromInventory");
		
		UBP_Base_InteractionState_Inventory_C_UnbindFromInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.FindPlayerInventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UDIInventoryComponent*                       InventoryComponent                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Inventory_C::FindPlayerInventory(class UDIInventoryComponent** InventoryComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.FindPlayerInventory");
		
		UBP_Base_InteractionState_Inventory_C_FindPlayerInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryComponent != nullptr)
			*InventoryComponent = params.InventoryComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.UserExitedRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Inventory_C::UserExitedRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.UserExitedRange");
		
		UBP_Base_InteractionState_Inventory_C_UserExitedRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.UserEnteredRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Inventory_C::UserEnteredRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.UserEnteredRange");
		
		UBP_Base_InteractionState_Inventory_C_UserEnteredRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.CheckInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Base_InteractionState_Inventory_C::CheckInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.CheckInventory");
		
		UBP_Base_InteractionState_Inventory_C_CheckInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.InventoryModified
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AItemActor*                                  Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Inventory_C::InventoryModified(class UItemArchetype* ItemArchetype, class AItemActor* Item, int32_t NewCount, int32_t Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.InventoryModified");
		
		UBP_Base_InteractionState_Inventory_C_InventoryModified_Params params {};
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
	 * 		Name   -> Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.Uninitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Base_InteractionState_Inventory_C::Uninitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.Uninitialize");
		
		UBP_Base_InteractionState_Inventory_C_Uninitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.ExecuteUbergraph_BP_Base_InteractionState_Inventory
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Inventory_C::ExecuteUbergraph_BP_Base_InteractionState_Inventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C.ExecuteUbergraph_BP_Base_InteractionState_Inventory");
		
		UBP_Base_InteractionState_Inventory_C_ExecuteUbergraph_BP_Base_InteractionState_Inventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_InteractionState_Inventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_InteractionState_Inventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_InteractionState_Inventory.BP_Base_InteractionState_Inventory_C");
		return ptr;
	}

}


