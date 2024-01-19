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
	 * BlueprintGeneratedClass BP_ActionParams_BackAway_AI.BP_ActionParams_BackAway_AI_C
	 * Size -> 0x0138 (FullSize[0x0170] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_BackAway_AI_C : public UCustomActionParamsBase
	{
	public:
		struct FKnowledgeBaseExpression                            MinimumDurationExpression;                               // 0x0038(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            MaximumDurationExpression;                               // 0x0070(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash
		class UActionCard*                                         RevelantPeekedCard;                                      // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       LifetimeFacts;                                           // 0x00B0(0x0010) Edit, BlueprintVisible
		class FName                                                MoveTargetName;                                          // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQuery*                                           EQSQuery;                                                // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCardDealerCounterModification                      CounterSetAndModifiyOnFailedToMove;                      // 0x00D0(0x00A0) Edit, BlueprintVisible

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
