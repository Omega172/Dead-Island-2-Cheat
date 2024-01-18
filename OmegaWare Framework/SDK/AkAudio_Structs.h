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
	 * Enum AkAudio.EAkResult
	 */
	enum class EAkResult : uint8_t
	{
		NotImplemented              = 0,
		Success                     = 1,
		Fail                        = 2,
		PartialSuccess              = 3,
		NotCompatible               = 4,
		AlreadyConnected            = 5,
		InvalidFile                 = 6,
		AudioFileHeaderTooLarge     = 7,
		MaxReached                  = 8,
		InvalidID                   = 9,
		IDNotFound                  = 10,
		InvalidInstanceID           = 11,
		NoMoreData                  = 12,
		InvalidStateGroup           = 13,
		ChildAlreadyHasAParent      = 14,
		InvalidLanguage             = 15,
		CannotAddItseflAsAChild     = 16,
		InvalidParameter            = 17,
		ElementAlreadyInList        = 18,
		PathNotFound                = 19,
		PathNoVertices              = 20,
		PathNotRunning              = 21,
		PathNotPaused               = 22,
		PathNodeAlreadyInList       = 23,
		PathNodeNotInList           = 24,
		DataNeeded                  = 25,
		NoDataNeeded                = 26,
		DataReady                   = 27,
		NoDataReady                 = 28,
		InsufficientMemory          = 29,
		Cancelled                   = 30,
		UnknownBankID               = 31,
		BankReadError               = 32,
		InvalidSwitchType           = 33,
		FormatNotReady              = 34,
		WrongBankVersion            = 35,
		FileNotFound                = 36,
		DeviceNotReady              = 37,
		BankAlreadyLoaded           = 38,
		RenderedFX                  = 39,
		ProcessNeeded               = 40,
		ProcessDone                 = 41,
		MemManagerNotInitialized    = 42,
		StreamMgrNotInitialized     = 43,
		SSEInstructionsNotSupported = 44,
		Busy                        = 45,
		UnsupportedChannelConfig    = 46,
		PluginMediaNotAvailable     = 47,
		MustBeVirtualized           = 48,
		CommandTooLarge             = 49,
		RejectedByFilter            = 50,
		InvalidCustomPlatformName   = 51,
		DLLCannotLoad               = 52,
		DLLPathNotFound             = 53,
		NoJavaVM                    = 54,
		OpenSLError                 = 55,
		PluginNotRegistered         = 56,
		DataAlignmentError          = 57,
		MAX                         = 58
	};

	/**
	 * Enum AkAudio.EAkCallbackType
	 */
	enum class EAkCallbackType : uint8_t
	{
		EndOfEvent       = 0,
		Marker           = 1,
		Duration         = 2,
		Starvation       = 3,
		MusicPlayStarted = 4,
		MusicSyncBeat    = 5,
		MusicSyncBar     = 6,
		MusicSyncEntry   = 7,
		MusicSyncExit    = 8,
		MusicSyncGrid    = 9,
		MusicSyncUserCue = 10,
		MusicSyncPoint   = 11,
		MIDIEvent        = 12,
		MAX              = 13
	};

	/**
	 * Enum AkAudio.EAkAndroidAudioAPI
	 */
	enum class EAkAndroidAudioAPI : uint8_t
	{
		AAudio    = 0,
		OpenSL_ES = 1,
		MAX       = 2
	};

	/**
	 * Enum AkAudio.EAkAudioSessionMode
	 */
	enum class EAkAudioSessionMode : uint8_t
	{
		Default        = 0,
		VoiceChat      = 1,
		GameChat       = 2,
		VideoRecording = 3,
		Measurement    = 4,
		MoviePlayback  = 5,
		VideoChat      = 6,
		MAX            = 7
	};

	/**
	 * Enum AkAudio.EAkAudioSessionCategoryOptions
	 */
	enum class EAkAudioSessionCategoryOptions : uint8_t
	{
		MixWithOthers    = 0,
		DuckOthers       = 1,
		AllowBluetooth   = 2,
		DefaultToSpeaker = 3,
		MAX              = 4
	};

	/**
	 * Enum AkAudio.EAkAudioSessionCategory
	 */
	enum class EAkAudioSessionCategory : uint8_t
	{
		Ambient       = 0,
		SoloAmbient   = 1,
		PlayAndRecord = 2,
		MAX           = 3
	};

	/**
	 * Enum AkAudio.EReflectionFilterBits
	 */
	enum class EReflectionFilterBits : uint8_t
	{
		Wall    = 0,
		Ceiling = 1,
		Floor   = 2,
		MAX     = 3
	};

	/**
	 * Enum AkAudio.AkCodecId
	 */
	enum class EAkCodecId : uint8_t
	{
		AkCodecIdNone          = 0,
		AkCodecIdPCM           = 1,
		AkCodecIdADPCM         = 2,
		AkCodecIdXMA           = 3,
		AkCodecIdVorbis        = 4,
		AkCodecIdAAC           = 5,
		AkCodecIdATRAC9        = 6,
		AkCodecIdOpusNX        = 7,
		AkCodecIdAkOpus        = 8,
		AkCodecIdAkOpusWEM     = 9,
		AkCodecIdAkCodecId_MAX = 10
	};

	/**
	 * Enum AkAudio.EAkMidiCcValues
	 */
	enum class EAkMidiCcValues : uint8_t
	{
		AkMidiCcBankSelectCoarse  = 0,
		AkMidiCcModWheelCoarse    = 1,
		AkMidiCcBreathCtrlCoarse  = 2,
		AkMidiCcCtrl3Coarse       = 3,
		AkMidiCcFootPedalCoarse   = 4,
		AkMidiCcPortamentoCoarse  = 5,
		AkMidiCcDataEntryCoarse   = 6,
		AkMidiCcVolumeCoarse      = 7,
		AkMidiCcBalanceCoarse     = 8,
		AkMidiCcCtrl9Coarse       = 9,
		AkMidiCcPanPositionCoarse = 10,
		AkMidiCcExpressionCoarse  = 11,
		AkMidiCcEffectCtrl1Coarse = 12,
		AkMidiCcEffectCtrl2Coarse = 13,
		AkMidiCcCtrl14Coarse      = 14,
		AkMidiCcCtrl15Coarse      = 15,
		AkMidiCcGenSlider1        = 16,
		AkMidiCcGenSlider2        = 17,
		AkMidiCcGenSlider3        = 18,
		AkMidiCcGenSlider4        = 19,
		AkMidiCcCtrl20Coarse      = 20,
		AkMidiCcCtrl21Coarse      = 21,
		AkMidiCcCtrl22Coarse      = 22,
		AkMidiCcCtrl23Coarse      = 23,
		AkMidiCcCtrl24Coarse      = 24,
		AkMidiCcCtrl25Coarse      = 25,
		AkMidiCcCtrl26Coarse      = 26,
		AkMidiCcCtrl27Coarse      = 27,
		AkMidiCcCtrl28Coarse      = 28,
		AkMidiCcCtrl29Coarse      = 29,
		AkMidiCcCtrl30Coarse      = 30,
		AkMidiCcCtrl31Coarse      = 31,
		AkMidiCcBankSelectFine    = 32,
		AkMidiCcModWheelFine      = 33,
		AkMidiCcBreathCtrlFine    = 34,
		AkMidiCcCtrl3Fine         = 35,
		AkMidiCcFootPedalFine     = 36,
		AkMidiCcPortamentoFine    = 37,
		AkMidiCcDataEntryFine     = 38,
		AkMidiCcVolumeFine        = 39,
		AkMidiCcBalanceFine       = 40,
		AkMidiCcCtrl9Fine         = 41,
		AkMidiCcPanPositionFine   = 42,
		AkMidiCcExpressionFine    = 43,
		AkMidiCcEffectCtrl1Fine   = 44,
		AkMidiCcEffectCtrl2Fine   = 45,
		AkMidiCcCtrl14Fine        = 46,
		AkMidiCcCtrl15Fine        = 47,
		AkMidiCcCtrl20Fine        = 48,
		AkMidiCcCtrl21Fine        = 49,
		AkMidiCcCtrl22Fine        = 50,
		AkMidiCcCtrl23Fine        = 51,
		AkMidiCcCtrl24Fine        = 52,
		AkMidiCcCtrl25Fine        = 53,
		AkMidiCcCtrl26Fine        = 54,
		AkMidiCcCtrl27Fine        = 55,
		AkMidiCcCtrl28Fine        = 56,
		AkMidiCcCtrl29Fine        = 57,
		AkMidiCcCtrl30Fine        = 58,
		AkMidiCcCtrl31Fine        = 59,
		AkMidiCcHoldPedal         = 60,
		AkMidiCcPortamentoOnOff   = 61,
		AkMidiCcSustenutoPedal    = 62,
		AkMidiCcSoftPedal         = 63,
		AkMidiCcLegatoPedal       = 64,
		AkMidiCcHoldPedal2        = 65,
		AkMidiCcSoundVariation    = 66,
		AkMidiCcSoundTimbre       = 67,
		AkMidiCcSoundReleaseTime  = 68,
		AkMidiCcSoundAttackTime   = 69,
		AkMidiCcSoundBrightness   = 70,
		AkMidiCcSoundCtrl6        = 71,
		AkMidiCcSoundCtrl7        = 72,
		AkMidiCcSoundCtrl8        = 73,
		AkMidiCcSoundCtrl9        = 74,
		AkMidiCcSoundCtrl10       = 75,
		AkMidiCcGeneralButton1    = 76,
		AkMidiCcGeneralButton2    = 77,
		AkMidiCcGeneralButton3    = 78,
		AkMidiCcGeneralButton4    = 79,
		AkMidiCcReverbLevel       = 80,
		AkMidiCcTremoloLevel      = 81,
		AkMidiCcChorusLevel       = 82,
		AkMidiCcCelesteLevel      = 83,
		AkMidiCcPhaserLevel       = 84,
		AkMidiCcDataButtonP1      = 85,
		AkMidiCcDataButtonM1      = 86,
		AkMidiCcNonRegisterCoarse = 87,
		AkMidiCcNonRegisterFine   = 88,
		AkMidiCcAllSoundOff       = 89,
		AkMidiCcAllControllersOff = 90,
		AkMidiCcLocalKeyboard     = 91,
		AkMidiCcAllNotesOff       = 92,
		AkMidiCcOmniModeOff       = 93,
		AkMidiCcOmniModeOn        = 94,
		AkMidiCcOmniMonophonicOn  = 95,
		AkMidiCcOmniPolyphonicOn  = 96,
		MAX                       = 97
	};

	/**
	 * Enum AkAudio.EAkMidiEventType
	 */
	enum class EAkMidiEventType : uint8_t
	{
		AkMidiEventTypeInvalid           = 0,
		AkMidiEventTypeNoteOff           = 1,
		AkMidiEventTypeNoteOn            = 2,
		AkMidiEventTypeNoteAftertouch    = 3,
		AkMidiEventTypeController        = 4,
		AkMidiEventTypeProgramChange     = 5,
		AkMidiEventTypeChannelAftertouch = 6,
		AkMidiEventTypePitchBend         = 7,
		AkMidiEventTypeSysex             = 8,
		AkMidiEventTypeEscape            = 9,
		AkMidiEventTypeMeta              = 10,
		MAX                              = 11
	};

	/**
	 * Enum AkAudio.ERTPCValueType
	 */
	enum class ERTPCValueType : uint8_t
	{
		Default     = 0,
		Global      = 1,
		GameObject  = 2,
		PlayingID   = 3,
		Unavailable = 4,
		MAX         = 5
	};

	/**
	 * Enum AkAudio.EAkCurveInterpolation
	 */
	enum class EAkCurveInterpolation : uint8_t
	{
		Log3          = 0,
		Sine          = 1,
		Log1          = 2,
		InvSCurve     = 3,
		Linear        = 4,
		SCurve        = 5,
		Exp1          = 6,
		SineRecip     = 7,
		Exp3          = 8,
		LastFadeCurve = 9,
		Constant      = 10,
		MAX           = 11
	};

	/**
	 * Enum AkAudio.AkActionOnEventType
	 */
	enum class EAkActionOnEventType : uint8_t
	{
		AkActionOnEventTypeStop                    = 0,
		AkActionOnEventTypePause                   = 1,
		AkActionOnEventTypeResume                  = 2,
		AkActionOnEventTypeBreak                   = 3,
		AkActionOnEventTypeReleaseEnvelope         = 4,
		AkActionOnEventTypeAkActionOnEventType_MAX = 5
	};

	/**
	 * Enum AkAudio.AkMultiPositionType
	 */
	enum class EAkMultiPositionType : uint8_t
	{
		AkMultiPositionTypeSingleSource            = 0,
		AkMultiPositionTypeMultiSources            = 1,
		AkMultiPositionTypeMultiDirections         = 2,
		AkMultiPositionTypeAkMultiPositionType_MAX = 3
	};

	/**
	 * Enum AkAudio.AkSpeakerConfiguration
	 */
	enum class EAkSpeakerConfiguration : uint8_t
	{
		AkSpeakerConfigurationAk_Speaker_Front_Left          = 0,
		AkSpeakerConfigurationAk_Speaker_Front_Right         = 1,
		AkSpeakerConfigurationAk_Speaker_Front_Center        = 2,
		AkSpeakerConfigurationAk_Speaker_Low_Frequency       = 3,
		AkSpeakerConfigurationAk_Speaker_Back_Left           = 4,
		AkSpeakerConfigurationAk_Speaker_Back_Right          = 5,
		AkSpeakerConfigurationAk_Speaker_Back_Center         = 6,
		AkSpeakerConfigurationAk_Speaker_Side_Left           = 7,
		AkSpeakerConfigurationAk_Speaker_Side_Right          = 8,
		AkSpeakerConfigurationAk_Speaker_Top                 = 9,
		AkSpeakerConfigurationAk_Speaker_Height_Front_Left   = 10,
		AkSpeakerConfigurationAk_Speaker_Height_Front_Center = 11,
		AkSpeakerConfigurationAk_Speaker_Height_Front_Right  = 12,
		AkSpeakerConfigurationAk_Speaker_Height_Back_Left    = 13,
		AkSpeakerConfigurationAk_Speaker_Height_Back_Center  = 14,
		AkSpeakerConfigurationAk_Speaker_Height_Back_Right   = 15,
		AkSpeakerConfigurationAk_Speaker_MAX                 = 16
	};

	/**
	 * Enum AkAudio.AkChannelConfiguration
	 */
	enum class EAkChannelConfiguration : uint8_t
	{
		AkChannelConfigurationAk_Parent               = 0,
		AkChannelConfigurationAk_LFE                  = 1,
		AkChannelConfigurationAk_1                    = 2,
		AkChannelConfigurationAk_2                    = 3,
		AkChannelConfigurationAk_201                  = 4,
		AkChannelConfigurationAk_3                    = 5,
		AkChannelConfigurationAk_301                  = 6,
		AkChannelConfigurationAk_4                    = 7,
		AkChannelConfigurationAk_401                  = 8,
		AkChannelConfigurationAk_5                    = 9,
		AkChannelConfigurationAk_501                  = 10,
		AkChannelConfigurationAk_7                    = 11,
		AkChannelConfigurationAk_5_1                  = 12,
		AkChannelConfigurationAk_7_1                  = 13,
		AkChannelConfigurationAk_7_101                = 14,
		AkChannelConfigurationAk_Auro_9               = 15,
		AkChannelConfigurationAk_Auro_10              = 16,
		AkChannelConfigurationAk_Auro_11              = 17,
		AkChannelConfigurationAk_Auro_13              = 18,
		AkChannelConfigurationAk_Ambisonics_1st_order = 19,
		AkChannelConfigurationAk_Ambisonics_2nd_order = 20,
		AkChannelConfigurationAk_Ambisonics_3rd_order = 21,
		AkChannelConfigurationAk_MAX                  = 22
	};

	/**
	 * Enum AkAudio.AkAcousticPortalState
	 */
	enum class EAkAcousticPortalState : uint8_t
	{
		AkAcousticPortalStateClosed                    = 0,
		AkAcousticPortalStateOpen                      = 1,
		AkAcousticPortalStateAkAcousticPortalState_MAX = 2
	};

	/**
	 * Enum AkAudio.PanningRule
	 */
	enum class EPanningRule : uint8_t
	{
		PanningRulePanningRule_Speakers   = 0,
		PanningRulePanningRule_Headphones = 1,
		PanningRulePanningRule_MAX        = 2
	};

	/**
	 * Enum AkAudio.AkMeshType
	 */
	enum class EAkMeshType : uint8_t
	{
		AkMeshTypeStaticMesh     = 0,
		AkMeshTypeCollisionMesh  = 1,
		AkMeshTypeAkMeshType_MAX = 2
	};

	/**
	 * Enum AkAudio.EAkHololensAudioAPI
	 */
	enum class EAkHololensAudioAPI : uint8_t
	{
		Wasapi      = 0,
		XAudio2     = 1,
		DirectSound = 2,
		MAX         = 3
	};

	/**
	 * Enum AkAudio.EAkCommSystem
	 */
	enum class EAkCommSystem : uint8_t
	{
		Socket = 0,
		HTCS   = 1,
		MAX    = 2
	};

	/**
	 * Enum AkAudio.EAkChannelMask
	 */
	enum class EAkChannelMask : uint8_t
	{
		FrontLeft         = 0,
		FrontRight        = 1,
		FrontCenter       = 2,
		LowFrequency      = 3,
		BackLeft          = 4,
		BackRight         = 5,
		BackCenter        = 6,
		SideLeft          = 7,
		SideRight         = 8,
		Top               = 9,
		HeightFrontLeft   = 10,
		HeightFrontCenter = 11,
		HeightFrontRight  = 12,
		HeightBackLeft    = 13,
		HeightBackCenter  = 14,
		HeightBackRight   = 15,
		MAX               = 16
	};

	/**
	 * Enum AkAudio.EAkChannelConfigType
	 */
	enum class EAkChannelConfigType : uint8_t
	{
		Anonymous = 0,
		Standard  = 1,
		Ambisonic = 2,
		MAX       = 3
	};

	/**
	 * Enum AkAudio.EAkDiffractionFlags
	 */
	enum class EAkDiffractionFlags : uint8_t
	{
		UseBuiltInParam            = 0,
		UseObstruction             = 1,
		CalcEmitterVirtualPosition = 2,
		MAX                        = 3
	};

	/**
	 * Enum AkAudio.EAkPanningRule
	 */
	enum class EAkPanningRule : uint8_t
	{
		Speakers   = 0,
		Headphones = 1,
		MAX        = 2
	};

	/**
	 * Enum AkAudio.EAkWindowsAudioAPI
	 */
	enum class EAkWindowsAudioAPI : uint8_t
	{
		Wasapi      = 0,
		XAudio2     = 1,
		DirectSound = 2,
		MAX         = 3
	};

	/**
	 * Enum AkAudio.EAkWinGDKAudioAPI
	 */
	enum class EAkWinGDKAudioAPI : uint8_t
	{
		Wasapi      = 0,
		XAudio2     = 1,
		DirectSound = 2,
		MAX         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AkAudio.AkMainOutputSettings
	 * Size -> 0x0028
	 */
	struct FAkMainOutputSettings
	{
	public:
		class FString                                              AudioDeviceShareset;                                     // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DeviceID;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkPanningRule                                             PanningRule;                                             // 0x0014(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LZ7[0x3];                                   // 0x0015(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EAkChannelConfigType                                       ChannelConfigType;                                       // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34LA[0x3];                                   // 0x0019(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   ChannelMask;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumberOfChannels;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8FF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkSpatialAudioSettings
	 * Size -> 0x0020
	 */
	struct FAkSpatialAudioSettings
	{
	public:
		uint32_t                                                   MaxSoundPropagationDepth;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DiffractionFlags;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementThreshold;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumberOfPrimaryRays;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ReflectionOrder;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDiffractionOnReflections;                          // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDirectPathDiffraction;                             // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WF8[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaximumPathLength;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableTransmission;                                      // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AR75[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkCommonInitializationSettings
	 * Size -> 0x0060
	 */
	struct FAkCommonInitializationSettings
	{
	public:
		uint32_t                                                   MaximumNumberOfMemoryPools;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaximumNumberOfPositioningPaths;                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CommandQueueSize;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SamplesPerFrame;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkMainOutputSettings                               MainOutputSettings;                                      // 0x0010(0x0028) Edit, NativeAccessSpecifierPublic
		float                                                      StreamingLookAheadRatio;                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   NumberOfRefillsInVoice;                                  // 0x003C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JJL[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkSpatialAudioSettings                             SpatialAudioSettings;                                    // 0x0040(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
	{
	public:
		uint32_t                                                   SampleRate;                                              // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVCV[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettings
	 * Size -> 0x0020
	 */
	struct FAkCommunicationSettings
	{
	public:
		uint32_t                                                   PoolSize;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DiscoveryBroadcastPort;                                  // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   CommandPort;                                             // 0x0006(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   NotificationPort;                                        // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7I42[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NetworkName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
	{
	public:
		bool                                                       InitializeSystemComms;                                   // 0x0020(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMBA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedSpatialAudioSettings
	 * Size -> 0x0008
	 */
	struct FAkAdvancedSpatialAudioSettings
	{
	public:
		float                                                      DiffractionShadowAttenuationFactor;                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiffractionShadowDegrees;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedInitializationSettings
	 * Size -> 0x0034
	 */
	struct FAkAdvancedInitializationSettings
	{
	public:
		uint32_t                                                   IO_MemorySize;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   IO_Granularity;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetAutoStreamBufferLength;                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamCache;                                          // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHIW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaximumPinnedBytesInCache;                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableGameSyncPreparation;                               // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IL11[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ContinuousPlaybackLookAhead;                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MonitorQueuePoolSize;                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaximumHardwareTimeoutMs;                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DebugOutOfRangeCheckEnabled;                             // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4R4B[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugOutOfRangeLimit;                                    // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkAdvancedSpatialAudioSettings                     SpatialAudioSettings;                                    // 0x002C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
	 * Size -> 0x0004 (FullSize[0x0038] - InheritedSize[0x0034])
	 */
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
	{
	public:
		bool                                                       EnableMultiCoreRendering;                                // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHD1[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RoundFrameSizeToHardwareSize;                            // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKNG[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.SubtitleCueDS
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FSubtitleCueDS : public FSubtitleCue
	{
	public:
		class FText                                                CharacterName;                                           // 0x0020(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bIsSpecialEndCue;                                        // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YABZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkBoolPropertyToControl
	 * Size -> 0x0010
	 */
	struct FAkBoolPropertyToControl
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkWwiseObjectDetails
	 * Size -> 0x0030
	 */
	struct FAkWwiseObjectDetails
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemPath;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkWwiseItemToControl
	 * Size -> 0x0040
	 */
	struct FAkWwiseItemToControl
	{
	public:
		struct FAkWwiseObjectDetails                               ItemPicked;                                              // 0x0000(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
		class FString                                              ItemPath;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAudioObstructionData
	 * Size -> 0x0008
	 */
	struct FAkAudioObstructionData
	{
	public:
		float                                                      Obstruction;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Occlusion;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkSegmentInfo
	 * Size -> 0x0024
	 */
	struct FAkSegmentInfo
	{
	public:
		int32_t                                                    CurrentPosition;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreEntryDuration;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveDuration;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PostExitDuration;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingLookAheadTime;                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeatDuration;                                            // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarDuration;                                             // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridDuration;                                            // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridOffset;                                              // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkGeometrySurfaceOverride
	 * Size -> 0x0010
	 */
	struct FAkGeometrySurfaceOverride
	{
	public:
		class UAkAcousticTexture*                                  AcousticTexture;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableOcclusionOverride : 1;                            // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJIG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OcclusionValue;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAcousticSurface
	 * Size -> 0x0018
	 */
	struct FAkAcousticSurface
	{
	public:
		uint32_t                                                   Texture;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Occlusion;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkTriangle
	 * Size -> 0x0008
	 */
	struct FAkTriangle
	{
	public:
		uint16_t                                                   Point0;                                                  // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Point1;                                                  // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Point2;                                                  // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Surface;                                                 // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkGeometryData
	 * Size -> 0x0050
	 */
	struct FAkGeometryData
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAkAcousticSurface>                          Surfaces;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAkTriangle>                                 Triangles;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPhysicalMaterial*>                           ToOverrideAcousticTexture;                               // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPhysicalMaterial*>                           ToOverrideOcclusion;                                     // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0AQ[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkPluginInfo
	 * Size -> 0x0028
	 */
	struct FAkPluginInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PluginID;                                                // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RK2U[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              dll;                                                     // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAudioSession
	 * Size -> 0x000C
	 */
	struct FAkAudioSession
	{
	public:
		EAkAudioSessionCategory                                    AudioSessionCategory;                                    // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLAD[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   AudioSessionCategoryOptions;                             // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkAudioSessionMode                                        AudioSessionMode;                                        // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W3MU[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   ACPBatchBufferSize;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YB9W[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkPS5AdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVorbisHwAcceleration;                                   // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04OY[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkPropertyToControl
	 * Size -> 0x0010
	 */
	struct FAkPropertyToControl
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkPoly
	 * Size -> 0x0010
	 */
	struct FAkPoly
	{
	public:
		class UAkAcousticTexture*                                  Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Occlusion;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableSurface;                                           // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TF65[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
	{
	public:
		EAkCommSystem                                              CommunicationSystem;                                     // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9XV[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_ZV7Y[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWFZ[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWinGDKAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0YF[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneGDKApuHeapInitializationSettings
	 * Size -> 0x0008
	 */
	struct FAkXboxOneGDKApuHeapInitializationSettings
	{
	public:
		uint32_t                                                   CachedSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NonCachedSize;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneGDKAdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint16_t                                                   MaximumNumberOfXMAVoices;                                // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O2S6[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
	 * Size -> 0x0008
	 */
	struct FAkXboxOneApuHeapInitializationSettings
	{
	public:
		uint32_t                                                   CachedSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NonCachedSize;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint16_t                                                   MaximumNumberOfXMAVoices;                                // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M07R[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkXSXApuHeapInitializationSettings
	 * Size -> 0x0008
	 */
	struct FAkXSXApuHeapInitializationSettings
	{
	public:
		uint32_t                                                   CachedSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NonCachedSize;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkXSXAdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint16_t                                                   MaximumNumberOfXMAVoices;                                // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JZF[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAudioEventTrackKey
	 * Size -> 0x0020
	 */
	struct FAkAudioEventTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N48D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkPostEventExtraParams
	 * Size -> 0x000C
	 */
	struct FAkPostEventExtraParams
	{
	public:
		float                                                      AttenuationScalingFactor;                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionRefreshInterval;                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseReverbVolumes;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M600[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
	 * Size -> 0x0014
	 */
	struct FMovieSceneTangentDataSerializationHelper
	{
	public:
		float                                                      ArriveTangent;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentWeightMode                                TangentWeightMode;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_002B[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArriveTangentWeight;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangentWeight;                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
	 * Size -> 0x001C
	 */
	struct FMovieSceneFloatValueSerializationHelper
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveInterpMode                                       InterpMode;                                              // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentMode                                      TangentMode;                                             // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I60G[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTangentDataSerializationHelper           Tangent;                                                 // 0x0008(0x0014) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
	 * Size -> 0x0030
	 */
	struct FMovieSceneFloatChannelSerializationHelper
	{
	public:
		ERichCurveExtrapolation                                    PreInfinityExtrap;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveExtrapolation                                    PostInfinityExtrap;                                      // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QK2Z[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneFloatValueSerializationHelper>    Values;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DefaultValue;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasDefaultValue;                                        // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXFK[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AKWaapiJsonObject
	 * Size -> 0x0010
	 */
	struct FAKWaapiJsonObject
	{
	public:
		unsigned char                                              UnknownData_ODXO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWaapiSubscriptionId
	 * Size -> 0x0008
	 */
	struct FAkWaapiSubscriptionId
	{
	public:
		unsigned char                                              UnknownData_1SLR[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
	 * Size -> 0x0001
	 */
	struct FAkAmbSoundCheckpointRecord
	{
	public:
		bool                                                       bCurrentlyPlaying;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.PlayAtLocationResult
	 * Size -> 0x0010
	 */
	struct FPlayAtLocationResult
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLZN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        AkComponent;                                             // 0x0008(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AudioRTPCNameRTPCValueSimplePair
	 * Size -> 0x000C
	 */
	struct FAudioRTPCNameRTPCValueSimplePair
	{
	public:
		class FName                                                RTPCName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RTPCValue;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AudioSwitchGroupNameSwitchStateSimplePair
	 * Size -> 0x0010
	 */
	struct FAudioSwitchGroupNameSwitchStateSimplePair
	{
	public:
		class FName                                                SwitchGroupName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SwitchState;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkExternalSourceInfo
	 * Size -> 0x0038
	 */
	struct FAkExternalSourceInfo
	{
	public:
		class FString                                              ExternalSrcName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkCodecId                                                 CodecID;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNC5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkExternalMediaAsset*                               ExternalSourceAsset;                                     // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsStreamed;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7S3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkMidiEventBase
	 * Size -> 0x0002
	 */
	struct FAkMidiEventBase
	{
	public:
		EAkMidiEventType                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Chan;                                                    // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiProgramChange
	 * Size -> 0x0001 (FullSize[0x0003] - InheritedSize[0x0002])
	 */
	struct FAkMidiProgramChange : public FAkMidiEventBase
	{
	public:
		unsigned char                                              ProgramNum;                                              // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiChannelAftertouch
	 * Size -> 0x0001 (FullSize[0x0003] - InheritedSize[0x0002])
	 */
	struct FAkMidiChannelAftertouch : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Value;                                                   // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiNoteAftertouch
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiNoteAftertouch : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Note;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value;                                                   // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiPitchBend
	 * Size -> 0x0006 (FullSize[0x0008] - InheritedSize[0x0002])
	 */
	struct FAkMidiPitchBend : public FAkMidiEventBase
	{
	public:
		unsigned char                                              ValueLsb;                                                // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ValueMsb;                                                // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FullValue;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiCc
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiCc : public FAkMidiEventBase
	{
	public:
		EAkMidiCcValues                                            Cc;                                                      // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value;                                                   // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiNoteOnOff
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiNoteOnOff : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Note;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Velocity;                                                // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiGeneric
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiGeneric : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Param1;                                                  // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Param2;                                                  // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkChannelMask
	 * Size -> 0x0004
	 */
	struct FAkChannelMask
	{
	public:
		int32_t                                                    ChannelMask;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
	 * Size -> 0x0030
	 */
	struct FAkGeometrySurfacePropertiesToMap
	{
	public:
		unsigned char                                              AcousticTexture[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      OcclusionValue;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJJX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWaapiFieldNames
	 * Size -> 0x0010
	 */
	struct FAkWaapiFieldNames
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkWaapiUri
	 * Size -> 0x0010
	 */
	struct FAkWaapiUri
	{
	public:
		class FString                                              Uri;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioEventSection*                      Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioRTPCSection*                       Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
