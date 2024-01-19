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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ContentPool.AssetSubPool.SelectAssetWithSeed
	 */
	struct UAssetSubPool_SelectAssetWithSeed_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CKG9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAssetPoolSelectResult                              ReturnValue;                                             // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.SelectAsset
	 */
	struct UAssetSubPool_SelectAsset_Params
	{
	public:
		struct FAssetPoolSelectResult                              ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.PreCacheAssetById
	 */
	struct UAssetSubPool_PreCacheAssetById_Params
	{
	public:
		struct FPrimaryAssetId                                     AssetId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRequiredContent;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ELSU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAssetPoolSelectResult                              ReturnValue;                                             // 0x0018(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.PreCacheAssetAction
	 */
	struct UAssetSubPool_PreCacheAssetAction_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.PreCacheAsset
	 */
	struct UAssetSubPool_PreCacheAsset_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.OnRep_LoadedAssets
	 */
	struct UAssetSubPool_OnRep_LoadedAssets_Params
	{	};

	/**
	 * Function ContentPool.AssetSubPool.HasAssetAvalible
	 */
	struct UAssetSubPool_HasAssetAvalible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.GetAssetWithSeedAction
	 */
	struct UAssetSubPool_GetAssetWithSeedAction_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnItem;                                                  // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VTDN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContextObject;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0020(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.GetAssetWithSeed
	 */
	struct UAssetSubPool_GetAssetWithSeed_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LS4Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAssetPoolItemHandle                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.GetAssetByAssetIdAction
	 */
	struct UAssetSubPool_GetAssetByAssetIdAction_Params
	{
	public:
		struct FAssetPoolSelectResult                              AssetId;                                                 // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnItem;                                                  // 0x0028(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0040(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.GetAssetByAssetId
	 */
	struct UAssetSubPool_GetAssetByAssetId_Params
	{
	public:
		struct FAssetPoolSelectResult                              AssetId;                                                 // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAssetPoolItemHandle                                ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetSubPool.GetAsset
	 */
	struct UAssetSubPool_GetAsset_Params
	{
	public:
		struct FAssetPoolItemHandle                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetPoolManager.IsAssetTypePooled
	 */
	struct AAssetPoolManager_IsAssetTypePooled_Params
	{
	public:
		struct FPrimaryAssetType                                   Type;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetPoolManager.IsAssetTagPooled
	 */
	struct AAssetPoolManager_IsAssetTagPooled_Params
	{
	public:
		struct FPrimaryAssetType                                   Type;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetPoolManager.GetPoolBlueprint
	 */
	struct AAssetPoolManager_GetPoolBlueprint_Params
	{
	public:
		struct FAssetPoolHandle                                    Handle;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAssetSubPool*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetPoolManager.GetAvailablePools
	 */
	struct AAssetPoolManager_GetAvailablePools_Params
	{
	public:
		struct FPrimaryAssetType                                   Type;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetPoolHandle>                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ContentPool.AssetPoolManager.GetAssetPoolManager
	 */
	struct AAssetPoolManager_GetAssetPoolManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AAssetPoolManager*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
