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
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.UpdateMinimumAcceptableDistanceInFrontOwner
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_UpdateMinimumAcceptableDistanceInFrontOwner_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.OnBeginEarly
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_52OX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.DisablePeekCardCheck
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_DisablePeekCardCheck_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.EnablePeekedCardCheck
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_EnablePeekedCardCheck_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.OnCombatStateExpressionChanged
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_OnCombatStateExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LWLY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.Post Resolve
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_PostResolve_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.EndActionOnCardNotPeeked
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_EndActionOnCardNotPeeked_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.InitialiseVariables
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_InitialiseVariables_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.Pre Resolve
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_PreResolve_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.RemoveDistanceFacts
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_RemoveDistanceFacts_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.AddDistanceFacts
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_AddDistanceFacts_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.CacheDistanceInFrontOfCharacterToFact
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_CacheDistanceInFrontOfCharacterToFact_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.CacheVerticalAngleToTargetFact
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_CacheVerticalAngleToTargetFact_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.CacheHorizontalDistanceToTargetFact
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_CacheHorizontalDistanceToTargetFact_Params
	{	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.OnBegin
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.OnEnd
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C.ExecuteUbergraph_BP_Action_AnimSet_CannotReachTarget_AI
	 */
	struct UBP_Action_AnimSet_CannotReachTarget_AI_C_ExecuteUbergraph_BP_Action_AnimSet_CannotReachTarget_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
