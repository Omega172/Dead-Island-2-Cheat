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
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.ApplyDeckCounterModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCardDealerCounterModification              Modification                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::ApplyDeckCounterModification(const struct FCardDealerCounterModification& Modification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.ApplyDeckCounterModification");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_ApplyDeckCounterModification_Params params {};
		params.Modification = Modification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnCombatConditionsExpressionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::OnCombatConditionsExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnCombatConditionsExpressionChanged");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnCombatConditionsExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnAllowCRTBehaviourExpressionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::OnAllowCRTBehaviourExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnAllowCRTBehaviourExpressionChanged");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnAllowCRTBehaviourExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnPlayerNoLongerClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::OnPlayerNoLongerClose(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnPlayerNoLongerClose");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnPlayerNoLongerClose_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.IsCombatTargetWithinFacingAngleOfActivity
	 * 		Flags  -> ()
	 */
	bool UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::IsCombatTargetWithinFacingAngleOfActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.IsCombatTargetWithinFacingAngleOfActivity");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_IsCombatTargetWithinFacingAngleOfActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.IsSelectedCardsPeeked
	 * 		Flags  -> ()
	 */
	bool UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::IsSelectedCardsPeeked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.IsSelectedCardsPeeked");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_IsSelectedCardsPeeked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.GetActionEndDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	float UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::GetActionEndDelay(const struct FKnowledgeBaseExpression& Expression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.GetActionEndDelay");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_GetActionEndDelay_Params params {};
		params.Expression = Expression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnBegin");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnEnd");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.CardConditionsCheck
	 * 		Flags  -> ()
	 */
	void UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::CardConditionsCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.CardConditionsCheck");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_CardConditionsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.ExecuteUbergraph_BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::ExecuteUbergraph_BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.ExecuteUbergraph_BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI");
		
		UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_ExecuteUbergraph_BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C");
		return ptr;
	}

}


