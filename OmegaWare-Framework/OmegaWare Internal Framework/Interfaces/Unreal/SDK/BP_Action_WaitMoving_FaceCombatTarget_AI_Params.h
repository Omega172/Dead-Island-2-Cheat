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
	 * Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.TryRemoveAgainstWallFact
	 */
	struct UBP_Action_WaitMoving_FaceCombatTarget_AI_C_TryRemoveAgainstWallFact_Params
	{	};

	/**
	 * Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.RemoveMovement
	 */
	struct UBP_Action_WaitMoving_FaceCombatTarget_AI_C_RemoveMovement_Params
	{	};

	/**
	 * Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.AddMovement
	 */
	struct UBP_Action_WaitMoving_FaceCombatTarget_AI_C_AddMovement_Params
	{	};

	/**
	 * Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.RemoveMoveTarget
	 */
	struct UBP_Action_WaitMoving_FaceCombatTarget_AI_C_RemoveMoveTarget_Params
	{	};

	/**
	 * Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.UpdateMoveTarget
	 */
	struct UBP_Action_WaitMoving_FaceCombatTarget_AI_C_UpdateMoveTarget_Params
	{	};

	/**
	 * Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.CombatTargetChanged
	 */
	struct UBP_Action_WaitMoving_FaceCombatTarget_AI_C_CombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_WaitMoving_FaceCombatTarget_AI.BP_Action_WaitMoving_FaceCombatTarget_AI_C.ExecuteUbergraph_BP_Action_WaitMoving_FaceCombatTarget_AI
	 */
	struct UBP_Action_WaitMoving_FaceCombatTarget_AI_C_ExecuteUbergraph_BP_Action_WaitMoving_FaceCombatTarget_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UF2S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
