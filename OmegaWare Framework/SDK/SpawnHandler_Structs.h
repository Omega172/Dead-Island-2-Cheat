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
	 * Enum SpawnHandler.ESpawnStatus
	 */
	enum class ESpawnStatus : uint8_t
	{
		NotStarted    = 0,
		Pending       = 1,
		Waiting       = 2,
		AllowForSpike = 3,
		Done          = 4,
		Failed        = 5,
		MAX           = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SpawnHandler.SpawnParams
	 * Size -> 0x0030
	 */
	struct FSpawnParams
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Facing;                                                  // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnHidden;                                            // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6MR[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USpawnUserData*>                              UserDataList;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SpawnHandler.BatchSpawnRequestItem
	 * Size -> 0x0040
	 */
	struct FBatchSpawnRequestItem
	{
	public:
		unsigned char                                              Spawnable[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		struct FSpawnParams                                        SpawnParams;                                             // 0x0010(0x0030) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
