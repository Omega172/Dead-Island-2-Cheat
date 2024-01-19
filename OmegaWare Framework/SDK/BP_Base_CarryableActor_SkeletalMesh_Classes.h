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
	 * BlueprintGeneratedClass BP_Base_CarryableActor_SkeletalMesh.BP_Base_CarryableActor_SkeletalMesh_C
	 * Size -> 0x0120 (FullSize[0x04A0] - InheritedSize[0x0380])
	 */
	class ABP_Base_CarryableActor_SkeletalMesh_C : public ACarryableActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDSSkeletalMeshComponent*                            DSSkeletalMesh;                                          // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    ImpactOverlapSphere;                                     // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_CarryableImpactOnCollisionDetection_C*          BPC_CarryableImpactOnCollisionDetection;                 // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIIconComponent*                                    UIIcon;                                                  // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDockableComponent*                                  Dockable;                                                // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBase;                                           // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterActionComponent*                           CharacterAction;                                         // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTriggerInteractorComponent*                         TriggerInteractor;                                       // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBlueprintLinks*                                     BlueprintLinks;                                          // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDIProjectileMovementComponent*                      DIProjectileMovement;                                    // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Carryable_C*                                    BPC_Carryable;                                           // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_CarryableInteractive_C*                         BPC_CarryableInteractive;                                // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       HeldActionRequestHelper;                                 // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       DockedActionRequestHelper;                               // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            IconVisibleExpressionWithinQuest;                        // 0x03F8(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FGuid                                               HitDetectionGUID;                                        // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               OverlapDetectionGUID;                                    // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInstigatorSet;                                          // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PTKC[0x3];                                   // 0x0451(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InstigatorPersistenceTimeAfterFirstImpact;               // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle;                                             // 0x0458(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      OverlapSphereExtraRadius;                                // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               DisableRequestID;                                        // 0x0464(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DisableRequestName;                                      // 0x0474(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GYX5[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIPlayerCharacter*                                  CurrentCarrier;                                          // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldIconBeVisible;                                    // 0x0488(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsIconVisible;                                          // 0x0489(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_1ERH[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InWorldIcon;                                             // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDIMissionType*                                      MissionToTintIcon;                                       // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_bIsIconVisible();
		void ResetImpactData();
		void OnBeginHolding();
		void InvalidateImpactResetTimer();
		void BindExpressionListener();
		void SetupIcon();
		void UserConstructionScript();
		void ReceivePostInitializeComponents();
		void ReceiveBeginPlay();
		void BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_0_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot);
		void BndEvt__BPC_Carryable_K2Node_ComponentBoundEvent_1_PaperDollEventMulticastDelegate__DelegateSignature(class UPaperDollSlot* PaperDollSlot);
		void ExpressionUpdated(bool bResult);
		void BndEvt__BPC_CarryableInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void BndEvt__Mesh_K2Node_ComponentBoundEvent_6_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName);
		void RequestMeleeImpactEvent(TArray<struct FHitResult> HitResults, const struct FVector& SweepDirection, const struct FVector& AttackOrigin);
		void BndEvt__Dockable_K2Node_ComponentBoundEvent_3_DockableComponentMulticast__DelegateSignature(class UDockableComponent* Dockable, class UDockComponent* Dock);
		void BndEvt__Dockable_K2Node_ComponentBoundEvent_4_DockableComponentMulticast__DelegateSignature(class UDockableComponent* Dockable, class UDockComponent* Dock);
		void ExecuteUbergraph_BP_Base_CarryableActor_SkeletalMesh(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
