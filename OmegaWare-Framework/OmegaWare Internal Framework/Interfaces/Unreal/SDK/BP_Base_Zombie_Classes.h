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
	 * BlueprintGeneratedClass BP_Base_Zombie.BP_Base_Zombie_C
	 * Size -> 0x0080 (FullSize[0x10A8] - InheritedSize[0x1028])
	 */
	class ABP_Base_Zombie_C : public ABP_Base_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       RightHandActorGridCollision;                             // 0x1030(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBoxComponent*                                       LeftHandActorGridCollision;                              // 0x1038(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_ThresholdTracking_AI_C*                         BPC_ThresholdTracking_AI;                                // 0x1040(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDSWaterBuoyancyComponent*                           DSWaterBuoyancy_SkelMes;                                 // 0x1048(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDSWaterBuoyancyComponent*                           DSWaterBuoyancy_Capsule;                                 // 0x1050(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FName, class UDataTable*>                       ActivityTables;                                          // 0x1058(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

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
