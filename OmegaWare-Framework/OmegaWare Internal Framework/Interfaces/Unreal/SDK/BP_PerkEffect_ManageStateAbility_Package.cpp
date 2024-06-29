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
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.On Accumulating Effects State Change
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwningActor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAccumulatingEffectInstance*                 EffectInstance                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::OnAccumulatingEffectsStateChange(class AActor* OwningActor, class UAccumulatingEffectInstance* EffectInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.On Accumulating Effects State Change");
		
		UBP_PerkEffect_ManageStateAbility_C_OnAccumulatingEffectsStateChange_Params params {};
		params.OwningActor = OwningActor;
		params.EffectInstance = EffectInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindAccumulatingEffectsStateChangeDelegate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::UnbindAccumulatingEffectsStateChangeDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindAccumulatingEffectsStateChangeDelegate");
		
		UBP_PerkEffect_ManageStateAbility_C_UnbindAccumulatingEffectsStateChangeDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.BindAccumulatingEffectsStateChangeDelegate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::BindAccumulatingEffectsStateChangeDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.BindAccumulatingEffectsStateChangeDelegate");
		
		UBP_PerkEffect_ManageStateAbility_C_BindAccumulatingEffectsStateChangeDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.AddDSLog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LogText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EDSLogVerbosity                                    Verbosity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::AddDSLog(const class FString& LogText, EDSLogVerbosity Verbosity, bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.AddDSLog");
		
		UBP_PerkEffect_ManageStateAbility_C_AddDSLog_Params params {};
		params.LogText = LogText;
		params.Verbosity = Verbosity;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.SetupDistractionLogger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::SetupDistractionLogger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.SetupDistractionLogger");
		
		UBP_PerkEffect_ManageStateAbility_C_SetupDistractionLogger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindActionDelegates
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               ActionHelper                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              OnCancelledDelegate                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnResolvedDelegate                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnEndDelegate                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::UnbindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnCancelledDelegate, const class FScriptDelegate& OnResolvedDelegate, const class FScriptDelegate& OnEndDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindActionDelegates");
		
		UBP_PerkEffect_ManageStateAbility_C_UnbindActionDelegates_Params params {};
		params.ActionHelper = ActionHelper;
		params.OnCancelledDelegate = OnCancelledDelegate;
		params.OnResolvedDelegate = OnResolvedDelegate;
		params.OnEndDelegate = OnEndDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.BindActionDelegates
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               ActionHelper                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              OnCancelledDelegate                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnResolvedDelegate                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnEndDelegate                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::BindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnCancelledDelegate, const class FScriptDelegate& OnResolvedDelegate, const class FScriptDelegate& OnEndDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.BindActionDelegates");
		
		UBP_PerkEffect_ManageStateAbility_C_BindActionDelegates_Params params {};
		params.ActionHelper = ActionHelper;
		params.OnCancelledDelegate = OnCancelledDelegate;
		params.OnResolvedDelegate = OnResolvedDelegate;
		params.OnEndDelegate = OnEndDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.ConstructStateDrivenExpression
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FKnowledgeBaseExpression UBP_PerkEffect_ManageStateAbility_C::ConstructStateDrivenExpression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.ConstructStateDrivenExpression");
		
		UBP_PerkEffect_ManageStateAbility_C_ConstructStateDrivenExpression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnActivateBlockExpressionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::OnActivateBlockExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnActivateBlockExpressionChanged");
		
		UBP_PerkEffect_ManageStateAbility_C_OnActivateBlockExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityEmpoweredFactChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::OnStateAbilityEmpoweredFactChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityEmpoweredFactChanged");
		
		UBP_PerkEffect_ManageStateAbility_C_OnStateAbilityEmpoweredFactChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindOnActionEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::UnbindOnActionEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindOnActionEnded");
		
		UBP_PerkEffect_ManageStateAbility_C_UnbindOnActionEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityActionOnResolved
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::OnStateAbilityActionOnResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityActionOnResolved");
		
		UBP_PerkEffect_ManageStateAbility_C_OnStateAbilityActionOnResolved_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityActionOnCancelled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnCancelledParams           Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::OnStateAbilityActionOnCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityActionOnCancelled");
		
		UBP_PerkEffect_ManageStateAbility_C_OnStateAbilityActionOnCancelled_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindAnyImpactDelegate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::UnbindAnyImpactDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.UnbindAnyImpactDelegate");
		
		UBP_PerkEffect_ManageStateAbility_C_UnbindAnyImpactDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.BindAnyImpactDelegate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::BindAnyImpactDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.BindAnyImpactDelegate");
		
		UBP_PerkEffect_ManageStateAbility_C_BindAnyImpactDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityActionEnded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::OnStateAbilityActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStateAbilityActionEnded");
		
		UBP_PerkEffect_ManageStateAbility_C_OnStateAbilityActionEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnAnyImpactReceived
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::OnAnyImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnAnyImpactReceived");
		
		UBP_PerkEffect_ManageStateAbility_C_OnAnyImpactReceived_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.RequestStateAbilityAction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::RequestStateAbilityAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.RequestStateAbilityAction");
		
		UBP_PerkEffect_ManageStateAbility_C_RequestStateAbilityAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnStart");
		
		UBP_PerkEffect_ManageStateAbility_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnEnd
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectEndParams                        Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::OnEnd(const struct FPerkEffectEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.OnEnd");
		
		UBP_PerkEffect_ManageStateAbility_C_OnEnd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.ExecuteUbergraph_BP_PerkEffect_ManageStateAbility
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ManageStateAbility_C::ExecuteUbergraph_BP_PerkEffect_ManageStateAbility(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C.ExecuteUbergraph_BP_PerkEffect_ManageStateAbility");
		
		UBP_PerkEffect_ManageStateAbility_C_ExecuteUbergraph_BP_PerkEffect_ManageStateAbility_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_ManageStateAbility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_ManageStateAbility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C");
		return ptr;
	}

}


