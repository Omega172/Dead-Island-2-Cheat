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
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DSLogNumberOfTimers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Increase                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Decrease                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::DSLogNumberOfTimers(bool Increase, bool Decrease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DSLogNumberOfTimers");
		
		UBP_Action_WaitMovingEQS_AI_C_DSLogNumberOfTimers_Params params {};
		params.Increase = Increase;
		params.Decrease = Decrease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ClearMovementUpdateTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::ClearMovementUpdateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ClearMovementUpdateTimer");
		
		UBP_Action_WaitMovingEQS_AI_C_ClearMovementUpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveIsEarlyRepathingFact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RemoveIsEarlyRepathingFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveIsEarlyRepathingFact");
		
		UBP_Action_WaitMovingEQS_AI_C_RemoveIsEarlyRepathingFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddIsEarlyRepathingFact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::AddIsEarlyRepathingFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddIsEarlyRepathingFact");
		
		UBP_Action_WaitMovingEQS_AI_C_AddIsEarlyRepathingFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryUseCurrentLocationAsBackup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OnQueryFailFallbackToCurrentLocation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::TryUseCurrentLocationAsBackup(struct FVector* CurrentLocation, bool* OnQueryFailFallbackToCurrentLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryUseCurrentLocationAsBackup");
		
		UBP_Action_WaitMovingEQS_AI_C_TryUseCurrentLocationAsBackup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentLocation != nullptr)
			*CurrentLocation = params.CurrentLocation;
		if (OnQueryFailFallbackToCurrentLocation != nullptr)
			*OnQueryFailFallbackToCurrentLocation = params.OnQueryFailFallbackToCurrentLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetMovementFocus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::SetMovementFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetMovementFocus");
		
		UBP_Action_WaitMovingEQS_AI_C_SetMovementFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetDesiredDirection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBP_Action_WaitMovingEQS_AI_C::GetDesiredDirection(const struct FVector& From)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetDesiredDirection");
		
		UBP_Action_WaitMovingEQS_AI_C_GetDesiredDirection_Params params {};
		params.From = From;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveHasTargetSearchLocationFact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RemoveHasTargetSearchLocationFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveHasTargetSearchLocationFact");
		
		UBP_Action_WaitMovingEQS_AI_C_RemoveHasTargetSearchLocationFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddHasTargetSearchLocationFact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::AddHasTargetSearchLocationFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddHasTargetSearchLocationFact");
		
		UBP_Action_WaitMovingEQS_AI_C_AddHasTargetSearchLocationFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsTurningRequired
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::IsTurningRequired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsTurningRequired");
		
		UBP_Action_WaitMovingEQS_AI_C_IsTurningRequired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.UpdateMovementData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::UpdateMovementData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.UpdateMovementData");
		
		UBP_Action_WaitMovingEQS_AI_C_UpdateMovementData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ExportMovementData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::ExportMovementData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ExportMovementData");
		
		UBP_Action_WaitMovingEQS_AI_C_ExportMovementData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryImportCachedMovementData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::TryImportCachedMovementData(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryImportCachedMovementData");
		
		UBP_Action_WaitMovingEQS_AI_C_TryImportCachedMovementData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.CalculateTraceScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EScoringEquation                                   ScoringType                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		float                                              MaxTraceScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TraceRadius                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentItemScore                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MustBlockingHit                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UBP_Action_WaitMovingEQS_AI_C::CalculateTraceScore(EScoringEquation* ScoringType, const struct FHitResult& Hit, float* MaxTraceScore, float* TraceRadius, float* CurrentItemScore, bool MustBlockingHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.CalculateTraceScore");
		
		UBP_Action_WaitMovingEQS_AI_C_CalculateTraceScore_Params params {};
		params.Hit = Hit;
		params.MustBlockingHit = MustBlockingHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScoringType != nullptr)
			*ScoringType = params.ScoringType;
		if (MaxTraceScore != nullptr)
			*MaxTraceScore = params.MaxTraceScore;
		if (TraceRadius != nullptr)
			*TraceRadius = params.TraceRadius;
		if (CurrentItemScore != nullptr)
			*CurrentItemScore = params.CurrentItemScore;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveCurrentQueryTargetFact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RemoveCurrentQueryTargetFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveCurrentQueryTargetFact");
		
		UBP_Action_WaitMovingEQS_AI_C_RemoveCurrentQueryTargetFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddCurrentQueryTargetFact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::AddCurrentQueryTargetFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddCurrentQueryTargetFact");
		
		UBP_Action_WaitMovingEQS_AI_C_AddCurrentQueryTargetFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetupMovementLogger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::SetupMovementLogger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetupMovementLogger");
		
		UBP_Action_WaitMovingEQS_AI_C_SetupMovementLogger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TraceDebugChosenLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FVector                                     SelectedLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::TraceDebugChosenLocation(const struct FVector& SelectedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TraceDebugChosenLocation");
		
		UBP_Action_WaitMovingEQS_AI_C_TraceDebugChosenLocation_Params params {};
		params.SelectedLocation = SelectedLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TraceDebugActorPotentialLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FVector                                     EQSLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EDrawDebugTrace UBP_Action_WaitMovingEQS_AI_C::TraceDebugActorPotentialLocation(const struct FVector& EQSLocation, const struct FVector& StartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TraceDebugActorPotentialLocation");
		
		UBP_Action_WaitMovingEQS_AI_C_TraceDebugActorPotentialLocation_Params params {};
		params.EQSLocation = EQSLocation;
		params.StartLocation = StartLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetEQSLocations
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	TArray<struct FVector> UBP_Action_WaitMovingEQS_AI_C::GetEQSLocations(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetEQSLocations");
		
		UBP_Action_WaitMovingEQS_AI_C_GetEQSLocations_Params params {};
		params.QueryInstance = QueryInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.CastAndStoreParams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     BaseParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::CastAndStoreParams(class UCustomActionParamsBase* BaseParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.CastAndStoreParams");
		
		UBP_Action_WaitMovingEQS_AI_C_CastAndStoreParams_Params params {};
		params.BaseParams = BaseParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnEarlyEndMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnEarlyEndMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnEarlyEndMovement");
		
		UBP_Action_WaitMovingEQS_AI_C_OnEarlyEndMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnCharacterUnpossessed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnCharacterUnpossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnCharacterUnpossessed");
		
		UBP_Action_WaitMovingEQS_AI_C_OnCharacterUnpossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ResetMovement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::ResetMovement(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ResetMovement");
		
		UBP_Action_WaitMovingEQS_AI_C_ResetMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.StartQueryMaxDuration
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::StartQueryMaxDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.StartQueryMaxDuration");
		
		UBP_Action_WaitMovingEQS_AI_C_StartQueryMaxDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemovedStateBasedFact
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RemovedStateBasedFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemovedStateBasedFact");
		
		UBP_Action_WaitMovingEQS_AI_C_RemovedStateBasedFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddStateBasedFact
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::AddStateBasedFact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddStateBasedFact");
		
		UBP_Action_WaitMovingEQS_AI_C_AddStateBasedFact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsQueryLocationBetweenOwnerAndTargetLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MaxFacingAngle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::IsQueryLocationBetweenOwnerAndTargetLocation(float MaxFacingAngle, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsQueryLocationBetweenOwnerAndTargetLocation");
		
		UBP_Action_WaitMovingEQS_AI_C_IsQueryLocationBetweenOwnerAndTargetLocation_Params params {};
		params.MaxFacingAngle = MaxFacingAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetDryRunQueryParams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::SetDryRunQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetDryRunQueryParams");
		
		UBP_Action_WaitMovingEQS_AI_C_SetDryRunQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetFollowingMoveTargetDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     MoveTargetDirectionAtDestination                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::GetFollowingMoveTargetDirection(struct FVector* MoveTargetDirectionAtDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetFollowingMoveTargetDirection");
		
		UBP_Action_WaitMovingEQS_AI_C_GetFollowingMoveTargetDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveTargetDirectionAtDestination != nullptr)
			*MoveTargetDirectionAtDestination = params.MoveTargetDirectionAtDestination;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetTargetLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::GetTargetLocation(struct FVector* TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetTargetLocation");
		
		UBP_Action_WaitMovingEQS_AI_C_GetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetTargetActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::GetTargetActor(class AActor** TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetTargetActor");
		
		UBP_Action_WaitMovingEQS_AI_C_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryRemoveDryRunLocationsData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::TryRemoveDryRunLocationsData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryRemoveDryRunLocationsData");
		
		UBP_Action_WaitMovingEQS_AI_C_TryRemoveDryRunLocationsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryAddDryRunLocationsData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::TryAddDryRunLocationsData(TArray<struct FVector>* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryAddDryRunLocationsData");
		
		UBP_Action_WaitMovingEQS_AI_C_TryAddDryRunLocationsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryGoToNextQueryState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::TryGoToNextQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryGoToNextQueryState");
		
		UBP_Action_WaitMovingEQS_AI_C_TryGoToNextQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetNextQueryState
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	EWaitMovingEQSStates UBP_Action_WaitMovingEQS_AI_C::GetNextQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetNextQueryState");
		
		UBP_Action_WaitMovingEQS_AI_C_GetNextQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndDryRunQueryState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::EndDryRunQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndDryRunQueryState");
		
		UBP_Action_WaitMovingEQS_AI_C_EndDryRunQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginDryRunQueryState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::BeginDryRunQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginDryRunQueryState");
		
		UBP_Action_WaitMovingEQS_AI_C_BeginDryRunQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsRunningMovementUpdates
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::IsRunningMovementUpdates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsRunningMovementUpdates");
		
		UBP_Action_WaitMovingEQS_AI_C_IsRunningMovementUpdates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetFocusAsCombatTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECombatState                                       CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::SetFocusAsCombatTarget(ECombatState CombatState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetFocusAsCombatTarget");
		
		UBP_Action_WaitMovingEQS_AI_C_SetFocusAsCombatTarget_Params params {};
		params.CombatState = CombatState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ClearFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::ClearFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ClearFocus");
		
		UBP_Action_WaitMovingEQS_AI_C_ClearFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryDisableCombatTargetAsFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::TryDisableCombatTargetAsFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryDisableCombatTargetAsFocus");
		
		UBP_Action_WaitMovingEQS_AI_C_TryDisableCombatTargetAsFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryEnableCombatTargetAsFocus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::TryEnableCombatTargetAsFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.TryEnableCombatTargetAsFocus");
		
		UBP_Action_WaitMovingEQS_AI_C_TryEnableCombatTargetAsFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ForceMovementUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::ForceMovementUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ForceMovementUpdate");
		
		UBP_Action_WaitMovingEQS_AI_C_ForceMovementUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsPreciseMovementRequired
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::IsPreciseMovementRequired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsPreciseMovementRequired");
		
		UBP_Action_WaitMovingEQS_AI_C_IsPreciseMovementRequired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetNextVaildMovementIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		int32_t                                            OverrideIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBP_Action_WaitMovingEQS_AI_C::GetNextVaildMovementIndex(int32_t OverrideIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetNextVaildMovementIndex");
		
		UBP_Action_WaitMovingEQS_AI_C_GetNextVaildMovementIndex_Params params {};
		params.OverrideIndex = OverrideIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.FindNextValidMovementParams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OverrideIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::FindNextValidMovementParams(int32_t OverrideIndex, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.FindNextValidMovementParams");
		
		UBP_Action_WaitMovingEQS_AI_C_FindNextValidMovementParams_Params params {};
		params.OverrideIndex = OverrideIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetCurrentQueryMovementParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FSWaitMovingMovementParams UBP_Action_WaitMovingEQS_AI_C::GetCurrentQueryMovementParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetCurrentQueryMovementParams");
		
		UBP_Action_WaitMovingEQS_AI_C_GetCurrentQueryMovementParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsWithinLeniencyMovementRadius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::IsWithinLeniencyMovementRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsWithinLeniencyMovementRadius");
		
		UBP_Action_WaitMovingEQS_AI_C_IsWithinLeniencyMovementRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnLeniencyFinishMovementExpressionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnLeniencyFinishMovementExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnLeniencyFinishMovementExpressionChanged");
		
		UBP_Action_WaitMovingEQS_AI_C_OnLeniencyFinishMovementExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveLeniencyFinishMovementExpressionListener
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RemoveLeniencyFinishMovementExpressionListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveLeniencyFinishMovementExpressionListener");
		
		UBP_Action_WaitMovingEQS_AI_C_RemoveLeniencyFinishMovementExpressionListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddLeniencyFinishMovementExpressionListener
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::AddLeniencyFinishMovementExpressionListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddLeniencyFinishMovementExpressionListener");
		
		UBP_Action_WaitMovingEQS_AI_C_AddLeniencyFinishMovementExpressionListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsLenientMovementRequired
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::IsLenientMovementRequired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsLenientMovementRequired");
		
		UBP_Action_WaitMovingEQS_AI_C_IsLenientMovementRequired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ProjectPointToNavmesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     QueryExtent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNearestDistance2D                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ProjectedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::ProjectPointToNavmesh(const struct FVector& Point, const struct FVector& QueryExtent, bool bNearestDistance2D, struct FVector* ProjectedLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ProjectPointToNavmesh");
		
		UBP_Action_WaitMovingEQS_AI_C_ProjectPointToNavmesh_Params params {};
		params.Point = Point;
		params.QueryExtent = QueryExtent;
		params.bNearestDistance2D = bNearestDistance2D;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectedLocation != nullptr)
			*ProjectedLocation = params.ProjectedLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsCharacterOffTheNavmesh
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ProjectedOwnerLocation                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::IsCharacterOffTheNavmesh(struct FVector* ProjectedOwnerLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsCharacterOffTheNavmesh");
		
		UBP_Action_WaitMovingEQS_AI_C_IsCharacterOffTheNavmesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectedOwnerLocation != nullptr)
			*ProjectedOwnerLocation = params.ProjectedOwnerLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsTurningMoveTargetOffTheNavmesh
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::IsTurningMoveTargetOffTheNavmesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsTurningMoveTargetOffTheNavmesh");
		
		UBP_Action_WaitMovingEQS_AI_C_IsTurningMoveTargetOffTheNavmesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetDataOnMovementSuccess
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::SetDataOnMovementSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetDataOnMovementSuccess");
		
		UBP_Action_WaitMovingEQS_AI_C_SetDataOnMovementSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DSLogUpdateIntervals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::DSLogUpdateIntervals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DSLogUpdateIntervals");
		
		UBP_Action_WaitMovingEQS_AI_C_DSLogUpdateIntervals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DetermineEndState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	EWaitMovingEQSStates UBP_Action_WaitMovingEQS_AI_C::DetermineEndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DetermineEndState");
		
		UBP_Action_WaitMovingEQS_AI_C_DetermineEndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.MoveTargetAcceptanceRadius
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              DefaultMoveTargetAcceptanceRadius                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBP_Action_WaitMovingEQS_AI_C::MoveTargetAcceptanceRadius(float DefaultMoveTargetAcceptanceRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.MoveTargetAcceptanceRadius");
		
		UBP_Action_WaitMovingEQS_AI_C_MoveTargetAcceptanceRadius_Params params {};
		params.DefaultMoveTargetAcceptanceRadius = DefaultMoveTargetAcceptanceRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.StandardMoveTargetParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FMoveTargetParams UBP_Action_WaitMovingEQS_AI_C::StandardMoveTargetParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.StandardMoveTargetParams");
		
		UBP_Action_WaitMovingEQS_AI_C_StandardMoveTargetParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetMoveTargetState
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOffNavmesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	EWaitMovingEQSStates UBP_Action_WaitMovingEQS_AI_C::GetMoveTargetState(bool IsOffNavmesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetMoveTargetState");
		
		UBP_Action_WaitMovingEQS_AI_C_GetMoveTargetState_Params params {};
		params.IsOffNavmesh = IsOffNavmesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndMaintainLastMoveTargetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::EndMaintainLastMoveTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndMaintainLastMoveTargetState");
		
		UBP_Action_WaitMovingEQS_AI_C_EndMaintainLastMoveTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginMaintainLastMoveTargetState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::BeginMaintainLastMoveTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginMaintainLastMoveTargetState");
		
		UBP_Action_WaitMovingEQS_AI_C_BeginMaintainLastMoveTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnCombatTargetChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnCombatTargetChanged");
		
		UBP_Action_WaitMovingEQS_AI_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.UnbindListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::UnbindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.UnbindListeners");
		
		UBP_Action_WaitMovingEQS_AI_C_UnbindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BindListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::BindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BindListeners");
		
		UBP_Action_WaitMovingEQS_AI_C_BindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndTurningMoveTargetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::EndTurningMoveTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndTurningMoveTargetState");
		
		UBP_Action_WaitMovingEQS_AI_C_EndTurningMoveTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginTurningMoveTargetState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::BeginTurningMoveTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginTurningMoveTargetState");
		
		UBP_Action_WaitMovingEQS_AI_C_BeginTurningMoveTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.FollowingMoveTargetParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		EMoveTargetBasisBehaviourMode                      BasisBehaviourMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BasisBehaviourMaxDistanceToFace                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FMoveTargetParams UBP_Action_WaitMovingEQS_AI_C::FollowingMoveTargetParams(EMoveTargetBasisBehaviourMode BasisBehaviourMode, float BasisBehaviourMaxDistanceToFace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.FollowingMoveTargetParams");
		
		UBP_Action_WaitMovingEQS_AI_C_FollowingMoveTargetParams_Params params {};
		params.BasisBehaviourMode = BasisBehaviourMode;
		params.BasisBehaviourMaxDistanceToFace = BasisBehaviourMaxDistanceToFace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndFollowingMoveTargetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::EndFollowingMoveTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndFollowingMoveTargetState");
		
		UBP_Action_WaitMovingEQS_AI_C_EndFollowingMoveTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndStandardMoveTargetState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::EndStandardMoveTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndStandardMoveTargetState");
		
		UBP_Action_WaitMovingEQS_AI_C_EndStandardMoveTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnMoveTargetFailed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnMoveTargetFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnMoveTargetFailed");
		
		UBP_Action_WaitMovingEQS_AI_C_OnMoveTargetFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnMoveTargetSucceeded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnMoveTargetSucceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnMoveTargetSucceeded");
		
		UBP_Action_WaitMovingEQS_AI_C_OnMoveTargetSucceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.CancelActiveQuery
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::CancelActiveQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.CancelActiveQuery");
		
		UBP_Action_WaitMovingEQS_AI_C_CancelActiveQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DetermineIfMovementIsTurn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::DetermineIfMovementIsTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.DetermineIfMovementIsTurn");
		
		UBP_Action_WaitMovingEQS_AI_C_DetermineIfMovementIsTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnQueryFailed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnQueryFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnQueryFailed");
		
		UBP_Action_WaitMovingEQS_AI_C_OnQueryFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnQuerySucceeded
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnQuerySucceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnQuerySucceeded");
		
		UBP_Action_WaitMovingEQS_AI_C_OnQuerySucceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ProcessQueryResult
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::ProcessQueryResult(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ProcessQueryResult");
		
		UBP_Action_WaitMovingEQS_AI_C_ProcessQueryResult_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnQueryFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnQueryFinished");
		
		UBP_Action_WaitMovingEQS_AI_C_OnQueryFinished_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GoToNextState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::GoToNextState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GoToNextState");
		
		UBP_Action_WaitMovingEQS_AI_C_GoToNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetNextState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWaitMovingEQSStates                               NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::GetNextState(EWaitMovingEQSStates* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetNextState");
		
		UBP_Action_WaitMovingEQS_AI_C_GetNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextState != nullptr)
			*NextState = params.NextState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GoToState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWaitMovingEQSStates                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::GoToState(EWaitMovingEQSStates NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GoToState");
		
		UBP_Action_WaitMovingEQS_AI_C_GoToState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndState");
		
		UBP_Action_WaitMovingEQS_AI_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::BeginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginState");
		
		UBP_Action_WaitMovingEQS_AI_C_BeginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnOwnerMovingExpression
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnOwnerMovingExpression(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnOwnerMovingExpression");
		
		UBP_Action_WaitMovingEQS_AI_C_OnOwnerMovingExpression_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetQueryParams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.SetQueryParams");
		
		UBP_Action_WaitMovingEQS_AI_C_SetQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndRunQueryState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::EndRunQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.EndRunQueryState");
		
		UBP_Action_WaitMovingEQS_AI_C_EndRunQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginRunQueryState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::BeginRunQueryState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginRunQueryState");
		
		UBP_Action_WaitMovingEQS_AI_C_BeginRunQueryState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ApplyCounterModification
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCardDealerCounterModification              CounterModification                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::ApplyCounterModification(const struct FCardDealerCounterModification& CounterModification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ApplyCounterModification");
		
		UBP_Action_WaitMovingEQS_AI_C_ApplyCounterModification_Params params {};
		params.CounterModification = CounterModification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ValidateReachedMoveTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWaitMovingEQSStates                               NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::ValidateReachedMoveTarget(EWaitMovingEQSStates* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.ValidateReachedMoveTarget");
		
		UBP_Action_WaitMovingEQS_AI_C_ValidateReachedMoveTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextState != nullptr)
			*NextState = params.NextState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.MoveTargetResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMoveTargetEvent                                   MoveTargetState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::MoveTargetResult(EMoveTargetEvent MoveTargetState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.MoveTargetResult");
		
		UBP_Action_WaitMovingEQS_AI_C_MoveTargetResult_Params params {};
		params.MoveTargetState = MoveTargetState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnMoveTargetChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMoveTargetEvent                                   Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::OnMoveTargetChanged(EMoveTargetEvent Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.OnMoveTargetChanged");
		
		UBP_Action_WaitMovingEQS_AI_C_OnMoveTargetChanged_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsMovementRequired
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UBP_Action_WaitMovingEQS_AI_C::IsMovementRequired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.IsMovementRequired");
		
		UBP_Action_WaitMovingEQS_AI_C_IsMovementRequired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetMoveTargetDirection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBP_Action_WaitMovingEQS_AI_C::GetMoveTargetDirection(const struct FVector& From)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.GetMoveTargetDirection");
		
		UBP_Action_WaitMovingEQS_AI_C_GetMoveTargetDirection_Params params {};
		params.From = From;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveMoveTargetDelegate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RemoveMoveTargetDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveMoveTargetDelegate");
		
		UBP_Action_WaitMovingEQS_AI_C_RemoveMoveTargetDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddMoveTargetDelegate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::AddMoveTargetDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddMoveTargetDelegate");
		
		UBP_Action_WaitMovingEQS_AI_C_AddMoveTargetDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginFollowingMoveTargetState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::BeginFollowingMoveTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginFollowingMoveTargetState");
		
		UBP_Action_WaitMovingEQS_AI_C_BeginFollowingMoveTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginStandardMoveTargetState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::BeginStandardMoveTargetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.BeginStandardMoveTargetState");
		
		UBP_Action_WaitMovingEQS_AI_C_BeginStandardMoveTargetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RequestMovementUpdateTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RequestMovementUpdateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RequestMovementUpdateTimer");
		
		UBP_Action_WaitMovingEQS_AI_C_RequestMovementUpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RequestMovementUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RequestMovementUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RequestMovementUpdate");
		
		UBP_Action_WaitMovingEQS_AI_C_RequestMovementUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveMoveTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RemoveMoveTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveMoveTarget");
		
		UBP_Action_WaitMovingEQS_AI_C_RemoveMoveTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::RemoveMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.RemoveMovement");
		
		UBP_Action_WaitMovingEQS_AI_C_RemoveMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_WaitMovingEQS_AI_C::AddMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C.AddMovement");
		
		UBP_Action_WaitMovingEQS_AI_C_AddMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_WaitMovingEQS_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_WaitMovingEQS_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_WaitMovingEQS_AI.BP_Action_WaitMovingEQS_AI_C");
		return ptr;
	}

}


