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
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Base_Task_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnBeginEarly");
		
		UBP_Action_Base_Task_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.GetOverrideParticipantParameters
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FParticipantLaunchParameters                ParticipantLaunchParameters                                (Parm, OutParm, NoDestructor)
	 */
	void UBP_Action_Base_Task_AI_C::GetOverrideParticipantParameters(struct FParticipantLaunchParameters* ParticipantLaunchParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.GetOverrideParticipantParameters");
		
		UBP_Action_Base_Task_AI_C_GetOverrideParticipantParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticipantLaunchParameters != nullptr)
			*ParticipantLaunchParameters = params.ParticipantLaunchParameters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LeaveCurrentActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Base_Task_AI_C::LeaveCurrentActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LeaveCurrentActivity");
		
		UBP_Action_Base_Task_AI_C_LeaveCurrentActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnSelectedActivityFromParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActivityActorOwner                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActivityActor*                              SelectedActivity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::OnSelectedActivityFromParams(class AActor* ActivityActorOwner, class AActivityActor* SelectedActivity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnSelectedActivityFromParams");
		
		UBP_Action_Base_Task_AI_C_OnSelectedActivityFromParams_Params params {};
		params.ActivityActorOwner = ActivityActorOwner;
		params.SelectedActivity = SelectedActivity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LaunchActivityByParamsOrEQS
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Base_Task_AI_C::LaunchActivityByParamsOrEQS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LaunchActivityByParamsOrEQS");
		
		UBP_Action_Base_Task_AI_C_LaunchActivityByParamsOrEQS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.FindClosestActivity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LaunchedActivitySuccessfully                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActivityActor*                              LaunchedActivity                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::FindClosestActivity(bool* LaunchedActivitySuccessfully, class AActivityActor** LaunchedActivity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.FindClosestActivity");
		
		UBP_Action_Base_Task_AI_C_FindClosestActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaunchedActivitySuccessfully != nullptr)
			*LaunchedActivitySuccessfully = params.LaunchedActivitySuccessfully;
		if (LaunchedActivity != nullptr)
			*LaunchedActivity = params.LaunchedActivity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.CacheAllActivityDistances
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::CacheAllActivityDistances(class AActivityActor* Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.CacheAllActivityDistances");
		
		UBP_Action_Base_Task_AI_C_CacheAllActivityDistances_Params params {};
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ActivityActorsToTry
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActivityActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActivityActor*>                      ActivityActor                                              (Parm, OutParm)
	 */
	void UBP_Action_Base_Task_AI_C::ActivityActorsToTry(class AActor* OwnerActivityActor, TArray<class AActivityActor*>* ActivityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ActivityActorsToTry");
		
		UBP_Action_Base_Task_AI_C_ActivityActorsToTry_Params params {};
		params.OwnerActivityActor = OwnerActivityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActivityActor != nullptr)
			*ActivityActor = params.ActivityActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.Launch Activity Directly
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InputActivityActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ActivitySuccess                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActivityActor*                              ActivityActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::LaunchActivityDirectly(class AActor* InputActivityActor, bool* ActivitySuccess, class AActivityActor** ActivityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.Launch Activity Directly");
		
		UBP_Action_Base_Task_AI_C_LaunchActivityDirectly_Params params {};
		params.InputActivityActor = InputActivityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActivitySuccess != nullptr)
			*ActivitySuccess = params.ActivitySuccess;
		if (ActivityActor != nullptr)
			*ActivityActor = params.ActivityActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.SetActivityActorAndBindings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              ActivityActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::SetActivityActorAndBindings(class AActivityActor* ActivityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.SetActivityActorAndBindings");
		
		UBP_Action_Base_Task_AI_C_SetActivityActorAndBindings_Params params {};
		params.ActivityActor = ActivityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.CommitAttackRules
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Base_Task_AI_C::CommitAttackRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.CommitAttackRules");
		
		UBP_Action_Base_Task_AI_C_CommitAttackRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RequiresSuccesssfulAndFailureFactSetup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Base_Task_AI_C::RequiresSuccesssfulAndFailureFactSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RequiresSuccesssfulAndFailureFactSetup");
		
		UBP_Action_Base_Task_AI_C_RequiresSuccesssfulAndFailureFactSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.SetupRegenRate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewRegenRateMod                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::SetupRegenRate(float NewRegenRateMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.SetupRegenRate");
		
		UBP_Action_Base_Task_AI_C_SetupRegenRate_Params params {};
		params.NewRegenRateMod = NewRegenRateMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.WasActionSuccessful
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Base_Task_AI_C::WasActionSuccessful(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.WasActionSuccessful");
		
		UBP_Action_Base_Task_AI_C_WasActionSuccessful_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ModifyDeckCounters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterActionEndedReason                        ReasonForEnding                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::ModifyDeckCounters(ECharacterActionEndedReason ReasonForEnding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ModifyDeckCounters");
		
		UBP_Action_Base_Task_AI_C_ModifyDeckCounters_Params params {};
		params.ReasonForEnding = ReasonForEnding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.IncrementIntergerFact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::IncrementIntergerFact(const struct FKnowledgeBaseFactKey& FactKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.IncrementIntergerFact");
		
		UBP_Action_Base_Task_AI_C_IncrementIntergerFact_Params params {};
		params.FactKey = FactKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LogIfInterruptIsInvalid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EActivityEndedReason                               ActivityEndReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::LogIfInterruptIsInvalid(EActivityEndedReason ActivityEndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LogIfInterruptIsInvalid");
		
		UBP_Action_Base_Task_AI_C_LogIfInterruptIsInvalid_Params params {};
		params.ActivityEndReason = ActivityEndReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RequestCurrentActivityToUninitialise
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Base_Task_AI_C::RequestCurrentActivityToUninitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RequestCurrentActivityToUninitialise");
		
		UBP_Action_Base_Task_AI_C_RequestCurrentActivityToUninitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.FindAndLaunchActivity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           EQS_QueryInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ActivitySuccess                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActivityActor*                              ActivityActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::FindAndLaunchActivity(class UEnvQueryInstanceBlueprintWrapper* EQS_QueryInstance, bool* ActivitySuccess, class AActivityActor** ActivityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.FindAndLaunchActivity");
		
		UBP_Action_Base_Task_AI_C_FindAndLaunchActivity_Params params {};
		params.EQS_QueryInstance = EQS_QueryInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActivitySuccess != nullptr)
			*ActivitySuccess = params.ActivitySuccess;
		if (ActivityActor != nullptr)
			*ActivityActor = params.ActivityActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.CombatTargetChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::CombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.CombatTargetChanged");
		
		UBP_Action_Base_Task_AI_C_CombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.HealthUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LastHealth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::HealthUpdated(class AActor* DamagedActor, float LastHealth, float CurrentHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.HealthUpdated");
		
		UBP_Action_Base_Task_AI_C_HealthUpdated_Params params {};
		params.DamagedActor = DamagedActor;
		params.LastHealth = LastHealth;
		params.CurrentHealth = CurrentHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnActivityReached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::OnActivityReached(class AActivityActor* Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnActivityReached");
		
		UBP_Action_Base_Task_AI_C_OnActivityReached_Params params {};
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ActivityExitReason
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActivityEndedReason                               EndReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::ActivityExitReason(class AActivityActor* Activity, EActivityEndedReason EndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ActivityExitReason");
		
		UBP_Action_Base_Task_AI_C_ActivityExitReason_Params params {};
		params.Activity = Activity;
		params.EndReason = EndReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnThresholdTrackingRequrementMet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DamageRequirementMet                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StabilityDamageMet                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Base_Task_AI_C::OnThresholdTrackingRequrementMet(bool DamageRequirementMet, bool StabilityDamageMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnThresholdTrackingRequrementMet");
		
		UBP_Action_Base_Task_AI_C_OnThresholdTrackingRequrementMet_Params params {};
		params.DamageRequirementMet = DamageRequirementMet;
		params.StabilityDamageMet = StabilityDamageMet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RunQuery
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Base_Task_AI_C::RunQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RunQuery");
		
		UBP_Action_Base_Task_AI_C_RunQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.QueryComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::QueryComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.QueryComplete");
		
		UBP_Action_Base_Task_AI_C_QueryComplete_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RerunQuery
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Base_Task_AI_C::RerunQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.RerunQuery");
		
		UBP_Action_Base_Task_AI_C_RerunQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LaunchParticipantWithActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InputActivityActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::LaunchParticipantWithActor(class AActor* InputActivityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.LaunchParticipantWithActor");
		
		UBP_Action_Base_Task_AI_C_LaunchParticipantWithActor_Params params {};
		params.InputActivityActor = InputActivityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_Task_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnBegin");
		
		UBP_Action_Base_Task_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Base_Task_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.OnEnd");
		
		UBP_Action_Base_Task_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ExecuteUbergraph_BP_Action_Base_Task_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Base_Task_AI_C::ExecuteUbergraph_BP_Action_Base_Task_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C.ExecuteUbergraph_BP_Action_Base_Task_AI");
		
		UBP_Action_Base_Task_AI_C_ExecuteUbergraph_BP_Action_Base_Task_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Base_Task_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Base_Task_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Base_Task_AI.BP_Action_Base_Task_AI_C");
		return ptr;
	}

}


