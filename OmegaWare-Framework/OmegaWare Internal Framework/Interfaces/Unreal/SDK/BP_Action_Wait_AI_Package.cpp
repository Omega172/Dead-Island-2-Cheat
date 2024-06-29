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
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CardCounterModification
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FCardDealerCounterModification>      CardModifiers                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Action_Wait_AI_C::CardCounterModification(TArray<struct FCardDealerCounterModification>* CardModifiers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CardCounterModification");
		
		UBP_Action_Wait_AI_C_CardCounterModification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CardModifiers != nullptr)
			*CardModifiers = params.CardModifiers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.ShouldTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBP_Action_Wait_AI_C::ShouldTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.ShouldTick");
		
		UBP_Action_Wait_AI_C_ShouldTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.UpdateWantsTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::UpdateWantsTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.UpdateWantsTick");
		
		UBP_Action_Wait_AI_C_UpdateWantsTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.AddDSLog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FString                                      LogText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EDSLogVerbosity                                    Verbosity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceLog                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Wait_AI_C::AddDSLog(const class FString& LogText, EDSLogVerbosity Verbosity, bool Condition, bool ForceLog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.AddDSLog");
		
		UBP_Action_Wait_AI_C_AddDSLog_Params params {};
		params.LogText = LogText;
		params.Verbosity = Verbosity;
		params.Condition = Condition;
		params.ForceLog = ForceLog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CastAndStoreParams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     BaseParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_Wait_AI_C::CastAndStoreParams(class UCustomActionParamsBase* BaseParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CastAndStoreParams");
		
		UBP_Action_Wait_AI_C_CastAndStoreParams_Params params {};
		params.BaseParams = BaseParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SetupMovementLogger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::SetupMovementLogger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SetupMovementLogger");
		
		UBP_Action_Wait_AI_C_SetupMovementLogger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SetPeekedCardOverrideByConsoleCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::SetPeekedCardOverrideByConsoleCommand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SetPeekedCardOverrideByConsoleCommand");
		
		UBP_Action_Wait_AI_C_SetPeekedCardOverrideByConsoleCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.DisablePeekedCardCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::DisablePeekedCardCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.DisablePeekedCardCheck");
		
		UBP_Action_Wait_AI_C_DisablePeekedCardCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SelectedPeekedCardsValid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::SelectedPeekedCardsValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SelectedPeekedCardsValid");
		
		UBP_Action_Wait_AI_C_SelectedPeekedCardsValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.EnablePeekedCardCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::EnablePeekedCardCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.EnablePeekedCardCheck");
		
		UBP_Action_Wait_AI_C_EnablePeekedCardCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Wait_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnBeginEarly");
		
		UBP_Action_Wait_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CalculateMaxDuration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UBP_Action_Wait_AI_C::CalculateMaxDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CalculateMaxDuration");
		
		UBP_Action_Wait_AI_C_CalculateMaxDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CalculateMinDuration
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UBP_Action_Wait_AI_C::CalculateMinDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.CalculateMinDuration");
		
		UBP_Action_Wait_AI_C_CalculateMinDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnPeekedCardIsDifferent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::OnPeekedCardIsDifferent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnPeekedCardIsDifferent");
		
		UBP_Action_Wait_AI_C_OnPeekedCardIsDifferent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnMaxWaitDurationOver
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::OnMaxWaitDurationOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnMaxWaitDurationOver");
		
		UBP_Action_Wait_AI_C_OnMaxWaitDurationOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SetupDurationRequirement
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::SetupDurationRequirement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.SetupDurationRequirement");
		
		UBP_Action_Wait_AI_C_SetupDurationRequirement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnMinWaitDurationOver
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::OnMinWaitDurationOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnMinWaitDurationOver");
		
		UBP_Action_Wait_AI_C_OnMinWaitDurationOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.DetermineIfWaitShouldEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Wait_AI_C::DetermineIfWaitShouldEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.DetermineIfWaitShouldEnd");
		
		UBP_Action_Wait_AI_C_DetermineIfWaitShouldEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Wait_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnBegin");
		
		UBP_Action_Wait_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Wait_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnEnd");
		
		UBP_Action_Wait_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnHasCombatTargetCancellationExpressionChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Wait_AI_C::OnHasCombatTargetCancellationExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnHasCombatTargetCancellationExpressionChanged");
		
		UBP_Action_Wait_AI_C_OnHasCombatTargetCancellationExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Wait_AI_C::OnTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.OnTick");
		
		UBP_Action_Wait_AI_C_OnTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.ExecuteUbergraph_BP_Action_Wait_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Wait_AI_C::ExecuteUbergraph_BP_Action_Wait_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Wait_AI.BP_Action_Wait_AI_C.ExecuteUbergraph_BP_Action_Wait_AI");
		
		UBP_Action_Wait_AI_C_ExecuteUbergraph_BP_Action_Wait_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Wait_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Wait_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Wait_AI.BP_Action_Wait_AI_C");
		return ptr;
	}

}


