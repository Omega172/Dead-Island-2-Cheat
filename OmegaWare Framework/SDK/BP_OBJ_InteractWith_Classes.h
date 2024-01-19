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
	 * BlueprintGeneratedClass BP_OBJ_InteractWith.BP_OBJ_InteractWith_C
	 * Size -> 0x0130 (FullSize[0x0488] - InheritedSize[0x0358])
	 */
	class ABP_OBJ_InteractWith_C : public ADIObjectiveActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UObjectLinkComponent*                                ObjectLink;                                              // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObjectiveIconComponent*                             ObjectiveIcon;                                           // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       DisableInteractionAfterCompletion;                       // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		EInteractWithTypes                                         ObjectiveMode;                                           // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_44DZ[0x6];                                   // 0x0382(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      InteractionTargetActors;                                 // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		int32_t                                                    TotalInteractionsToComplete;                             // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentCompleteInteractions;                             // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ObjectiveCompletedSuccessfully;                          // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AllowObjectiveToControlInteraction;                      // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_LV9T[0x3];                                   // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InteractionCompleteDisableReason;                        // 0x03B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ObjectiveStartedDisableReason;                           // 0x03BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                InitalInteractionDisableReason;                          // 0x03C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5AO0[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDIObjectiveData*                                    DIData;                                                  // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                InteractedDisableReason;                                 // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFixedAmount;                                          // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z7QF[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InteractionAmountToCompleteObjective;                    // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 DSLogger;                                                // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UInteractiveComponent*>                       TargetInteractiveComponents;                             // 0x03F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ABP_Base_GatherActor_C*                              GatherActor;                                             // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutomaticallySetProgressData;                            // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AlsoListenForFailedInteractions;                         // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JBWR[0x2];                                   // 0x040A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DefaultInteractionState;                                 // 0x040C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_64IG[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractiveComponent*                               GatherInteractiveComponent;                              // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAttachObjectiveIconToInteractionTargets;                // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J7KW[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EInteractionMode, class UInteractionCategory*>        ShortRangeInteractionCategory;                           // 0x0428(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UInteractiveComponent*>                       DynamicInteractiveComponents;                            // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		TArray<class AActor*> CollectBlueprintLinks();
		void AddInteractiveAndBindEvents(class UInteractiveComponent* InteractiveComponentToAdd);
		void RemoveGatherInteractState(class UInteractiveComponent* Interact);
		void AddGatherInteractState(class UInteractiveComponent* Interact);
		void ChooseObjectiveProgressUIDataAsset();
		void GatherComplete(EGatherState NewState, EGatherState PreviousState);
		void StartGather(class APawn* InUser);
		void FnDisableInteractionAfterCompletion();
		void BindToInteractionTargets();
		void ProcessInteractionTargets();
		void EnableInteractionOnStart();
		void CheckInteractiveComponentIsValid(class UInteractiveComponent* InteractiveComponent, bool* IsValid);
		void UpdateIconActor();
		void RemoveDynamicActor(class AActor* InteractionTarget);
		void AddNewDynamicActor(class AActor* InteractionTarget);
		void UpdateObjectiveProgressUI();
		void DisableInteractionBeforeStart();
		void SetupCompletionMode();
		void UnbindInteractionEvents(class UInteractiveComponent* InteractiveComp);
		void BindInteractionEvents(class UInteractiveComponent* InteractiveComp);
		void SetupObjectiveProgressUI();
		void OnInteraction(class APawn* User);
		void UserConstructionScript();
		void OnObjectiveStarted();
		void InteractionComplete(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void ReceiveBeginPlay();
		void OnWaitingStarted();
		void OnObjectiveEnded();
		void InteractionCompleteWithState(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams, const class FName& State);
		void OnInteractiveExclusive(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void OnInteractiveExclusiveWithState(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams, const class FName& State);
		void GatherCleanUp();
		void InteractionStateChanged(const class FName& NewState, const class FName& LastState);
		void PickUpConsumed(const struct FSpentObject& SpentObject);
		void DynamicActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void OnWaitingEnded();
		void ExecuteUbergraph_BP_OBJ_InteractWith(int32_t EntryPoint);
		void ObjectiveCompletedSuccessfully__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
