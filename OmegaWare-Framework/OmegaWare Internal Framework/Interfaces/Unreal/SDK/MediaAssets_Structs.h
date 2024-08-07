﻿#pragma once

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
	 * Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
	 */
	enum class EMediaWebcamCaptureDeviceFilter : uint8_t
	{
		None        = 0,
		DepthSensor = 1,
		Front       = 2,
		Rear        = 3,
		Unknown     = 4,
		MAX         = 5
	};

	/**
	 * Enum MediaAssets.EMediaVideoCaptureDeviceFilter
	 */
	enum class EMediaVideoCaptureDeviceFilter : uint8_t
	{
		None     = 0,
		Card     = 1,
		Software = 2,
		Unknown  = 3,
		Webcam   = 4,
		MAX      = 5
	};

	/**
	 * Enum MediaAssets.EMediaAudioCaptureDeviceFilter
	 */
	enum class EMediaAudioCaptureDeviceFilter : uint8_t
	{
		None       = 0,
		Card       = 1,
		Microphone = 2,
		Software   = 3,
		Unknown    = 4,
		MAX        = 5
	};

	/**
	 * Enum MediaAssets.EMediaPlayerTrack
	 */
	enum class EMediaPlayerTrack : uint8_t
	{
		Audio    = 0,
		Caption  = 1,
		Metadata = 2,
		Script   = 3,
		Subtitle = 4,
		Text     = 5,
		Video    = 6,
		MAX      = 7
	};

	/**
	 * Enum MediaAssets.EMediaSoundComponentFFTSize
	 */
	enum class EMediaSoundComponentFFTSize : uint8_t
	{
		Min    = 0,
		Small  = 1,
		Medium = 2,
		Large  = 3,
		MAX    = 4
	};

	/**
	 * Enum MediaAssets.EMediaSoundChannels
	 */
	enum class EMediaSoundChannels : uint8_t
	{
		Mono     = 0,
		Stereo   = 1,
		Surround = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MediaAssets.MediaSourceEntry
	 * Size -> 0x0010
	 */
	struct FMediaSourceEntry
	{
	public:
		class UMediaSource*                                        Source;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseResolutionCondition;                                 // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGLE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinVerticalResolution;                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaAssets.MediaCaptureDevice
	 * Size -> 0x0028
	 */
	struct FMediaCaptureDevice
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaAssets.MediaSoundComponentSpectralData
	 * Size -> 0x0008
	 */
	struct FMediaSoundComponentSpectralData
	{
	public:
		float                                                      FrequencyHz;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
