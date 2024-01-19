#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
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
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.DisableDebugText
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_DisableDebugText_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.EnableDebugText
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_EnableDebugText_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.UpdateDebugText
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_UpdateDebugText_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.BindFeastingActionEndPlay
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_BindFeastingActionEndPlay_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.UnbindFeastingActionEndPlay
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_UnbindFeastingActionEndPlay_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.EndRetryActionTimer
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_EndRetryActionTimer_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.StartRetryActionTimer
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_StartRetryActionTimer_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.RetryAction
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_RetryAction_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.UnbindActionDelegates
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_UnbindActionDelegates_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnActionCancelled;                                       // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionResolved;                                        // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionEndedDelegate;                                   // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.BindActionDelegates
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_BindActionDelegates_Params
	{
	public:
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      OnActionCancelled;                                       // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionResolved;                                        // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnActionEndedDelegate;                                   // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.AddDSLog
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_AddDSLog_Params
	{
	public:
		class FString                                              LogText;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            Verbosity;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Force;                                                   // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.SetupFeastingLogger
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_SetupFeastingLogger_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnInterruptionConditionsMet
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnInterruptionConditionsMet_Params
	{
	public:
		bool                                                       DamageRequirementMet;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StabilityDamageMet;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E6WR[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.GetNextStateBasedOnIfActivityIsDynamic
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_GetNextStateBasedOnIfActivityIsDynamic_Params
	{
	public:
		EDynamicFeastingStates                                     ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.RemoveActivitiesWithSameGroupCoordinator
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_RemoveActivitiesWithSameGroupCoordinator_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.TryNextActivity
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_TryNextActivity_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.TryNextActivityNextFrame
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_TryNextActivityNextFrame_Params
	{
	public:
		ECharacterActionEndReason                                  EndActionFailureReason;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RUTJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.TryGetNextBestActivityActor
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_TryGetNextBestActivityActor_Params
	{
	public:
		class AActivityActor*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.GetAllAvailableActivityActors
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_GetAllAvailableActivityActors_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActivityActor*>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.GetBestActivityActor
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_GetBestActivityActor_Params
	{
	public:
		TArray<class AActivityActor*>                              ActivityActors;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AActivityActor*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.RemoveGroupCoordinatorMovementRequest
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_RemoveGroupCoordinatorMovementRequest_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnMoveToMeatBaitMoveTargetChanged
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnMoveToMeatBaitMoveTargetChanged_Params
	{
	public:
		EMoveTargetEvent                                           Event;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_91FN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnMoveToMeatBaitQueryFinished
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnMoveToMeatBaitQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_62B4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.FindAndAssignSelfToActivityOnDistractionCoordinator
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_FindAndAssignSelfToActivityOnDistractionCoordinator_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.TryAddParticipantCompleteDelegate
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_TryAddParticipantCompleteDelegate_Params
	{
	public:
		bool                                                       ParticipantAdded;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJ7Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.EndMoveToMeatBaitState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_EndMoveToMeatBaitState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.BeginMoveToMeatBaitState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_BeginMoveToMeatBaitState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.GetMoveTargetDirection
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_GetMoveTargetDirection_Params
	{
	public:
		struct FVector                                             From;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.GetFeastingActivityActionDefinition
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_GetFeastingActivityActionDefinition_Params
	{
	public:
		class UActionDefinition*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.GetGroupDistractionComponent
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_GetGroupDistractionComponent_Params
	{
	public:
		class UBPC_Distraction_GroupCoordinator_C*                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.RunQuery
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_RunQuery_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.RemoveMovementSpeedModification
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_RemoveMovementSpeedModification_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.AddMovementSpeedModification
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_AddMovementSpeedModification_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.IncrementIntFactBasedOnActionResult
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_IncrementIntFactBasedOnActionResult_Params
	{
	public:
		ECharacterActionEndedReason                                ActionEndReason;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.WasRegeneratingSuccessful
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_WasRegeneratingSuccessful_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U0C8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.RemoveThesholdTracking
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_RemoveThesholdTracking_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.AddThresholdTracking
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_AddThresholdTracking_Params
	{
	public:
		TArray<struct FThresholdTrackingParams>                    InterruptionParams;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.GoToState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_GoToState_Params
	{
	public:
		EDynamicFeastingStates                                     NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2OU2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.CancelActiveQuery
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_CancelActiveQuery_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.AdjustActivityRotation
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_AdjustActivityRotation_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.RemoveMoveTargetDelegate
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_RemoveMoveTargetDelegate_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.AddMoveTargetDelegate
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_AddMoveTargetDelegate_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.RemoveMoveTarget
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_RemoveMoveTarget_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.EndState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_EndState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.GetNextState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_GetNextState_Params
	{
	public:
		EDynamicFeastingStates                                     NextState;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.GoToNextState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_GoToNextState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.BeginState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_BeginState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnActivityDestroyed
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnActivityDestroyed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T5N4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.RemoveSelfFromDistractionCoordinator
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_RemoveSelfFromDistractionCoordinator_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.SetQueryData
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_SetQueryData_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGRZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Instigator;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnFeastingActionEnded
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnFeastingActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnFeastingActionResolved
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnFeastingActionResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnFeastingActionCancelled
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnFeastingActionCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.EndRequestActivityParticipationState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_EndRequestActivityParticipationState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.BeginRequestActivityParticipationState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_BeginRequestActivityParticipationState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnMoveToActivityMoveTargetChanged
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnMoveToActivityMoveTargetChanged_Params
	{
	public:
		EMoveTargetEvent                                           Event;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3TET[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnMoveToActivityQueryFinished
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnMoveToActivityQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OBQ2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.EndMoveToActivityState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_EndMoveToActivityState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.BeginMoveToActivityState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_BeginMoveToActivityState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnFindActivityQueryFinished
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnFindActivityQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A7D4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.EndFindActivityState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_EndFindActivityState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.BeginFindActivityState
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_BeginFindActivityState_Params
	{	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XAQ1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnBegin
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.OnEnd
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Task_FeastingStateMachine_AI.BP_Action_Task_FeastingStateMachine_AI_C.ExecuteUbergraph_BP_Action_Task_FeastingStateMachine_AI
	 */
	struct UBP_Action_Task_FeastingStateMachine_AI_C_ExecuteUbergraph_BP_Action_Task_FeastingStateMachine_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
