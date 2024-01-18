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
	 * Class DSTelemetry.TelemetryFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTelemetryFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SendLocalTelemetry(const class FString& EventName, struct FGenericStruct* Data, int32_t EventVersion);
		static UClass* StaticClass();
	};

	/**
	 * Class DSTelemetry.TelemetrySettings
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UTelemetrySettings : public UObject
	{
	public:
		TArray<struct FEndPointSettings>                           EndPoints;                                               // 0x0028(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		int32_t                                                    BatchesPerMetaTelemetryEvent;                            // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRetries;                                              // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeaconLogInterval;                                       // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBXE[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
