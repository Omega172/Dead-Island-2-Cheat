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
	 * Class ApexDestruction.DestructibleActor
	 * Size -> 0x0018 (FullSize[0x02C8] - InheritedSize[0x02B0])
	 */
	class ADestructibleActor : public AActor
	{
	public:
		class UDestructibleComponent*                              DestructibleComponent;                                   // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnActorFracture;                                         // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleComponent
	 * Size -> 0x0100 (FullSize[0x0930] - InheritedSize[0x0830])
	 */
	class UDestructibleComponent : public USkinnedMeshComponent
	{
	public:
		bool                                                       bFractureEffectOverride : 1;                             // 0x0830(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKGQ[0x7];                                   // 0x0831(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFractureEffect>                             FractureEffects;                                         // 0x0838(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableHardSleeping;                                     // 0x0848(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UFA[0x3];                                   // 0x0849(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LargeChunkThreshold;                                     // 0x084C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnComponentFracture;                                     // 0x0850(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OB6[0xD0];                                  // 0x0860(0x00D0) MISSED OFFSET (PADDING)

	public:
		void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
		class UDestructibleMesh* GetDestructibleMesh();
		void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
		void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleFractureSettings
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UDestructibleFractureSettings : public UObject
	{
	public:
		int32_t                                                    CellSiteCount;                                           // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFractureMaterial                                   FractureMaterialDesc;                                    // 0x002C(0x0024) Edit, Transient, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31SA[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VoronoiSites;                                            // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    OriginalSubmeshCount;                                    // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98QD[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDestructibleChunkParameters>                ChunkParameters;                                         // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ApexDestruction.DestructibleMesh
	 * Size -> 0x0098 (FullSize[0x0448] - InheritedSize[0x03B0])
	 */
	class UDestructibleMesh : public USkeletalMesh
	{
	public:
		struct FDestructibleParameters                             DefaultDestructibleParameters;                           // 0x03B0(0x0088) Edit, NativeAccessSpecifierPublic
		TArray<struct FFractureEffect>                             FractureEffects;                                         // 0x0438(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
