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
	 * Function BP_Action_Grapple_Master_AI.BP_Action_Grapple_Master_AI_C.ModifyCounters
	 */
	struct UBP_Action_Grapple_Master_AI_C_ModifyCounters_Params
	{	};

	/**
	 * Function BP_Action_Grapple_Master_AI.BP_Action_Grapple_Master_AI_C.OnEnd
	 */
	struct UBP_Action_Grapple_Master_AI_C_OnEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Grapple_Master_AI.BP_Action_Grapple_Master_AI_C.ExecuteUbergraph_BP_Action_Grapple_Master_AI
	 */
	struct UBP_Action_Grapple_Master_AI_C_ExecuteUbergraph_BP_Action_Grapple_Master_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
