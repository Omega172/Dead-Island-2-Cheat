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
	 * BlueprintGeneratedClass BP_Action_StatefulActivityMaster_AI.BP_Action_StatefulActivityMaster_AI_C
	 * Size -> 0x026C (FullSize[0x0314] - InheritedSize[0x00A8])
	 */
	class UBP_Action_StatefulActivityMaster_AI_C : public UCharacterAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    StateAnimSetID;                                          // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NIOZ[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSet_Base*                                       StateAnimSet;                                            // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAssetLinkage*                                       StateAssetLinkageRef;                                    // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 BlueprintLogger;                                         // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CharacterAnimInstanceRef[0x28];                          // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class APawn*                                               Participant;                                             // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBoundActor>                                 BoundActors;                                             // 0x0100(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class USceneComponent*                                     ActivitySceneRoot;                                       // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasEndedByNewStateAction;                                // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JGF1[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                StateName;                                               // 0x011C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L2H8[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Base_Human_C*                                    ParticipantHuman;                                        // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_StatefulActivityMaster_AI_C*        ActionParamsRef;                                         // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStatefulActivityAnimation                          NewState;                                                // 0x0138(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FGuid                                               ActionEmotionGUID;                                       // 0x0200(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULevelSequence*                                      LoopLevelSequence;                                       // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayLoop;                                                // 0x0218(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LBOG[0x3];                                   // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentLoopCount;                                        // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TargetLoopCount;                                         // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoopTime;                                                // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldLoopTimeout;                                       // 0x0228(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7IAX[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        LoopTimer;                                               // 0x0230(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EGameSequenceCompletionMode                                LoopCompletionMode;                                      // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LUUK[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             ResolvedAnimSet;                                         // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULevelSequence*                                      IntoLevelSequence;                                       // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayInto;                                                // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UTI9[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IntoPlayRate;                                            // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoopPlayRate;                                            // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B9NA[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      OutOfLevelSequence;                                      // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayOutOf;                                               // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MYIL[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutOfPlayRate;                                           // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsQuestDelivery;                                         // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CK58[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSetData*                                        QDAnimSetData;                                           // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CurrentSubAction;                                        // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGameSequenceCompletionMode                                IntoCompletionMode;                                      // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGameSequenceCompletionMode                                OutOfCompletionMode;                                     // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3BSF[0x6];                                   // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPC_CharacterAction_AI_C*                           CharacterActionRef;                                      // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EStatefulActivitySequences                                 CurrentSequence;                                         // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0R2H[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActionDefinition*                                   ListenIntoAction;                                        // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   ListenLoopAction;                                        // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   ListenOutOfAction;                                       // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   StatefulActivityIntoAction;                              // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   StatefulActivityLoopAction;                              // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   StatefulActivityOutOfAction;                             // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   TalkIntoAction;                                          // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   TalkLoopAction;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   TalkOutOfAction;                                         // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisallowQuestDelivery;                                   // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FDT7[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                QuestDeliveryDisallowedReason;                           // 0x02F4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BindPlayer;                                              // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DMER[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimationSlotToMonitor;                                  // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEmotion*                                            EmotionDataAsset;                                        // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GameSequenceNumLoops;                                    // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupEmotion(class ABP_Base_Human_C* Participant);
		void GameEventResponse_OnStateEnded();
		void SetupNarrativeInteract();
		void SelectSubActionDefinition(class UActionDefinition** ActionDefinition);
		void SelectSequenceSpecificParams(EStatefulActivitySequences Sequence, int32_t* NumLoops, float* PlayRate, EGameSequenceCompletionMode* CompletionMode, class ULevelSequence** LevelSequence, float* OverlapTime);
		void LocalInit(const struct FCharacterActionOnBeginParams& Params);
		void ResolveLevelSequences(bool InTo, bool Loop, bool OutOf, bool* bResolved);
		void ShouldLoopContinue(bool* ContinueLooping);
		void SetupLoggers();
		void GetGameSequenceConfig(class UGameSequenceConfig** ParamsConfig);
		void ActionEndCleanUp();
		void GameEventResponse_OnStateStarted();
		void SetupProps();
		void StopLoopSequenceOnTimerEnded();
		void ParamsInit(class UCustomActionParamsBase* ActionParams);
		void LogSkippedSequence(const class FString& SequenceName);
		void SetupParticipants();
		void ProcessAnimationData(const struct FStatefulActivityAnimation& NewState);
		void OnRequestFailed_7FAB5FA24BEB8678F5252E845437F80B();
		void OnCustomSignal_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams);
		void OnEnd_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnEndParams& EndParams);
		void OnBegin_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnBeginParams& BeginParams);
		void OnCancelled_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnCancelledParams& CancelledParams);
		void OnResolved_7FAB5FA24BEB8678F5252E845437F80B(const struct FCharacterActionOnResolvedParams& ResolvedParams);
		void OnRequestFailed_7FAB5FA24BEB8678F5252E84DB7337F6();
		void OnCustomSignal_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams);
		void OnEnd_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnEndParams& EndParams);
		void OnBegin_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnBeginParams& BeginParams);
		void OnCancelled_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnCancelledParams& CancelledParams);
		void OnResolved_7FAB5FA24BEB8678F5252E84DB7337F6(const struct FCharacterActionOnResolvedParams& ResolvedParams);
		void OnRequestFailed_7FAB5FA24BEB8678F5252E84749E3EB2();
		void OnCustomSignal_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams);
		void OnEnd_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnEndParams& EndParams);
		void OnBegin_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnBeginParams& BeginParams);
		void OnCancelled_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnCancelledParams& CancelledParams);
		void OnResolved_7FAB5FA24BEB8678F5252E84749E3EB2(const struct FCharacterActionOnResolvedParams& ResolvedParams);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void EndRequestedBy(const struct FGuid& QueuedActionId);
		void RequestIntoSequence();
		void RequestLoopSequence();
		void RequestOutOfSequence();
		void ExecuteUbergraph_BP_Action_StatefulActivityMaster_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
