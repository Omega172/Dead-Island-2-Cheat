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
	 * BlueprintGeneratedClass BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C
	 * Size -> 0x01F0 (FullSize[0x04D0] - InheritedSize[0x02E0])
	 */
	class UBPC_EntryComponent_RequestLevelSequence_C : public UBPC_BaseEntryComponent_RequestAction_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ShouldSpawnHidden;                                       // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_KH8H[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ELevelSequenceState, class UBP_ActionParams_BasePlayLevelSequence_C*> AnimStateParams;                                         // 0x02F0(0x0050) Edit, BlueprintVisible
		TMap<class UParticipantSlotComponent*, ELevelSequenceState> CurrentAnimState;                                        // 0x0340(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UParticipantSlotComponent*, struct FGuid>       MovementModeForParticipant;                              // 0x0390(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FName                                                ActionName;                                              // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AnimSetID;                                               // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideGameSequenceBoundActorConfig;                    // 0x03EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4C7L[0x3];                                   // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameSequenceBoundActorConfig                       CustomGameSequenceBoundActorConfig;                      // 0x03F0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       IgnoreAnimOffsetForTravelLocation;                       // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       StartAnimationFromActorPosition;                         // 0x0421(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZSQF[0x2];                                   // 0x0422(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               OverrideLevelSequenceFactKey;                            // 0x0424(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       AddDebugTextonFailedSpawn;                               // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VSU1[0x7];                                   // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAssetLinkage*                                       CachedAssetLinkage;                                      // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   ActionDef_Uninterruptible;                               // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       DelayedRemovalLifetimeFactsForUninterruptibleAction;     // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UActionDefinition*                                   ActionDef_Interruptible;                                 // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               CannotPushFact;                                          // 0x0460(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KDCQ[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class APawn*, class UKnowledgeBaseComponent*>         CannotPushFactParticipants;                              // 0x0470(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FKnowledgeBaseFactKey>                       DelayedRemovalLifetimeFactsForInterruptibleAction;       // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void RemoveCrossAnimActionCannotPushLifetimeFact(class UParticipantSlotComponent* Participant);
		void AddCrossAnimActionCannotPushLifetimeFact(class UParticipantSlotComponent* Participant);
		void LogDebugMessageForAction(const class FString& Message, class UParticipantSlotComponent* ParticipantSlot, EDSLogVerbosity LogVerbosity);
		void GetDataTableRowForAnimName(class ABP_Base_Zombie_C** TableSource, const class FName& ActivityTable, const class FName& SequenceName, bool* RowFound, struct FSActivityData* DataTableRow);
		void PlayCurrentLevelSequence(class UParticipantSlotComponent* Paticipant);
		void GetLevelSequenceForActivity(class UParticipantSlotComponent* ParticipantSlot, const class FName& SequenceName, ELevelSequenceState SequenceState, bool UseDefaultTable, class ULevelSequence** LevelSequence);
		void SetParticipantPositionForLevelSequence(class UParticipantSlotComponent* ParticipantSlot, class UBP_ActionParams_BasePlayLevelSequence_C* Params);
		void AddLevelSequenceParamsforAnimState(ELevelSequenceState AnimState, class UBP_ActionParams_BasePlayLevelSequence_C* LevelSequenceParams);
		void CreateDefaultEntryActorBinding(class UParticipantSlotComponent** Participant, struct FBoundActor* BoundActor);
		void PrepNextLevelSequenceAction(class UParticipantSlotComponent* Participant);
		void StartLevelSequenceAction(class UBP_ActionParams_BasePlayLevelSequence_C* Params, class UParticipantSlotComponent* Participant, class UActionDefinition** Definition, TArray<struct FKnowledgeBaseFactKey>* LifetimeFactsWithDelayedRemoval);
		void StartInterruptableLevelSequence(class UBP_ActionParams_BasePlayLevelSequence_C* Params, class UParticipantSlotComponent* Participant);
		void ReceiveBeginPlay();
		void OnActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void PerformComponentActivity(class UParticipantSlotComponent* ParticipantSlot);
		void CleanComponentState(class UParticipantSlotComponent* ParticipantSlot);
		void SetupcomponentActivityData(class UParticipantSlotComponent* Participant);
		void OnActionResolved(const struct FGuid& RequestID, const struct FCharacterActionOnResolvedParams& Params);
		void ExecuteUbergraph_BPC_EntryComponent_RequestLevelSequence(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
