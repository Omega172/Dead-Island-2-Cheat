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
	 * BlueprintGeneratedClass BP_DataAsset_SpawnMeshVariant_Grate.BP_DataAsset_SpawnMeshVariant_Grate_C
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UBP_DataAsset_SpawnMeshVariant_Grate_C : public UValidatedDataAsset
	{
	public:
		TMap<ESpawnGrateMesh, struct FSGrateMeshData>              MeshVariants;                                            // 0x0030(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetErrorsToOutput(TArray<class FText>* Errors);
		bool IsValidInternal();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
