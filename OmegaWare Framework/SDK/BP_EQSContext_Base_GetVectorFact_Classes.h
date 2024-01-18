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
	 * BlueprintGeneratedClass BP_EQSContext_Base_GetVectorFact.BP_EQSContext_Base_GetVectorFact_C
	 * Size -> 0x000C (FullSize[0x003C] - InheritedSize[0x0030])
	 */
	class UBP_EQSContext_Base_GetVectorFact_C : public UEnvQueryContext_BlueprintBase
	{
	public:
		struct FKnowledgeBaseFactKey                               VectorFact;                                              // 0x0030(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
