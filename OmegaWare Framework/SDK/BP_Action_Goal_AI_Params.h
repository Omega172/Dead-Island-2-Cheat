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
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.RemoveParticipantLocation
	 */
	struct UBP_Action_Goal_AI_C_RemoveParticipantLocation_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.AddParticipantLocation
	 */
	struct UBP_Action_Goal_AI_C_AddParticipantLocation_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.GoToState
	 */
	struct UBP_Action_Goal_AI_C_GoToState_Params
	{
	public:
		EWaitMovingEQSStates                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.EndTurningMoveTargetState
	 */
	struct UBP_Action_Goal_AI_C_EndTurningMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.EndStandardMoveTargetState
	 */
	struct UBP_Action_Goal_AI_C_EndStandardMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.EndMaintainLastMoveTargetState
	 */
	struct UBP_Action_Goal_AI_C_EndMaintainLastMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.EndFollowingMoveTargetState
	 */
	struct UBP_Action_Goal_AI_C_EndFollowingMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.GetGoal
	 */
	struct UBP_Action_Goal_AI_C_GetGoal_Params
	{
	public:
		class UGoalComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.BeginTurningMoveTargetState
	 */
	struct UBP_Action_Goal_AI_C_BeginTurningMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.BeginMaintainLastMoveTargetState
	 */
	struct UBP_Action_Goal_AI_C_BeginMaintainLastMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.BeginFollowingMoveTargetState
	 */
	struct UBP_Action_Goal_AI_C_BeginFollowingMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.BeginStandardMoveTargetState
	 */
	struct UBP_Action_Goal_AI_C_BeginStandardMoveTargetState_Params
	{	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.SetQueryParams
	 */
	struct UBP_Action_Goal_AI_C_SetQueryParams_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Goal_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BJYK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Goal_AI.BP_Action_Goal_AI_C.GetAreaRadius
	 */
	struct UBP_Action_Goal_AI_C_GetAreaRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9S4S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
