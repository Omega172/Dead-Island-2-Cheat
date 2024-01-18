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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DSCore.EManagerNetworking
	 */
	enum class EManagerNetworking : uint8_t
	{
		ServerOnly                  = 0,
		ServerAndClient             = 1,
		ServerAndClient_ServerOwned = 2,
		MAX                         = 3
	};

	/**
	 * Enum DSCore.EManagerScope
	 */
	enum class EManagerScope : uint8_t
	{
		GameInstance = 0,
		World        = 1,
		MAX          = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DSCore.PreCachedDataContainer
	 * Size -> 0x0050
	 */
	struct FPreCachedDataContainer
	{
	public:
		unsigned char                                              Data[0x50];                                              // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct DSCore.ManagerPreCache
	 * Size -> 0x0020
	 */
	struct FManagerPreCache
	{
	public:
		class FName                                                Path;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      Class;                                                   // 0x0008(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSCore.ManagerInformation
	 * Size -> 0x0088
	 */
	struct FManagerInformation
	{
	public:
		bool                                                       bManualCreation;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_927J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      ActorClass;                                              // 0x0008(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      NonActorClass;                                           // 0x0020(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EManagerScope                                              Scope;                                                   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8CC[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UScriptStruct*>                               ScopeFilters;                                            // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EManagerNetworking                                         Networking;                                              // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JDR[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UScriptStruct*>                               CreationDependencies;                                    // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UScriptStruct*>                               InitialisationDependencies;                              // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FManagerPreCache>                            PreCacheData;                                            // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSCore.ManagerInformationArray
	 * Size -> 0x0010
	 */
	struct FManagerInformationArray
	{
	public:
		TArray<struct FManagerInformation>                         Information;                                             // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSCore.HashResultIgnoreCase
	 * Size -> 0x0004
	 */
	struct FHashResultIgnoreCase
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DSCore.ManagerDefinition
	 * Size -> 0x0008
	 */
	struct FManagerDefinition
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSCore.ManagerFilter
	 * Size -> 0x0001
	 */
	struct FManagerFilter
	{
	public:
		unsigned char                                              UnknownData_L2UK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSCore.HashResult
	 * Size -> 0x0004
	 */
	struct FHashResult
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DSCore.ThumbnailwWorldFilter
	 * Size -> 0x0000 (FullSize[0x0001] - InheritedSize[0x0001])
	 */
	struct FThumbnailwWorldFilter : public FManagerFilter
	{	};

	/**
	 * ScriptStruct DSCore.PreviewWorldFilter
	 * Size -> 0x0000 (FullSize[0x0001] - InheritedSize[0x0001])
	 */
	struct FPreviewWorldFilter : public FManagerFilter
	{	};

	/**
	 * ScriptStruct DSCore.SimpleDictionary
	 * Size -> 0x0050
	 */
	struct FSimpleDictionary
	{
	public:
		unsigned char                                              UnknownData_Q5SL[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
