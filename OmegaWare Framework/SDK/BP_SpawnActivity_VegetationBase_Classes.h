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
	 * BlueprintGeneratedClass BP_SpawnActivity_VegetationBase.BP_SpawnActivity_VegetationBase_C
	 * Size -> 0x02F9 (FullSize[0x0AE9] - InheritedSize[0x07F0])
	 */
	class ABP_SpawnActivity_VegetationBase_C : public ABP_Base_EntrySpawnActivity_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                LeftRegularDoor;                                         // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                RightRegularDoor;                                        // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                LeftLargeDoor;                                           // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                RightLargeDoor;                                          // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_EntryComponent_RequestLevelSequence_C*          BPC_EntryComponent_RequestLevelSequence;                 // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube;                                                    // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FBoundActor                                         RightDoorMesh;                                           // 0x0828(0x0160) Edit, BlueprintVisible, DisableEditOnInstance
		struct FBoundActor                                         LeftDoorMesh;                                            // 0x0988(0x0160) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Debug_EnableDoorVisuals;                                 // 0x0AE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant);
		void ExecuteUbergraph_BP_SpawnActivity_VegetationBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
