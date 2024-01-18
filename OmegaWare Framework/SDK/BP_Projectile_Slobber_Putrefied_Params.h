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
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.OnRep_CurrentDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_OnRep_CurrentDetonationState_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.GetNewWorldScale
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_GetNewWorldScale_Params
	{
	public:
		float                                                      DefaultValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LK0A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSPutrefiedSpitScaleModificationParams              Params;                                                  // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.IntialiseModifyScaleTimelineParams
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_IntialiseModifyScaleTimelineParams_Params
	{
	public:
		struct FSPutrefiedSpitScaleModificationParams              Params;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EndVolatileDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_EndVolatileDetonationState_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EndEmbeddedDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_EndEmbeddedDetonationState_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EndDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_EndDetonationState_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginVolatileDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_BeginVolatileDetonationState_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginEmbeddedDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_BeginEmbeddedDetonationState_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginIdleDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_BeginIdleDetonationState_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_BeginDetonationState_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.GoToNextDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_GoToNextDetonationState_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.GoToDetonationState
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_GoToDetonationState_Params
	{
	public:
		EPutrefiedProjectileState                                  NextDetonationState;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.TryGetHitCosmeticEffectDefinition
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_TryGetHitCosmeticEffectDefinition_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCosmeticEffectsDefinition*                          ReturnCosmeticEffect;                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.UnbindListeners
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_UnbindListeners_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BindListeners
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_BindListeners_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ProjectileActorAttached
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_ProjectileActorAttached_Params
	{
	public:
		class AModularProjectileActor*                             ModularProjectileActor;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttachPosition;                                          // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1TKR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAttachmentInfo                                     AttachmentInfo;                                          // 0x0018(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ProjectileActorEmbedded
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_ProjectileActorEmbedded_Params
	{
	public:
		class AModularProjectileActor*                             ModularProjectileActor;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AttachPosition;                                          // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P51Z[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          ProjectileHitResult;                                     // 0x0018(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.UserConstructionScript
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ModifyScale__FinishedFunc
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_ModifyScale__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ModifyScale__UpdateFunc
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_ModifyScale__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ReceiveBeginPlay
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EnableExpandedShootCollider
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_EnableExpandedShootCollider_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ReceiveHit
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FIGO[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ModifyScaleOverTime
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_ModifyScaleOverTime_Params
	{
	public:
		struct FSPutrefiedSpitScaleModificationParams              Params;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ReceiveEndPlay
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.StopModifyingScale
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_StopModifyingScale_Params
	{	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BndEvt__Damageable_K2Node_ComponentBoundEvent_1_ActorTakeDamageDelegate__DelegateSignature
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_BndEvt__Damageable_K2Node_ComponentBoundEvent_1_ActorTakeDamageDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CUXQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventInstigator                                    InstigatedBy;                                            // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDSDamageData                                       DSDamageData;                                            // 0x0038(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ExecuteUbergraph_BP_Projectile_Slobber_Putrefied
	 */
	struct ABP_Projectile_Slobber_Putrefied_C_ExecuteUbergraph_BP_Projectile_Slobber_Putrefied_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WPZS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
