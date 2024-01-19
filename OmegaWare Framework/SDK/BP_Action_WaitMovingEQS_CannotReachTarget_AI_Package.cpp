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
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.ShouldAddAgainstWallFact
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::ShouldAddAgainstWallFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.ShouldAddAgainstWallFact");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_ShouldAddAgainstWallFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.OnCombatTargetChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.OnCombatTargetChanged");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CastAndStoreParams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     BaseParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::CastAndStoreParams(class UCustomActionParamsBase* BaseParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CastAndStoreParams");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CastAndStoreParams_Params params {};
		params.BaseParams = BaseParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CanSeeCombatTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::CanSeeCombatTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CanSeeCombatTarget");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CanSeeCombatTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CanSkipMovementConditionsBasedOnCounters
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::CanSkipMovementConditionsBasedOnCounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CanSkipMovementConditionsBasedOnCounters");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CanSkipMovementConditionsBasedOnCounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.RangedCombatParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::RangedCombatParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.RangedCombatParams");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_RangedCombatParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.MeleeCombatParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::MeleeCombatParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.MeleeCombatParams");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_MeleeCombatParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CombatMovementParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::CombatMovementParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CombatMovementParams");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CombatMovementParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsWithinAttackRange
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ZDistanceFromCombatTarget                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWithinRange                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MovementRequired                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::IsWithinAttackRange(float ZDistanceFromCombatTarget, bool* IsWithinRange, bool* MovementRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsWithinAttackRange");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsWithinAttackRange_Params params {};
		params.ZDistanceFromCombatTarget = ZDistanceFromCombatTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsWithinRange != nullptr)
			*IsWithinRange = params.IsWithinRange;
		if (MovementRequired != nullptr)
			*MovementRequired = params.MovementRequired;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsVerticalDotWithinLimits
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              ZDistanceFromCombatTarget                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinDot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxDot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::IsVerticalDotWithinLimits(float ZDistanceFromCombatTarget, float MinDot, float MaxDot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsVerticalDotWithinLimits");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsVerticalDotWithinLimits_Params params {};
		params.ZDistanceFromCombatTarget = ZDistanceFromCombatTarget;
		params.MinDot = MinDot;
		params.MaxDot = MaxDot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CanSkipMovementConditions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWaitMovingEQSStates                               MoveTargetType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOffNavmesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::CanSkipMovementConditions(EWaitMovingEQSStates MoveTargetType, bool IsOffNavmesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.CanSkipMovementConditions");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_CanSkipMovementConditions_Params params {};
		params.MoveTargetType = MoveTargetType;
		params.IsOffNavmesh = IsOffNavmesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsOwnerOnNavmeshEdgeFacingCombatTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::IsOwnerOnNavmeshEdgeFacingCombatTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsOwnerOnNavmeshEdgeFacingCombatTarget");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsOwnerOnNavmeshEdgeFacingCombatTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetDistanceToSearchLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	float UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::GetDistanceToSearchLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetDistanceToSearchLocation");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetDistanceToSearchLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.OnBeginEarly");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetMoveTargetState
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOffNavmesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	EWaitMovingEQSStates UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::GetMoveTargetState(bool IsOffNavmesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetMoveTargetState");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetMoveTargetState_Params params {};
		params.IsOffNavmesh = IsOffNavmesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsCombatMovementRequired
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ZDistanceFromCombatTarget                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWaitMovingEQSCombattHeightLevel                   CombatTargetsHeightLevel                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::IsCombatMovementRequired(float ZDistanceFromCombatTarget, EWaitMovingEQSCombattHeightLevel CombatTargetsHeightLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsCombatMovementRequired");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsCombatMovementRequired_Params params {};
		params.ZDistanceFromCombatTarget = ZDistanceFromCombatTarget;
		params.CombatTargetsHeightLevel = CombatTargetsHeightLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsWithinRangedRange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ZDistanceFromCombatTarget                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MovementRequired                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::IsWithinRangedRange(float ZDistanceFromCombatTarget, bool* MovementRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsWithinRangedRange");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsWithinRangedRange_Params params {};
		params.ZDistanceFromCombatTarget = ZDistanceFromCombatTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MovementRequired != nullptr)
			*MovementRequired = params.MovementRequired;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetVerticalDistanceToSearchLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	float UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::GetVerticalDistanceToSearchLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetVerticalDistanceToSearchLocation");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetVerticalDistanceToSearchLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsWithinMeleeRange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ZDistanceFromCombatTarget                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::IsWithinMeleeRange(float ZDistanceFromCombatTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.IsWithinMeleeRange");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_IsWithinMeleeRange_Params params {};
		params.ZDistanceFromCombatTarget = ZDistanceFromCombatTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetAbsoluteVerticalDistanceToSearchLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	float UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::GetAbsoluteVerticalDistanceToSearchLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetAbsoluteVerticalDistanceToSearchLocation");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetAbsoluteVerticalDistanceToSearchLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetMaxDistanceAllowedFromSearchLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              ZDistanceFromCombatTarget                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HardDistanceLimit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OwnerNeedToMove                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::GetMaxDistanceAllowedFromSearchLocation(float ZDistanceFromCombatTarget, float HardDistanceLimit, bool OwnerNeedToMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.GetMaxDistanceAllowedFromSearchLocation");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_GetMaxDistanceAllowedFromSearchLocation_Params params {};
		params.ZDistanceFromCombatTarget = ZDistanceFromCombatTarget;
		params.HardDistanceLimit = HardDistanceLimit;
		params.OwnerNeedToMove = OwnerNeedToMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.SetQueryParams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C.SetQueryParams");
		
		UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C_SetQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C");
		return ptr;
	}

}


