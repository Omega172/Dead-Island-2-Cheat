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
	 * BlueprintGeneratedClass BP_Action_GroupDistraction_Conditions_AI.BP_Action_GroupDistraction_Conditions_AI_C
	 * Size -> 0x0099 (FullSize[0x0141] - InheritedSize[0x00A8])
	 */
	class UBP_Action_GroupDistraction_Conditions_AI_C : public UDistractionAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCharacterActionRequestHelper*                       StateMachineActionHelper;                                // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_GroupDistraction_StateMachine_AI_C* DistractionActionParams;                                 // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_Distraction_GroupCoordinator_C*                 GroupCoordinatorComponent;                               // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAICharacter*                                      Character;                                               // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAIController*                                     Controller;                                              // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               StateMachineActionID;                                    // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LifetimeFactsAdded;                                      // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D3HM[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPC_ThresholdTracking_AI_C*                         ThresholdTrackingComponent;                              // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGuid>                                       ThresholdTrackingIDs;                                    // 0x0100(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DebugTagString;                                          // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       DamageThresholdReached;                                  // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8PHP[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPC_Base_StimEmitter_C*                             StimEmitterComponent;                                    // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_Base_Distraction_AI_C*                          DistractionComponent;                                    // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugEnabled;                                            // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool CancellationConditionExpressionsMet();
		void AddDSLog(const class FString& DebugText, EDSLogVerbosity Verbosity, bool Condition);
		void SetupDistractionLogger();
		void StartCooldown();
		bool IsStimOffCooldown();
		void RemoveThresholdTrackingEntry();
		void OnInterruptionConditionsMet(bool DamageRequirementMet, bool StabilityDamageMet);
		void SetupInterruptionEntries();
		void RemoveSelfFromDistractionCoordinator();
		void OnTryAddParticipantCompleteDelegate(bool ParticipantAdded);
		void AddLifetimeFactsWhenConditionsSucceed();
		void RemoveLifetimeFactsWhenConditionsSucceeded();
		void UnbindCancellationExpressions();
		void OnCancellationExpressionChanged(bool bResult);
		void BindCancellationExpressions();
		void UnbindAndEndDistractionStateMachineAction();
		void RequestStateMachineAction();
		void OnStateMachineActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		bool OnBeginEarly();
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_GroupDistraction_Conditions_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
