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
	 * BlueprintGeneratedClass BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI.BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C
	 * Size -> 0x00D0 (FullSize[0x06F0] - InheritedSize[0x0620])
	 */
	class UBP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI_C : public UBP_Action_SpawnActivity_CannotReachTargetBangOnSurface_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCombatMovementComponent*                            CombatMovementMode;                                      // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            AICalmCancellationExpression;                            // 0x0630(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FTimerHandle                                        CardConditionsCheckTimer;                                // 0x0668(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       PsudoSightCheckCanSeePlayer;                             // 0x0670(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CloseToCombatTarget;                                     // 0x0671(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IARH[0x6];                                   // 0x0672(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            AllowCRTBehaviourExpression;                             // 0x0678(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FTimerHandle                                        CalmExitTimer;                                           // 0x06B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            CombatConditionsExpression;                              // 0x06B8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void ApplyDeckCounterModification(const struct FCardDealerCounterModification& Modification);
		void OnCombatConditionsExpressionChanged(bool bResult);
		void OnAllowCRTBehaviourExpressionChanged(bool bResult);
		void OnPlayerNoLongerClose(bool bResult);
		bool IsCombatTargetWithinFacingAngleOfActivity();
		bool IsSelectedCardsPeeked();
		float GetActionEndDelay(const struct FKnowledgeBaseExpression& Expression);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void CardConditionsCheck();
		void ExecuteUbergraph_BP_Action_LaunchActivity_CannotReachTarget_BangOnSurface_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
