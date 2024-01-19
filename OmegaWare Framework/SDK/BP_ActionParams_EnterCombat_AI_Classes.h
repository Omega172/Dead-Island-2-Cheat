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
	 * BlueprintGeneratedClass BP_ActionParams_EnterCombat_AI.BP_ActionParams_EnterCombat_AI_C
	 * Size -> 0x0023 (FullSize[0x0114] - InheritedSize[0x00F1])
	 */
	class UBP_ActionParams_EnterCombat_AI_C : public UBP_ActionParams_AnimSet_AI_C
	{
	public:
		bool                                                       ApplyEngagementRingsMovementMode;                        // 0x00F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_JSUV[0x6];                                   // 0x00F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKnowledgeBaseExpression>                    CancellationExpressions;                                 // 0x00F8(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		struct FKnowledgeBaseFactKey                               AttackRulesCommitFact;                                   // 0x0108(0x000C) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
