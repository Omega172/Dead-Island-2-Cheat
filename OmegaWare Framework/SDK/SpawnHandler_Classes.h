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
	 * Class SpawnHandler.SpawnableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpawnHandler.SpawnHandlerManager
	 * Size -> 0x0120 (FullSize[0x03D0] - InheritedSize[0x02B0])
	 */
	class ASpawnHandlerManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_ZAHQ[0x120];                                 // 0x02B0(0x0120) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SpawnHandler.SpawnHandlerLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnHandlerLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_RequestSpawn(class UObject* WorldContext, const struct FSpawnParams& SpawnParams, const class FScriptDelegate& SpawnCallback);
		bool STATIC_RequestBatchSpawn(class UObject* WorldContext, TArray<struct FBatchSpawnRequestItem> SpawnsAndParams, const class FScriptDelegate& SpawnCallback);
		static UClass* StaticClass();
	};

	/**
	 * Class SpawnHandler.SpawnUserData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnUserData : public UAssetUserData
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
