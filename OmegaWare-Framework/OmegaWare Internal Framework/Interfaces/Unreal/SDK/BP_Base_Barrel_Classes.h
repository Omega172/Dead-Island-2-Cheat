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
	 * BlueprintGeneratedClass BP_Base_Barrel.BP_Base_Barrel_C
	 * Size -> 0x0175 (FullSize[0x0655] - InheritedSize[0x04E0])
	 */
	class ABP_Base_Barrel_C : public ACarryableEnvironmentalHazard
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPhysicsSoundComponent*                              PhysicsSound;                                            // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    ImpactOverlapSphere;                                     // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_CarryableImpactOnCollisionDetection_C*          BPC_CarryableImpactOnCollisionDetection;                 // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Hazard_StimEmitter_C*                           BPC_Hazard_StimEmitter;                                  // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDIProjectileMovementComponent*                      DIProjectileMovement;                                    // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULeakOnImpactComponent*                              LeakOnImpact;                                            // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULeakComponent*                                      Leak;                                                    // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_HazardAutoAim_C*                                BPC_HazardAutoAim;                                       // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UModularConditionsAndEffectsComponent*               ModularConditionsAndEffects;                             // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_StateTransmitter_C*                             BPC_StateTransmitter;                                    // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTriggerInteractorComponent*                         TriggerInteractor;                                       // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImpactEventComponent*                               ImpactEvent;                                             // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       HeldActionRequestHelper;                                 // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       PouringActionRequestHelper;                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumImpactGroupEvents;                                    // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               ThrownAttackFactKey;                                     // 0x056C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastImpactPoint;                                         // 0x0578(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LastImpactNormalRotationX;                               // 0x0584(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                HeldBlockReason;                                         // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TerminalDisableReason;                                   // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionActionArchetype*                           ExtraElectricExplosionArchetype;                         // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionActionArchetype*                           ExtraFireExplosionArchetype;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBroken;                                                 // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTerminal;                                               // 0x05B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SMVK[0x6];                                   // 0x05B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        StatusTimer;                                             // 0x05B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      RadialDamage;                                            // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSCustomHazardStimParams                            LeakStimParams;                                          // 0x05C4(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		struct FStimID                                             LeakStimID;                                              // 0x05D4(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Pourable;                                                // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NW8R[0x7];                                   // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKnowledgeBaseFactKey>                       NoImpulseFilters;                                        // 0x05E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseFactKey>                       NoDestructionFilters;                                    // 0x05F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuid                                               HitDetectionGUID;                                        // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverlapSphereExtraRadius;                                // 0x0610(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               OverlapDetectionGUID;                                    // 0x0614(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               DisableRequestID;                                        // 0x0624(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DisableRequestName;                                      // 0x0634(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ImpactOnCollisionReason;                                 // 0x063C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DQYV[0x4];                                   // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle;                                             // 0x0648(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      InstigatorPersistenceTimeAfterFirstImpact;               // 0x0650(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInstigatorSet;                                          // 0x0654(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		TArray<struct FKnowledgeBaseFactKey> GetNoDestructionFilters();
		TArray<struct FKnowledgeBaseFactKey> GetNoImpulseFilters();
		void ResetImpactData();
		void InvalidateImpactResetTimer();
		void UpdateImpactData(struct FEventInstigator* Instigator);
		void EnableImpacts();
		void DisableImpacts();
		void SetupImpactOnCollisionDetection();
		void EndStim();
		void RadialThresholdReached();
		void GetDamageEvents(const struct FRadialImpactEventResult& RadialImpactEventResult, TArray<struct FDamageTypeAndQuantity>* DamageEventsToApply);
		bool ImpactReceived(const struct FPointImpactEventResult& ImpactEvent);
		void ReceiveBeginPlay();
		void TriggerBrokenAction();
		void TriggerPouringAction();
		void BlueprintOnBeginAction(const struct FGuid& RequestId, const class FName& ActionType);
		void BlueprintOnEndAction(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason);
		void UnTriggerPouringAction();
		void ProcessImpactResponse(bool WasThrown);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_0_ServerActivated__DelegateSignature();
		void BndEvt__BPC_StateTransmitter_K2Node_ComponentBoundEvent_1_ServerDeactivated__DelegateSignature();
		void BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_2_OnRadialImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, const struct FRadialImpactEventResult& ImpactEvent);
		void ReceivePostInitializeComponents();
		void AddRadialImpulse(class UPrimitiveComponent* Component, const struct FVector& Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange);
		void AddImpulseAtLocation(class UPrimitiveComponent* Component, const struct FVector& Impulse, const struct FVector& Location, const class FName& BoneName);
		void BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void ExecuteUbergraph_BP_Base_Barrel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
