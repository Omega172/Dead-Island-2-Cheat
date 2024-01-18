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
	 * BlueprintGeneratedClass BP_Walker_InsectSwarm.BP_Walker_InsectSwarm_C
	 * Size -> 0x0018 (FullSize[0x1030] - InheritedSize[0x1018])
	 */
	class ABP_Walker_InsectSwarm_C : public ABP_Base_Walker_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1018(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     SwarmHomingLocation;                                     // 0x1020(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URangedWeaponModulesComponent*                       RangedWeaponModules;                                     // 0x1028(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetSwarmLocationBasedIfCrawler(bool bResult);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_Walker_InsectSwarm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
