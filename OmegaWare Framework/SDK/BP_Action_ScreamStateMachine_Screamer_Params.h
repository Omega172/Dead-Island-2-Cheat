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
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.GetNextState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_GetNextState_Params
	{
	public:
		ECharacterActionEndedReason                                ActionEndReason;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EScreamStates                                              NextState;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.CancelRunningAction
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_CancelRunningAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharacterActionEndReason                                  Reason;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0O06[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.UnbindEvents
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_UnbindEvents_Params
	{	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndOutroState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_EndOutroState_Params
	{	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndScreamState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_EndScreamState_Params
	{	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndWindUpState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_EndWindUpState_Params
	{	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.EndState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_EndState_Params
	{	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_BeginState_Params
	{	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.SetState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_SetState_Params
	{
	public:
		EScreamStates                                              NextState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnBeginEarly
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M83X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.GetCombatTargetsDirectionAngleResolutionFact
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_GetCombatTargetsDirectionAngleResolutionFact_Params
	{
	public:
		struct FFactConfigurationHelper                            ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnActionEnded
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_OnActionEnded_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginOutroState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_BeginOutroState_Params
	{	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginScreamState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_BeginScreamState_Params
	{	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.BeginWindUpState
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_BeginWindUpState_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               SelectedFactKey;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnBegin
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnEnd
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.OnCombatTargetChanged
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_ScreamStateMachine_Screamer.BP_Action_ScreamStateMachine_Screamer_C.ExecuteUbergraph_BP_Action_ScreamStateMachine_Screamer
	 */
	struct UBP_Action_ScreamStateMachine_Screamer_C_ExecuteUbergraph_BP_Action_ScreamStateMachine_Screamer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
