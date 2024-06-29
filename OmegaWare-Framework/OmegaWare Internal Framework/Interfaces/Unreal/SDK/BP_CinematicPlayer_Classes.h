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
	 * BlueprintGeneratedClass BP_CinematicPlayer.BP_CinematicPlayer_C
	 * Size -> 0x0050 (FullSize[0x0300] - InheritedSize[0x02B0])
	 */
	class ABP_CinematicPlayer_C : public AActor
	{
	public:
		class USkeletalMeshComponent*                              MeshFirstPerson;                                         // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDIPlayerCameraComponent*                            FirstPersonPlayerCamera;                                 // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDIObservableComponent*                              Observable;                                              // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProjectileSpawnerComponent*                         IntoxicatedProjectileSpawner;                            // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDIObservableComponent*                              ObserverComponent;                                       // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAmbientLookTargetComponent*                         LookTarget;                                              // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USoftBodyComponent*                                  SoftBodyComponent;                                       // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CharacterMesh0;                                          // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UArrowComponent*                                     ArrowComponent;                                          // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
