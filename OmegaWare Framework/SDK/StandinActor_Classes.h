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
	 * Class StandinActor.StandInMeshActor
	 * Size -> 0x0060 (FullSize[0x0310] - InheritedSize[0x02B0])
	 */
	class AStandInMeshActor : public AActor
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      SubActors;                                               // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     SubObjects;                                              // 0x02C8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FName                                                BuildKey;                                                // 0x02D8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0YW[0x4];                                   // 0x02E0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ID;                                                      // 0x02E4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDirty;                                                  // 0x02F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YDH4[0x1B];                                  // 0x02F5(0x001B) MISSED OFFSET (PADDING)

	public:
		class UStaticMeshComponent* GetStaticMeshComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class StandinActor.TestActor
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class ATestActor : public AActor
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
