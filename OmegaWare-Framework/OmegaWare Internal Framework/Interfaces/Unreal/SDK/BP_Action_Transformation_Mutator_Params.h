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
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.AddAggressiveStatusEffect
	 */
	struct UBP_Action_Transformation_Mutator_C_AddAggressiveStatusEffect_Params
	{	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.RemoveStopActionsFactWithDelay
	 */
	struct UBP_Action_Transformation_Mutator_C_RemoveStopActionsFactWithDelay_Params
	{	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.AddStopActionsFact
	 */
	struct UBP_Action_Transformation_Mutator_C_AddStopActionsFact_Params
	{	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ResetDeckContext
	 */
	struct UBP_Action_Transformation_Mutator_C_ResetDeckContext_Params
	{	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.OnBegin
	 */
	struct UBP_Action_Transformation_Mutator_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.OnEnd
	 */
	struct UBP_Action_Transformation_Mutator_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.TriggerTransformationPulse
	 */
	struct UBP_Action_Transformation_Mutator_C_TriggerTransformationPulse_Params
	{	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ApplyPerkFromPool
	 */
	struct UBP_Action_Transformation_Mutator_C_ApplyPerkFromPool_Params
	{	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ApplyInvulnerability
	 */
	struct UBP_Action_Transformation_Mutator_C_ApplyInvulnerability_Params
	{	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.RemoveInvulnerability
	 */
	struct UBP_Action_Transformation_Mutator_C_RemoveInvulnerability_Params
	{	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.OnConstruct
	 */
	struct UBP_Action_Transformation_Mutator_C_OnConstruct_Params
	{
	public:
		class UCustomActionParamsBase*                             InitParams;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C.ExecuteUbergraph_BP_Action_Transformation_Mutator
	 */
	struct UBP_Action_Transformation_Mutator_C_ExecuteUbergraph_BP_Action_Transformation_Mutator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4EG4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
