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
	 * Enum ConditionalActor.EConditionalActorDespawnMethod
	 */
	enum class EConditionalActorDespawnMethod : uint8_t
	{
		DespawnManager = 0,
		Instant        = 1,
		MAX            = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ConditionalActor.ConditionalActorData
	 * Size -> 0x0030
	 */
	struct FConditionalActorData
	{
	public:
		class UClass*                                              ActorClassToSpawn;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTemplate;                                            // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PL2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ActorInformation;                                        // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              FullActorInformation;                                    // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q21G[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ConditionalActor.ConditionalActorCooldownDefaultData
	 * Size -> 0x0018
	 */
	struct FConditionalActorCooldownDefaultData
	{
	public:
		class UUniversalCooldownDataAsset*                         UniversalCooldownDataAsset;                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ActorClasses;                                            // 0x0008(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
