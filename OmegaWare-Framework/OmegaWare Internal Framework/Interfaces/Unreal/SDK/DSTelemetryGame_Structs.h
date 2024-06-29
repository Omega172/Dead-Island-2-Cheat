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
	 * Enum DSTelemetryGame.EPacingValue
	 */
	enum class EPacingValue : uint8_t
	{
		Unspecified = 0,
		Calm        = 1,
		Moderate    = 2,
		Intense     = 3,
		MostIntense = 4,
		MAX         = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DSTelemetryGame.GazeEndEvent
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FGazeEndEvent : public FTelemetryEventBase
	{	};

	/**
	 * ScriptStruct DSTelemetryGame.GazeStartEvent
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FGazeStartEvent : public FTelemetryEventBase
	{
	public:
		class FString                                              ObjectName;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ObjectClass;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DSTelemetryGame.SkinResponseEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FSkinResponseEvent : public FTelemetryEventBase
	{
	public:
		float                                                      Value;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05B2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DSTelemetryGame.PacingAreaActivated
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FPacingAreaActivated : public FTelemetryEventBase
	{
	public:
		class FString                                              AreaName;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPacingValue                                               ExpectedPacing;                                          // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HV59[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
