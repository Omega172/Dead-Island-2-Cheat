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
	 * Enum ClefVoiceCaptureRuntime.EVoiceActivityOutputMode
	 */
	enum class EVoiceActivityOutputMode : uint8_t
	{
		VOICE_FOCUS = 0,
		ORIGINAL    = 1,
		MAX         = 2
	};

	/**
	 * Enum ClefVoiceCaptureRuntime.EVoiceProcessingMode
	 */
	enum class EVoiceProcessingMode : uint8_t
	{
		VOICE_FOCUS = 0,
		NONE        = 1,
		MAX         = 2
	};

	/**
	 * Enum ClefVoiceCaptureRuntime.EVoiceCaptureMode
	 */
	enum class EVoiceCaptureMode : uint8_t
	{
		HTT = 0,
		TAP = 1,
		VA  = 2,
		MAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
