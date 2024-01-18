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
	 * Enum Openable.EOpenableState
	 */
	enum class EOpenableState : uint8_t
	{
		Transient = 0,
		Open      = 1,
		Opening   = 2,
		Closed    = 3,
		Closing   = 4,
		MAX       = 5
	};

	/**
	 * Enum Openable.EOpenableNetworkingRule
	 */
	enum class EOpenableNetworkingRule : uint8_t
	{
		ServerOnly = 0,
		LocalOnly  = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Openable.OpenableRuntimeData
	 * Size -> 0x00A8
	 */
	struct FOpenableRuntimeData
	{
	public:
		struct FKnowledgeBaseExpression                            ClosedPercentageExpression;                              // 0x0000(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKnowledgeBaseExpression                            OpenPercentageExpression;                                // 0x0038(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FKnowledgeBaseExpression                            SpeedModifierExpression;                                 // 0x0070(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Openable.OpenableDataAssetCollection
	 * Size -> 0x0020
	 */
	struct FOpenableDataAssetCollection
	{
	public:
		class UOpenableDataAsset*                                  OpenDataAsset;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOpenableDataAsset*                                  OpeningDataAsset;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOpenableDataAsset*                                  ClosedDataAsset;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOpenableDataAsset*                                  ClosingDataAsset;                                        // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Openable.OpenableRuntimeResolvedData
	 * Size -> 0x000C
	 */
	struct FOpenableRuntimeResolvedData
	{
	public:
		float                                                      ClosedPercentage;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpenPercentage;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedModifier;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
