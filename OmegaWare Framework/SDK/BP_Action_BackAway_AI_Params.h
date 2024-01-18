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
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.DecrementLifetimeFacts
	 */
	struct UBP_Action_BackAway_AI_C_DecrementLifetimeFacts_Params
	{	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.OnMinWaitDurationOver
	 */
	struct UBP_Action_BackAway_AI_C_OnMinWaitDurationOver_Params
	{	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.DetermineIfWaitShouldEnd
	 */
	struct UBP_Action_BackAway_AI_C_DetermineIfWaitShouldEnd_Params
	{	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.SetMinAndMaxDuration
	 */
	struct UBP_Action_BackAway_AI_C_SetMinAndMaxDuration_Params
	{	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.RemoveMoveTarget
	 */
	struct UBP_Action_BackAway_AI_C_RemoveMoveTarget_Params
	{	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.EQSComplete
	 */
	struct UBP_Action_BackAway_AI_C_EQSComplete_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.MoveToResult
	 */
	struct UBP_Action_BackAway_AI_C_MoveToResult_Params
	{
	public:
		EMoveTargetEvent                                           Event;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.OnEnd
	 */
	struct UBP_Action_BackAway_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.OnTick
	 */
	struct UBP_Action_BackAway_AI_C_OnTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.OnBegin
	 */
	struct UBP_Action_BackAway_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_BackAway_AI.BP_Action_BackAway_AI_C.ExecuteUbergraph_BP_Action_BackAway_AI
	 */
	struct UBP_Action_BackAway_AI_C_ExecuteUbergraph_BP_Action_BackAway_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
