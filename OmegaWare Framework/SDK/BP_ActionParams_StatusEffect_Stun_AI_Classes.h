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
	 * BlueprintGeneratedClass BP_ActionParams_StatusEffect_Stun_AI.BP_ActionParams_StatusEffect_Stun_AI_C
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_StatusEffect_Stun_AI_C : public UCustomActionParamsBase
	{
	public:
		class FName                                                IntoAnimSetToResolve;                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                OutroAnimSetToResolve;                                   // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       KnowledgebaseFactsToApply;                               // 0x0048(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		struct FRandomStream                                       AnimSetStream;                                           // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn
		float                                                      AnimPlayRate;                                            // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_WYDG[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        ResolvedAnim;                                            // 0x0068(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
