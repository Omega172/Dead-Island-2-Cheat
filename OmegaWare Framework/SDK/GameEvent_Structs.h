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
	 * Enum GameEvent.EGameEventTags
	 */
	enum class EGameEventTags : uint8_t
	{
		ServerOnly     = 0,
		LocalActorOnly = 1,
		MAX            = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameEvent.GameEventProxySelection
	 * Size -> 0x0014
	 */
	struct FGameEventProxySelection
	{
	public:
		class FName                                                ClassName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZO4[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameEvent.GameEventProxyData
	 * Size -> 0x0048
	 */
	struct FGameEventProxyData
	{
	public:
		unsigned char                                              SoftActor[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FGameEventProxySelection>                    Selection;                                               // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UGameEventResponse*>                          GameEventResponses;                                      // 0x0038(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameEvent.GameEventDelayData
	 * Size -> 0x0010
	 */
	struct FGameEventDelayData
	{
	public:
		bool                                                       bUseExactTime;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99QL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToDelay;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumTimeToDelay;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumTimeToDelay;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameEvent.GameEventUtil_StateObject
	 * Size -> 0x0018
	 */
	struct FGameEventUtil_StateObject
	{
	public:
		class UGameEvent*                                          OnStateStartedEvent;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameEvent*                                          OnStatedEndedEvent;                                      // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameEventState*                                     WhilstActiveState;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
