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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C
	 * Size -> 0x0148 (FullSize[0x06F8] - InheritedSize[0x05B0])
	 */
	class ABP_Projectile_Slobber_Putrefied_C : public AModularProjectileActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_HazardAutoAim_C*                                BPC_HazardAutoAim;                                       // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    SphereCollision;                                         // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URotatingMovementComponent*                          RotatingMovement;                                        // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDamageableComponent*                                Damageable;                                              // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      ModifyScale_Scale_2D7775BE4B40E177379DF19EE8815EBC;      // 0x05E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ModifyScale__Direction_2D7775BE4B40E177379DF19EE8815EBC; // 0x05EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_STGD[0x3];                                   // 0x05ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ModifyScale;                                             // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        EnableExpandedShootColliderTimer;                        // 0x05F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UABP_PutrefiedProjectile_C*                          ABP;                                                     // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        WindupDetonationTimer;                                   // 0x0608(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DetonateTimer;                                           // 0x0610(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          EmbeddedCosmeticEffectDefinition;                        // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  EmbeddedCosmeticEffectID;                                // 0x0620(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_URM9[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          DetonationWindUpCosmeticEffectDefinition;                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  DetonationWindUpCosmeticEffectID;                        // 0x0630(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CQRT[0x4];                                   // 0x0634(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSPutrefiedSpitHitCosmeticEffectParams>      HitCosmeticEffectDefinitions;                            // 0x0638(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		EPutrefiedProjectileState                                  CurrentDetonationState;                                  // 0x0648(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T854[0x7];                                   // 0x0649(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPutrefiedProjectileState, EPutrefiedProjectileState> StateTransition;                                         // 0x0650(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EPutrefiedProjectileState, struct FSPutrefiedSpitParams> DetonationParams;                                        // 0x06A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UHUDIconBase*                                        Icon;                                                    // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_CurrentDetonationState();
		float GetNewWorldScale(float DefaultValue, const struct FSPutrefiedSpitScaleModificationParams& Params);
		void IntialiseModifyScaleTimelineParams(const struct FSPutrefiedSpitScaleModificationParams& Params);
		void EndVolatileDetonationState();
		void EndEmbeddedDetonationState();
		void EndDetonationState();
		void BeginVolatileDetonationState();
		void BeginEmbeddedDetonationState();
		void BeginIdleDetonationState();
		void BeginDetonationState();
		void GoToNextDetonationState();
		void GoToDetonationState(EPutrefiedProjectileState NextDetonationState);
		void TryGetHitCosmeticEffectDefinition(class UObject* Object, class UCosmeticEffectsDefinition** ReturnCosmeticEffect);
		void UnbindListeners();
		void BindListeners();
		void ProjectileActorAttached(class AModularProjectileActor* ModularProjectileActor, const struct FVector& AttachPosition, const struct FAttachmentInfo& AttachmentInfo);
		void ProjectileActorEmbedded(class AModularProjectileActor* ModularProjectileActor, const struct FVector& AttachPosition, const struct FHitResult& ProjectileHitResult);
		void UserConstructionScript();
		void ModifyScale__FinishedFunc();
		void ModifyScale__UpdateFunc();
		void ReceiveBeginPlay();
		void EnableExpandedShootCollider();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ModifyScaleOverTime(const struct FSPutrefiedSpitScaleModificationParams& Params);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void StopModifyingScale();
		void BndEvt__Damageable_K2Node_ComponentBoundEvent_1_ActorTakeDamageDelegate__DelegateSignature(class AActor* DamagedActor, float Damage, const struct FDamageEvent& DamageEvent, const struct FEventInstigator& InstigatedBy, class AActor* DamageCauser, const struct FDSDamageData& DSDamageData);
		void ExecuteUbergraph_BP_Projectile_Slobber_Putrefied(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
