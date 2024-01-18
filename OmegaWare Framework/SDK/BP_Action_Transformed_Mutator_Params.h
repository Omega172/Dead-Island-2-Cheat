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
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.RemoveAggressiveStatusEffect
	 */
	struct UBP_Action_Transformed_Mutator_C_RemoveAggressiveStatusEffect_Params
	{	};

	/**
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.AddAggressiveStatusEffect
	 */
	struct UBP_Action_Transformed_Mutator_C_AddAggressiveStatusEffect_Params
	{	};

	/**
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.RemoveWalkerActivityAbilities
	 */
	struct UBP_Action_Transformed_Mutator_C_RemoveWalkerActivityAbilities_Params
	{	};

	/**
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OverridePropagationData
	 */
	struct UBP_Action_Transformed_Mutator_C_OverridePropagationData_Params
	{	};

	/**
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OnEnd
	 */
	struct UBP_Action_Transformed_Mutator_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OnBlockLoopingGoreExpressionChanged
	 */
	struct UBP_Action_Transformed_Mutator_C_OnBlockLoopingGoreExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.DestroyLoopingGoreAudioIfValid
	 */
	struct UBP_Action_Transformed_Mutator_C_DestroyLoopingGoreAudioIfValid_Params
	{	};

	/**
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.CreateLoopingGoreAudio
	 */
	struct UBP_Action_Transformed_Mutator_C_CreateLoopingGoreAudio_Params
	{	};

	/**
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OnBegin
	 */
	struct UBP_Action_Transformed_Mutator_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.ExecuteUbergraph_BP_Action_Transformed_Mutator
	 */
	struct UBP_Action_Transformed_Mutator_C_ExecuteUbergraph_BP_Action_Transformed_Mutator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
