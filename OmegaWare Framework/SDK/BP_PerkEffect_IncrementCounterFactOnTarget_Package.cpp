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
	 * 		Name   -> Function BP_PerkEffect_IncrementCounterFactOnTarget.BP_PerkEffect_IncrementCounterFactOnTarget_C.ModifyCounterFact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_IncrementCounterFactOnTarget_C::ModifyCounterFact(bool Increment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_IncrementCounterFactOnTarget.BP_PerkEffect_IncrementCounterFactOnTarget_C.ModifyCounterFact");
		
		UBP_PerkEffect_IncrementCounterFactOnTarget_C_ModifyCounterFact_Params params {};
		params.Increment = Increment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_IncrementCounterFactOnTarget.BP_PerkEffect_IncrementCounterFactOnTarget_C.OnEnd
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_IncrementCounterFactOnTarget_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_IncrementCounterFactOnTarget.BP_PerkEffect_IncrementCounterFactOnTarget_C.OnEnd");
		
		UBP_PerkEffect_IncrementCounterFactOnTarget_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_IncrementCounterFactOnTarget.BP_PerkEffect_IncrementCounterFactOnTarget_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_IncrementCounterFactOnTarget_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_IncrementCounterFactOnTarget.BP_PerkEffect_IncrementCounterFactOnTarget_C.OnStart");
		
		UBP_PerkEffect_IncrementCounterFactOnTarget_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_IncrementCounterFactOnTarget.BP_PerkEffect_IncrementCounterFactOnTarget_C.ExecuteUbergraph_BP_PerkEffect_IncrementCounterFactOnTarget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_IncrementCounterFactOnTarget_C::ExecuteUbergraph_BP_PerkEffect_IncrementCounterFactOnTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_IncrementCounterFactOnTarget.BP_PerkEffect_IncrementCounterFactOnTarget_C.ExecuteUbergraph_BP_PerkEffect_IncrementCounterFactOnTarget");
		
		UBP_PerkEffect_IncrementCounterFactOnTarget_C_ExecuteUbergraph_BP_PerkEffect_IncrementCounterFactOnTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_IncrementCounterFactOnTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_IncrementCounterFactOnTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_IncrementCounterFactOnTarget.BP_PerkEffect_IncrementCounterFactOnTarget_C");
		return ptr;
	}

}


