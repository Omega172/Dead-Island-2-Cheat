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
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.SetFactsToReplicate
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_SetFactsToReplicate_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.GetDispersalCosmentic
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_GetDispersalCosmentic_Params
	{
	public:
		class UCosmeticEffectsDefinition*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.UnbindDamageListeners
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_UnbindDamageListeners_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BindDamageListeners
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_BindDamageListeners_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ChangeSwarmsParticlesLifetime
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_ChangeSwarmsParticlesLifetime_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.SwarmDispersalReason
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_SwarmDispersalReason_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnTargetingCollisionBeginOverlap
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_OnTargetingCollisionBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DMJ1[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnStatusTypeBlockedReasonsUpdated
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_OnStatusTypeBlockedReasonsUpdated_Params
	{
	public:
		class UStateTransmitterComponent*                          Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETransmittableStatus                                       Status;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsNowBlocked;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCurrentlyActive;                                        // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnStatusTypeDeactivated
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_OnStatusTypeDeactivated_Params
	{
	public:
		class UStateTransmitterComponent*                          Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETransmittableStatus                                       StatusType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnStatusTypeActivated
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_OnStatusTypeActivated_Params
	{
	public:
		class UStateTransmitterComponent*                          Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETransmittableStatus                                       StatusType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EU1L[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Strength;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnAnyImpactReceived
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_OnAnyImpactReceived_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnSwarmDispersingExpressionChanged
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_OnSwarmDispersingExpressionChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnOwnerEnded
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_OnOwnerEnded_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.UnbindListeners
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_UnbindListeners_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.GetImpactDispersalData
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_GetImpactDispersalData_Params
	{
	public:
		class UBaseImpactEventResultWrapper*                       ImpactEvent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0QUZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKnowledgeBaseFactKey                               Value;                                                   // 0x000C(0x000C)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.IsTargetHostile
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_IsTargetHostile_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5IVI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.IsValidHomingTarget
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_IsValidHomingTarget_Params
	{
	public:
		class UObject*                                             PotentialTarget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OJGS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.GetNewBestTarget
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_GetNewBestTarget_Params
	{
	public:
		class AActor*                                              NewPotentialTarget;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     NewBestTarget;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.RaytraceToLocation
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_RaytraceToLocation_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8RD9[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ApplyBurningCosmetic
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_ApplyBurningCosmetic_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BeginSwarmBehaviour
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_BeginSwarmBehaviour_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.EnableIntialLocationHoming
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_EnableIntialLocationHoming_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.CacheKnowledgeBases
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_CacheKnowledgeBases_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BindListeners
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_BindListeners_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.EndProjectileResponse
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_EndProjectileResponse_Params
	{
	public:
		bool                                                       PassiveDispersal;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.CacheHitResult
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_CacheHitResult_Params
	{
	public:
		class UObject*                                             ImpactEvent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.IntialiseControllerAndCombatTarget
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_IntialiseControllerAndCombatTarget_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QVFK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.UserConstructionScript
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ReceiveBeginPlay
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ReceiveEndPlay
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ExecuteUbergraph_BP_Projectile_Walker_InsectSwarm
	 */
	struct ABP_Projectile_Walker_InsectSwarm_C_ExecuteUbergraph_BP_Projectile_Walker_InsectSwarm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ODM0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
