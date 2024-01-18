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
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.OnImpactReceived
	 */
	struct UBP_Action_Ragdoll_AI_C_OnImpactReceived_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.HandleCollisionDetection
	 */
	struct UBP_Action_Ragdoll_AI_C_HandleCollisionDetection_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.RequestStandUpAction
	 */
	struct UBP_Action_Ragdoll_AI_C_RequestStandUpAction_Params
	{	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.OnZeroStabilityDurationOver
	 */
	struct UBP_Action_Ragdoll_AI_C_OnZeroStabilityDurationOver_Params
	{	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.OnBeginEarly
	 */
	struct UBP_Action_Ragdoll_AI_C_OnBeginEarly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KKAX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.OnRagdollAndOnGround
	 */
	struct UBP_Action_Ragdoll_AI_C_OnRagdollAndOnGround_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.OnConstruct
	 */
	struct UBP_Action_Ragdoll_AI_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.EnableCollisionDetection
	 */
	struct UBP_Action_Ragdoll_AI_C_EnableCollisionDetection_Params
	{	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.OnBegin
	 */
	struct UBP_Action_Ragdoll_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.OnTick
	 */
	struct UBP_Action_Ragdoll_AI_C_OnTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.OnReadyToStandUp
	 */
	struct UBP_Action_Ragdoll_AI_C_OnReadyToStandUp_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.OnEnd
	 */
	struct UBP_Action_Ragdoll_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Ragdoll_AI.BP_Action_Ragdoll_AI_C.ExecuteUbergraph_BP_Action_Ragdoll_AI
	 */
	struct UBP_Action_Ragdoll_AI_C_ExecuteUbergraph_BP_Action_Ragdoll_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
