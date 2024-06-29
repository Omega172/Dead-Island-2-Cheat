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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Base_AI.BP_Base_AI_C
	 * Size -> 0x0218 (FullSize[0x1028] - InheritedSize[0x0E10])
	 */
	class ABP_Base_AI_C : public ADIAICharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E10(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                   CollisionPelvis;                                         // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_ImpactOnCollisionDetection_AI_C*                BPC_ImpactOnCollisionDetection_AI;                       // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_AnimationLayer_AI_C*                            BPC_AnimationLayer_AI;                                   // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C*    BPC_ConditionalActivity_SpawnFeastingOnCorpse;           // 0x0E30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProceduralAnimationReactionComponent*               ProceduralAnimationReaction;                             // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpatialAwarenessTargetComponent*                    SpatialAwarenessTarget;                                  // 0x0E40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAccumulatingEffectComponent*                        AccumulatingEffect;                                      // 0x0E48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               HeadStompInteractive;                                    // 0x0E50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               CounterInteractive;                                      // 0x0E58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_RewardDistributionComponent_C*                  BPC_RewardDistributionComponent;                         // 0x0E60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDamageEffectsPropagationComponent*                  DamageEffectsPropagation;                                // 0x0E68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Base_StimEmitter_C*                             BPC_Base_StimEmitter;                                    // 0x0E70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_AutoAimContexts_AI_C*                           BPC_AutoAimContexts;                                     // 0x0E78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBodyPartImpalingComponent*                          BodyPartImpaling;                                        // 0x0E80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_SplatterMesh_AI_C*                              BPC_AI_SplatterMesh;                                     // 0x0E88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTriggerInteractorComponent*                         TriggerInteractor;                                       // 0x0E90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_CharacterAction_AI_C*                           BPC_AI_CharacterAction;                                  // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_AreaOfEffectResponder_AI_C*                     BPC_AI_AreaOfEffectResponder;                            // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_PhysicalizedHitReact_AI_C*                      BPC_AI_PhysicalizedHitReact;                             // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_MultiPart_AI_C*                                 BPC_AI_MultiPart;                                        // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_MultiPartDamageable_AI_C*                       BPC_AI_MultiPartDamageable;                              // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_DamageRepercussions_AI_C*                       BPC_AI_DamageRepercussions;                              // 0x0EC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPhysicalAnimationComponent*                         PhysicalAnimation;                                       // 0x0EC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Passive;                                                 // 0x0ED0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_U0RS[0x3];                                   // 0x0ED1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Home;                                                    // 0x0ED4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Invulnerable;                                            // 0x0EE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       InfiniteStamina;                                         // 0x0EE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_727K[0x6];                                   // 0x0EE2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnBeginPlay;                                             // 0x0EE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EOnSpawnBehaviour                                          SpawnBehaviour;                                          // 0x0EF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_ES64[0x7];                                   // 0x0EF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SpawnBehaviourTargetActor;                               // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class ABP_MoveTarget_C*>                            PatrolRoute;                                             // 0x0F08(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       StartOnRoute;                                            // 0x0F18(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X7Q7[0x7];                                   // 0x0F19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 GenericBalancingDataRow;                                 // 0x0F20(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UPairedSequenceDataAsset*                            CounterSlaveData;                                        // 0x0F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   CounterSlaveActionDef;                                   // 0x0F38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   CounterMasterActionDef;                                  // 0x0F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AIHUDVisible;                                            // 0x0F48(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_K46R[0x7];                                   // 0x0F49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPerkDefinition*>                             GroupSpecificPerks;                                      // 0x0F50(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UPerkDefinition*>                             ArchetypeSpecificPerks;                                  // 0x0F60(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UPerkDefinition*>                             SubArchetypeSpecificPerks;                               // 0x0F70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuid                                               AttackSequenceEffectivenessModifierRef;                  // 0x0F80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 DebugPassiveLogger;                                      // 0x0F90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AttackSequenceAIHitDistanceModifierRef;                  // 0x0F98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPassiveSet;                                            // 0x0FA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V3AZ[0x3];                                   // 0x0FA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DeathInteractiveDisableReason;                           // 0x0FAC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OPRO[0x4];                                   // 0x0FB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VulnerableRequirement_Heavy;                             // 0x0FB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              VulnerableRequirement_Medium;                            // 0x0FC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              VulnerableRequirement_Light;                             // 0x0FD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       GroupSpecificFacts;                                      // 0x0FE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseFactKey>                       ArchetypeSpecificFacts;                                  // 0x0FF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseFactKey>                       SubArchetypeSpecificFacts;                               // 0x1008(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuid                                               NameslateId;                                             // 0x1018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool AllowInteraction(class APawn* User, class UInteractiveComponent* InteractiveComponent);
		class UClass* GetInteractIconClass(class UInteractiveComponent* InteractiveComponent);
		void RefreshAIHUDSlateVisbility();
		void IncrementCounterFacts(TArray<struct FKnowledgeBaseFactKey>* FactsToApply);
		void RemoveAIHUDSlate();
		void AddAIHUDSlate();
		void ToggleDebugPassive(bool PassiveRequested, const class FString& Instigator);
		void CounterPreConditionsMet(bool* ConditionsMet);
		void ApplyPerks(TArray<class UPerkDefinition*>* PerksToApply);
		void OnRep_IsAIHUDVisible();
		void AddParticleSystemComponent(class UParticleSystem* ParticleTemplate, class UParticleSystemComponent** ParticleSystemComponent);
		void AddProjectileSpawner(float ProjectileSpawnRate, class UClass* ProjectileClass, float DecayLength, class UCurveFloat* VelocityDecayCurve, class UCurveFloat* OffsetDecayCurve, const struct FVector& MinimumRandomOffset, const struct FVector& MaximumRandomOffset, const struct FVector& Location, class UBPC_ProjectileSpawner_C** ProjectileSpawnerComponent);
		void OnCounterInteractionCompleteInternal(class APawn* User, class UCoopSequenceTaskSetupParams_Counter** CounterSetupParams);
		void InitHitReactBalacingData();
		void OnCounterInteractionComplete(class APawn* User, class UCoopSequenceTaskSetupParams_Counter** CounterSetupParams);
		void TryToCreateCrawler();
		void GetSpawnBehaviourTargetActor(class AActor** TargetActor);
		void CombatStateChanged(ECosmeticCombatState NewState);
		void IsAlive(bool* Alive);
		void UserConstructionScript();
		void ReplicateState_6BAAE5034F7256B2BD052ABA7E7992D1(int32_t PredictionKey, class UCustomParamsBase* Params);
		void Interrupted_6BAAE5034F7256B2BD052ABA7E7992D1(class UCoopSequenceTask* Task);
		void Completed_6BAAE5034F7256B2BD052ABA7E7992D1(class UCoopSequenceTask* Task);
		void Activated_6BAAE5034F7256B2BD052ABA7E7992D1();
		void ReplicateState_EA1999CC48FDB102BE36DA8992CA26FF(int32_t PredictionKey, class UCustomParamsBase* Params);
		void Interrupted_EA1999CC48FDB102BE36DA8992CA26FF(class UCoopSequenceTask* Task);
		void Completed_EA1999CC48FDB102BE36DA8992CA26FF(class UCoopSequenceTask* Task);
		void Activated_EA1999CC48FDB102BE36DA8992CA26FF();
		void ReceivePossessed(class AController* NewController);
		void Death();
		void ReceiveBeginPlay();
		void BndEvt__BPC_AI_MultiPartDamageable_K2Node_ComponentBoundEvent_0_ActorDeadDelegate__DelegateSignature(class AActor* Target);
		void BndEvt__HeadStompInteractive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void BndEvt__CounterInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnHUDVisibilityUpdated(bool bResult);
		void ExecuteUbergraph_BP_Base_AI(int32_t EntryPoint);
		void OnBeginPlay__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
