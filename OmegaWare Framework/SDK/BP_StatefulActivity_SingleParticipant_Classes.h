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
	 * BlueprintGeneratedClass BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C
	 * Size -> 0x02C0 (FullSize[0x0B70] - InheritedSize[0x08B0])
	 */
	class ABP_StatefulActivity_SingleParticipant_C : public AStatefulActivityActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                StateDebugTextRender;                                    // 0x08B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextRenderComponent*                                SequenceDebugTextRender;                                 // 0x08C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAmbientActivityRegistrationComponent*               AmbientActivityRegistration;                             // 0x08C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x08D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkeletalMeshComponent*                              AnimationPreview;                                        // 0x08D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBlueprintLinks*                                     BlueprintLinks;                                          // 0x08E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UParticipantSlotComponent*                           ParticipantSlotA;                                        // 0x08E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x08F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UParticipantSlotComponent*>                   ParticipantSlots;                                        // 0x08F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              PrimaryParticipantAnimInstance[0x28];                    // 0x0908(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UDSLogChannelHandle*                                 BlueprintLogger;                                         // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EndActivityOnStateFinished;                              // 0x0938(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EFQ7[0x3];                                   // 0x0939(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StateIndex;                                              // 0x093C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ExitStateName;                                           // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NewStateName;                                            // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ValidActivityStateNames;                                 // 0x0950(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UCharacterActionComponent*                           PrimaryParticipantActionComponent;                       // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   AnimationActivityAction;                                 // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        AnimationStateNames;                                     // 0x0970(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FStatefulActivityAnimation                          NewAnimationState;                                       // 0x0980(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FCharacterActionRequestParams                       ActivityActionParams;                                    // 0x0A48(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       DebugText;                                               // 0x0A68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_88PG[0x7];                                   // 0x0A69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        QuestDeliveryStateNames;                                 // 0x0A70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnParticipantsRecieved;                                  // 0x0A80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FGuid                                               CurrentActivityStateAction;                              // 0x0A90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CurrentQuestDeliveryAction;                              // 0x0AA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanRequestNewStates;                                     // 0x0AB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       QuestDeliveryInProgress;                                 // 0x0AB1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XSG4[0x2];                                   // 0x0AB2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PreQuestDeliveryStateName;                               // 0x0AB4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4TY9[0x4];                                   // 0x0ABC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ActivityActionChanged;                                   // 0x0AC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CurrentParticipantCount;                                 // 0x0AD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XNWN[0x4];                                   // 0x0AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class AActor*>                           Partcipants;                                             // 0x0AD8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class ULevelSequence*                                      FirstLevelSequence;                                      // 0x0B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalAllowedInvalidStates;                               // 0x0B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ConsecutiveInvalidStates;                                // 0x0B34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URequestCharacterActionOnMultipleActorsCallbackProxy* StatefulActivityWrapperTaskRef;                          // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_StatefulActivityWrapper_AI_C*       WrapperActionParams;                                     // 0x0B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CollisionProfile;                                        // 0x0B48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ExitStateWhenInterrupted;                                // 0x0B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FinalStateRequested;                                     // 0x0B58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XBIO[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ActivityActionEnd;                                       // 0x0B60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		TArray<class AActor*> CollectBlueprintLinks();
		void PrepareWrapperActionParams();
		void ProcessBoundActors(TArray<class AActor*>* Values);
		void CheckConsecutiveInvalidStates();
		void CheckStateRequirements(const struct FStatefulActivityAnimation& State, bool* RequirementsMet);
		void FindFirstLevelSequence(class UParticipantSlotComponent* Participant);
		void SetParticipantTravelToLocation(class ULevelSequence* LevelSequence, class UParticipantSlotComponent* Participant);
		void RemoveParticipantOptions(class UParticipantSlotComponent* Participant);
		void ApplyParticipantOptions(class UParticipantSlotComponent* Participant);
		void UnprocessParticipantData(class UParticipantSlotComponent* Participant);
		void ProcessPrimaryParticipantData();
		void UnbindParticipantSlots();
		void ProcessParticipantSlots();
		void ConstructQDState(class UEmotion* StateEmotion, const struct FSQuestDeliveryParams& QDParams, struct FStatefulActivityAnimation* StatefulActivityAnimation);
		void ConstructQDParams(const class FName& StateName, const struct FSQuestDeliveryParams& QDParams, class UEmotion* StateEmotion);
		void PrepareNewQuestDelivery();
		void CancelAllActivityActions();
		void CheckAnimSetIsValid(const struct FStatefulActivityAnimation& State, const class FName& StateName, bool* IsStateValid);
		void ProcessAnimationStateData(const class FName& NextStateName, bool* IsStateValid);
		void ProcessGenericStateData(const class FName& StateName);
		void SetupActivityLogger();
		void GetValidActivityStateNames();
		void ProcessAnimationStateExitParams(const struct FStatefulActivityAnimation& State, const class FName& NextStateName);
		void ProcessParticipantData(class UParticipantSlotComponent* Participant);
		void UpdateParticipantState();
		void CheckAllParticipantsReceived(bool* AllParticipantsReceived);
		void UserConstructionScript();
		void OnRequestFailed_F97C15244645008957D815956A379B5C();
		void OnCustomSignal_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams);
		void OnEnd_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnEndParams& EndParams);
		void OnBegin_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnBeginParams& BeginParams);
		void OnCancelled_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnCancelledParams& CancelledParams);
		void OnResolved_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnResolvedParams& ResolvedParams);
		void OnActionsFailed_34CDD7D84E5752605A2C109F9BDC0C87();
		void OnAllActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87();
		void OnNoActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87();
		void StartNewActivityState(bool IsQuestDelivery);
		void OnActivityStarted(class AActivityActor* Activity);
		void ChangeActivityState(const class FName& NewActivityState);
		void LogActivityStateChange(const class FName& NewStateName);
		void LogActivityStateSequenceChange(const class FName& NewSequenceName);
		void RequestActivityEnd();
		void RequestQuestDeliveryState(const class FName& NewActivityState, const struct FSQuestDeliveryParams& QuestDeliveryParams, class UEmotion* StateEmotion);
		void OnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason);
		void LogActivityStateRequest(const class FName& RequestedState, bool IsStatePermitted);
		void QuestDeliveryFinished();
		void DecideNextState();
		void ParticipantReceived(class UParticipantSlotComponent* Participant);
		void ParticipantReleased(class UParticipantSlotComponent* Participant);
		void ParticipantInterrupted(class UParticipantSlotComponent* Participant);
		void ParticipantOnTheWay(class UParticipantSlotComponent* Participant);
		void PrepareForFirstState();
		void RequestFinalState();
		void OnStateFailed();
		void ExecuteUbergraph_BP_StatefulActivity_SingleParticipant(int32_t EntryPoint);
		void ActivityActionEnd__DelegateSignature(const struct FCharacterActionOnEndParams& EndParams, const class FName& CurrentState);
		void ActivityActionChanged__DelegateSignature(const struct FCharacterActionOnBeginParams& BeginParams);
		void OnParticipantsRecieved__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
