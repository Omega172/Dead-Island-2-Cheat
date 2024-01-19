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
	 * BlueprintGeneratedClass BP_PerkEffect_ManageStateBuildUpEffect.BP_PerkEffect_ManageStateBuildUpEffect_C
	 * Size -> 0x0108 (FullSize[0x0168] - InheritedSize[0x0060])
	 */
	class UBP_PerkEffect_ManageStateBuildUpEffect_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      Character;                                               // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        BuildUpCooldownTimer;                                    // 0x0078(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCustomActionParamsBase*                             BuildUpActionDefinitionParamsRef;                        // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       BuildUpActionHelper;                                     // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DebugTagString;                                          // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   BuildUpActionDefinition;                                 // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionComponent*                           CharacterActionComponent;                                // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            BeginBuildUpCondition;                                   // 0x00B8(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            BuildUpEffectHasEndedExpression;                         // 0x00F0(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UCosmeticEffectsDefinition*>                  StateEffects;                                            // 0x0128(0x0010) Edit, BlueprintVisible
		float                                                      EnterCombatWarmUp;                                       // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PostBuildUpTriggerCooldown;                              // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBetweenEachState;                                    // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MQGV[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WarningIcon;                                             // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               FactToApplyOnBuildUpFinished;                            // 0x0150(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               DeathInterruptionFact;                                   // 0x015C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void ConstructParams();
		void ResetBuildUpTimer(float NewTime);
		void OnCombatStateChange(ECosmeticCombatState NewState);
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void BeginBuildUpWarmUpConditionsMet(bool Result);
		void BuildUpEffectHasEnded(bool bResult);
		void RequestShockingBuildUp();
		void OnStart(const struct FPerkEffectStartParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_ManageStateBuildUpEffect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
