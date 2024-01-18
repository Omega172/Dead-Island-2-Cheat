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
	 * Function BP_DismemberedLimb_AI.BP_DismemberedLimb_AI_C.ReceiveBeginPlay
	 */
	struct ABP_DismemberedLimb_AI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DismemberedLimb_AI.BP_DismemberedLimb_AI_C.OnPointImpactReceivedEvent
	 */
	struct ABP_DismemberedLimb_AI_C_OnPointImpactReceivedEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0008(0x0300)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_DismemberedLimb_AI.BP_DismemberedLimb_AI_C.ExecuteUbergraph_BP_DismemberedLimb_AI
	 */
	struct ABP_DismemberedLimb_AI_C_ExecuteUbergraph_BP_DismemberedLimb_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CCJJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
