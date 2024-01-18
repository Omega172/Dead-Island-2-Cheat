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
	 * Function BP_PerkCondition_HasTakenDamageFromHostile_Data.BP_PerkCondition_HasTakenDamageFromHostile_Data_C.AreDamageConditionsAreMet
	 */
	struct UBP_PerkCondition_HasTakenDamageFromHostile_Data_C_AreDamageConditionsAreMet_Params
	{
	public:
		struct FDSDamageData                                       DSDamageData;                                            // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       IsTrue;                                                  // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PerkCondition_HasTakenDamageFromHostile_Data.BP_PerkCondition_HasTakenDamageFromHostile_Data_C.GetFactionReaction
	 */
	struct UBP_PerkCondition_HasTakenDamageFromHostile_Data_C_GetFactionReaction_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauserActor;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFactionReaction                                           Reaction;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LYAN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkCondition_HasTakenDamageFromHostile_Data.BP_PerkCondition_HasTakenDamageFromHostile_Data_C.GetActorFactionManager
	 */
	struct UBP_PerkCondition_HasTakenDamageFromHostile_Data_C_GetActorFactionManager_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UFactionAgentComponent*                              FactionManagerComponent;                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_HasTakenDamageFromHostile_Data.BP_PerkCondition_HasTakenDamageFromHostile_Data_C.OnOwnerTookDamage
	 */
	struct UBP_PerkCondition_HasTakenDamageFromHostile_Data_C_OnOwnerTookDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OriginalDamage;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageTaken;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDamageEvent                                        DamageEvent;                                             // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventInstigator                                    InstigatedBy;                                            // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDSDamageData                                       DSDamageData;                                            // 0x0038(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkCondition_HasTakenDamageFromHostile_Data.BP_PerkCondition_HasTakenDamageFromHostile_Data_C.ExecuteUbergraph_BP_PerkCondition_HasTakenDamageFromHostile_Data
	 */
	struct UBP_PerkCondition_HasTakenDamageFromHostile_Data_C_ExecuteUbergraph_BP_PerkCondition_HasTakenDamageFromHostile_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q9VQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
