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
	 * Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.ApplyDamage
	 */
	struct UBP_PerkEffect_ApplyDamageOverTime_C_ApplyDamage_Params
	{	};

	/**
	 * Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.OnStart
	 */
	struct UBP_PerkEffect_ApplyDamageOverTime_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.OnEnd
	 */
	struct UBP_PerkEffect_ApplyDamageOverTime_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_ApplyDamageOverTime.BP_PerkEffect_ApplyDamageOverTime_C.ExecuteUbergraph_BP_PerkEffect_ApplyDamageOverTime
	 */
	struct UBP_PerkEffect_ApplyDamageOverTime_C_ExecuteUbergraph_BP_PerkEffect_ApplyDamageOverTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IT40[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
