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
	 * BlueprintGeneratedClass BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C
	 * Size -> 0x0300 (FullSize[0x04D8] - InheritedSize[0x01D8])
	 */
	class UBPC_Distraction_GroupCoordinator_C : public UDistractionCoordinatorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ADIAICharacter*>                              Participants;                                            // 0x01E0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ADIAICharacter*                                      CurrentParticipant;                                      // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       QueryRunning;                                            // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PerformMovement;                                         // 0x0201(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T92M[0x6];                                   // 0x0202(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        DelayMovementTimer;                                      // 0x0208(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class AActor*, struct FVector>                        ActiveParticipantDestinations;                           // 0x0210(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        LifespanTimer;                                           // 0x0260(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UStimTemplate*                                       StimTemplate;                                            // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldOverrideRadius;                                    // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HF2T[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideRadius;                                          // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStimID                                             StimID;                                                  // 0x0278(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KM96[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ActivityClass;                                           // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class AActivityActor*, class AActor*>                 AssignedActivities;                                      // 0x0288(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActivityActor*>                              Activities;                                              // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      MaxInterestDuration;                                     // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActiveLifespan;                                          // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxNumberOfParticipants;                                 // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfActivitiesToSpawn;                               // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistanceFromSourceToPerformActivity;                  // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5JBO[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AStimManager*                                        StimManager;                                             // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnLifespanExpiredDelegate;                               // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UStimTemplate*                                       ActiveStim;                                              // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             RequestParticipationResult;                              // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class ADIAICharacter*>                              PendingParticipants;                                     // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TMap<class ADICharacter*, struct FSGroupDistractionParticipantData> ActiveParticipants;                                      // 0x0340(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        PendingParticipantsDelayTimer;                           // 0x0390(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       PerformIntialRegistrationDelay;                          // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B9ZY[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStim                                               StimSettings;                                            // 0x03A0(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<struct FStimID, float>                                StimCooldownList;                                        // 0x0458(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              DebugTagString;                                          // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugEnabled;                                            // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZHFA[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             AllParticipantsUnregistered;                             // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void EndStimOverride();
		void BeginStimOverride(const struct FSStimOverrideParams& StimOverride);
		void AddDSLog(const class FString& DebugText, EDSLogVerbosity Verbosity, bool Condition);
		void SetupDistractionLogger();
		void GlobalQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		float GetStimCooldownTimeStamp(const struct FStimID& StimID);
		void AddStimToCooldownList(const struct FStimID& StimID, float Timestamp);
		struct FVector GetStimSettings(class AActor* OverrideInstigator, class USceneComponent** AnchorComponent, class AActor** Insigator);
		struct FStim OverrideStimRadius(struct FStim* StimSettings);
		void AddAllPendingParticipantToActiveParticipantRegister(TArray<struct FSGroupDistractionParticipantData>* PendingParticipantsDataList);
		bool IsPendingParticipantsRemaining(TArray<class ADIAICharacter*> PendingParticipantsList);
		void RemovePendingParticipant(TArray<class ADIAICharacter*> PendingParticipantsList, TArray<struct FSGroupDistractionParticipantData> PendingParticipantsDataList, int32_t Index);
		int32_t GetClosestPendingParticipantIndex(TArray<struct FSGroupDistractionParticipantData>* PendingParticipantsDataList);
		void AddPendingParticipantToActiveParticipantRegister(TArray<class ADIAICharacter*>* PendingParticipantsList, TArray<struct FSGroupDistractionParticipantData>* PendingParticipantsDataList, int32_t Index);
		class AActivityActor* IsCharacterAssignedToActivity(class AActor* ItemToFind);
		void SelectInstigator(class AActor* DefaultInstigator, class AActor* OverrideInstigator, class AActor** SelectedInstigator);
		void SetNewLifespan(float NewLifespan);
		void RemoveStim();
		void RequestStim(class UStimTemplate* StimTemplate, class AActor* OverrideInstigator);
		float GetRemainingLifespan();
		void AssignCharacterToActivity(class AActivityActor* ActivityActor, class AActor* Character);
		void GetActiveParticipantDestination(TMap<class AActor*, struct FVector>* AILocations);
		void UnregisterParticipant(class ADICharacter* Character);
		void UpdateActiveParticipantDestination(class AActor* Character, const struct FVector& Location, bool* Success);
		void AddToActiveParticipantsRegister(TArray<struct FSGroupDistractionParticipantData>* PendingParticipantsDataList);
		struct FVector ProjectPathEndLocation(class AAIController* Controller);
		TArray<struct FSGroupDistractionParticipantData> GetPendingParticipantsData();
		void ProcessPendingParticipants();
		void ClearAssignedActivity(class AActivityActor* ActorActivity);
		void GetAvailableActivity(class AActor* Character, const struct FVector& TargetLocation, class AActivityActor** Activity);
		void DestroyActivityOnceItsEnded(class AActivityActor* ActivityActor);
		void OnLifespanExpired();
		struct FVector GetActivityLocation(const struct FVector& LocationOffset, const struct FRotator& RotationOffset);
		void CancelActiveQuery();
		void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void RunQuery();
		void AssignNextParticipant();
		void EndParticipantMovement(class ADIAICharacter* ParticipantToRemove);
		void BeginParticipantMovement(class ADIAICharacter* AddParticipantForProcessing);
		void RemoveParticipantFromMovement(class ADIAICharacter* Character);
		void AddParticipantToMovement(class ADIAICharacter* Character);
		void RegisterParticipant(class ADIAICharacter* Character);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlay();
		void OnAddMovementRequest(class ADIAICharacter* Character);
		void OnRemoveMovementRequest(class ADIAICharacter* Character);
		void OnRemoveParticipant(class ADIAICharacter* Character);
		void OnTryAddParticipant(class ADIAICharacter* Character);
		void ExecuteUbergraph_BPC_Distraction_GroupCoordinator(int32_t EntryPoint);
		void AllParticipantsUnregistered__DelegateSignature();
		void RequestParticipationResult__DelegateSignature(bool CanParticipate);
		void OnLifespanExpiredDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
