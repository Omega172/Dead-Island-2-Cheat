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
	 * BlueprintGeneratedClass BP_Base_Mutator.BP_Base_Mutator_C
	 * Size -> 0x0010 (FullSize[0x10B8] - InheritedSize[0x10A8])
	 */
	class ABP_Base_Mutator_C : public ABP_Base_Zombie_C
	{
	public:
		class URangedWeaponModulesComponent*                       RangedWeaponModules_MoveWithBone;                        // 0x10A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URangedWeaponModulesComponent*                       RangedWeaponModules_ManualMovement;                      // 0x10B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
