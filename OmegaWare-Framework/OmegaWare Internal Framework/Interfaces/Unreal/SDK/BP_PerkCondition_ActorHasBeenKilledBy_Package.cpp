﻿/**
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
	 * 		Name   -> Function BP_PerkCondition_ActorHasBeenKilledBy.BP_PerkCondition_ActorHasBeenKilledBy_C.Enable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintPerkConditionParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkCondition_ActorHasBeenKilledBy_C::Enable(const struct FBlueprintPerkConditionParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActorHasBeenKilledBy.BP_PerkCondition_ActorHasBeenKilledBy_C.Enable");
		
		UBP_PerkCondition_ActorHasBeenKilledBy_C_Enable_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkCondition_ActorHasBeenKilledBy.BP_PerkCondition_ActorHasBeenKilledBy_C.Disable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintPerkConditionParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkCondition_ActorHasBeenKilledBy_C::Disable(const struct FBlueprintPerkConditionParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActorHasBeenKilledBy.BP_PerkCondition_ActorHasBeenKilledBy_C.Disable");
		
		UBP_PerkCondition_ActorHasBeenKilledBy_C_Disable_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkCondition_ActorHasBeenKilledBy.BP_PerkCondition_ActorHasBeenKilledBy_C.ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkCondition_ActorHasBeenKilledBy_C::ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkCondition_ActorHasBeenKilledBy.BP_PerkCondition_ActorHasBeenKilledBy_C.ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy");
		
		UBP_PerkCondition_ActorHasBeenKilledBy_C_ExecuteUbergraph_BP_PerkCondition_ActorHasBeenKilledBy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkCondition_ActorHasBeenKilledBy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkCondition_ActorHasBeenKilledBy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkCondition_ActorHasBeenKilledBy.BP_PerkCondition_ActorHasBeenKilledBy_C");
		return ptr;
	}

}


