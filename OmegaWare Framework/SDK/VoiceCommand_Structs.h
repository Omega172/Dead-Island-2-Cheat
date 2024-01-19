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
	 * Enum VoiceCommand.EVoiceCommandExecutionResult
	 */
	enum class EVoiceCommandExecutionResult : uint8_t
	{
		Success = 0,
		Fail    = 1,
		Blocked = 2,
		MAX     = 3
	};

	/**
	 * Enum VoiceCommand.EVoiceMuteType
	 */
	enum class EVoiceMuteType : uint8_t
	{
		HoldToMute = 0,
		ToggleMute = 1,
		MAX        = 2
	};

	/**
	 * Enum VoiceCommand.EVoiceCaptureType
	 */
	enum class EVoiceCaptureType : uint8_t
	{
		PushToTalk     = 0,
		VoiceActivated = 1,
		TapToTalk      = 2,
		MAX            = 3
	};

	/**
	 * Enum VoiceCommand.EVoiceEligibility
	 */
	enum class EVoiceEligibility : uint8_t
	{
		Eligible           = 0,
		GameIneligible     = 1,
		AccountIneligible  = 2,
		LocationIneligible = 3,
		LocaleIneligible   = 4,
		UnknownIneligible  = 5,
		MAX                = 6
	};

	/**
	 * Enum VoiceCommand.EVoiceDelegateType
	 */
	enum class EVoiceDelegateType : uint8_t
	{
		AuthorizationStateChanged              = 0,
		ConnectionStateChanged                 = 1,
		ProcesssingStateChanged                = 2,
		VoiceCommandExcutionResultStateChanged = 3,
		AlexaPlaybackStateChanged              = 4,
		VoiceRecordingStateChanged             = 5,
		VoiceCaptureDeviceHasChanged           = 6,
		NoSpeechDetected                       = 7,
		FallbackIntentReceived                 = 8,
		InputMuteStateChanged                  = 9,
		InputModeChanged                       = 10,
		VoiceCommandsEnabled                   = 11,
		VoiceCaptureDeviceError                = 12,
		TimeoutWaitingForAuthentication        = 13,
		TimeoutWaitingForConnection            = 14,
		InputStartFailedSystemIssue            = 15,
		StopIntentReceived                     = 16,
		RequestProcessingTimedOut              = 17,
		RequestProcessingCompleted             = 18,
		MAX                                    = 19
	};

	/**
	 * Enum VoiceCommand.EVoiceDelegateInitializtionResult
	 */
	enum class EVoiceDelegateInitializtionResult : uint8_t
	{
		None              = 0,
		SDKInitFailure    = 1,
		NoCaptureDevice   = 2,
		ModuleLoadFailure = 3,
		MAX               = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VoiceCommand.VoiceCommandData
	 * Size -> 0x0018
	 */
	struct FVoiceCommandData
	{
	public:
		unsigned char                                              UnknownData_1YOV[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoiceCommand.CachedOptions
	 * Size -> 0x0014
	 */
	struct FCachedOptions
	{
	public:
		unsigned char                                              UnknownData_Z78X[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoiceCommand.CaptureDeviceInfo
	 * Size -> 0x0028
	 */
	struct FCaptureDeviceInfo
	{
	public:
		bool                                                       bIsDefaultDevice;                                        // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0PF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeviceID;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceName;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VoiceCommand.VoiceCommandResultData
	 * Size -> 0x0028
	 */
	struct FVoiceCommandResultData
	{
	public:
		EVoiceCommandExecutionResult                               Result;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NHJ8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ResultMessageString;                                     // 0x0008(0x0018) NativeAccessSpecifierPrivate
		bool                                                       bShowSuccessMessage;                                     // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_18ZA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VoiceCommand.VoiceCommandArg
	 * Size -> 0x0020
	 */
	struct FVoiceCommandArg
	{
	public:
		class FString                                              ArgType;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ArgIdent;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
