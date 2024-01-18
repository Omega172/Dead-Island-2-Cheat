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
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnInterruptionConditionsMet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DamageRequirementMet                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StabilityDamageMet                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_StandingFeed_AI_C::OnInterruptionConditionsMet(bool DamageRequirementMet, bool StabilityDamageMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnInterruptionConditionsMet");
		
		UBP_Action_StandingFeed_AI_C_OnInterruptionConditionsMet_Params params {};
		params.DamageRequirementMet = DamageRequirementMet;
		params.StabilityDamageMet = StabilityDamageMet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.ResetArmMeatFact
	 * 		Flags  -> ()
	 */
	void UBP_Action_StandingFeed_AI_C::ResetArmMeatFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.ResetArmMeatFact");
		
		UBP_Action_StandingFeed_AI_C_ResetArmMeatFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.HasMeatOnArms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	bool UBP_Action_StandingFeed_AI_C::HasMeatOnArms(const struct FKnowledgeBaseExpression& Expression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.HasMeatOnArms");
		
		UBP_Action_StandingFeed_AI_C_HasMeatOnArms_Params params {};
		params.Expression = Expression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.UnbindActionListeners
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               ActionHelper                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              OnEndActionDelegate                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnCancelledAction                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnActionResolved                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StandingFeed_AI_C::UnbindActionListeners(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnEndActionDelegate, const class FScriptDelegate& OnCancelledAction, const class FScriptDelegate& OnActionResolved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.UnbindActionListeners");
		
		UBP_Action_StandingFeed_AI_C_UnbindActionListeners_Params params {};
		params.ActionHelper = ActionHelper;
		params.OnEndActionDelegate = OnEndActionDelegate;
		params.OnCancelledAction = OnCancelledAction;
		params.OnActionResolved = OnActionResolved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.BindActionListeners
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               ActionHelper                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              OnEndActionDelegate                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnCancelledAction                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnActionResolved                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StandingFeed_AI_C::BindActionListeners(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnEndActionDelegate, const class FScriptDelegate& OnCancelledAction, const class FScriptDelegate& OnActionResolved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.BindActionListeners");
		
		UBP_Action_StandingFeed_AI_C_BindActionListeners_Params params {};
		params.ActionHelper = ActionHelper;
		params.OnEndActionDelegate = OnEndActionDelegate;
		params.OnCancelledAction = OnCancelledAction;
		params.OnActionResolved = OnActionResolved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.WasFeastingSuccessful
	 * 		Flags  -> ()
	 */
	bool UBP_Action_StandingFeed_AI_C::WasFeastingSuccessful()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.WasFeastingSuccessful");
		
		UBP_Action_StandingFeed_AI_C_WasFeastingSuccessful_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.ModifyDeckCounters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterActionEndedReason                        ReasonForEnding                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StandingFeed_AI_C::ModifyDeckCounters(ECharacterActionEndedReason ReasonForEnding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.ModifyDeckCounters");
		
		UBP_Action_StandingFeed_AI_C_ModifyDeckCounters_Params params {};
		params.ReasonForEnding = ReasonForEnding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnCombatTargetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StandingFeed_AI_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnCombatTargetChanged");
		
		UBP_Action_StandingFeed_AI_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.EndAnimSetAction
	 * 		Flags  -> ()
	 */
	void UBP_Action_StandingFeed_AI_C::EndAnimSetAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.EndAnimSetAction");
		
		UBP_Action_StandingFeed_AI_C_EndAnimSetAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnAnimSetActionResolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StandingFeed_AI_C::OnAnimSetActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnAnimSetActionResolved");
		
		UBP_Action_StandingFeed_AI_C_OnAnimSetActionResolved_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnAnimSetActionCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnCancelledParams           Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StandingFeed_AI_C::OnAnimSetActionCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnAnimSetActionCancelled");
		
		UBP_Action_StandingFeed_AI_C_OnAnimSetActionCancelled_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnAnimSetActionEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StandingFeed_AI_C::OnAnimSetActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnAnimSetActionEnded");
		
		UBP_Action_StandingFeed_AI_C_OnAnimSetActionEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.RequestAnimSetAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       ArmToFeastFromFact                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StandingFeed_AI_C::RequestAnimSetAction(const struct FKnowledgeBaseFactKey& ArmToFeastFromFact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.RequestAnimSetAction");
		
		UBP_Action_StandingFeed_AI_C_RequestAnimSetAction_Params params {};
		params.ArmToFeastFromFact = ArmToFeastFromFact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.UnbindListeners
	 * 		Flags  -> ()
	 */
	void UBP_Action_StandingFeed_AI_C::UnbindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.UnbindListeners");
		
		UBP_Action_StandingFeed_AI_C_UnbindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.BindListeners
	 * 		Flags  -> ()
	 */
	void UBP_Action_StandingFeed_AI_C::BindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.BindListeners");
		
		UBP_Action_StandingFeed_AI_C_BindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.SetRegenRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRegenRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StandingFeed_AI_C::SetRegenRate(float NewRegenRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.SetRegenRate");
		
		UBP_Action_StandingFeed_AI_C_SetRegenRate_Params params {};
		params.NewRegenRate = NewRegenRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnHealthUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LastHealth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StandingFeed_AI_C::OnHealthUpdated(class AActor* DamagedActor, float LastHealth, float CurrentHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnHealthUpdated");
		
		UBP_Action_StandingFeed_AI_C_OnHealthUpdated_Params params {};
		params.DamagedActor = DamagedActor;
		params.LastHealth = LastHealth;
		params.CurrentHealth = CurrentHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UBP_Action_StandingFeed_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnBeginEarly");
		
		UBP_Action_StandingFeed_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StandingFeed_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnBegin");
		
		UBP_Action_StandingFeed_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.BeginFeastingNextAnim
	 * 		Flags  -> ()
	 */
	void UBP_Action_StandingFeed_AI_C::BeginFeastingNextAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.BeginFeastingNextAnim");
		
		UBP_Action_StandingFeed_AI_C_BeginFeastingNextAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StandingFeed_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.OnEnd");
		
		UBP_Action_StandingFeed_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.ExecuteUbergraph_BP_Action_StandingFeed_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StandingFeed_AI_C::ExecuteUbergraph_BP_Action_StandingFeed_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C.ExecuteUbergraph_BP_Action_StandingFeed_AI");
		
		UBP_Action_StandingFeed_AI_C_ExecuteUbergraph_BP_Action_StandingFeed_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_StandingFeed_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_StandingFeed_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_StandingFeed_AI.BP_Action_StandingFeed_AI_C");
		return ptr;
	}

}


