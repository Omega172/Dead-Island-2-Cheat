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
	 * Enum GameEntitlements.EGameEntitlementCategory
	 */
	enum class EGameEntitlementCategory : uint8_t
	{
		Progression         = 0,
		PersonalProgression = 1,
		Incidental          = 2,
		Local               = 3,
		MAX                 = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameEntitlements.GameEntitlementTableRowAndData
	 * Size -> 0x0020
	 */
	struct FGameEntitlementTableRowAndData
	{
	public:
		unsigned char                                              UnknownData_7PBE[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameEntitlements.ReplicatedGameEntitlement
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FReplicatedGameEntitlement : public FFastArraySerializerItem
	{
	public:
		uint32_t                                                   GameEntitlementHash;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameEntitlements.ReplicatedGameEntitlementsArray
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FReplicatedGameEntitlementsArray : public FFastArraySerializer
	{
	public:
		TArray<struct FReplicatedGameEntitlement>                  GameEntitlements;                                        // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AGameEntitlementsManager>             Owner;                                                   // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameEntitlements.GrantedEntitlements
	 * Size -> 0x0010
	 */
	struct FGrantedEntitlements
	{
	public:
		TArray<class FName>                                        Entitlements;                                            // 0x0000(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameEntitlements.TrackedEntitlementEntry
	 * Size -> 0x0001
	 */
	struct FTrackedEntitlementEntry
	{
	public:
		bool                                                       bGranted;                                                // 0x0000(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameEntitlements.TrackedEntitlements
	 * Size -> 0x0050
	 */
	struct FTrackedEntitlements
	{
	public:
		TMap<class FName, struct FTrackedEntitlementEntry>         Entitlements;                                            // 0x0000(0x0050) SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameEntitlements.GameEntitlementDefinition
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGameEntitlementDefinition : public FTableRowBase
	{
	public:
		class FString                                              Description;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameEntitlementCategory                                   Category;                                                // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LOZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameEntitlements.GameplayEventData_GrantEntitlement
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FGameplayEventData_GrantEntitlement : public FGameplayEventData
	{
	public:
		unsigned char                                              UnknownData_3HCG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
