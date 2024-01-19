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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DSEventSystem.DSEventSystemBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDSEventSystemBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UDSEventHandle* STATIC_DSEventSubscribeToSubject(class UObject* Outer, class UObject* Subject, class UClass* EventClass);
		class UDSEventHandle* STATIC_DSEventSubscribeToAnySubject(class UObject* Outer, class UClass* EventClass);
		class UDSEventHandle* STATIC_DSEventSubscribe(class UObject* Outer, class UClass* EventClass);
		class UDSEventBroadcaster* STATIC_DSEventCreateBroadcaster(class UObject* Outer, class UClass* EventClass);
		static UClass* StaticClass();
	};

	/**
	 * Class DSEventSystem.DSEventHandle
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UDSEventHandle : public UObject
	{
	public:
		unsigned char                                              UnknownData_FYLK[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		void Unsubscribe();
		static UClass* StaticClass();
	};

	/**
	 * Class DSEventSystem.DSEventBroadcaster
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UDSEventBroadcaster : public UObject
	{
	public:
		unsigned char                                              UnknownData_6NV5[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSEventSystem.DSNetEventComponent
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UDSNetEventComponent : public UActorComponent
	{
	public:
		void ServerBroadcast(const struct FDSNetEventWrapper& NetEventWrapper);
		void ClientBroadcast(const struct FDSNetEventWrapper& NetEventWrapper);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
