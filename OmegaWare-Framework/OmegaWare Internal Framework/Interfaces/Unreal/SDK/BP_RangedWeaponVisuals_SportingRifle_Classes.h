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
	 * BlueprintGeneratedClass BP_RangedWeaponVisuals_SportingRifle.BP_RangedWeaponVisuals_SportingRifle_C
	 * Size -> 0x0028 (FullSize[0x02D8] - InheritedSize[0x02B0])
	 */
	class ABP_RangedWeaponVisuals_SportingRifle_C : public AActor
	{
	public:
		class USceneComponent*                                     Reticle;                                                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_PostProcess_Reticle_C*                          BP_PostProcess_Reticle;                                  // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                SightHelper;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void TickWeaponPosAndRot();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
