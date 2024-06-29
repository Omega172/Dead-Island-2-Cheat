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
	 * BlueprintGeneratedClass BP_ActionParams_StateBuildUp_AI.BP_ActionParams_StateBuildUp_AI_C
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_StateBuildUp_AI_C : public UCustomActionParamsBase
	{
	public:
		float                                                      TimeBetweenEachState;                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_SF9U[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCosmeticEffectsDefinition*>                  StateEffects;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class UClass*                                              WarningIcon;                                             // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               FactToApplyOnBuildUpFinished;                            // 0x0058(0x000C) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               DeathInterruptionFact;                                   // 0x0064(0x000C) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
