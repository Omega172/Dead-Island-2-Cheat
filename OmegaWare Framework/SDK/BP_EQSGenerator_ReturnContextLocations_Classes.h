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
	 * BlueprintGeneratedClass BP_EQSGenerator_ReturnContextLocations.BP_EQSGenerator_ReturnContextLocations_C
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UBP_EQSGenerator_ReturnContextLocations_C : public UEnvQueryGenerator_BlueprintBase
	{
	public:
		void DoItemGeneration(TArray<struct FVector> ContextLocations);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
