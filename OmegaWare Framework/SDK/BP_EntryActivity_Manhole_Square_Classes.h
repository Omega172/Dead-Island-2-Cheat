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
	 * BlueprintGeneratedClass BP_EntryActivity_Manhole_Square.BP_EntryActivity_Manhole_Square_C
	 * Size -> 0x0010 (FullSize[0x0868] - InheritedSize[0x0858])
	 */
	class ABP_EntryActivity_Manhole_Square_C : public ABP_BaseEntryActivity_Manhole_C
	{
	public:
		ESpawnGrateMesh                                            Variant;                                                 // 0x0858(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CM5P[0x7];                                   // 0x0859(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_DataAsset_SpawnMeshVariant_Grate_C*              GrateMeshConfig;                                         // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
