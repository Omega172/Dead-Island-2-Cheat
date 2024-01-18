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
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GoToNextFailedState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_GoToNextFailedState_Params
	{
	public:
		ECharacterActionEndReason                                  EndActionReason;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveStateBasedFacts
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RemoveStateBasedFacts_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddStateBasedFacts
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_AddStateBasedFacts_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnCannotReachTargetInvestigationActionEnded
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_OnCannotReachTargetInvestigationActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestCannotReachTargetInvestigationAction
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RequestCannotReachTargetInvestigationAction_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.SetDistractionSpeedOverride
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_SetDistractionSpeedOverride_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VI6B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetInvestigationActionParams
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_GetInvestigationActionParams_Params
	{
	public:
		class UCustomActionParamsBase*                             ActionParams;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActionDefinition*                                   ActionDefinition;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionRequestParams                       CharacterActionRequestParams;                            // 0x0010(0x0020)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.UnbindAndEndAction
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_UnbindAndEndAction_Params
	{
	public:
		struct FGuid                                               ActionId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnInvestigationActionEnded
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_OnInvestigationActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetTravelToDistractionActionParams
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_GetTravelToDistractionActionParams_Params
	{
	public:
		struct FCharacterActionRequestParams                       CharacterActionRequestParams;                            // 0x0000(0x0020)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.UnbindOnAllysCombatTargetChanged
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_UnbindOnAllysCombatTargetChanged_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetFriendlyStimOwnersCharacterAndController
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_GetFriendlyStimOwnersCharacterAndController_Params
	{
	public:
		class ADIAICharacter*                                      Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADIAIController*                                     Controller;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.IsAlly
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_IsAlly_Params
	{
	public:
		class ADICharacter*                                        DIAICharactor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_79QO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnAllysCombatTargetChanged
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_OnAllysCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BindToStimOwnersCombatTargetChanged
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_BindToStimOwnersCombatTargetChanged_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FNKC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetDistractionFocus
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_GetDistractionFocus_Params
	{
	public:
		struct FVector                                             ReturnLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestInvestigationDurationTimer
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RequestInvestigationDurationTimer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WGTV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestDistractionReactionDelayTimer
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RequestDistractionReactionDelayTimer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestDistractionTravelInterestTimer
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RequestDistractionTravelInterestTimer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SMX9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveLookAtRequest
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RemoveLookAtRequest_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddLookAtRequest
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_AddLookAtRequest_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestActivityInvestigationAction
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RequestActivityInvestigationAction_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestInvestigationAction
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RequestInvestigationAction_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveDistractionStateTImers
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RemoveDistractionStateTImers_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetMoveTargetData
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_GetMoveTargetData_Params
	{
	public:
		struct FVector                                             EQSLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StandStillOnSpot;                                        // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2BPF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             MoveTargetLocation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S3Q8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              MoveTargetActor;                                         // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MoveTargetOffsetFromActor;                               // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MoveTargetDirectionAtDestination;                        // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMoveTargetParams                                   MoveTargetParams;                                        // 0x0040(0x0018)  (Parm, OutParm, NoDestructor)
		bool                                                       UseDefaultParams;                                        // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MRBL[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndInvestigationState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_EndInvestigationState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.Begin Investigation State
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_BeginInvestigationState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnTravelToDistractionStateActionEnded
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_OnTravelToDistractionStateActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndTravelToDistractionState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_EndTravelToDistractionState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BeginTravelToDistractionState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_BeginTravelToDistractionState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndLookAtReactionDelayState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_EndLookAtReactionDelayState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BeginLookAtReactionDelayState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_BeginLookAtReactionDelayState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetNextState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_GetNextState_Params
	{
	public:
		bool                                                       FailedState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDistractionStates                                         NextState;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GoToNextState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_GoToNextState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_EndState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GoToState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_GoToState_Params
	{
	public:
		EDistractionStates                                         NextState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F1ZE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BeginState
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_BeginState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddHardDistractionTimer
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_AddHardDistractionTimer_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveMoveTarget
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_RemoveMoveTarget_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddMoveTarget
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_AddMoveTarget_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StandStillOnSpot;                                        // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I9Y3[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnDistractionFinished
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_OnDistractionFinished_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnEnd
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.HardTimeFinished
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_HardTimeFinished_Params
	{	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnBegin
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.ExecuteUbergraph_BP_Action_Distraction_StateMachine_AI
	 */
	struct UBP_Action_Distraction_StateMachine_AI_C_ExecuteUbergraph_BP_Action_Distraction_StateMachine_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
