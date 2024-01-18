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
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.TryRemoveReturnToTargetFact
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::TryRemoveReturnToTargetFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.TryRemoveReturnToTargetFact");
		
		UBP_Action_Base_CombatErrand_AI_C_TryRemoveReturnToTargetFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.TryAddReturnToTargetFact
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::TryAddReturnToTargetFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.TryAddReturnToTargetFact");
		
		UBP_Action_Base_CombatErrand_AI_C_TryAddReturnToTargetFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ModifyCounterBasedOnState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::ModifyCounterBasedOnState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ModifyCounterBasedOnState");
		
		UBP_Action_Base_CombatErrand_AI_C_ModifyCounterBasedOnState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.IsActionRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_Base_CombatErrand_AI_C::IsActionRunning(const class FName& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.IsActionRunning");
		
		UBP_Action_Base_CombatErrand_AI_C_IsActionRunning_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ClearFireAndForgetActionDelegates
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::ClearFireAndForgetActionDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ClearFireAndForgetActionDelegates");
		
		UBP_Action_Base_CombatErrand_AI_C_ClearFireAndForgetActionDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnFireAndForgetActionEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnFireAndForgetActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnFireAndForgetActionEnd");
		
		UBP_Action_Base_CombatErrand_AI_C_OnFireAndForgetActionEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnFireAndForgetActionResolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnFireAndForgetActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnFireAndForgetActionResolved");
		
		UBP_Action_Base_CombatErrand_AI_C_OnFireAndForgetActionResolved_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnFireAndForgetActionCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnCancelledParams           Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnFireAndForgetActionCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnFireAndForgetActionCancelled");
		
		UBP_Action_Base_CombatErrand_AI_C_OnFireAndForgetActionCancelled_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RerequestFireAndForgetAction
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::RerequestFireAndForgetAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RerequestFireAndForgetAction");
		
		UBP_Action_Base_CombatErrand_AI_C_RerequestFireAndForgetAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RemoveAllLifetimeFactsAdded
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::RemoveAllLifetimeFactsAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RemoveAllLifetimeFactsAdded");
		
		UBP_Action_Base_CombatErrand_AI_C_RemoveAllLifetimeFactsAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.UpdateLifetimeFacts
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::UpdateLifetimeFacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.UpdateLifetimeFacts");
		
		UBP_Action_Base_CombatErrand_AI_C_UpdateLifetimeFacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnReturnToTargetEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnReturnToTargetEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnReturnToTargetEnded");
		
		UBP_Action_Base_CombatErrand_AI_C_OnReturnToTargetEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnReturnToTargetResolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnReturnToTargetResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnReturnToTargetResolved");
		
		UBP_Action_Base_CombatErrand_AI_C_OnReturnToTargetResolved_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnReturnToTargetCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnCancelledParams           Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnReturnToTargetCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnReturnToTargetCancelled");
		
		UBP_Action_Base_CombatErrand_AI_C_OnReturnToTargetCancelled_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.UnbindActionDelegates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               ActionHelper                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              OnCancelledDelegate                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnResolvedDelegate                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnEndedDelegate                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::UnbindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnCancelledDelegate, const class FScriptDelegate& OnResolvedDelegate, const class FScriptDelegate& OnEndedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.UnbindActionDelegates");
		
		UBP_Action_Base_CombatErrand_AI_C_UnbindActionDelegates_Params params {};
		params.ActionHelper = ActionHelper;
		params.OnCancelledDelegate = OnCancelledDelegate;
		params.OnResolvedDelegate = OnResolvedDelegate;
		params.OnEndedDelegate = OnEndedDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BindActionDelegates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               ActionHelper                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              OnCancelledDelegate                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnResolvedDelegate                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnEndedDelegate                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::BindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnCancelledDelegate, const class FScriptDelegate& OnResolvedDelegate, const class FScriptDelegate& OnEndedDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BindActionDelegates");
		
		UBP_Action_Base_CombatErrand_AI_C_BindActionDelegates_Params params {};
		params.ActionHelper = ActionHelper;
		params.OnCancelledDelegate = OnCancelledDelegate;
		params.OnResolvedDelegate = OnResolvedDelegate;
		params.OnEndedDelegate = OnEndedDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnTaskEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnTaskEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnTaskEnded");
		
		UBP_Action_Base_CombatErrand_AI_C_OnTaskEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnTaskResolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnTaskResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnTaskResolved");
		
		UBP_Action_Base_CombatErrand_AI_C_OnTaskResolved_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnTaskCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnCancelledParams           Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnTaskCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnTaskCancelled");
		
		UBP_Action_Base_CombatErrand_AI_C_OnTaskCancelled_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandIntroEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnErrandIntroEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandIntroEnded");
		
		UBP_Action_Base_CombatErrand_AI_C_OnErrandIntroEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandIntroResolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnErrandIntroResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandIntroResolved");
		
		UBP_Action_Base_CombatErrand_AI_C_OnErrandIntroResolved_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandIntroCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnCancelledParams           Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnErrandIntroCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandIntroCancelled");
		
		UBP_Action_Base_CombatErrand_AI_C_OnErrandIntroCancelled_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.CancelActiveQuery
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::CancelActiveQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.CancelActiveQuery");
		
		UBP_Action_Base_CombatErrand_AI_C_CancelActiveQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandDestinationQueryFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnErrandDestinationQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnErrandDestinationQueryFinished");
		
		UBP_Action_Base_CombatErrand_AI_C_OnErrandDestinationQueryFinished_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RequestStateBasedFireAndForgetAction
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::RequestStateBasedFireAndForgetAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RequestStateBasedFireAndForgetAction");
		
		UBP_Action_Base_CombatErrand_AI_C_RequestStateBasedFireAndForgetAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ApplyStateCosmeticEffects
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::ApplyStateCosmeticEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ApplyStateCosmeticEffects");
		
		UBP_Action_Base_CombatErrand_AI_C_ApplyStateCosmeticEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GoToNextState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::GoToNextState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GoToNextState");
		
		UBP_Action_Base_CombatErrand_AI_C_GoToNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GoToState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EErrandStates                                      NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::GoToState(EErrandStates NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GoToState");
		
		UBP_Action_Base_CombatErrand_AI_C_GoToState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GetNextState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EErrandStates                                      NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_Base_CombatErrand_AI_C::GetNextState(EErrandStates* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GetNextState");
		
		UBP_Action_Base_CombatErrand_AI_C_GetNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextState != nullptr)
			*NextState = params.NextState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndReturnToTarget
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::EndReturnToTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndReturnToTarget");
		
		UBP_Action_Base_CombatErrand_AI_C_EndReturnToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndTask
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::EndTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndTask");
		
		UBP_Action_Base_CombatErrand_AI_C_EndTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndConditionsCheck
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::EndConditionsCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndConditionsCheck");
		
		UBP_Action_Base_CombatErrand_AI_C_EndConditionsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndState");
		
		UBP_Action_Base_CombatErrand_AI_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginReturnToTarget
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::BeginReturnToTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginReturnToTarget");
		
		UBP_Action_Base_CombatErrand_AI_C_BeginReturnToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginTask
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::BeginTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginTask");
		
		UBP_Action_Base_CombatErrand_AI_C_BeginTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginConditionsCheck
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::BeginConditionsCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginConditionsCheck");
		
		UBP_Action_Base_CombatErrand_AI_C_BeginConditionsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginState
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::BeginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginState");
		
		UBP_Action_Base_CombatErrand_AI_C_BeginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Base_CombatErrand_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnBeginEarly");
		
		UBP_Action_Base_CombatErrand_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RememberTargetModifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AddModifier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::RememberTargetModifier(bool AddModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RememberTargetModifier");
		
		UBP_Action_Base_CombatErrand_AI_C_RememberTargetModifier_Params params {};
		params.AddModifier = AddModifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ErrandIntroConditions
	 * 		Flags  -> ()
	 */
	bool UBP_Action_Base_CombatErrand_AI_C::ErrandIntroConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ErrandIntroConditions");
		
		UBP_Action_Base_CombatErrand_AI_C_ErrandIntroConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndErrandIntro
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::EndErrandIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.EndErrandIntro");
		
		UBP_Action_Base_CombatErrand_AI_C_EndErrandIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginErrandIntro
	 * 		Flags  -> ()
	 */
	void UBP_Action_Base_CombatErrand_AI_C::BeginErrandIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.BeginErrandIntro");
		
		UBP_Action_Base_CombatErrand_AI_C_BeginErrandIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GetReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterActionOnEndParams                 CharacterActionOnEndParams                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FString                                      ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	ECharacterActionEndReason UBP_Action_Base_CombatErrand_AI_C::GetReason(const struct FCharacterActionOnEndParams& CharacterActionOnEndParams, const class FString& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.GetReason");
		
		UBP_Action_Base_CombatErrand_AI_C_GetReason_Params params {};
		params.CharacterActionOnEndParams = CharacterActionOnEndParams;
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RequestSubAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               ActionHelper                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActionDefinition*                           Definition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::RequestSubAction(class UCharacterActionRequestHelper* ActionHelper, class UActionDefinition* Definition, class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.RequestSubAction");
		
		UBP_Action_Base_CombatErrand_AI_C_RequestSubAction_Params params {};
		params.ActionHelper = ActionHelper;
		params.Definition = Definition;
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnEnd");
		
		UBP_Action_Base_CombatErrand_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.OnBegin");
		
		UBP_Action_Base_CombatErrand_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ExecuteUbergraph_BP_Action_Base_CombatErrand_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_CombatErrand_AI_C::ExecuteUbergraph_BP_Action_Base_CombatErrand_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C.ExecuteUbergraph_BP_Action_Base_CombatErrand_AI");
		
		UBP_Action_Base_CombatErrand_AI_C_ExecuteUbergraph_BP_Action_Base_CombatErrand_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Base_CombatErrand_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Base_CombatErrand_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C");
		return ptr;
	}

}


