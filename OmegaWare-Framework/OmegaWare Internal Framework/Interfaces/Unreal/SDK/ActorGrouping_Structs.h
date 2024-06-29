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
	 * Enum ActorGrouping.EActorGroupCallbackType
	 */
	enum class EActorGroupCallbackType : uint8_t
	{
		OnMemberAdded   = 0,
		OnMemberRemoved = 1,
		OnGroupEmptied  = 2,
		Max             = 3
	};

	/**
	 * Enum ActorGrouping.EActorGroupOwnerEventMemberChange
	 */
	enum class EActorGroupOwnerEventMemberChange : uint8_t
	{
		MemberAdded   = 0,
		MemberRemoved = 1,
		MAX           = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ActorGrouping.ActorGroupEditorSettings
	 * Size -> 0x0010
	 */
	struct FActorGroupEditorSettings
	{
	public:
		TArray<class AActor*>                                      AddActorsToGroup;                                        // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ActorGrouping.ActorGroupOwnerEvent
	 * Size -> 0x0010
	 */
	struct FActorGroupOwnerEvent
	{
	public:
		int32_t                                                    MembersInGroup;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EActorGroupOwnerEventMemberChange                          MemberChange;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VEDM[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameEvent*                                          GameEvent;                                               // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ActorGrouping.ActorGroupOwnerCallbackData
	 * Size -> 0x0008
	 */
	struct FActorGroupOwnerCallbackData
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
