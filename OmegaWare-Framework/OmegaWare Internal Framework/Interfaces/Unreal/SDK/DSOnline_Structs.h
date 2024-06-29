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
	 * Enum DSOnline.ETelemetryEventCategory
	 */
	enum class ETelemetryEventCategory : uint8_t
	{
		None            = 0,
		Marketing       = 1,
		Troubleshooting = 2,
		Unknown         = 3,
		MAX             = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DSOnline.TelemetryEvent
	 * Size -> 0x0010
	 */
	struct FDSOnline_FTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_3CTN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSOnline.ViewableLocationTelemetryEvent
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FViewableLocationTelemetryEvent : public FDSOnline_FTelemetryEvent
	{
	public:
		struct FVector                                             Location;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6YB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Param;                                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
