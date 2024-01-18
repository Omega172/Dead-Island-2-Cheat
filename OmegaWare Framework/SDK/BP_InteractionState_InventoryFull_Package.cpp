﻿/**
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
	 * 		Name   -> Function BP_InteractionState_InventoryFull.BP_InteractionState_InventoryFull_C.GetItemArchetype
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryFull_C::GetItemArchetype(class UItemArchetype** ItemArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryFull.BP_InteractionState_InventoryFull_C.GetItemArchetype");
		
		UBP_InteractionState_InventoryFull_C_GetItemArchetype_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemArchetype != nullptr)
			*ItemArchetype = params.ItemArchetype;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_InventoryFull.BP_InteractionState_InventoryFull_C.CheckInventory
	 * 		Flags  -> ()
	 */
	void UBP_InteractionState_InventoryFull_C::CheckInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryFull.BP_InteractionState_InventoryFull_C.CheckInventory");
		
		UBP_InteractionState_InventoryFull_C_CheckInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionState_InventoryFull.BP_InteractionState_InventoryFull_C.CacheRequiredComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryFull_C::CacheRequiredComponents(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryFull.BP_InteractionState_InventoryFull_C.CacheRequiredComponents");
		
		UBP_InteractionState_InventoryFull_C_CacheRequiredComponents_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_InventoryFull_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_InventoryFull_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_InventoryFull.BP_InteractionState_InventoryFull_C");
		return ptr;
	}

}


