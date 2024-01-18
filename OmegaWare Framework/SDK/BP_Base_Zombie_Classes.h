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
	 * BlueprintGeneratedClass BP_Base_Zombie.BP_Base_Zombie_C
	 * Size -> 0x0080 (FullSize[0x1018] - InheritedSize[0x0F98])
	 */
	class ABP_Base_Zombie_C : public ABP_Base_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0F98(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       RightHandActorGridCollision;                             // 0x0FA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBoxComponent*                                       LeftHandActorGridCollision;                              // 0x0FA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_ThresholdTracking_AI_C*                         BPC_ThresholdTracking_AI;                                // 0x0FB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDSWaterBuoyancyComponent*                           DSWaterBuoyancy_SkelMes;                                 // 0x0FB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDSWaterBuoyancyComponent*                           DSWaterBuoyancy_Capsule;                                 // 0x0FC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FName, class UDataTable*>                       ActivityTables;                                          // 0x0FC8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UserConstructionScript();
		void BndEvt__ImpactEventComponent_K2Node_ComponentBoundEvent_0_OnPointImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, const struct FPointImpactEventResult& ImpactEvent);
		void ExecuteUbergraph_BP_Base_Zombie(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
