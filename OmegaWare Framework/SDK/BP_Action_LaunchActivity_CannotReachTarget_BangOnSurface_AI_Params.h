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
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.ApplyDeckCounterModification
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_ApplyDeckCounterModification_Params
	{
	public:
		struct FCardDealerCounterModification                      Modification;                                            // 0x0000(0x00A0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnCombatConditionsExpressionChanged
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnCombatConditionsExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A8YT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnAllowCRTBehaviourExpressionChanged
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnAllowCRTBehaviourExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HRU7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnPlayerNoLongerClose
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnPlayerNoLongerClose_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.IsCombatTargetWithinFacingAngleOfActivity
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_IsCombatTargetWithinFacingAngleOfActivity_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.IsSelectedCardsPeeked
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_IsSelectedCardsPeeked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.GetActionEndDelay
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_GetActionEndDelay_Params
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnBegin
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.OnEnd
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.CardConditionsCheck
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_CardConditionsCheck_Params
	{	};

	/**
	 * Function BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C.ExecuteUbergraph_BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI
	 */
	struct UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C_ExecuteUbergraph_BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
