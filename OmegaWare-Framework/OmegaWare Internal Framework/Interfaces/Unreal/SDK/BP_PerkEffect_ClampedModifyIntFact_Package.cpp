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
	 * 		Name   -> Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.ClampedFactIncrement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ValueWasModified                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_ClampedModifyIntFact_C::ClampedFactIncrement(bool* ValueWasModified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.ClampedFactIncrement");
		
		UBP_PerkEffect_ClampedModifyIntFact_C_ClampedFactIncrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValueWasModified != nullptr)
			*ValueWasModified = params.ValueWasModified;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ClampedModifyIntFact_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.OnStart");
		
		UBP_PerkEffect_ClampedModifyIntFact_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.OnEnd
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ClampedModifyIntFact_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.OnEnd");
		
		UBP_PerkEffect_ClampedModifyIntFact_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.ExecuteUbergraph_BP_PerkEffect_ClampedModifyIntFact
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ClampedModifyIntFact_C::ExecuteUbergraph_BP_PerkEffect_ClampedModifyIntFact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C.ExecuteUbergraph_BP_PerkEffect_ClampedModifyIntFact");
		
		UBP_PerkEffect_ClampedModifyIntFact_C_ExecuteUbergraph_BP_PerkEffect_ClampedModifyIntFact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_ClampedModifyIntFact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_ClampedModifyIntFact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_ClampedModifyIntFact.BP_PerkEffect_ClampedModifyIntFact_C");
		return ptr;
	}

}


