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
	 * BlueprintGeneratedClass BP_Action_WaitMovingEQS_CannotReachTarget_AI.BP_Action_WaitMovingEQS_CannotReachTarget_AI_C
	 * Size -> 0x0030 (FullSize[0x0368] - InheritedSize[0x0338])
	 */
	class UBP_Action_WaitMovingEQS_CannotReachTarget_AI_C : public UBP_Action_WaitMovingEQS_AI_C
	{
	public:
		float                                                      MaxDistanceFromCombatTargetWhenStatic;                   // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistanceFromCombatTargetWhenMoving;                   // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_WaitMovingEQS_CannotReachTarget_AI_C* CannotReachTargetParams;                                 // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EQSFailureCount;                                         // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxSuccessiveQueryFailures;                              // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinVerticalDot;                                          // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxVerticalDot;                                          // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObserverComponent*                                  ObserverComponent;                                       // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObservableComponent*                                CombatTargetsObservableComponent;                        // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool ShouldAddAgainstWallFact();
		void OnCombatTargetChanged(class UCombatTargetComponent* NewTarget);
		bool CastAndStoreParams(class UCustomActionParamsBase* BaseParams);
		bool CanSeeCombatTarget();
		bool CanSkipMovementConditionsBasedOnCounters();
		void RangedCombatParams();
		void MeleeCombatParams();
		void CombatMovementParams();
		void IsWithinAttackRange(float ZDistanceFromCombatTarget, bool* IsWithinRange, bool* MovementRequired);
		bool IsVerticalDotWithinLimits(float ZDistanceFromCombatTarget, float MinDot, float MaxDot);
		bool CanSkipMovementConditions(EWaitMovingEQSStates MoveTargetType, bool IsOffNavmesh);
		bool IsOwnerOnNavmeshEdgeFacingCombatTarget();
		float GetDistanceToSearchLocation();
		bool OnBeginEarly();
		EWaitMovingEQSStates GetMoveTargetState(bool IsOffNavmesh);
		bool IsCombatMovementRequired(float ZDistanceFromCombatTarget, EWaitMovingEQSCombattHeightLevel CombatTargetsHeightLevel);
		bool IsWithinRangedRange(float ZDistanceFromCombatTarget, bool* MovementRequired);
		float GetVerticalDistanceToSearchLocation();
		bool IsWithinMeleeRange(float ZDistanceFromCombatTarget);
		float GetAbsoluteVerticalDistanceToSearchLocation();
		float GetMaxDistanceAllowedFromSearchLocation(float ZDistanceFromCombatTarget, float HardDistanceLimit, bool OwnerNeedToMove);
		void SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
