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
	 * BlueprintGeneratedClass BP_PerkEffect_MutatorTransformation.BP_PerkEffect_MutatorTransformation_C
	 * Size -> 0x00E8 (FullSize[0x0138] - InheritedSize[0x0050])
	 */
	class UBP_PerkEffect_MutatorTransformation_C : public UInstancedPerkEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCardDealerComponent*                                CardDealerComponent;                                     // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class ADIAICharacter*                                      Character;                                               // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            TransformWarmUpConditionExpression;                      // 0x0070(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FTimerHandle                                        WarmUpTimer;                                             // 0x00A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            WarmUpTimeExpression;                                    // 0x00B0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            InstantTransformConditionExpression;                     // 0x00E8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FGuid                                               TransformID;                                             // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       TransformActionHelper;                                   // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnTransformationRequestCancelled(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& Params);
		void OnActionResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params);
		void UnbindOnTransformationRequestFailed();
		void RequestTransformAction();
		void OnTransformWarmUpConditionChanged(bool bResult);
		void OnStart(const struct FPerkEffectStartParams& Params);
		void OnEnd(const struct FPerkEffectEndParams& Params);
		void OnInstantTransformConditionChanged(bool bResult);
		void OnActionFailedToBegin();
		void ExecuteUbergraph_BP_PerkEffect_MutatorTransformation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
