#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupEmotion
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_SetupEmotion_Params
	{
	public:
		class ABP_Base_Human_C*                                    Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.GameEventResponse_OnStateEnded
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_GameEventResponse_OnStateEnded_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupNarrativeInteract
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_SetupNarrativeInteract_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SelectSubActionDefinition
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_SelectSubActionDefinition_Params
	{
	public:
		class UActionDefinition*                                   ActionDefinition;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SelectSequenceSpecificParams
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_SelectSequenceSpecificParams_Params
	{
	public:
		EStatefulActivitySequences                                 Sequence;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GI5N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumLoops;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameSequenceCompletionMode                                CompletionMode;                                          // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_26VF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelSequence*                                      LevelSequence;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OverlapTime;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.LocalInit
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_LocalInit_Params
	{
	public:
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ResolveLevelSequences
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_ResolveLevelSequences_Params
	{
	public:
		bool                                                       InTo;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Loop;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutOf;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResolved;                                               // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y6HQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ShouldLoopContinue
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_ShouldLoopContinue_Params
	{
	public:
		bool                                                       ContinueLooping;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HR08[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupLoggers
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_SetupLoggers_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.GetGameSequenceConfig
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_GetGameSequenceConfig_Params
	{
	public:
		class UGameSequenceConfig*                                 ParamsConfig;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ActionEndCleanup
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_ActionEndCleanup_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.GameEventResponse_OnStateStarted
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_GameEventResponse_OnStateStarted_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupProps
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_SetupProps_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.StopLoopSequenceOnTimerEnded
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_StopLoopSequenceOnTimerEnded_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ParamsInit
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_ParamsInit_Params
	{
	public:
		class UCustomActionParamsBase*                             ActionParams;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.LogSkippedSequence
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_LogSkippedSequence_Params
	{
	public:
		class FString                                              SequenceName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.SetupParticipants
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_SetupParticipants_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ProcessAnimationData
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_ProcessAnimationData_Params
	{
	public:
		unsigned char                                              UnknownData_N9DB[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStatefulActivityAnimation                          NewState;                                                // 0x0028(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnRequestFailed_7FAB5FA24BEB8678F5252E845437F80B
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnRequestFailed_7FAB5FA24BEB8678F5252E845437F80B_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCustomSignal_7FAB5FA24BEB8678F5252E845437F80B
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnCustomSignal_7FAB5FA24BEB8678F5252E845437F80B_Params
	{
	public:
		struct FCharacterActionOnCustomSignalParams                CustomSignalParams;                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd_7FAB5FA24BEB8678F5252E845437F80B
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnEnd_7FAB5FA24BEB8678F5252E845437F80B_Params
	{
	public:
		struct FCharacterActionOnEndParams                         EndParams;                                               // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin_7FAB5FA24BEB8678F5252E845437F80B
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnBegin_7FAB5FA24BEB8678F5252E845437F80B_Params
	{
	public:
		struct FCharacterActionOnBeginParams                       BeginParams;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCancelled_7FAB5FA24BEB8678F5252E845437F80B
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnCancelled_7FAB5FA24BEB8678F5252E845437F80B_Params
	{
	public:
		struct FCharacterActionOnCancelledParams                   CancelledParams;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnResolved_7FAB5FA24BEB8678F5252E845437F80B
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnResolved_7FAB5FA24BEB8678F5252E845437F80B_Params
	{
	public:
		struct FCharacterActionOnResolvedParams                    ResolvedParams;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnRequestFailed_7FAB5FA24BEB8678F5252E84DB7337F6
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnRequestFailed_7FAB5FA24BEB8678F5252E84DB7337F6_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCustomSignal_7FAB5FA24BEB8678F5252E84DB7337F6
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnCustomSignal_7FAB5FA24BEB8678F5252E84DB7337F6_Params
	{
	public:
		struct FCharacterActionOnCustomSignalParams                CustomSignalParams;                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd_7FAB5FA24BEB8678F5252E84DB7337F6
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnEnd_7FAB5FA24BEB8678F5252E84DB7337F6_Params
	{
	public:
		struct FCharacterActionOnEndParams                         EndParams;                                               // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin_7FAB5FA24BEB8678F5252E84DB7337F6
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnBegin_7FAB5FA24BEB8678F5252E84DB7337F6_Params
	{
	public:
		struct FCharacterActionOnBeginParams                       BeginParams;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCancelled_7FAB5FA24BEB8678F5252E84DB7337F6
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnCancelled_7FAB5FA24BEB8678F5252E84DB7337F6_Params
	{
	public:
		struct FCharacterActionOnCancelledParams                   CancelledParams;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnResolved_7FAB5FA24BEB8678F5252E84DB7337F6
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnResolved_7FAB5FA24BEB8678F5252E84DB7337F6_Params
	{
	public:
		struct FCharacterActionOnResolvedParams                    ResolvedParams;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnRequestFailed_7FAB5FA24BEB8678F5252E84749E3EB2
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnRequestFailed_7FAB5FA24BEB8678F5252E84749E3EB2_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCustomSignal_7FAB5FA24BEB8678F5252E84749E3EB2
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnCustomSignal_7FAB5FA24BEB8678F5252E84749E3EB2_Params
	{
	public:
		struct FCharacterActionOnCustomSignalParams                CustomSignalParams;                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd_7FAB5FA24BEB8678F5252E84749E3EB2
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnEnd_7FAB5FA24BEB8678F5252E84749E3EB2_Params
	{
	public:
		struct FCharacterActionOnEndParams                         EndParams;                                               // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin_7FAB5FA24BEB8678F5252E84749E3EB2
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnBegin_7FAB5FA24BEB8678F5252E84749E3EB2_Params
	{
	public:
		struct FCharacterActionOnBeginParams                       BeginParams;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnCancelled_7FAB5FA24BEB8678F5252E84749E3EB2
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnCancelled_7FAB5FA24BEB8678F5252E84749E3EB2_Params
	{
	public:
		struct FCharacterActionOnCancelledParams                   CancelledParams;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnResolved_7FAB5FA24BEB8678F5252E84749E3EB2
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnResolved_7FAB5FA24BEB8678F5252E84749E3EB2_Params
	{
	public:
		struct FCharacterActionOnResolvedParams                    ResolvedParams;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnBegin
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnConstruct
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.OnEnd
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.EndRequestedBy
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_EndRequestedBy_Params
	{
	public:
		struct FGuid                                               QueuedActionId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.RequestIntoSequence
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_RequestIntoSequence_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.RequestLoopSequence
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_RequestLoopSequence_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.RequestOutOfSequence
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_RequestOutOfSequence_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C.ExecuteUbergraph_BP_Action_StatefulActivityMaster_AI
	 */
	struct UBP_Action_StatefulActivityMaster_AI_C_ExecuteUbergraph_BP_Action_StatefulActivityMaster_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
