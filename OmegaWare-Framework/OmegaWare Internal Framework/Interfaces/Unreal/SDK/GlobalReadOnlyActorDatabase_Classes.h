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
	 * Class GlobalReadOnlyActorDatabase.GlobalActorDatabaseData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlobalActorDatabaseData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlobalReadOnlyActorDatabase.GlobalActorDatabaseCollection
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGlobalActorDatabaseCollection : public UDataAsset
	{
	public:
		TArray<class UGlobalActorDatabaseDataAsset*>               Databases;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlobalReadOnlyActorDatabase.GlobalActorDatabaseDataContainer
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UGlobalActorDatabaseDataContainer : public UObject
	{
	public:
		struct FSoftObjectPath                                     ActorPath;                                               // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              MapName;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              MapDirectory;                                            // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              PersistentMapName;                                       // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransform                                          ActorTransform;                                          // 0x0070(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, class UGlobalActorDatabaseData*>         Data;                                                    // 0x00A0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlobalReadOnlyActorDatabase.GlobalActorDatabaseDataAsset
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UGlobalActorDatabaseDataAsset : public UDataAsset
	{
	public:
		TMap<struct FSoftObjectPath, class UGlobalActorDatabaseDataContainer*> ActorData;                                               // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Protected, NativeAccessSpecifierProtected
		class FString                                              MapDirectory;                                            // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              MapName;                                                 // 0x0090(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UGlobalActorDatabaseDataAsset*>               SublevelDatabases;                                       // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager
	 * Size -> 0x0080 (FullSize[0x0330] - InheritedSize[0x02B0])
	 */
	class AGlobalReadOnlyActorDatabaseRuntimeManager : public AInfo
	{
	public:
		class UGlobalActorDatabaseCollection*                      Collection;                                              // 0x02B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGlobalActorDatabaseDataAsset*>               Databases;                                               // 0x02B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<struct FHashResultIgnoreCase, class UGlobalActorDatabaseDataAsset*> MapPathToDataAssets;                                     // 0x02C8(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E855[0x18];                                  // 0x0318(0x0018) MISSED OFFSET (PADDING)

	public:
		class AGlobalReadOnlyActorDatabaseRuntimeManager* STATIC_GetGlobalReadOnlyActorDatabaseManager(class UObject* WorldContextObject);
		bool GetAllActorDataInLevel_BP(const class FString& InMapPath, TMap<struct FSoftObjectPath, class UGlobalActorDatabaseDataContainer*>* OutActorData);
		bool GetActorDataOfTypeInLevel_BP(const class FString& InMapURL, class UClass* InClass, TMap<struct FSoftObjectPath, class UGlobalActorDatabaseData*> OutActorData);
		bool GetActorDataOfType_BP(class UClass* InClass, TMap<struct FSoftObjectPath, class UGlobalActorDatabaseData*> OutActorData);
		class UGlobalActorDatabaseDataContainer* GetActorData_BP(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
