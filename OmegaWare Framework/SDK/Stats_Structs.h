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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Stats.EStatBindType
	 */
	enum class EStatBindType : uint8_t
	{
		AccountBound   = 0,
		CharacterBound = 1,
		Both           = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Stats.StatWhitelistEntry
	 * Size -> 0x0028
	 */
	struct FStatWhitelistEntry
	{
	public:
		EStatBindType                                              StatBindType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJFS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Stat;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ContextCombinations;                                     // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Stats.StatRequest
	 * Size -> 0x0028
	 */
	struct FStatRequest
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Contexts;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Delta;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13SH[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stats.RuntimeStatWhitelist
	 * Size -> 0x0018
	 */
	struct FRuntimeStatWhitelist
	{
	public:
		unsigned char                                              UnknownData_NYEA[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Stats.WhitelistedStat
	 * Size -> 0x0038
	 */
	struct FWhitelistedStat
	{
	public:
		unsigned char                                              UnknownData_YZ1Y[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
