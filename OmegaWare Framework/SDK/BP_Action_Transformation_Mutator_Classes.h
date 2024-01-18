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
	 * BlueprintGeneratedClass BP_Action_Transformation_Mutator.BP_Action_Transformation_Mutator_C
	 * Size -> 0x0034 (FullSize[0x01C4] - InheritedSize[0x0190])
	 */
	class UBP_Action_Transformation_Mutator_C : public UAIMutatorTransformationAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0190(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_AI_C*                                       AIPawn;                                                  // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               StabilityDecrementGUID;                                  // 0x01A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               DamageModifierGUID;                                      // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttributeRegenDuration;                                  // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddAggressiveStatusEffect();
		void RemoveStopActionsFactWithDelay();
		void AddStopActionsFact();
		void ResetDeckContext();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void TriggerTransformationPulse();
		void ApplyPerkFromPool();
		void ApplyInvulnerability();
		void RemoveInvulnerability();
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void ExecuteUbergraph_BP_Action_Transformation_Mutator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
