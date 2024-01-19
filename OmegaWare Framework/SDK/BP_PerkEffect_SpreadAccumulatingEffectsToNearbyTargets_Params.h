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
	 * Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.FindTargets
	 */
	struct UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_FindTargets_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABP_Base_AI_C*>                               FoundTargets;                                            // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.FindActiveStatusEffects
	 */
	struct UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_FindActiveStatusEffects_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.ApplyStatusEffectAccumualtion
	 */
	struct UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_ApplyStatusEffectAccumualtion_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OwnerActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.OnStart
	 */
	struct UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets.BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C.ExecuteUbergraph_BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets
	 */
	struct UBP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_C_ExecuteUbergraph_BP_PerkEffect_SpreadAccumulatingEffectsToNearbyTargets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
