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
	 * Class Cooldown.CooldownConditionPersistentDataCollection
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UCooldownConditionPersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooldown.BaseCooldownCondition
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UBaseCooldownCondition : public UObject
	{
	public:
		unsigned char                                              UnknownData_A2TY[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnStartCooldown(class AActor* OwnerActor);
		void OnReset();
		void InformCooldownCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class Cooldown.CooldownCondition
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UCooldownCondition : public UBaseCooldownCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooldown.CooldownCondition_Distance
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	class UCooldownCondition_Distance : public UCooldownCondition
	{
	public:
		bool                                                       bUseRow;                                                 // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8NF[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 DistanceRowHandle;                                       // 0x0050(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DistanceRequired;                                        // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQSH[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooldown.CooldownCondition_DoOnce
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UCooldownCondition_DoOnce : public UCooldownCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooldown.CooldownCondition_Time
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UCooldownCondition_Time : public UCooldownCondition
	{
	public:
		float                                                      TimeOfCooldown;                                          // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E94M[0xC];                                   // 0x004C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooldown.CooldownPersistentDataCollection
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UCooldownPersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		bool                                                       bIsOnCooldown;                                           // 0x0048(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OE78[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Cooldown.UniversalCooldownDataAsset
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UUniversalCooldownDataAsset : public UValidatedDataAsset
	{
	public:
		class UUniversalCooldownObject*                            Cooldown;                                                // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UUniversalCooldownObject* GenerateCooldownObject(class UObject* Outer);
		static UClass* StaticClass();
	};

	/**
	 * Class Cooldown.UniversalCooldownObject
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UUniversalCooldownObject : public UObject
	{
	public:
		TArray<class UCooldownCondition*>                          AllOfConditions;                                         // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCooldownCondition*>                          AnyOfConditions;                                         // 0x0038(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P1J5[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		bool StartCooldown(const class FScriptDelegate& InCooldownCallback);
		bool SetupPersistence(const class FScriptDelegate& InCooldownCallback);
		void Setup(class AActor* InOwnerActor);
		void Reset();
		void EndPlay();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
