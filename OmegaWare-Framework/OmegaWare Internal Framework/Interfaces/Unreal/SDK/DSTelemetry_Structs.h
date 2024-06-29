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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DSTelemetry.EndPointSettings
	 * Size -> 0x0020
	 */
	struct FEndPointSettings
	{
	public:
		class FString                                              TelemetryFilter;                                         // 0x0000(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TelemetryEndpoint;                                       // 0x0010(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSTelemetry.TelemetryEventBase
	 * Size -> 0x0018
	 */
	struct FTelemetryEventBase
	{
	public:
		unsigned char                                              UnknownData_XVZ0[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSTelemetry.DSLogSessionTelemetryEvent
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FDSLogSessionTelemetryEvent : public FTelemetryEventBase
	{
	public:
		class FString                                              CommandLine;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSTelemetry.DSLogTelemetryEvent
	 * Size -> 0x0048 (FullSize[0x0060] - InheritedSize[0x0018])
	 */
	struct FDSLogTelemetryEvent : public FTelemetryEventBase
	{
	public:
		class FString                                              ChannelName;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LogLevel;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LogMessage;                                              // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ScreenShot;                                              // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   LogCRC;                                                  // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUploadBug;                                              // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J38Z[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSTelemetry.TelemetryStartEvent
	 * Size -> 0x0080 (FullSize[0x0098] - InheritedSize[0x0018])
	 */
	struct FTelemetryStartEvent : public FTelemetryEventBase
	{
	public:
		class FString                                              Game;                                                    // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              build_id;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              build_type;                                              // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              local_platform;                                          // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              local_platform_flavour;                                  // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              online_platform;                                         // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              online_account;                                          // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              online_name;                                             // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
