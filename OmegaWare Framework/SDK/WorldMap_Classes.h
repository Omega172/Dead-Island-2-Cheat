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
	 * Class WorldMap.WorldAlignmentInterface
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class AWorldAlignmentInterface : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WorldMap.WorldMapStaticMeshComponent
	 * Size -> 0x0010 (FullSize[0x05F0] - InheritedSize[0x05E0])
	 */
	class UWorldMapStaticMeshComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_HY1N[0x10];                                  // 0x05E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WorldMap.WorldMapInstancedActor
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class AWorldMapInstancedActor : public AActor
	{
	public:
		TArray<class UWorldMapStaticMeshComponent*>                MeshComponents;                                          // 0x02B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WorldMap.WorldMapActor
	 * Size -> 0x00A0 (FullSize[0x0350] - InheritedSize[0x02B0])
	 */
	class AWorldMapActor : public AActor
	{
	public:
		class UWorldMapInstanceDatabase*                           InstanceDatabase;                                        // 0x02B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepOriginalScale;                                      // 0x02B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EG5E[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WorldMapScale;                                           // 0x02BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinCameraDistance;                                       // 0x02C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCameraDistance;                                       // 0x02C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MapMaterial;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWorldMapReady;                                         // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UBoxComponent*                                       CameraFocusBounds;                                       // 0x02E0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDebugDrawCameraBounds;                                  // 0x02E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3JNR[0x67];                                  // 0x02E9(0x0067) MISSED OFFSET (PADDING)

	public:
		void RevealMeshesWithID(const class FName& ID, bool bRevealedByLocalPlayer);
		bool IsMapVisible();
		class AWorldMapActor* GetWorldMapActor(class UObject* WorldContextObject);
		class USceneComponent* GetCameraFocusComponent();
		struct FBox GetCameraFocusBounds();
		class UCameraComponent* GetCameraComponent();
		void ExitWorldMap();
		void EnterWorldMap();
		void CreateWorldMap();
		void CleanWorldMap();
		void BeginDestroyMap();
		void BeginCreatedMap();
		static UClass* StaticClass();
	};

	/**
	 * Class WorldMap.WorldMapInstanceDatabase
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UWorldMapInstanceDatabase : public UDataAsset
	{
	public:
		TArray<struct FWorldMapInstanceDatabaseEntry>              Entries;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
