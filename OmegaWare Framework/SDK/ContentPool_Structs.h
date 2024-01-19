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
	 * ScriptStruct ContentPool.PoolContentItem
	 * Size -> 0x0014
	 */
	struct FPoolContentItem
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAsset;                                            // 0x0000(0x0010) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ContentPool.AssetPoolItemHandle
	 * Size -> 0x0010
	 */
	struct FAssetPoolItemHandle
	{
	public:
		unsigned char                                              UnknownData_IFAU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ContentPool.AssetPoolHandle
	 * Size -> 0x0010
	 */
	struct FAssetPoolHandle
	{
	public:
		struct FPrimaryAssetType                                   Type;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ContentPool.AssetPoolContentLimit
	 * Size -> 0x0014
	 */
	struct FAssetPoolContentLimit
	{
	public:
		struct FAssetPoolHandle                                    Handle;                                                  // 0x0000(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Limit;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ContentPool.AssetPoolSelectResult
	 * Size -> 0x0028
	 */
	struct FAssetPoolSelectResult
	{
	public:
		struct FPrimaryAssetId                                     ID;                                                      // 0x0000(0x0010) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Pool;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBR9[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
