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
	 * 		Name   -> Function BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C.GetInventoryRequirements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              Archetype                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InteractionStateHelper_Inventory_C::GetInventoryRequirements(class UItemArchetype** Archetype, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C.GetInventoryRequirements");
		
		UBPC_InteractionStateHelper_Inventory_C_GetInventoryRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Archetype != nullptr)
			*Archetype = params.Archetype;
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C.SetInventoryRequirements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              Archetype                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_InteractionStateHelper_Inventory_C::SetInventoryRequirements(class UItemArchetype* Archetype, int32_t ItemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C.SetInventoryRequirements");
		
		UBPC_InteractionStateHelper_Inventory_C_SetInventoryRequirements_Params params {};
		params.Archetype = Archetype;
		params.ItemCount = ItemCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C.InventoryRequirementsSet__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_InteractionStateHelper_Inventory_C::InventoryRequirementsSet__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C.InventoryRequirementsSet__DelegateSignature");
		
		UBPC_InteractionStateHelper_Inventory_C_InventoryRequirementsSet__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_InteractionStateHelper_Inventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_InteractionStateHelper_Inventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_InteractionStateHelper_Inventory.BPC_InteractionStateHelper_Inventory_C");
		return ptr;
	}

}


