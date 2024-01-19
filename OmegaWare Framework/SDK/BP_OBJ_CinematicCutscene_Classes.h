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
	 * BlueprintGeneratedClass BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C
	 * Size -> 0x0209 (FullSize[0x0561] - InheritedSize[0x0358])
	 */
	class ABP_OBJ_CinematicCutscene_C : public ADIObjectiveActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInteractiveComponent*                               Interactive;                                             // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Gather_C*                                       BPC_Gather;                                              // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObjectiveIconComponent*                             ObjectiveIcon;                                           // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      OutlineFade_Fade_28C19C7F4E37D8306965428023643A17;       // 0x0380(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         OutlineFade__Direction_28C19C7F4E37D8306965428023643A17; // 0x0384(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QJRS[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  OutlineFade;                                             // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInteractiveComponent*                               InteractWithComponentRef;                                // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimationLayerComponent*                            AnimationLayerRef;                                       // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CutsceneOverrideInteractionDisableReason;                // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UInteractiveComponent*>                       OverriddenInteractionComponentRefs;                      // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FadeColour;                                              // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CutsceneActivityToUse[0x28];                             // 0x03D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ACutsceneActivityActor*                              ResolvedCutsceneActivity;                                // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoTriggerCutscene;                                     // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K4W9[0x7];                                   // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_HUDFaderSimple_C*                               HUDFader;                                                // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GatherInteractionDisableReason;                          // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                InitialInteractionReason;                                // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ActorToOverrideInteractionOf[0x28];                      // 0x0420(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FScriptMulticastDelegate                             OnFadeDownComplete;                                      // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFadeUpComplete;                                        // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ABP_Base_Player_C*                                   PlayerRef;                                               // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LevelStreamingToUse[0x28];                               // 0x0470(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ULevelStreamingComponent*                            StreamingComponent;                                      // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        StreamingTimeoutTimer;                                   // 0x04A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_StatefulActivity_SingleParticipant_C*            StatefulActivityRef;                                     // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Human_C*                                    StatefulActivityParticipantRef;                          // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInteractiveComponent*                               NPCInteractiveComponent;                                 // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                UsingNPCDisableReason;                                   // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_GatherActor_C*                              GatherActor;                                             // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInteractionCategory*                                OverrideInteractionCategoryOnLinkedActor;                // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EInteractionMode, class UInteractionCategory*>        PreCutsceneInteractionCategories;                        // 0x04D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuid                                               PreCutsceneFadeRequestID;                                // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnablePreCutsceneFade;                                   // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EEasingFunc                                                PreCutsceneFadeEasing;                                   // 0x0539(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B6PK[0x2];                                   // 0x053A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PreCutsceneFadeFromDuration;                             // 0x053C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               LastInteractor;                                          // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreCutsceneFadeDiscardDelay;                             // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HostileCloseInteractStateHandle;                         // 0x054C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseHostileCloseInteractionCheck;                         // 0x0554(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OIKC[0x3];                                   // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RapidSimulationReason;                                   // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoTriggerCutscene_DoOnce;                              // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		TArray<class AActor*> CollectBlueprintLinks();
		bool AllowInteraction(class APawn* User, class UInteractiveComponent* InteractiveComponent);
		class UClass* GetInteractIconClass(class UInteractiveComponent* InteractiveComponent);
		void EnableAutoTriggerCutsceneDoOnce(class APawn* Interactor);
		void EnableOverriddenInteractionWhileStreaming();
		void DisableOverriddenInteractionWhileStreaming();
		void OverrideInteractionCheck();
		void OnGatherCancel();
		void DiscardPreCutsceneFade();
		void StartPreCutsceneFade();
		void RemoveGatherInteractState(class UInteractiveComponent* Interact);
		void AddGatherInteractState(class UInteractiveComponent* Interact);
		void RestoreOverriddenInteractionCategory(class UInteractiveComponent* InteractiveComponent);
		void SetOverriddenInteractionCategory(class UInteractiveComponent* InteractiveComponent);
		void AddNewOverriddenInteraction(class AActor* Actor);
		void SpawnGatherActor();
		void OnGatherStatusChanged(EGatherState NewState, EGatherState PreviousState);
		void GatherComplete();
		void UnprocessStatefulActivity();
		void ProcessStatefulActivity(class ABP_StatefulActivity_SingleParticipant_C* StatefulActivityRef);
		void StatefulActivityParticipantReleased(class UParticipantSlotComponent* Participant);
		void StatefulActivityParticipantReceived(class UParticipantSlotComponent* Participant);
		bool CheckParticipantIsReceived();
		void StreamingTimeout();
		void CancelStreamingTimeoutTimer();
		void StartStreamingTimeoutTimer();
		void OverrideInteraction();
		void ReleaseOverriddenInteractions();
		void UnprocessCutsceneActivity();
		void ProcessCutsceneActivity();
		void StartGather(bool* bSuccess);
		void OutlineFade__FinishedFunc();
		void OutlineFade__UpdateFunc();
		void OnObjectiveStarted();
		void ReceiveBeginPlay();
		void OnObjectiveEnded();
		void OnWaitingStarted();
		void StartCutscene();
		void LevelStreamingCompleted();
		void InteractWithNPCComplete(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void InteractWithActorComplete(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void BndEvt__Interactive_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams);
		void OverrideInteractionComponents();
		void OnCutsceneStarted();
		void OnCutsceneEnded();
		void OutlineFadeOut();
		void OutlineFadeIn();
		void ExecuteUbergraph_BP_OBJ_CinematicCutscene(int32_t EntryPoint);
		void OnFadeUpComplete__DelegateSignature();
		void OnFadeDownComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
