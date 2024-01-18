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
	 * Function BP_PerkEffect_ApplyGeneralImpact.BP_PerkEffect_ApplyGeneralImpact_C.GetReceivingActor
	 */
	struct UBP_PerkEffect_ApplyGeneralImpact_C_GetReceivingActor_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class AActor*                                              ReceivingActor;                                          // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_ApplyGeneralImpact.BP_PerkEffect_ApplyGeneralImpact_C.OnStart
	 */
	struct UBP_PerkEffect_ApplyGeneralImpact_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ApplyGeneralImpact.BP_PerkEffect_ApplyGeneralImpact_C.ExecuteUbergraph_BP_PerkEffect_ApplyGeneralImpact
	 */
	struct UBP_PerkEffect_ApplyGeneralImpact_C_ExecuteUbergraph_BP_PerkEffect_ApplyGeneralImpact_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7RSP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
