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
	 * Size -> 0x0000 (FullSize[0x0530] - InheritedSize[0x0530])
	 */
	class UShadowOptimiserBuildVolumeComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
