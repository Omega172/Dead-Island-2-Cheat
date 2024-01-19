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
	 * BlueprintGeneratedClass BP_Base_Battery.BP_Base_Battery_C
	 * Size -> 0x0110 (FullSize[0x0490] - InheritedSize[0x0380])
	 */
	class ABP_Base_Battery_C : public ACarryableActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    ImpactOverlapSphere;                                     // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_CarryableImpactOnCollisionDetection_C*          BPC_CarryableImpactOnCollisionDetection;                 // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInstigatorCreditTrackerComponent*                   InstigatorCreditTracker;                                 // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpatialTickComponent*                               SpatialTick;                                             // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDockableComponent*                                  Dockable;                                                // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_ArcFromSource_TargetPoint_C*                    BPC_ArcFromSource_TargetPoint;                           // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_AreaOfEffectResponder_AI_C*                     BPC_AreaOfEffectResponder_AI;                            // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterActionComponent*                           CharacterAction;                                         // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBase;                                           // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTriggerInteractorComponent*                         TriggerInteractor;                                       // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_CarryableInteractive_C*                         BPC_CarryableInteractive;                                // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDIProjectileMovementComponent*                      DIProjectileMovement;                                    // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Carryable_C*                                    BPC_Carryable;                                           // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh;                                                    // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBlueprintLinks*                                     BlueprintLinks;                                          // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       HeldActionRequestHelper;                                 // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       DockedActionRequestHelper;                               // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ActiveActionRequestHelper;                               // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       NoImpulseFilters;                                        // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseFactKey>                       NoDestructionFilters;                                    // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuid                                               HitDetectionGUID;                                        // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               OverlapDetectionGUID;                                    // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInstigatorSet;                                          // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1TWH[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InstigatorPersistenceTimeAfterFirstImpact;               // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle;                                             // 0x0460(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      OverlapSphereExtraRadius;                                // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               DisableRequestID;                                        // 0x046C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DisableRequestName;                                      // 0x047C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_08WM[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIPlayerCharacter*                                  CurrentCarrier;                                          // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TArray<struct FKnowledgeBaseFactKey> GetNoDestructionFilters();
		TArray<struct FKnowledgeBaseFactKey> GetNoImpulseFilters();
		void OnRep_CurrentCarrier();
		void SetupImpactOnCollisionDetection();
		void ResetImpactData();
		void OnBeginHolding();
		void UpdateImpactData(struct FEventInstigator* Instigator);
		void IsCarrierLocal(bool* bOutIsLocal);
		void InvalidateImpactResetTimer();
		void EndImpactOnCollisionDetection();
		void EnableImpacts();
		void DisableImpacts();
		void SetupActionHelpers();
		void UserConstructionScript();
		void BndEvt__SpatialTick_K2Node_ComponentBoundEvent_0_OnSpatialCellDeativatedSignature__DelegateSignature(class USpatialTickComponent* Component);
		void BndEvt__SpatialTick_K2Node_ComponentBoundEvent_1_OnSpatialCellActivatedSignature__DelegateSignature(class USpatialTickComponent* Component);
		void AddRadialImpulse(class UPrimitiveComponent* Component, const struct FVector& Origin, float Radius, float Strength, ERadialImpulseFalloff Falloff, bool bVelChange);
		void AddImpulseAtLocation(class UPrimitiveComponent* Component, const struct FVector& Impulse, const struct FVector& Location, const class FName& BoneName);
		void BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_3_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot);
		void BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_7_ComponentDestroyedDelegate__DelegateSignature(class UActorComponent* Component);
		void ReceiveBeginPlay();
		void RequestMeleeImpactEvent(TArray<struct FHitResult> HitResults, const struct FVector& SweepDirection, const struct FVector& AttackOrigin);
		void BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_2_SetSimulatePhysicsDelegate__DelegateSignature(bool bSimulate);
		void ExecuteUbergraph_BP_Base_Battery(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
