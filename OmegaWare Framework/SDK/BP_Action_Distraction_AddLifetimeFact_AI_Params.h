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
	 * Function BP_Action_Distraction_AddLifetimeFact_AI.BP_Action_Distraction_AddLifetimeFact_AI_C.RemoveLifetimeFacts
	 */
	struct UBP_Action_Distraction_AddLifetimeFact_AI_C_RemoveLifetimeFacts_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AddLifetimeFact_AI.BP_Action_Distraction_AddLifetimeFact_AI_C.AddLifetimeFacts
	 */
	struct UBP_Action_Distraction_AddLifetimeFact_AI_C_AddLifetimeFacts_Params
	{	};

	/**
	 * Function BP_Action_Distraction_AddLifetimeFact_AI.BP_Action_Distraction_AddLifetimeFact_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Distraction_AddLifetimeFact_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AddLifetimeFact_AI.BP_Action_Distraction_AddLifetimeFact_AI_C.OnBegin
	 */
	struct UBP_Action_Distraction_AddLifetimeFact_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AddLifetimeFact_AI.BP_Action_Distraction_AddLifetimeFact_AI_C.OnEnd
	 */
	struct UBP_Action_Distraction_AddLifetimeFact_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_AddLifetimeFact_AI.BP_Action_Distraction_AddLifetimeFact_AI_C.ExecuteUbergraph_BP_Action_Distraction_AddLifetimeFact_AI
	 */
	struct UBP_Action_Distraction_AddLifetimeFact_AI_C_ExecuteUbergraph_BP_Action_Distraction_AddLifetimeFact_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
