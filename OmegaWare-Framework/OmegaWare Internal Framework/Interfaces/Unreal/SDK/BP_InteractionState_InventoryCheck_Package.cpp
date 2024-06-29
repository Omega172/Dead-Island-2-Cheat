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
	 * 		Name   -> Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.CheckInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InteractionState_InventoryCheck_C::CheckInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.CheckInventory");
		
		UBP_InteractionState_InventoryCheck_C_CheckInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.GetItemArchetype
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryCheck_C::GetItemArchetype(class UItemArchetype** ItemArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.GetItemArchetype");
		
		UBP_InteractionState_InventoryCheck_C_GetItemArchetype_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemArchetype != nullptr)
			*ItemArchetype = params.ItemArchetype;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.CacheRequiredComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_InventoryCheck_C::CacheRequiredComponents(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.CacheRequiredComponents");
		
		UBP_InteractionState_InventoryCheck_C_CacheRequiredComponents_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.SetDisplayAction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InteractionState_InventoryCheck_C::SetDisplayAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C.SetDisplayAction");
		
		UBP_InteractionState_InventoryCheck_C_SetDisplayAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_InventoryCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_InventoryCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_InventoryCheck.BP_InteractionState_InventoryCheck_C");
		return ptr;
	}

}


