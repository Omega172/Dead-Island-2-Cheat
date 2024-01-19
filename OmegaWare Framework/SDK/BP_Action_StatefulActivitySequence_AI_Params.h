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
	 * Function BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C.AddCallbackForSequenceEnd
	 */
	struct UBP_Action_StatefulActivitySequence_AI_C_AddCallbackForSequenceEnd_Params
	{
	public:
		class UGameSequence*                                       GameSequence;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C.ActionEndCleanUp
	 */
	struct UBP_Action_StatefulActivitySequence_AI_C_ActionEndCleanUp_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C.Interrupted_C85427844376243611D8368B53F62BBB
	 */
	struct UBP_Action_StatefulActivitySequence_AI_C_Interrupted_C85427844376243611D8368B53F62BBB_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C.Completed_C85427844376243611D8368B53F62BBB
	 */
	struct UBP_Action_StatefulActivitySequence_AI_C_Completed_C85427844376243611D8368B53F62BBB_Params
	{	};

	/**
	 * Function BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C.OnBegin
	 */
	struct UBP_Action_StatefulActivitySequence_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C.OnConstruct
	 */
	struct UBP_Action_StatefulActivitySequence_AI_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C.OnEnd
	 */
	struct UBP_Action_StatefulActivitySequence_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C.EndGameSequence
	 */
	struct UBP_Action_StatefulActivitySequence_AI_C_EndGameSequence_Params
	{
	public:
		float                                                      TimeRequested;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StatefulActivitySequence_AI.BP_Action_StatefulActivitySequence_AI_C.ExecuteUbergraph_BP_Action_StatefulActivitySequence_AI
	 */
	struct UBP_Action_StatefulActivitySequence_AI_C_ExecuteUbergraph_BP_Action_StatefulActivitySequence_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
