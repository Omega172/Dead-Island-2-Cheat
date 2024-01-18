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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class EnemyLevelArea.EnemyLevelAreaData
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UEnemyLevelAreaData : public UGameAreaData
	{
	public:
		TArray<struct FEnemyLevelAreaEntry>                        Entries;                                                 // 0x00A8(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_982V[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnemyLevelArea.EnemyLevelAreaManager
	 * Size -> 0x0000 (FullSize[0x0348] - InheritedSize[0x0348])
	 */
	class AEnemyLevelAreaManager : public AGameAreaManager
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
