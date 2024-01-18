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
	 * Class DSOnline.TelemetryClient
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTelemetryClient : public UObject
	{
	public:
		unsigned char                                              UnknownData_YQSI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetState(const class FString& StateName, ETelemetryEventCategory StateCategory, struct FGenericStruct* Data);
		void SendEvent(const class FString& EventName, ETelemetryEventCategory EventCategory, struct FGenericStruct* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class DSOnline.DSOnlineTelemetryFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDSOnlineTelemetryFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UTelemetryClient* GetLocalPlayerClient();
		static UClass* StaticClass();
	};

	/**
	 * Class DSOnline.DSOnlineSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDSOnlineSettings : public UObject
	{
	public:
		class FString                                              GameName;                                                // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
