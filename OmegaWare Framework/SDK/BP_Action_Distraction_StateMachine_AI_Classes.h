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
	 * BlueprintGeneratedClass BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C
	 * Size -> 0x0148 (FullSize[0x0230] - InheritedSize[0x00E8])
	 */
	class UBP_Action_Distraction_StateMachine_AI_C : public UBP_Action_Base_Distraction_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAIMovementComponent*                                AIMovementComponent;                                     // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_Distraction_StateMachine_AI_C*      DistractionActionParams;                                 // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MoveTargetAdded;                                         // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XSU5[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        HardDistractionTimerHandle;                              // 0x0108(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBlackboardComponent*                                BlackboardComponent;                                     // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DistractionReactionDelayTimerHandle;                     // 0x0120(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DistractionTravelInterestDurationTimerHandle;            // 0x0128(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EDistractionStates                                         CurrentState;                                            // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ESBN[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        InvestigationDurationTimerHandle;                        // 0x0138(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastKnownMoveTarget;                                     // 0x0140(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterActionEndReason                                  EndActionReason;                                         // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J32N[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterActionRequestHelper*                       TravelToDestinationActionHelper;                         // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               LookAtRequestID;                                         // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               TravelToDestinationActionID;                             // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCombatAggroComponent*                               AggroComponent;                                          // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HadCombatTarget;                                         // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EE5L[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIAICharacter*                                      FriendlyStimOwnerCharacter;                              // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAIController*                                     FriendlyStimOwnerController;                             // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCombatAggroComponent*                               FriendlyStimOwnerAggro;                                  // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActivityActor*                                      AssignedActivity;                                        // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       InvestigationActionHelper;                               // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               InvestigationActionID;                                   // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MoveTargetName;                                          // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EDistractionSpeed, struct FKnowledgeBaseFactKey>      DistractionSpeedFacts;                                   // 0x01C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FKnowledgeBaseFactKey                               CannotReachTargetMovementFact;                           // 0x0218(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      BufferTime;                                              // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              FriendlyStimOwnerCombatTarget;                           // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GoToNextFailedState(ECharacterActionEndReason EndActionReason);
		void RemoveStateBasedFacts();
		void AddStateBasedFacts();
		void OnCannotReachTargetInvestigationActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void RequestCannotReachTargetInvestigationAction();
		void SetDistractionSpeedOverride(bool Activate);
		void GetInvestigationActionParams(class UCustomActionParamsBase* ActionParams, class UActionDefinition* ActionDefinition, struct FCharacterActionRequestParams* CharacterActionRequestParams);
		void UnbindAndEndAction(struct FGuid* ActionId, class UCharacterActionRequestHelper** ActionHelper);
		void OnInvestigationActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void GetTravelToDistractionActionParams(struct FCharacterActionRequestParams* CharacterActionRequestParams);
		void UnbindOnAllysCombatTargetChanged();
		void GetFriendlyStimOwnersCharacterAndController(class ADIAICharacter** Character, class ADIAIController** Controller);
		bool IsAlly(class ADICharacter* DIAICharactor);
		void OnAllysCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void BindToStimOwnersCombatTargetChanged(bool* Success);
		void GetDistractionFocus(struct FVector* ReturnLocation);
		bool RequestInvestigationDurationTimer();
		bool RequestDistractionReactionDelayTimer();
		bool RequestDistractionTravelInterestTimer();
		void RemoveLookAtRequest();
		void AddLookAtRequest();
		void RequestActivityInvestigationAction();
		void RequestInvestigationAction();
		void RemoveDistractionStateTImers();
		void GetMoveTargetData(const struct FVector& EQSLocation, bool StandStillOnSpot, struct FVector* MoveTargetLocation, class AActor** MoveTargetActor, struct FVector* MoveTargetOffsetFromActor, struct FVector* MoveTargetDirectionAtDestination, struct FMoveTargetParams* MoveTargetParams, bool* UseDefaultParams);
		void EndInvestigationState();
		void BeginInvestigationState();
		void OnTravelToDistractionStateActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void EndTravelToDistractionState();
		void BeginTravelToDistractionState();
		void EndLookAtReactionDelayState();
		void BeginLookAtReactionDelayState();
		bool GetNextState(bool FailedState, EDistractionStates* NextState);
		void GoToNextState();
		void EndState();
		void GoToState(EDistractionStates NextState);
		void BeginState();
		void AddHardDistractionTimer();
		void RemoveMoveTarget();
		void AddMoveTarget(const struct FVector& Location, bool StandStillOnSpot);
		bool OnBeginEarly();
		void OnDistractionFinished();
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void HardTimeFinished();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_Distraction_StateMachine_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
