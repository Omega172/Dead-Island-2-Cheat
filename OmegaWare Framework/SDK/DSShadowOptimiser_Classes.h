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
	 * Class DSShadowOptimiser.ShadowOptimiserBuildVolume
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class AShadowOptimiserBuildVolume : public AActor
	{
	public:
		class UShadowOptimiserBuildVolumeComponent*                BuildVolumeComponent;                                    // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSShadowOptimiser.ShadowOptimiserBuildVolumeComponent
	 * Size -> 0x0008 (FullSize[0x0530] - InheritedSize[0x0528])
	 */
	class UShadowOptimiserBuildVolumeComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_0ZUZ[0x8];                                   // 0x0528(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
