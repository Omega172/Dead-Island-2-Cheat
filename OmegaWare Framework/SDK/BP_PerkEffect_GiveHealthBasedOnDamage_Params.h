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
	 * Function BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C.Apply Health Regeneration
	 */
	struct UBP_PerkEffect_GiveHealthBasedOnDamage_C_ApplyHealthRegeneration_Params
	{
	public:
		float                                                      DamageDealt;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C.OnStart
	 */
	struct UBP_PerkEffect_GiveHealthBasedOnDamage_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_GiveHealthBasedOnDamage.BP_PerkEffect_GiveHealthBasedOnDamage_C.ExecuteUbergraph_BP_PerkEffect_GiveHealthBasedOnDamage
	 */
	struct UBP_PerkEffect_GiveHealthBasedOnDamage_C_ExecuteUbergraph_BP_PerkEffect_GiveHealthBasedOnDamage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
