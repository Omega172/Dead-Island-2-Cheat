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
	 * Class ContentPool.AssetRootPool
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UAssetRootPool : public UObject
	{
	public:
		unsigned char                                              UnknownData_W1L4[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAssetPoolDefinition*                                Definition;                                              // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UAssetSubPool*>                               SubPools;                                                // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NGC5[0x70];                                  // 0x0098(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.AssetSubPool
	 * Size -> 0x01C0 (FullSize[0x01E8] - InheritedSize[0x0028])
	 */
	class UAssetSubPool : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZTMY[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAssetSubPoolDefinition*                             Definition;                                              // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_URD7[0x130];                                 // 0x00A0(0x0130) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomStream                                       RandomStream;                                            // 0x01D0(0x0008) Net, ZeroConstructor, NoDestructor, NativeAccessSpecifierPrivate
		TArray<struct FPrimaryAssetId>                             LoadedAssets;                                            // 0x01D8(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate

	public:
		struct FAssetPoolSelectResult SelectAssetWithSeed(int32_t Seed);
		struct FAssetPoolSelectResult SelectAsset();
		struct FAssetPoolSelectResult PreCacheAssetById(const struct FPrimaryAssetId& AssetId, bool bRequiredContent);
		void PreCacheAssetAction(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		bool PreCacheAsset();
		void OnRep_LoadedAssets();
		bool HasAssetAvalible();
		void GetAssetWithSeedAction(int32_t Seed, const class FScriptDelegate& OnItem, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		struct FAssetPoolItemHandle GetAssetWithSeed(int32_t Seed);
		void GetAssetByAssetIdAction(const struct FAssetPoolSelectResult& AssetId, const class FScriptDelegate& OnItem, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		struct FAssetPoolItemHandle GetAssetByAssetId(const struct FAssetPoolSelectResult& AssetId);
		struct FAssetPoolItemHandle GetAsset();
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.AssetPoolDefinition
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAssetPoolDefinition : public UDataAsset
	{
	public:
		struct FPrimaryAssetType                                   Type;                                                    // 0x0030(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     Limit;                                                   // 0x0038(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     GarbageLimit;                                            // 0x003C(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UAssetSubPoolDefinition*>                     SubPools;                                                // 0x0040(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.AssetSubPoolDefinition
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UAssetSubPoolDefinition : public UDataAsset
	{
	public:
		class UAssetSubPoolDefinition*                             FallbackPool;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     Limit;                                                   // 0x0040(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bReplicateLoading;                                       // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferLoading;                                          // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixedSeed;                                              // 0x0046(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GNM[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomSeed;                                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WODM[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBasePreCachePolicy*                                 PreCachePolicy;                                          // 0x0050(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBaseEvictionPolicy*                                 EvictionPolicy;                                          // 0x0058(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBaseContentPolicy*                                  ContentPolicy;                                           // 0x0060(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.AssetPoolManager
	 * Size -> 0x0130 (FullSize[0x03E0] - InheritedSize[0x02B0])
	 */
	class AAssetPoolManager : public AInfo
	{
	public:
		TMap<struct FPrimaryAssetType, class UAssetRootPool*>      Pools;                                                   // 0x02B0(0x0050) NativeAccessSpecifierPrivate
		TArray<class UAssetSubPool*>                               ReplicatedData;                                          // 0x0300(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RI1C[0xD0];                                  // 0x0310(0x00D0) MISSED OFFSET (PADDING)

	public:
		bool IsAssetTypePooled(const struct FPrimaryAssetType& Type);
		bool IsAssetTagPooled(const struct FPrimaryAssetType& Type, const class FName& Tag);
		class UAssetSubPool* GetPoolBlueprint(const struct FAssetPoolHandle& Handle);
		TArray<struct FAssetPoolHandle> GetAvailablePools(const struct FPrimaryAssetType& Type);
		class AAssetPoolManager* GetAssetPoolManager(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.AssetPoolTemplate
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAssetPoolTemplate : public UDataAsset
	{
	public:
		struct FPrimaryAssetType                                   Type;                                                    // 0x0030(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     Limit;                                                   // 0x0038(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bReplicateLoading;                                       // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferLoading;                                          // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixedSeed;                                              // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9VJ[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomSeed;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEA9[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseContentPolicy*                                  ContentPolicy;                                           // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBaseEvictionPolicy*                                 EvictionPolicy;                                          // 0x0050(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBasePreCachePolicy*                                 PreCachePolicy;                                          // 0x0058(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.BaseContentPolicy
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBaseContentPolicy : public UObject
	{
	public:
		unsigned char                                              UnknownData_S8N8[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.ExplicitContentPolicy
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UExplicitContentPolicy : public UBaseContentPolicy
	{
	public:
		TArray<struct FPoolContentItem>                            Assets;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.TaggedContentPolicy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTaggedContentPolicy : public UBaseContentPolicy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.BaseEvictionPolicy
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UBaseEvictionPolicy : public UObject
	{
	public:
		unsigned char                                              UnknownData_Y5CT[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.NoEvictionOrder
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UNoEvictionOrder : public UBaseEvictionPolicy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.OldestLoadedEvictionOrder
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOldestLoadedEvictionOrder : public UBaseEvictionPolicy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.OldestUsedEvictionOrder
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UOldestUsedEvictionOrder : public UBaseEvictionPolicy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.PooledPrimaryAsset
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UPooledPrimaryAsset : public UPrimaryDataAsset
	{
	public:
		TArray<class FName>                                        PoolTags;                                                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     BundleReferences;                                        // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.BasePreCachePolicy
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBasePreCachePolicy : public UObject
	{
	public:
		unsigned char                                              UnknownData_9YOD[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.NoPreCachePolicy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UNoPreCachePolicy : public UBasePreCachePolicy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.SingleItemPreCachePolicy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USingleItemPreCachePolicy : public UBasePreCachePolicy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ContentPool.FullPreCachePolicy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UFullPreCachePolicy : public UBasePreCachePolicy
	{
	public:
		unsigned char                                              UnknownData_OKP1[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
