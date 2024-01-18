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
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.FaceTargetStateCondition
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_FaceTargetStateCondition_Params
	{
	public:
		EMeatbaitAnimStates                                        PotentialNewState;                                       // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMeatbaitAnimStates                                        NextState;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.AddDSLog
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_AddDSLog_Params
	{
	public:
		class FString                                              DebugText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            Verbosity;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.SetupDistractionLogger
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_SetupDistractionLogger_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetTorsoTwistTarget
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_GetTorsoTwistTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RelativeLocation;                                        // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N2VT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.RemoveTorsoTwistTarget
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_RemoveTorsoTwistTarget_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.AddTorsoTwistTarget
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_AddTorsoTwistTarget_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IJLV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetInterestDuration
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_GetInterestDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnAnimSetSpacingStateFinished
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_OnAnimSetSpacingStateFinished_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GoToState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_GoToState_Params
	{
	public:
		EMeatbaitAnimStates                                        CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CQ2O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.InterestLost
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_InterestLost_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.StartInterestTimer
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_StartInterestTimer_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetMoveTargetDirection
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_GetMoveTargetDirection_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnMoveTargetEvent
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_OnMoveTargetEvent_Params
	{
	public:
		EMoveTargetEvent                                           Event;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EREQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndFaceTargetState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_EndFaceTargetState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginFaceTargetState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_BeginFaceTargetState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnAnimSetActionEnded
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_OnAnimSetActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XSQ7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndAnimSetSpacingState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_EndAnimSetSpacingState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginAnimSetSpacingState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_BeginAnimSetSpacingState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndAnimSetActionState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_EndAnimSetActionState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginAnimSetActionState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_BeginAnimSetActionState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetNextState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_GetNextState_Params
	{
	public:
		EMeatbaitAnimStates                                        NextState;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.EndState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_EndState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GoToNextState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_GoToNextState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.BeginState
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_BeginState_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetDistanceInFrontOfCharacter
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_GetDistanceInFrontOfCharacter_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.GetTargetData
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_GetTargetData_Params
	{
	public:
		float                                                      VerticalDegrees;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance2D;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnBegin
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.OnEnd
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AnimStateMachine_AI.BP_Action_Distraction_AnimStateMachine_AI_C.ExecuteUbergraph_BP_Action_Distraction_AnimStateMachine_AI
	 */
	struct UBP_Action_Distraction_AnimStateMachine_AI_C_ExecuteUbergraph_BP_Action_Distraction_AnimStateMachine_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
