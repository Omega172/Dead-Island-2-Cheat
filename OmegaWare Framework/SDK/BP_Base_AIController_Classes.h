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
	 * BlueprintGeneratedClass BP_Base_AIController.BP_Base_AIController_C
	 * Size -> 0x0170 (FullSize[0x06C8] - InheritedSize[0x0558])
	 */
	class ABP_Base_AIController_C : public ADIAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0558(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStimReceiverComponent*                              StimReceiver;                                            // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBehaviorTree*                                       BT_Main;                                                 // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       BT_Combat;                                               // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       BT_CombatInit;                                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_AI_C*                                       PawnAsBaseAI;                                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       BT_Attacks;                                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       BT_Idle;                                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ValueOfStopExpression;                                   // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7JQ6[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       BT_OuterRing;                                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       BT_Alert;                                                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       BT_Search;                                               // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       BT_EnterCombat;                                          // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             PawnKB;                                                  // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       CombatDateTimeFacts;                                     // 0x05C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ADICharacter*                                        CombatTarget;                                            // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CombatTargetFactIncreased;                               // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CXHS[0x7];                                   // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKnowledgeBaseFactKey>                       CombatTargetAggressorIdentifiers;                        // 0x05E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseFactKey>                       CombatTargetAggressorFacts;                              // 0x05F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       CrawlerAggressorFactIncremented;                         // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NonCrawlerAggressorFactIncremented;                      // 0x0609(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TVUS[0x2];                                   // 0x060A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               SelectedCrawlerIncrementFact;                            // 0x060C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<ECombatState, struct FSEnemyKnowledgeBaseFacts>       LifetimeFactsBasedCombatState;                           // 0x0618(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              KnowledgeBaseFactsAdded[0x50];                           // 0x0668(0x0050) UNKNOWN PROPERTY: SetProperty
		class FScriptMulticastDelegate                             OnPossessedDelegate;                                     // 0x06B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ResetCannotReachTargetCounters();
		bool GetAllFactToApplyForThisState(ECombatState State);
		void AddLifetimeFactsBasedCombatState(ECombatState CurrentState);
		void CombatState();
		void SearchState();
		void AlertState();
		void CalmState();
		void OnCombatStateChanged(ECombatState NewState);
		void OnCrawlerExpressionChanged(bool bResult);
		void EndMaintainingAggressorFacts();
		void BeginMaintainingAggressorFacts();
		void OnDesiredEngagementRingIsInner(bool Result);
		void ResetCombatCounters();
		void DetermineIfVulnerableDebug(const class FString& PlayerWeaponClass, bool* Result, bool* UnknownWeaponClass);
		void RemoveAllDateTimeFacts();
		void RemoveDateTimeFacts(const class FString& Containing);
		void RemoveCombatDateTimeFactListeners();
		void BeginAttackRulesWarmUp(const struct FKnowledgeBaseFactKey& FactKey);
		void UpdateDateTimeFacts(const struct FKnowledgeBaseFactKey& BaseFactKey);
		void UpdateTargetOuterRingAggressorsFact(bool Result);
		void OnStopExpressionChanged(bool InValue);
		void SetSubTrees();
		void GetMovementLineColour(struct FLinearColor* Color);
		void RegisterKnowledgeBaseCounter(const class FName& FactName);
		void SetSubtree(const class FName& BlackboardKey, class UBehaviorTree* BehaviourTree);
		void MiscDebugDraw();
		void ReceivePossess(class APawn* PossessedPawn);
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void PerformMiscDebugDraw(float DeltaTime);
		void OnCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		void OnStopCombatTimers(bool bResult);
		void InnerRingEntered(bool bResult);
		void AddCombatDateTimeFactListeners();
		void OuterRingEntered(bool bResult);
		void EitherRingEntered(bool bResult);
		void ExecuteUbergraph_BP_Base_AIController(int32_t EntryPoint);
		void OnPossessedDelegate__DelegateSignature(class APawn* NewPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
