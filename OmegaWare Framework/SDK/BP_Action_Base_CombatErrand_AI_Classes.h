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
	 * BlueprintGeneratedClass BP_Action_Base_CombatErrand_AI.BP_Action_Base_CombatErrand_AI_C
	 * Size -> 0x02C9 (FullSize[0x0399] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Base_CombatErrand_AI_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      Character;                                               // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ErrandIntroActionHelper;                                 // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UEnvQuery*                                           ErrandDestinationQuery;                                  // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   ErrandIntro;                                             // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ErrandIntroAnimSetName;                                  // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IntroErrandMaxFacingAngle;                               // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IntroErrandMaxDistanceFromTarget;                        // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            IntroErrandKnowledgebaseRequirement;                     // 0x0108(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		class UActionDefinition*                                   Task;                                                    // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   ReturnToTarget;                                          // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CurrentAction;                                           // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       TaskActionHelper;                                        // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ReturnToTargetActionHelper;                              // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		TArray<class UCharacterActionRequestHelper*>               BackgroundActionHelpers;                                 // 0x0178(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay
		class UKnowledgeBaseComponent*                             KB;                                                      // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class ADICharacter*                                        CombatTarget;                                            // 0x0190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCombatAggroComponent*                               Aggro;                                                   // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       RememberCurrentTarget;                                   // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BUB5[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIAIController*                                     Controller;                                              // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviourModifierComponent*                         BehaviourModifierComponent;                              // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class FString                                              DebugTagString;                                          // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash
		class UBP_ActionParams_CombatErrand_AI_C*                  ErrandParams;                                            // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideMaxDistanceOnReturnToTarget;                     // 0x01D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EH2B[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDistanceToTargetToEndAction;                          // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCardDealerComponent*                                CardDealerComponent;                                     // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EErrandStates                                              CurrentState;                                            // 0x01E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T87F[0x7];                                   // 0x01E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EErrandStates, EErrandStates>                         StateTransitions;                                        // 0x01F0(0x0050) Edit, BlueprintVisible
		ECharacterActionEndReason                                  EndActionReason;                                         // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1WYS[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EErrandStates, class UActionDefinition*>              FireAndForgetActions;                                    // 0x0248(0x0050) Edit, BlueprintVisible
		TMap<EErrandStates, struct FSKnowledgeBaseFacts>           FactKeysToApplyWithAction;                               // 0x0298(0x0050) Edit, BlueprintVisible
		unsigned char                                              KnowledgeBaseFactsAdded[0x50];                           // 0x02E8(0x0050) UNKNOWN PROPERTY: SetProperty
		class UCharacterActionRequestHelper*                       BackgroundAction;                                        // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        FireAndForgetActionTimer;                                // 0x0340(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<EErrandStates, struct FCardDealerCounterModification> EndStateCounterModification;                             // 0x0348(0x0050) Edit, BlueprintVisible
		bool                                                       TaskStarted;                                             // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TryRemoveReturnToTargetFact();
		void TryAddReturnToTargetFact();
		void ModifyCounterBasedOnState();
		bool IsActionRunning(const class FName& ActionName);
		void ClearFireAndForgetActionDelegates();
		void OnFireAndForgetActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnFireAndForgetActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnFireAndForgetActionCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void RerequestFireAndForgetAction();
		void RemoveAllLifetimeFactsAdded();
		void UpdateLifetimeFacts();
		void OnReturnToTargetEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnReturnToTargetResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnReturnToTargetCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void UnbindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnCancelledDelegate, const class FScriptDelegate& OnResolvedDelegate, const class FScriptDelegate& OnEndedDelegate);
		void BindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnCancelledDelegate, const class FScriptDelegate& OnResolvedDelegate, const class FScriptDelegate& OnEndedDelegate);
		void OnTaskEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnTaskResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnTaskCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void OnErrandIntroEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnErrandIntroResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnErrandIntroCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void CancelActiveQuery();
		void OnErrandDestinationQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void RequestStateBasedFireAndForgetAction();
		void ApplyStateCosmeticEffects();
		void GoToNextState();
		void GoToState(EErrandStates NewState);
		bool GetNextState(EErrandStates* NextState);
		void EndReturnToTarget();
		void EndTask();
		void EndConditionsCheck();
		void EndState();
		void BeginReturnToTarget();
		void BeginTask();
		void BeginConditionsCheck();
		void BeginState();
		bool OnBeginEarly();
		void RememberTargetModifier(bool AddModifier);
		bool ErrandIntroConditions();
		void EndErrandIntro();
		void BeginErrandIntro();
		ECharacterActionEndReason GetReason(const struct FCharacterActionOnEndParams& CharacterActionOnEndParams, const class FString& ActionName);
		void RequestSubAction(class UCharacterActionRequestHelper* ActionHelper, class UActionDefinition* Definition, class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_Base_CombatErrand_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
