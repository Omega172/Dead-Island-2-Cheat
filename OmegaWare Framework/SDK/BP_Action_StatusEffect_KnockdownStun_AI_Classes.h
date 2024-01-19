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
	 * BlueprintGeneratedClass BP_Action_StatusEffect_KnockdownStun_AI.BP_Action_StatusEffect_KnockdownStun_AI_C
	 * Size -> 0x00A0 (FullSize[0x01F8] - InheritedSize[0x0158])
	 */
	class UBP_Action_StatusEffect_KnockdownStun_AI_C : public UBP_Action_StatusEffect_Stun_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0158(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<EAccumulatingEffectType>                            AccumulatingEffectsWithImmunityDuringAction;             // 0x0160(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuid                                               AccumulationImmunityGUID;                                // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            StartStandUpExpression;                                  // 0x0180(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FGuid                                               StabilityBlockDecrementGUID;                             // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStabilityComponent*                                 Stability;                                               // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               StabilityBlockRechargeGUID;                              // 0x01D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RechargeDelayTimer;                                      // 0x01E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      ZeroStabilityDuration;                                   // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KnockdownDuration;                                       // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KnockdownDurationAccelerationScalar;                     // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumRechargeDuration;                                 // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnBeginEarly();
		void OnInterruptionConditionsMet();
		void ActivateStabilityRecharge();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnStabilityBarFullyRecharged(bool bResult);
		void ExecuteUbergraph_BP_Action_StatusEffect_KnockdownStun_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
