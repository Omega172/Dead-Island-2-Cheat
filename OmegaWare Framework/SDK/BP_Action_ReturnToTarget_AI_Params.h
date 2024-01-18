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
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.UnbindListeners
	 */
	struct UBP_Action_ReturnToTarget_AI_C_UnbindListeners_Params
	{	};

	/**
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnWithinSuccessDistanceChanged
	 */
	struct UBP_Action_ReturnToTarget_AI_C_OnWithinSuccessDistanceChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnEngagementRingChanged
	 */
	struct UBP_Action_ReturnToTarget_AI_C_OnEngagementRingChanged_Params
	{
	public:
		struct FKnowledgeBaseFactKey                               FactKey;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8DMC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EKnowledgeBaseFactChangeType                               FactChangeType;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.RemoveMovementMode
	 */
	struct UBP_Action_ReturnToTarget_AI_C_RemoveMovementMode_Params
	{	};

	/**
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.AddMovementMode
	 */
	struct UBP_Action_ReturnToTarget_AI_C_AddMovementMode_Params
	{	};

	/**
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.BindListeners
	 */
	struct UBP_Action_ReturnToTarget_AI_C_BindListeners_Params
	{	};

	/**
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnBeginEarly
	 */
	struct UBP_Action_ReturnToTarget_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z9F0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnEnd
	 */
	struct UBP_Action_ReturnToTarget_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.OnBegin
	 */
	struct UBP_Action_ReturnToTarget_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_ReturnToTarget_AI.BP_Action_ReturnToTarget_AI_C.ExecuteUbergraph_BP_Action_ReturnToTarget_AI
	 */
	struct UBP_Action_ReturnToTarget_AI_C_ExecuteUbergraph_BP_Action_ReturnToTarget_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
