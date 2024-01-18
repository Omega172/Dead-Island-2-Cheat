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
	 * Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetLastDamageCauser
	 */
	struct UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetLastDamageCauser_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetInstigator
	 */
	struct UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetInstigator_Params
	{
	public:
		struct FEventInstigator                                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetRotatorToSpawnExplosion
	 */
	struct UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetRotatorToSpawnExplosion_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENB4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetExplosionArchetype
	 */
	struct UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetExplosionArchetype_Params
	{
	public:
		class UExplosionActionArchetype*                           ExplosionArchetype;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.GetVectorToSpawnExplosion
	 */
	struct UBP_PerkEffect_RequestExplosionAtTargetLocation_C_GetVectorToSpawnExplosion_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BDND[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.RequestExplosion
	 */
	struct UBP_PerkEffect_RequestExplosionAtTargetLocation_C_RequestExplosion_Params
	{	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.OnStart
	 */
	struct UBP_PerkEffect_RequestExplosionAtTargetLocation_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.OnEnd
	 */
	struct UBP_PerkEffect_RequestExplosionAtTargetLocation_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtTargetLocation.BP_PerkEffect_RequestExplosionAtTargetLocation_C.ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtTargetLocation
	 */
	struct UBP_PerkEffect_RequestExplosionAtTargetLocation_C_ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtTargetLocation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MO7F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
