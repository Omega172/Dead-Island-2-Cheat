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
	 * 		Name   -> Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.ConstructParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_ManageStateBuildUpEffect_C::ConstructParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.ConstructParams");
		
		UBP_PerkEffect_ManageStateBuildUpEffect_C_ConstructParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.ResetBuildUpTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ManageStateBuildUpEffect_C::ResetBuildUpTimer(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.ResetBuildUpTimer");
		
		UBP_PerkEffect_ManageStateBuildUpEffect_C_ResetBuildUpTimer_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.OnCombatStateChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECosmeticCombatState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ManageStateBuildUpEffect_C::OnCombatStateChange(ECosmeticCombatState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.OnCombatStateChange");
		
		UBP_PerkEffect_ManageStateBuildUpEffect_C_OnCombatStateChange_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.OnEnd
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateBuildUpEffect_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.OnEnd");
		
		UBP_PerkEffect_ManageStateBuildUpEffect_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.BeginBuildUpWarmUpConditionsMet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateBuildUpEffect_C::BeginBuildUpWarmUpConditionsMet(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.BeginBuildUpWarmUpConditionsMet");
		
		UBP_PerkEffect_ManageStateBuildUpEffect_C_BeginBuildUpWarmUpConditionsMet_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.BuildUpEffectHasEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateBuildUpEffect_C::BuildUpEffectHasEnded(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.BuildUpEffectHasEnded");
		
		UBP_PerkEffect_ManageStateBuildUpEffect_C_BuildUpEffectHasEnded_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.RequestShockingBuildUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_ManageStateBuildUpEffect_C::RequestShockingBuildUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.RequestShockingBuildUp");
		
		UBP_PerkEffect_ManageStateBuildUpEffect_C_RequestShockingBuildUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateBuildUpEffect_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.OnStart");
		
		UBP_PerkEffect_ManageStateBuildUpEffect_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.ExecuteUbergraph_BP_PerkEffect_ManageStateBuildUpEffect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ManageStateBuildUpEffect_C::ExecuteUbergraph_BP_PerkEffect_ManageStateBuildUpEffect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C.ExecuteUbergraph_BP_PerkEffect_ManageStateBuildUpEffect");
		
		UBP_PerkEffect_ManageStateBuildUpEffect_C_ExecuteUbergraph_BP_PerkEffect_ManageStateBuildUpEffect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_ManageStateBuildUpEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_ManageStateBuildUpEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C");
		return ptr;
	}

}


