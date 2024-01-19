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
	 * BlueprintGeneratedClass BP_ActionParams_AnimSet_CannotReachTarget_AI.BP_ActionParams_AnimSet_CannotReachTarget_AI_C
	 * Size -> 0x00CB (FullSize[0x01BC] - InheritedSize[0x00F1])
	 */
	class UBP_ActionParams_AnimSet_CannotReachTarget_AI_C : public UBP_ActionParams_AnimSet_AI_C
	{
	public:
		unsigned char                                              UnknownData_8FPV[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CardConditionsCheckFrequencey;                           // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UCard*>                                       PeekedCards;                                             // 0x00F8(0x0010) Edit, BlueprintVisible
		struct FCardDealerCounterModification                      DeckCounterModificationOnActionEnd;                      // 0x0108(0x00A0) Edit, BlueprintVisible
		TArray<struct FKnowledgeBaseFactKey>                       AttackRulesTriggerFacts;                                 // 0x01A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      MinimumAcceptableDistanceInFrontOwner;                   // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
