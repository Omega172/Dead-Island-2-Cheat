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
	 * Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.OnStart
	 */
	struct UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.OnEnd
	 */
	struct UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.OnPointImpact
	 */
	struct UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C_OnPointImpact_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPointImpactEventResult                             ImpactEvent;                                             // 0x0008(0x0300)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_PerkEffect_SpawnCosmeticEffectAtHitLocation.BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C.ExecuteUbergraph_BP_PerkEffect_SpawnCosmeticEffectAtHitLocation
	 */
	struct UBP_PerkEffect_SpawnCosmeticEffectAtHitLocation_C_ExecuteUbergraph_BP_PerkEffect_SpawnCosmeticEffectAtHitLocation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O4WO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
