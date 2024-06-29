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
	 * Function BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C.GetImpactLocation
	 */
	struct UBP_PerkEffect_SpawnExplosionAtImpactLocation_C_GetImpactLocation_Params
	{
	public:
		class ADICharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactPoint;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2KJD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C.OnStart
	 */
	struct UBP_PerkEffect_SpawnExplosionAtImpactLocation_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C.ExecuteUbergraph_BP_PerkEffect_SpawnExplosionAtImpactLocation
	 */
	struct UBP_PerkEffect_SpawnExplosionAtImpactLocation_C_ExecuteUbergraph_BP_PerkEffect_SpawnExplosionAtImpactLocation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
