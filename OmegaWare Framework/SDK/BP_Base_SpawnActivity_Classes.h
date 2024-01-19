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
	 * BlueprintGeneratedClass BP_Base_SpawnActivity.BP_Base_SpawnActivity_C
	 * Size -> 0x0240 (FullSize[0x07B8] - InheritedSize[0x0578])
	 */
	class ABP_Base_SpawnActivity_C : public AActivityActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0578(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     TraversalTarget;                                         // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender;                                              // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkeletalMeshComponent*                              AnimationPreview;                                        // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBlueprintLinks*                                     BlueprintLinks;                                          // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class UParticipantSlotComponent*, class ADIAICharacter*> SpawnedCharacters;                                       // 0x05B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		EMovementMode                                              PreSpawnMovementMode;                                    // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XHJG[0x7];                                   // 0x0609(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UParticipantSlotComponent*, bool>               SuccessfullySetUpActor;                                  // 0x0610(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		class FScriptMulticastDelegate                             OnParticipantReceived;                                   // 0x0660(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UBPC_BaseEntryComponent_C*>                   BaseEntryComponents;                                     // 0x0670(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             TriggerActivity;                                         // 0x0680(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnActorSetupComplete;                                    // 0x0690(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                FriendlyName;                                            // 0x06A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay
		class UDSLogChannelHandle*                                 DSLogger;                                                // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BodyPartName;                                            // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 DesignLogger;                                            // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableComponents;                                        // 0x06D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YDNQ[0x7];                                   // 0x06D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TriggerOptOutConstraints[0x50];                          // 0x06D8(0x0050) UNKNOWN PROPERTY: SetProperty
		class FScriptMulticastDelegate                             OnZombieWillBeReleased;                                  // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDIAICharacterReceived;                                 // 0x0738(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnParticipantWillBeReceived;                             // 0x0748(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<class APawn*, class UBehaviourModifierComponent*>     BehaviourModifierComponents;                             // 0x0758(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UClass*>                                      BehaviourModifiers;                                      // 0x07A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void EndBehaviourModifiers(class APawn* Agent);
		void BeginBehaviourModifiers(class APawn* Agent);
		void UnbindFromAgentImpact(class AActor* Agent);
		void BindToAgentImpact(class AActor* Agent);
		void ShouldImpactEjectParticipants(class AActor* AffectedActor, class UBaseImpactEventResultWrapper* ImpactEvent, bool* ParticipantsShouldLeave);
		void OnImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void ForceAgentToTraversalPosition(class UParticipantSlotComponent* ParticipantComponent);
		void AlignTraversalTargetWithGround(const struct FVector& StartPositionOffset);
		void IsAllComponentActivityComplete(class UParticipantSlotComponent* ParticipantSlot, bool* ComponentsReady);
		void IsAllPreActivitySetupComplete(class UParticipantSlotComponent* ParticipantSlot, bool* ComponentsReady);
		void ClearComponentResponseCounters(class UParticipantSlotComponent* ParticipantSlot);
		void SetupAndRunIgnoringCallbacks(class UParticipantSlotComponent* ParticipantSlot);
		void CleanUpSpawnProcess(class UParticipantSlotComponent* ParticipantSlot);
		void LogSpawnErrorMessage(const class FString& ErrorMessage, class UParticipantSlotComponent* ParticipantSlot);
		void ThrowSpawnError(const class FString& ErrorMessage, class UParticipantSlotComponent* ParticipantSlot);
		void SetActorStartLocation(class UParticipantSlotComponent* ParticipantSlot);
		void InitialiseActorInstance(class UParticipantSlotComponent* ParticipantSlot);
		void UserConstructionScript();
		void SetUpActor(class UParticipantSlotComponent* ParticipantSlot);
		void OnComponentPreActivitySetupComplete(class UParticipantSlotComponent* ParticipantSlot);
		void ReceiveBeginPlay();
		void FnOnParticipantWillBeReceived(class UParticipantSlotComponent* Participant);
		void OnzombieCanBeReleased(class UParticipantSlotComponent* ParticipantSlot);
		void OnComponentActivityComplete(class UParticipantSlotComponent* ParticipantSlot);
		void ParticipantReceived(class UParticipantSlotComponent* Participant);
		void ParticipantReleasedDelegate(class UParticipantSlotComponent* Participant);
		void ExecuteUbergraph_BP_Base_SpawnActivity(int32_t EntryPoint);
		void OnParticipantWillBeReceived__DelegateSignature(class UParticipantSlotComponent* Participant);
		void OnDIAICharacterReceived__DelegateSignature(class ADIAICharacter* SpawnedActor);
		void OnZombieWillBeReleased__DelegateSignature(class UParticipantSlotComponent* ParticipantSlot);
		void OnActorSetupComplete__DelegateSignature(class UParticipantSlotComponent* ParticipantSlot);
		void TriggerActivity__DelegateSignature(class UParticipantSlotComponent* ParticipantSlot);
		void OnParticipantReceived__DelegateSignature(class UParticipantSlotComponent* Participant);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
