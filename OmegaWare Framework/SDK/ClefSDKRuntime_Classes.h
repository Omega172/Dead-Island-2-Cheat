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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ClefSDKRuntime.AuthConfig
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAuthConfig : public UObject
	{
	public:
		class FString                                              DeviceClientId;                                          // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AVSProductId;                                            // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClefSDKRuntime.AuthUserConfig
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAuthUserConfig : public UObject
	{
	public:
		class FString                                              DeviceSerialNumber;                                      // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MTT[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClefSDKRuntime.AVSSDKSettings
	 * Size -> 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
	 */
	class UAVSSDKSettings : public UObject
	{
	public:
		struct FClefDeviceInfo                                     DeviceInfo;                                              // 0x0028(0x0040) Edit, Config, NativeAccessSpecifierPublic
		struct FClefRegionConfig                                   RegionConfig;                                            // 0x0068(0x0148) Edit, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18Z4[0x20];                                  // 0x01B0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClefSDKRuntime.ClefBuildInfoConfig
	 * Size -> 0x0290 (FullSize[0x02B8] - InheritedSize[0x0028])
	 */
	class UClefBuildInfoConfig : public UObject
	{
	public:
		struct FClefSDKBuildInfo                                   ClefSDKBuildInfo;                                        // 0x0028(0x0088) Edit, EditConst, NativeAccessSpecifierPublic
		struct FClefBuildInfo                                      AVSSDKBuildInfo;                                         // 0x00B0(0x0068) Edit, EditConst, NativeAccessSpecifierPublic
		struct FClefBuildInfo                                      CurlBuildInfo;                                           // 0x0118(0x0068) Edit, EditConst, NativeAccessSpecifierPublic
		struct FClefBuildInfo                                      NgHttp2BuildInfo;                                        // 0x0180(0x0068) Edit, EditConst, NativeAccessSpecifierPublic
		struct FClefBuildInfo                                      OpenSSLBuildInfo;                                        // 0x01E8(0x0068) Edit, EditConst, NativeAccessSpecifierPublic
		struct FClefBuildInfo                                      ZlibBuildInfo;                                           // 0x0250(0x0068) Edit, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClefSDKRuntime.ClefConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UClefConfig : public UObject
	{
	public:
		bool                                                       bRemoteVoiceCaptureDeviceEnabled;                        // 0x0028(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAVSClientOnly;                                          // 0x0029(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClefAVSLogLevel                                           AVSLogLevel;                                             // 0x002A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIXC[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxVoiceCaptureLengthSeconds;                            // 0x002C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   EndCaptureDelayMs;                                       // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ExpectSpeachTimeoutSeconds;                              // 0x0034(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClefSDKRuntime.ClefEndpointConfig
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UClefEndpointConfig : public UObject
	{
	public:
		class FString                                              AVSEndpoint;                                             // 0x0028(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LWAAuthEndpoint;                                         // 0x0038(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LWATokenEndpoint;                                        // 0x0048(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SkillId;                                                 // 0x0058(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
