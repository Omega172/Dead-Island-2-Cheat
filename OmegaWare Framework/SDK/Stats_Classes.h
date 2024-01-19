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
	 * Class Stats.StatsComponent
	 * Size -> 0x01B8 (FullSize[0x02A0] - InheritedSize[0x00E8])
	 */
	class UStatsComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnContextAdded;                                          // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnContextRemoved;                                        // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UStatWhiteListDataAsset*>                     StatWhitelistDataAssets;                                 // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UStatsRuntimeState*                                  ScratchData;                                             // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_37FF[0x180];                                 // 0x0120(0x0180) MISSED OFFSET (PADDING)

	public:
		void SetParent(class UStatsComponent* Parent);
		void SetContext(const class FString& InContext, bool bAdd);
		void RemoveParent(class UStatsComponent* Parent);
		void RemoveContext(const class FString& InContext);
		void RemoveAllParents();
		int32_t ParseGet(const class FString& StatAndContexts, EStatBindType BindType);
		void K2_SetCallbackForStat(class UObject* Object, const class FString& Stat, const class FString& FunctionName, EStatBindType BindType, bool bCallOnRegister);
		void K2_RemoveCallbackForStat(class UObject* Object, const class FString& Stat, const class FString& FunctionName, EStatBindType BindType, bool bCallOnRegister);
		void IncrementWithContexts(const class FString& Stat, TArray<class FString> InContexts, int32_t Amount);
		void Increment(const class FString& Stat, int32_t Amount);
		int32_t GetWithContexts(const class FString& Stat, TArray<class FString>* InContexts, EStatBindType BindType);
		int32_t Get(const class FString& Stat, EStatBindType BindType);
		void ClientReceiveStatRequests(TArray<struct FStatRequest> StatRequests);
		void AddParent(class UStatsComponent* Parent);
		void AddContext(const class FString& InContext);
		static UClass* StaticClass();
	};

	/**
	 * Class Stats.StatsRuntimeState
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	class UStatsRuntimeState : public UPersistentDataCollectionBase
	{
	public:
		TMap<uint32_t, int32_t>                                    HashToValueMap;                                          // 0x0048(0x0050) SaveGame, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Stats.StatWhiteListDataAsset
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UStatWhiteListDataAsset : public UDataAsset
	{
	public:
		TArray<struct FStatWhitelistEntry>                         StatWhitelist;                                           // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
