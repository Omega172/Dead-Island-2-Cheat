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
	 * Enum ClefSDKRuntime.EClefRegion
	 */
	enum class EClefRegion : uint8_t
	{
		AUTO = 0,
		NA   = 1,
		EU   = 2,
		FE   = 3,
		MAX  = 4
	};

	/**
	 * Enum ClefSDKRuntime.EClefAudioFormatDataType
	 */
	enum class EClefAudioFormatDataType : uint8_t
	{
		Unsigned = 0,
		Signed   = 1,
		Float    = 2,
		MAX      = 3
	};

	/**
	 * Enum ClefSDKRuntime.EClefAudioFormatLayout
	 */
	enum class EClefAudioFormatLayout : uint8_t
	{
		NonInterleaved = 0,
		Interleaved    = 1,
		MAX            = 2
	};

	/**
	 * Enum ClefSDKRuntime.EClefAudioFormatEndianness
	 */
	enum class EClefAudioFormatEndianness : uint8_t
	{
		Little = 0,
		Big    = 1,
		MAX    = 2
	};

	/**
	 * Enum ClefSDKRuntime.EClefAudioFormatEncoding
	 */
	enum class EClefAudioFormatEncoding : uint8_t
	{
		LPCM = 0,
		Opus = 1,
		MAX  = 2
	};

	/**
	 * Enum ClefSDKRuntime.EClefAVSLogLevel
	 */
	enum class EClefAVSLogLevel : uint8_t
	{
		AVS_LEVEL_INFO     = 0,
		AVS_LEVEL_WARN     = 1,
		AVS_LEVEL_ERROR    = 2,
		AVS_LEVEL_CRITICAL = 3,
		AVS_LEVEL_DEBUG0   = 4,
		AVS_LEVEL_DEBUG1   = 5,
		AVS_LEVEL_DEBUG2   = 6,
		AVS_LEVEL_DEBUG3   = 7,
		AVS_LEVEL_DEBUG4   = 8,
		AVS_LEVEL_DEBUG5   = 9,
		AVS_LEVEL_DEBUG6   = 10,
		AVS_LEVEL_DEBUG7   = 11,
		AVS_LEVEL_DEBUG8   = 12,
		AVS_LEVEL_DEBUG9   = 13,
		AVS_LEVEL_NONE     = 14,
		AVS_LEVEL_UNKNOWN  = 15,
		AVS_LEVEL_MAX      = 16
	};

	/**
	 * Enum ClefSDKRuntime.EGameSlotResolutionStatusCode
	 */
	enum class EGameSlotResolutionStatusCode : uint8_t
	{
		Match           = 0,
		NoMatch         = 1,
		Timeout         = 2,
		Exception       = 3,
		ClientException = 4,
		MAX             = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ClefSDKRuntime.ClefDeviceInfo
	 * Size -> 0x0040
	 */
	struct FClefDeviceInfo
	{
	public:
		class FString                                              Locale;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timezone;                                                // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GamePublisher;                                           // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClefSDKRuntime.ClefRegionConfig
	 * Size -> 0x0148
	 */
	struct FClefRegionConfig
	{
	public:
		EClefRegion                                                Region;                                                  // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5OO[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_FU6D[0x144];                                 // 0x0004(0x0144) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ClefSDKRuntime.ClefBuildInfo
	 * Size -> 0x0068
	 */
	struct FClefBuildInfo
	{
	public:
		class FString                                              Version;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildTimestamp;                                          // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BuildNumber;                                             // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59Z3[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GitHash;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Architecture;                                            // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Toolchain;                                               // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClefSDKRuntime.ClefSDKBuildInfo
	 * Size -> 0x0088
	 */
	struct FClefSDKBuildInfo
	{
	public:
		struct FClefBuildInfo                                      SDKBuildInfo;                                            // 0x0000(0x0068) Edit, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    CompilerMajorVersion;                                    // 0x0068(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CompilerMinorVersion;                                    // 0x006C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CompilerPatchVersion;                                    // 0x0070(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXSQ[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EngineVersion;                                           // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClefSDKRuntime.ClefAudioFormat
	 * Size -> 0x0014
	 */
	struct FClefAudioFormat
	{
	public:
		EClefAudioFormatEncoding                                   Encoding;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClefAudioFormatEndianness                                 Endianness;                                              // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8VW[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SampleRateHz;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   BitsPerSample;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumChannels;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClefAudioFormatDataType                                   DataType;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClefAudioFormatLayout                                     Layout;                                                  // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80CP[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ClefSDKRuntime.GameSlotResolvedValue
	 * Size -> 0x0020
	 */
	struct FGameSlotResolvedValue
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClefSDKRuntime.GameSlotResolution
	 * Size -> 0x0028
	 */
	struct FGameSlotResolution
	{
	public:
		class FString                                              Authority;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameSlotResolutionStatusCode                              StatusCode;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EY1Q[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameSlotResolvedValue>                      Values;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClefSDKRuntime.GameSlotValue
	 * Size -> 0x0020
	 */
	struct FGameSlotValue
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameSlotResolution>                         Resolutions;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClefSDKRuntime.GameSlot
	 * Size -> 0x0020
	 */
	struct FGameSlot
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameSlotValue>                              SlotValues;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClefSDKRuntime.GameIntent
	 * Size -> 0x0060
	 */
	struct FGameIntent
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FGameSlot>                      Slots;                                                   // 0x0010(0x0050) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
