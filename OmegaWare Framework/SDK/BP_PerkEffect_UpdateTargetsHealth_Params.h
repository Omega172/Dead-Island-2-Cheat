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
	 * Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.UpdateHealth
	 */
	struct UBP_PerkEffect_UpdateTargetsHealth_C_UpdateHealth_Params
	{
	public:
		class ADICharacter*                                        PlayerToUpdateHealth;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.GetPercentageFromHealthValue
	 */
	struct UBP_PerkEffect_UpdateTargetsHealth_C_GetPercentageFromHealthValue_Params
	{
	public:
		class USimpleHealthComponent*                              TargetHealthComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewHealthValue;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.OnStart
	 */
	struct UBP_PerkEffect_UpdateTargetsHealth_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_UpdateTargetsHealth.BP_PerkEffect_UpdateTargetsHealth_C.ExecuteUbergraph_BP_PerkEffect_UpdateTargetsHealth
	 */
	struct UBP_PerkEffect_UpdateTargetsHealth_C_ExecuteUbergraph_BP_PerkEffect_UpdateTargetsHealth_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
