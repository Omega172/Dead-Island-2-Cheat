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
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.CommitAttackRules
	 */
	struct UBP_Action_EnterCombat_AI_C_CommitAttackRules_Params
	{	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.RequestMovementModeRemoval
	 */
	struct UBP_Action_EnterCombat_AI_C_RequestMovementModeRemoval_Params
	{	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnCancellationExpressionsChanged
	 */
	struct UBP_Action_EnterCombat_AI_C_OnCancellationExpressionsChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.RemoveCancellationExpressions
	 */
	struct UBP_Action_EnterCombat_AI_C_RemoveCancellationExpressions_Params
	{	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.AddCancellationExpressions
	 */
	struct UBP_Action_EnterCombat_AI_C_AddCancellationExpressions_Params
	{	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnEnterCombatCancellationPeriodChanged
	 */
	struct UBP_Action_EnterCombat_AI_C_OnEnterCombatCancellationPeriodChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.RequestMovementMode
	 */
	struct UBP_Action_EnterCombat_AI_C_RequestMovementMode_Params
	{	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.AddEnterCombatCancellationPeriodListener
	 */
	struct UBP_Action_EnterCombat_AI_C_AddEnterCombatCancellationPeriodListener_Params
	{	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnBeginEarly
	 */
	struct UBP_Action_EnterCombat_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O9OP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnEnd
	 */
	struct UBP_Action_EnterCombat_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.OnBegin
	 */
	struct UBP_Action_EnterCombat_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_EnterCombat_AI.BP_Action_EnterCombat_AI_C.ExecuteUbergraph_BP_Action_EnterCombat_AI
	 */
	struct UBP_Action_EnterCombat_AI_C_ExecuteUbergraph_BP_Action_EnterCombat_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
