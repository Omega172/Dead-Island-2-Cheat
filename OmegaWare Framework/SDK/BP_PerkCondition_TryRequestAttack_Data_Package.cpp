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
	 * 		Name   -> Function BP_PerkCondition_TryRequestAttack_Data.BP_PerkCondition_TryRequestAttack_Data_C.AttackInputPressed
	 * 		Flags  -> ()
	 */
	void UBP_PerkCondition_TryRequestAttack_Data_C::AttackInputPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_TryRequestAttack_Data.BP_PerkCondition_TryRequestAttack_Data_C.AttackInputPressed");
		
		UBP_PerkCondition_TryRequestAttack_Data_C_AttackInputPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkCondition_TryRequestAttack_Data.BP_PerkCondition_TryRequestAttack_Data_C.ExecuteUbergraph_BP_PerkCondition_TryRequestAttack_Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_TryRequestAttack_Data_C::ExecuteUbergraph_BP_PerkCondition_TryRequestAttack_Data(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_TryRequestAttack_Data.BP_PerkCondition_TryRequestAttack_Data_C.ExecuteUbergraph_BP_PerkCondition_TryRequestAttack_Data");
		
		UBP_PerkCondition_TryRequestAttack_Data_C_ExecuteUbergraph_BP_PerkCondition_TryRequestAttack_Data_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_TryRequestAttack_Data_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_TryRequestAttack_Data_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_TryRequestAttack_Data.BP_PerkCondition_TryRequestAttack_Data_C");
		return ptr;
	}

}


