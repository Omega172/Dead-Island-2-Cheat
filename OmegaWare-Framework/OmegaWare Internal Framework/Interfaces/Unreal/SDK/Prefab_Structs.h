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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Prefab.PrefabSecondaryData
	 * Size -> 0x0020
	 */
	struct FPrefabSecondaryData
	{
	public:
		class FName                                                Usage;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Asset;                                                   // 0x0008(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Prefab.PrefabAttachmentData
	 * Size -> 0x0010
	 */
	struct FPrefabAttachmentData
	{
	public:
		class FName                                                AttachmentActor;                                         // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachmentSocket;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Prefab.PrefabPropertyData
	 * Size -> 0x0078
	 */
	struct FPrefabPropertyData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Class;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZS2E[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExportData;                                              // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGuid, struct FSoftObjectPath>                 References;                                              // 0x0028(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Prefab.PrefabComponentData
	 * Size -> 0x0028
	 */
	struct FPrefabComponentData
	{
	public:
		class UClass*                                              ComponentClass;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ArchetypeClass;                                          // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ArchetypeObject;                                         // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrefabPropertyData>                         Properties;                                              // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Prefab.PrefabActorData
	 * Size -> 0x0088
	 */
	struct FPrefabActorData
	{
	public:
		struct FGuid                                               InstanceGuid;                                            // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ArchetypeClass;                                          // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ArchetypeObject;                                         // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FPrefabComponentData>             Components;                                              // 0x0028(0x0050) Edit, NativeAccessSpecifierPublic
		TArray<struct FPrefabPropertyData>                         Properties;                                              // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
