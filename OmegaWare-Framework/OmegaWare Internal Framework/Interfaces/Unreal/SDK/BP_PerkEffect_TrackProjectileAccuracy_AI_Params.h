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
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.ProjectileTrackingAddedDebug
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_ProjectileTrackingAddedDebug_Params
	{	};

	/**
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.EvaluateImpactAccuracy
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_EvaluateImpactAccuracy_Params
	{
	public:
		struct FVector                                             ActualHitLocation;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAccurate;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A0AT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.InitialiseVariables
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_InitialiseVariables_Params
	{
	public:
		struct FPerkEffectStartParams                              PerkEffectStartParams;                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnStart
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnStart_Params
	{
	public:
		struct FPerkEffectStartParams                              Params;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnCombatTargetChanged
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnCombatTargetChanged_Params
	{
	public:
		class UCombatTargetComponent*                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.On Projectile Created
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnProjectileCreated_Params
	{
	public:
		class UActorProjectileSpawnModule*                         ProjectileSpawnModule;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AModularProjectileActor*                             ModularProjectileActor;                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnProjectileHit
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnProjectileHit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HCYB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.ProjectileHasNotLandedAfterExcessiveDuration
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_ProjectileHasNotLandedAfterExcessiveDuration_Params
	{	};

	/**
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnModulesInitialized
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnModulesInitialized_Params
	{	};

	/**
	 * Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.ExecuteUbergraph_BP_PerkEffect_TrackProjectileAccuracy_AI
	 */
	struct UBP_PerkEffect_TrackProjectileAccuracy_AI_C_ExecuteUbergraph_BP_PerkEffect_TrackProjectileAccuracy_AI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
