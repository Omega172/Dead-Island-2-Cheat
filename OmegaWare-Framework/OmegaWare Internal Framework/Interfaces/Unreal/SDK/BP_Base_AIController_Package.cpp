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
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.ResetCannotReachTargetCounters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::ResetCannotReachTargetCounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.ResetCannotReachTargetCounters");
		
		ABP_Base_AIController_C_ResetCannotReachTargetCounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.GetAllFactToApplyForThisState
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		ECombatState                                       State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Base_AIController_C::GetAllFactToApplyForThisState(ECombatState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.GetAllFactToApplyForThisState");
		
		ABP_Base_AIController_C_GetAllFactToApplyForThisState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.AddLifetimeFactsBasedCombatState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECombatState                                       CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::AddLifetimeFactsBasedCombatState(ECombatState CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.AddLifetimeFactsBasedCombatState");
		
		ABP_Base_AIController_C_AddLifetimeFactsBasedCombatState_Params params {};
		params.CurrentState = CurrentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.CombatState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::CombatState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.CombatState");
		
		ABP_Base_AIController_C_CombatState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.SearchState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::SearchState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.SearchState");
		
		ABP_Base_AIController_C_SearchState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.AlertState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::AlertState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.AlertState");
		
		ABP_Base_AIController_C_AlertState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.CalmState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::CalmState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.CalmState");
		
		ABP_Base_AIController_C_CalmState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.OnCombatStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECombatState                                       NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::OnCombatStateChanged(ECombatState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.OnCombatStateChanged");
		
		ABP_Base_AIController_C_OnCombatStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.OnCrawlerExpressionChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AIController_C::OnCrawlerExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.OnCrawlerExpressionChanged");
		
		ABP_Base_AIController_C_OnCrawlerExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.EndMaintainingAggressorFacts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::EndMaintainingAggressorFacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.EndMaintainingAggressorFacts");
		
		ABP_Base_AIController_C_EndMaintainingAggressorFacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.BeginMaintainingAggressorFacts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::BeginMaintainingAggressorFacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.BeginMaintainingAggressorFacts");
		
		ABP_Base_AIController_C_BeginMaintainingAggressorFacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.OnDesiredEngagementRingIsInner
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AIController_C::OnDesiredEngagementRingIsInner(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.OnDesiredEngagementRingIsInner");
		
		ABP_Base_AIController_C_OnDesiredEngagementRingIsInner_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.ResetCombatCounters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::ResetCombatCounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.ResetCombatCounters");
		
		ABP_Base_AIController_C_ResetCombatCounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.DetermineIfVulnerableDebug
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerWeaponClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UnknownWeaponClass                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AIController_C::DetermineIfVulnerableDebug(const class FString& PlayerWeaponClass, bool* Result, bool* UnknownWeaponClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.DetermineIfVulnerableDebug");
		
		ABP_Base_AIController_C_DetermineIfVulnerableDebug_Params params {};
		params.PlayerWeaponClass = PlayerWeaponClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (UnknownWeaponClass != nullptr)
			*UnknownWeaponClass = params.UnknownWeaponClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.RemoveAllDateTimeFacts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::RemoveAllDateTimeFacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.RemoveAllDateTimeFacts");
		
		ABP_Base_AIController_C_RemoveAllDateTimeFacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.RemoveDateTimeFacts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Containing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::RemoveDateTimeFacts(const class FString& Containing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.RemoveDateTimeFacts");
		
		ABP_Base_AIController_C_RemoveDateTimeFacts_Params params {};
		params.Containing = Containing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.RemoveCombatDateTimeFactListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::RemoveCombatDateTimeFactListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.RemoveCombatDateTimeFactListeners");
		
		ABP_Base_AIController_C_RemoveCombatDateTimeFactListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.BeginAttackRulesWarmUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::BeginAttackRulesWarmUp(const struct FKnowledgeBaseFactKey& FactKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.BeginAttackRulesWarmUp");
		
		ABP_Base_AIController_C_BeginAttackRulesWarmUp_Params params {};
		params.FactKey = FactKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.UpdateDateTimeFacts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       BaseFactKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::UpdateDateTimeFacts(const struct FKnowledgeBaseFactKey& BaseFactKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.UpdateDateTimeFacts");
		
		ABP_Base_AIController_C_UpdateDateTimeFacts_Params params {};
		params.BaseFactKey = BaseFactKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.UpdateTargetOuterRingAggressorsFact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AIController_C::UpdateTargetOuterRingAggressorsFact(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.UpdateTargetOuterRingAggressorsFact");
		
		ABP_Base_AIController_C_UpdateTargetOuterRingAggressorsFact_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.OnStopExpressionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AIController_C::OnStopExpressionChanged(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.OnStopExpressionChanged");
		
		ABP_Base_AIController_C_OnStopExpressionChanged_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.SetSubTrees
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::SetSubTrees()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.SetSubTrees");
		
		ABP_Base_AIController_C_SetSubTrees_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.GetMovementLineColour
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::GetMovementLineColour(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.GetMovementLineColour");
		
		ABP_Base_AIController_C_GetMovementLineColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.RegisterKnowledgeBaseCounter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        FactName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::RegisterKnowledgeBaseCounter(const class FName& FactName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.RegisterKnowledgeBaseCounter");
		
		ABP_Base_AIController_C_RegisterKnowledgeBaseCounter_Params params {};
		params.FactName = FactName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.SetSubtree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        BlackboardKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBehaviorTree*                               BehaviourTree                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::SetSubtree(const class FName& BlackboardKey, class UBehaviorTree* BehaviourTree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.SetSubtree");
		
		ABP_Base_AIController_C_SetSubtree_Params params {};
		params.BlackboardKey = BlackboardKey;
		params.BehaviourTree = BehaviourTree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.MiscDebugDraw
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::MiscDebugDraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.MiscDebugDraw");
		
		ABP_Base_AIController_C_MiscDebugDraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.ReceivePossess
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.ReceivePossess");
		
		ABP_Base_AIController_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.ReceiveUnPossess
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.ReceiveUnPossess");
		
		ABP_Base_AIController_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.PerformMiscDebugDraw
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::PerformMiscDebugDraw(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.PerformMiscDebugDraw");
		
		ABP_Base_AIController_C_PerformMiscDebugDraw_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.OnCombatTargetChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.OnCombatTargetChanged");
		
		ABP_Base_AIController_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.OnStopCombatTimers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AIController_C::OnStopCombatTimers(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.OnStopCombatTimers");
		
		ABP_Base_AIController_C_OnStopCombatTimers_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.InnerRingEntered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AIController_C::InnerRingEntered(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.InnerRingEntered");
		
		ABP_Base_AIController_C_InnerRingEntered_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.AddCombatDateTimeFactListeners
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AIController_C::AddCombatDateTimeFactListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.AddCombatDateTimeFactListeners");
		
		ABP_Base_AIController_C_AddCombatDateTimeFactListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.OuterRingEntered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AIController_C::OuterRingEntered(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.OuterRingEntered");
		
		ABP_Base_AIController_C_OuterRingEntered_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.EitherRingEntered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AIController_C::EitherRingEntered(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.EitherRingEntered");
		
		ABP_Base_AIController_C_EitherRingEntered_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.ExecuteUbergraph_BP_Base_AIController
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::ExecuteUbergraph_BP_Base_AIController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.ExecuteUbergraph_BP_Base_AIController");
		
		ABP_Base_AIController_C_ExecuteUbergraph_BP_Base_AIController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AIController.BP_Base_AIController_C.OnPossessedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AIController_C::OnPossessedDelegate__DelegateSignature(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AIController.BP_Base_AIController_C.OnPossessedDelegate__DelegateSignature");
		
		ABP_Base_AIController_C_OnPossessedDelegate__DelegateSignature_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_AIController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_AIController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_AIController.BP_Base_AIController_C");
		return ptr;
	}

}


