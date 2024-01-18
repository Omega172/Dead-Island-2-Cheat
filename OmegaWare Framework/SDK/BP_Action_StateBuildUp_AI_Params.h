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
	 * Function BP_Action_StateBuildUp_AI.BP_Action_StateBuildUp_AI_C.ClearAndInvalidateStateTimer
	 */
	struct UBP_Action_StateBuildUp_AI_C_ClearAndInvalidateStateTimer_Params
	{	};

	/**
	 * Function BP_Action_StateBuildUp_AI.BP_Action_StateBuildUp_AI_C.Resolve
	 */
	struct UBP_Action_StateBuildUp_AI_C_Resolve_Params
	{
	public:
		struct FCharacterActionResolveParams                       Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ECharacterActionResolution                                 OutResolution;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8SUQ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutQueuedTimeout;                                        // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Action_StateBuildUp_AI.BP_Action_StateBuildUp_AI_C.OnNewStateReached
	 */
	struct UBP_Action_StateBuildUp_AI_C_OnNewStateReached_Params
	{	};

	/**
	 * Function BP_Action_StateBuildUp_AI.BP_Action_StateBuildUp_AI_C.BuildUpPayoff
	 */
	struct UBP_Action_StateBuildUp_AI_C_BuildUpPayoff_Params
	{	};

	/**
	 * Function BP_Action_StateBuildUp_AI.BP_Action_StateBuildUp_AI_C.OnBegin
	 */
	struct UBP_Action_StateBuildUp_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StateBuildUp_AI.BP_Action_StateBuildUp_AI_C.OnEnd
	 */
	struct UBP_Action_StateBuildUp_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_StateBuildUp_AI.BP_Action_StateBuildUp_AI_C.ExecuteUbergraph_BP_Action_StateBuildUp_AI
	 */
	struct UBP_Action_StateBuildUp_AI_C_ExecuteUbergraph_BP_Action_StateBuildUp_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
