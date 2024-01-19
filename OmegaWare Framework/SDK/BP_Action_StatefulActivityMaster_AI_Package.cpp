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
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupEmotion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Base_Human_C*                            Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::SetupEmotion(class ABP_Base_Human_C* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupEmotion");
		
		UBP_Action_StatefulActivityMaster_AI_C_SetupEmotion_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.GameEventResponse_OnStateEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::GameEventResponse_OnStateEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.GameEventResponse_OnStateEnded");
		
		UBP_Action_StatefulActivityMaster_AI_C_GameEventResponse_OnStateEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupNarrativeInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::SetupNarrativeInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupNarrativeInteract");
		
		UBP_Action_StatefulActivityMaster_AI_C_SetupNarrativeInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SelectSubActionDefinition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UActionDefinition*                           ActionDefinition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::SelectSubActionDefinition(class UActionDefinition** ActionDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SelectSubActionDefinition");
		
		UBP_Action_StatefulActivityMaster_AI_C_SelectSubActionDefinition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionDefinition != nullptr)
			*ActionDefinition = params.ActionDefinition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SelectSequenceSpecificParams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EStatefulActivitySequences                         Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumLoops                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameSequenceCompletionMode                        CompletionMode                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULevelSequence*                              LevelSequence                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OverlapTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::SelectSequenceSpecificParams(EStatefulActivitySequences Sequence, int32_t* NumLoops, float* PlayRate, EGameSequenceCompletionMode* CompletionMode, class ULevelSequence** LevelSequence, float* OverlapTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SelectSequenceSpecificParams");
		
		UBP_Action_StatefulActivityMaster_AI_C_SelectSequenceSpecificParams_Params params {};
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumLoops != nullptr)
			*NumLoops = params.NumLoops;
		if (PlayRate != nullptr)
			*PlayRate = params.PlayRate;
		if (CompletionMode != nullptr)
			*CompletionMode = params.CompletionMode;
		if (LevelSequence != nullptr)
			*LevelSequence = params.LevelSequence;
		if (OverlapTime != nullptr)
			*OverlapTime = params.OverlapTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.LocalInit
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::LocalInit(const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.LocalInit");
		
		UBP_Action_StatefulActivityMaster_AI_C_LocalInit_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ResolveLevelSequences
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InTo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Loop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutOf                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResolved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::ResolveLevelSequences(bool InTo, bool Loop, bool OutOf, bool* bResolved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ResolveLevelSequences");
		
		UBP_Action_StatefulActivityMaster_AI_C_ResolveLevelSequences_Params params {};
		params.InTo = InTo;
		params.Loop = Loop;
		params.OutOf = OutOf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResolved != nullptr)
			*bResolved = params.bResolved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ShouldLoopContinue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ContinueLooping                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::ShouldLoopContinue(bool* ContinueLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ShouldLoopContinue");
		
		UBP_Action_StatefulActivityMaster_AI_C_ShouldLoopContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContinueLooping != nullptr)
			*ContinueLooping = params.ContinueLooping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupLoggers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::SetupLoggers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupLoggers");
		
		UBP_Action_StatefulActivityMaster_AI_C_SetupLoggers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.GetGameSequenceConfig
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UGameSequenceConfig*                         ParamsConfig                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::GetGameSequenceConfig(class UGameSequenceConfig** ParamsConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.GetGameSequenceConfig");
		
		UBP_Action_StatefulActivityMaster_AI_C_GetGameSequenceConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParamsConfig != nullptr)
			*ParamsConfig = params.ParamsConfig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ActionEndCleanUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::ActionEndCleanUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ActionEndCleanUp");
		
		UBP_Action_StatefulActivityMaster_AI_C_ActionEndCleanUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.GameEventResponse_OnStateStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::GameEventResponse_OnStateStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.GameEventResponse_OnStateStarted");
		
		UBP_Action_StatefulActivityMaster_AI_C_GameEventResponse_OnStateStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupProps
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::SetupProps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupProps");
		
		UBP_Action_StatefulActivityMaster_AI_C_SetupProps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.StopLoopSequenceOnTimerEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::StopLoopSequenceOnTimerEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.StopLoopSequenceOnTimerEnded");
		
		UBP_Action_StatefulActivityMaster_AI_C_StopLoopSequenceOnTimerEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ParamsInit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     ActionParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::ParamsInit(class UCustomActionParamsBase* ActionParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ParamsInit");
		
		UBP_Action_StatefulActivityMaster_AI_C_ParamsInit_Params params {};
		params.ActionParams = ActionParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.LogSkippedSequence
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::LogSkippedSequence(const class FString& SequenceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.LogSkippedSequence");
		
		UBP_Action_StatefulActivityMaster_AI_C_LogSkippedSequence_Params params {};
		params.SequenceName = SequenceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupParticipants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::SetupParticipants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupParticipants");
		
		UBP_Action_StatefulActivityMaster_AI_C_SetupParticipants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ProcessAnimationData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatefulActivityAnimation                  NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::ProcessAnimationData(const struct FStatefulActivityAnimation& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ProcessAnimationData");
		
		UBP_Action_StatefulActivityMaster_AI_C_ProcessAnimationData_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnRequestFailed_7FAB5FA24BEB8678F5252E845437F80B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnRequestFailed_7FAB5FA24BEB8678F5252E845437F80B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnRequestFailed_7FAB5FA24BEB8678F5252E845437F80B");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnRequestFailed_7FAB5FA24BEB8678F5252E845437F80B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCustomSignal_7FAB5FA24BEB8678F5252E845437F80B
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCustomSignalParams        CustomSignalParams                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnCustomSignal_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCustomSignal_7FAB5FA24BEB8678F5252E845437F80B");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnCustomSignal_7FAB5FA24BEB8678F5252E845437F80B_Params params {};
		params.CustomSignalParams = CustomSignalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd_7FAB5FA24BEB8678F5252E845437F80B
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnEndParams                 EndParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnEnd_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnEndParams& EndParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd_7FAB5FA24BEB8678F5252E845437F80B");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnEnd_7FAB5FA24BEB8678F5252E845437F80B_Params params {};
		params.EndParams = EndParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin_7FAB5FA24BEB8678F5252E845437F80B
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnBeginParams               BeginParams                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnBegin_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnBeginParams& BeginParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin_7FAB5FA24BEB8678F5252E845437F80B");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnBegin_7FAB5FA24BEB8678F5252E845437F80B_Params params {};
		params.BeginParams = BeginParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCancelled_7FAB5FA24BEB8678F5252E845437F80B
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCancelledParams           CancelledParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnCancelled_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnCancelledParams& CancelledParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCancelled_7FAB5FA24BEB8678F5252E845437F80B");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnCancelled_7FAB5FA24BEB8678F5252E845437F80B_Params params {};
		params.CancelledParams = CancelledParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnResolved_7FAB5FA24BEB8678F5252E845437F80B
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnResolvedParams            ResolvedParams                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnResolved_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnResolvedParams& ResolvedParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnResolved_7FAB5FA24BEB8678F5252E845437F80B");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnResolved_7FAB5FA24BEB8678F5252E845437F80B_Params params {};
		params.ResolvedParams = ResolvedParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnRequestFailed_7FAB5FA24BEB8678F5252E84DB7337F6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnRequestFailed_7FAB5FA24BEB8678F5252E84DB7337F6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnRequestFailed_7FAB5FA24BEB8678F5252E84DB7337F6");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnRequestFailed_7FAB5FA24BEB8678F5252E84DB7337F6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCustomSignal_7FAB5FA24BEB8678F5252E84DB7337F6
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCustomSignalParams        CustomSignalParams                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnCustomSignal_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCustomSignal_7FAB5FA24BEB8678F5252E84DB7337F6");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnCustomSignal_7FAB5FA24BEB8678F5252E84DB7337F6_Params params {};
		params.CustomSignalParams = CustomSignalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd_7FAB5FA24BEB8678F5252E84DB7337F6
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnEndParams                 EndParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnEnd_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnEndParams& EndParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd_7FAB5FA24BEB8678F5252E84DB7337F6");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnEnd_7FAB5FA24BEB8678F5252E84DB7337F6_Params params {};
		params.EndParams = EndParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin_7FAB5FA24BEB8678F5252E84DB7337F6
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnBeginParams               BeginParams                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnBegin_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnBeginParams& BeginParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin_7FAB5FA24BEB8678F5252E84DB7337F6");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnBegin_7FAB5FA24BEB8678F5252E84DB7337F6_Params params {};
		params.BeginParams = BeginParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCancelled_7FAB5FA24BEB8678F5252E84DB7337F6
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCancelledParams           CancelledParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnCancelled_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnCancelledParams& CancelledParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCancelled_7FAB5FA24BEB8678F5252E84DB7337F6");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnCancelled_7FAB5FA24BEB8678F5252E84DB7337F6_Params params {};
		params.CancelledParams = CancelledParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnResolved_7FAB5FA24BEB8678F5252E84DB7337F6
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnResolvedParams            ResolvedParams                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnResolved_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnResolvedParams& ResolvedParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnResolved_7FAB5FA24BEB8678F5252E84DB7337F6");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnResolved_7FAB5FA24BEB8678F5252E84DB7337F6_Params params {};
		params.ResolvedParams = ResolvedParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnRequestFailed_7FAB5FA24BEB8678F5252E84749E3EB2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnRequestFailed_7FAB5FA24BEB8678F5252E84749E3EB2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnRequestFailed_7FAB5FA24BEB8678F5252E84749E3EB2");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnRequestFailed_7FAB5FA24BEB8678F5252E84749E3EB2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCustomSignal_7FAB5FA24BEB8678F5252E84749E3EB2
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCustomSignalParams        CustomSignalParams                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnCustomSignal_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCustomSignal_7FAB5FA24BEB8678F5252E84749E3EB2");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnCustomSignal_7FAB5FA24BEB8678F5252E84749E3EB2_Params params {};
		params.CustomSignalParams = CustomSignalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd_7FAB5FA24BEB8678F5252E84749E3EB2
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnEndParams                 EndParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnEnd_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnEndParams& EndParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd_7FAB5FA24BEB8678F5252E84749E3EB2");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnEnd_7FAB5FA24BEB8678F5252E84749E3EB2_Params params {};
		params.EndParams = EndParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin_7FAB5FA24BEB8678F5252E84749E3EB2
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnBeginParams               BeginParams                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnBegin_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnBeginParams& BeginParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin_7FAB5FA24BEB8678F5252E84749E3EB2");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnBegin_7FAB5FA24BEB8678F5252E84749E3EB2_Params params {};
		params.BeginParams = BeginParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCancelled_7FAB5FA24BEB8678F5252E84749E3EB2
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCancelledParams           CancelledParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnCancelled_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnCancelledParams& CancelledParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCancelled_7FAB5FA24BEB8678F5252E84749E3EB2");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnCancelled_7FAB5FA24BEB8678F5252E84749E3EB2_Params params {};
		params.CancelledParams = CancelledParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnResolved_7FAB5FA24BEB8678F5252E84749E3EB2
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnResolvedParams            ResolvedParams                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnResolved_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnResolvedParams& ResolvedParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnResolved_7FAB5FA24BEB8678F5252E84749E3EB2");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnResolved_7FAB5FA24BEB8678F5252E84749E3EB2_Params params {};
		params.ResolvedParams = ResolvedParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnConstruct
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnConstruct");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd");
		
		UBP_Action_StatefulActivityMaster_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.EndRequestedBy
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       QueuedActionId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::EndRequestedBy(const struct FGuid& QueuedActionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.EndRequestedBy");
		
		UBP_Action_StatefulActivityMaster_AI_C_EndRequestedBy_Params params {};
		params.QueuedActionId = QueuedActionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.RequestIntoSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::RequestIntoSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.RequestIntoSequence");
		
		UBP_Action_StatefulActivityMaster_AI_C_RequestIntoSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.RequestLoopSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::RequestLoopSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.RequestLoopSequence");
		
		UBP_Action_StatefulActivityMaster_AI_C_RequestLoopSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.RequestOutOfSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::RequestOutOfSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.RequestOutOfSequence");
		
		UBP_Action_StatefulActivityMaster_AI_C_RequestOutOfSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ExecuteUbergraph_BP_Action_StatefulActivityMaster_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatefulActivityMaster_AI_C::ExecuteUbergraph_BP_Action_StatefulActivityMaster_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ExecuteUbergraph_BP_Action_StatefulActivityMaster_AI");
		
		UBP_Action_StatefulActivityMaster_AI_C_ExecuteUbergraph_BP_Action_StatefulActivityMaster_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_StatefulActivityMaster_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_StatefulActivityMaster_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C");
		return ptr;
	}

}


