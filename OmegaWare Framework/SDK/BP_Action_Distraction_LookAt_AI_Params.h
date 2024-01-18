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
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.GetLookAtTarget
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_GetLookAtTarget_Params
	{
	public:
		bool                                                       FoundLookAtTarget;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3NEB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     GetLookAtComponent;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             GetLookatLocation;                                       // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.RemoveLookAtRequest
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_RemoveLookAtRequest_Params
	{	};

	/**
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.AddLookAtRequest
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_AddLookAtRequest_Params
	{
	public:
		bool                                                       ReturnSuccess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.RemoveTImer
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_RemoveTImer_Params
	{	};

	/**
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.AddTimer
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_AddTimer_Params
	{	};

	/**
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnBegin
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnEnd
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.OnTimerFinished
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_OnTimerFinished_Params
	{	};

	/**
	 * Function BP_Action_Distraction_LookAt_AI.BP_Action_Distraction_LookAt_AI_C.ExecuteUbergraph_BP_Action_Distraction_LookAt_AI
	 */
	struct UBP_Action_Distraction_LookAt_AI_C_ExecuteUbergraph_BP_Action_Distraction_LookAt_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
