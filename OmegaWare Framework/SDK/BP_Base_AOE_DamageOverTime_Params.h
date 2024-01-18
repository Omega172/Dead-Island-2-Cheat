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
	 * Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.CanAffectTarget
	 */
	struct UBP_Base_AOE_DamageOverTime_C_CanAffectTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTrue;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.IsTargetActorAlive
	 */
	struct UBP_Base_AOE_DamageOverTime_C_IsTargetActorAlive_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAlive;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.CanApplyDamage
	 */
	struct UBP_Base_AOE_DamageOverTime_C_CanApplyDamage_Params
	{
	public:
		bool                                                       IsTrue;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P1QY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.RequestImpactOnTarget
	 */
	struct UBP_Base_AOE_DamageOverTime_C_RequestImpactOnTarget_Params
	{	};

	/**
	 * Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.IsTargetActorAlsoOwner
	 */
	struct UBP_Base_AOE_DamageOverTime_C_IsTargetActorAlsoOwner_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTrue;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MJW8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.UpdateActorAffected
	 */
	struct UBP_Base_AOE_DamageOverTime_C_UpdateActorAffected_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_AOE_DamageOverTime.BP_Base_AOE_DamageOverTime_C.ExecuteUbergraph_BP_Base_AOE_DamageOverTime
	 */
	struct UBP_Base_AOE_DamageOverTime_C_ExecuteUbergraph_BP_Base_AOE_DamageOverTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0BLJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
