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
	 * BlueprintGeneratedClass BP_ActionParams_Distraction_AddLifetimeFacts_AI.BP_ActionParams_Distraction_AddLifetimeFacts_AI_C
	 * Size -> 0x001C (FullSize[0x010C] - InheritedSize[0x00F0])
	 */
	class UBP_ActionParams_Distraction_AddLifetimeFacts_AI_C : public UDistractionActionParams
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       LifetimeFacts;                                           // 0x00F0(0x0010) Edit, BlueprintVisible
		struct FKnowledgeBaseFactKey                               StimLocationFact;                                        // 0x0100(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
