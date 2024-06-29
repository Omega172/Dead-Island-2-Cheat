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
	 * BlueprintGeneratedClass BP_PerkEffect_ManageStateAbility.BP_PerkEffect_ManageStateAbility_C
	 * Size -> 0x0198 (FullSize[0x01F8] - InheritedSize[0x0060])
	 */
	class UBP_PerkEffect_ManageStateAbility_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIAICharacter*                                      OwnerAI;                                                 // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStateTransmitterComponent*                          StateTransmitterComponent;                               // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KBComponent;                                             // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionComponent*                           CharacterActionComponent;                                // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionDefinition*                                   StateAbilityAction;                                      // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartEnabled;                                            // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4LBN[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               StateDrivenFact;                                         // 0x00A4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		ETransmittableStatus                                       TransmitterStatusType;                                   // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QFY5[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      DamageTypesThatActivateEffect;                           // 0x00B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FKnowledgeBaseExpression                            DamageTypesThatActivateEffectBlockExpression;            // 0x00C8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class FName>                                        AlteredBoneNames;                                        // 0x0100(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UCosmeticEffectsDefinition*>                  AlteredBoneCosmeticEffects;                              // 0x0110(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             TransmitterLocationOffset;                               // 0x0120(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               StateAbilityActionGUID;                                  // 0x012C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VHA4[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            StateDrivenFactExpression;                               // 0x0140(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FString                                              CustomDebugTag;                                          // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       BlockActivation;                                         // 0x0188(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y9UM[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DebugTagString;                                          // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class UClass*, EAccumulatingEffectType>               ConditionalAccumulatingTypesThatActivateEffect;          // 0x01A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UStatusEffectComponent*                              StatusComponent;                                         // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAccumulatingEffectsStateChange(class AActor* OwningActor, class UAccumulatingEffectInstance* EffectInstance);
		void UnbindAccumulatingEffectsStateChangeDelegate();
		void BindAccumulatingEffectsStateChangeDelegate();
		void AddDSLog(const class FString& LogText, EDSLogVerbosity Verbosity, bool Condition);
		void SetupDistractionLogger();
		void UnbindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnCancelledDelegate, const class FScriptDelegate& OnResolvedDelegate, const class FScriptDelegate& OnEndDelegate);
		void BindActionDelegates(class UCharacterActionRequestHelper* ActionHelper, const class FScriptDelegate& OnCancelledDelegate, const class FScriptDelegate& OnResolvedDelegate, const class FScriptDelegate& OnEndDelegate);
		struct FKnowledgeBaseExpression ConstructStateDrivenExpression();
		void OnActivateBlockExpressionChanged(bool bResult);
		void OnStateAbilityEmpoweredFactChanged(bool bResult);
		void UnbindOnActionEnded();
		void OnStateAbilityActionOnResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void OnStateAbilityActionOnCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void UnbindAnyImpactDelegate();
		void BindAnyImpactDelegate();
		void OnStateAbilityActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnAnyImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void RequestStateAbilityAction();
		void OnStart(const struct FPerkEffectStartParams& Params);
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void ExecuteUbergraph_BP_PerkEffect_ManageStateAbility(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
