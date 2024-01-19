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
	 * BlueprintGeneratedClass BP_EQSGenerator_NavTraceFromQuerierToContext.BP_EQSGenerator_NavTraceFromQuerierToContext_C
	 * Size -> 0x0004 (FullSize[0x0084] - InheritedSize[0x0080])
	 */
	class UBP_EQSGenerator_NavTraceFromQuerierToContext_C : public UEnvQueryGenerator_BlueprintBase
	{
	public:
		float                                                      ProjectionExtent;                                        // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool ProjectPoint(const struct FVector& PointToProject, class ADIAIController* Controller, struct FVector* ProjectedLocation);
		void DoItemGeneration(TArray<struct FVector> ContextLocations);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
