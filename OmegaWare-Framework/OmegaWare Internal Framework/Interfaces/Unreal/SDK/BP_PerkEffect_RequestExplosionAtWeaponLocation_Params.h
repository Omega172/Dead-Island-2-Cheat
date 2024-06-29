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
	 * Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.GetExplosionArchetype
	 */
	struct UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_GetExplosionArchetype_Params
	{
	public:
		class UExplosionActionArchetype*                           ExplosionArchetype;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.GetVectorToSpawnExplosion
	 */
	struct UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_GetVectorToSpawnExplosion_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A2RS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.RequestExplosion
	 */
	struct UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_RequestExplosion_Params
	{	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.OnStart
	 */
	struct UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.OnEnd
	 */
	struct UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_OnEnd_Params
	{
	public:
		struct FPerkEffectEndParams                                Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_RequestExplosionAtWeaponLocation.BP_PerkEffect_RequestExplosionAtWeaponLocation_C.ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtWeaponLocation
	 */
	struct UBP_PerkEffect_RequestExplosionAtWeaponLocation_C_ExecuteUbergraph_BP_PerkEffect_RequestExplosionAtWeaponLocation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AA6B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
