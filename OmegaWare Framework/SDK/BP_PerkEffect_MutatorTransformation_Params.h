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
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnTransformationRequestCancelled
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_OnTransformationRequestCancelled_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnCancelledParams                   Params;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnActionResolved
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_OnActionResolved_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.UnbindOnTransformationRequestFailed
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_UnbindOnTransformationRequestFailed_Params
	{	};

	/**
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.RequestTransformAction
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_RequestTransformAction_Params
	{	};

	/**
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnTransformWarmUpConditionChanged
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_OnTransformWarmUpConditionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IK09[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnStart
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnEnd
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnInstantTransformConditionChanged
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_OnInstantTransformConditionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.OnActionFailedToBegin
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_OnActionFailedToBegin_Params
	{	};

	/**
	 * Function BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C.ExecuteUbergraph_BP_PerkEffect_MutatorTransformation
	 */
	struct UBP_PerkEffect_MutatorTransformation_C_ExecuteUbergraph_BP_PerkEffect_MutatorTransformation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
