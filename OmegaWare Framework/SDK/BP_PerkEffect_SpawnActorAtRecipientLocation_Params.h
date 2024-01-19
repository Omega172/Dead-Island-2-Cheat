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
	 * Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.BindToOwnerDeath
	 */
	struct UBP_PerkEffect_SpawnActorAtRecipientLocation_C_BindToOwnerDeath_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.OnStart
	 */
	struct UBP_PerkEffect_SpawnActorAtRecipientLocation_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.DestroySpawnedActor
	 */
	struct UBP_PerkEffect_SpawnActorAtRecipientLocation_C_DestroySpawnedActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_SpawnActorAtRecipientLocation.BP_PerkEffect_SpawnActorAtRecipientLocation_C.ExecuteUbergraph_BP_PerkEffect_SpawnActorAtRecipientLocation
	 */
	struct UBP_PerkEffect_SpawnActorAtRecipientLocation_C_ExecuteUbergraph_BP_PerkEffect_SpawnActorAtRecipientLocation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KL2V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
