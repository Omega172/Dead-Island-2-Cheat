﻿#pragma once

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
	 * Class DSOcclusion.Blocker
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class ABlocker : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSOcclusion.RuntimeBlocker
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class ARuntimeBlocker : public AActor
	{
	public:
		class URuntimeBlockerComponent*                            BlockerComponent;                                        // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSOcclusion.BlockerComponent
	 * Size -> 0x0020 (FullSize[0x0550] - InheritedSize[0x0530])
	 */
	class UBlockerComponent : public UPrimitiveComponent
	{
	public:
		class UMaterial*                                           Material;                                                // 0x0530(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CornersLocal;                                            // 0x0538(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5MNC[0x8];                                   // 0x0548(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSOcclusion.RuntimeBlockerComponent
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class URuntimeBlockerComponent : public UActorComponent
	{
	public:
		TArray<struct FVector>                                     Corners;                                                 // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSOcclusion.DSOcclusionLevelSettings
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class ADSOcclusionLevelSettings : public AActor
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
