﻿#pragma once

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
	 * Function BP_Action_Dead_AI.BP_Action_Dead_AI_C.OnSignificantDurationAfterDeath
	 */
	struct UBP_Action_Dead_AI_C_OnSignificantDurationAfterDeath_Params
	{	};

	/**
	 * Function BP_Action_Dead_AI.BP_Action_Dead_AI_C.OnBegin
	 */
	struct UBP_Action_Dead_AI_C_OnBegin_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnBeginParams                       Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Action_Dead_AI.BP_Action_Dead_AI_C.OnRagdollResting
	 */
	struct UBP_Action_Dead_AI_C_OnRagdollResting_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Action_Dead_AI.BP_Action_Dead_AI_C.ExecuteUbergraph_BP_Action_Dead_AI
	 */
	struct UBP_Action_Dead_AI_C_ExecuteUbergraph_BP_Action_Dead_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
