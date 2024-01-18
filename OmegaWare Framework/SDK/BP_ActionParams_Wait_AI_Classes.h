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
	 * BlueprintGeneratedClass BP_ActionParams_Wait_AI.BP_ActionParams_Wait_AI_C
	 * Size -> 0x0181 (FullSize[0x01B9] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_Wait_AI_C : public UCustomActionParamsBase
	{
	public:
		TArray<struct FCardDealerCounterModification>              CardCounterModificationOnBegin;                          // 0x0038(0x0010) Edit, BlueprintVisible
		struct FKnowledgeBaseExpression                            MinimumDurationExpression;                               // 0x0048(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash
		class UAttributeType*                                      MinimumDurationModifier;                                 // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            MaximumDurationExpression;                               // 0x0088(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash
		class UAttributeType*                                      MaximumDurationModifier;                                 // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TimingOutCountsAsFailure;                                // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GF95[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCardDealerCounterModification                      OnMaxTimeElapsedDeckCounterModification;                 // 0x00D0(0x00A0) Edit, BlueprintVisible
		float                                                      PeekedCardCheckInterval;                                 // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KIZN[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActionCard*                                         SelfPeekedCard;                                          // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UCard*>                                       RevelantPeekedCards;                                     // 0x0180(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		struct FKnowledgeBaseFactKey                               AttackRulesFactToSetOnBegin;                             // 0x0190(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               AttackRulesFactToSetOnEnd;                               // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       LifetimeFacts;                                           // 0x01A8(0x0010) Edit, BlueprintVisible
		bool                                                       RequiresCombatTarget;                                    // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
