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
	 * BlueprintGeneratedClass BP_Base_EntrySpawnActivity.BP_Base_EntrySpawnActivity_C
	 * Size -> 0x0038 (FullSize[0x07F0] - InheritedSize[0x07B8])
	 */
	class ABP_Base_EntrySpawnActivity_C : public ABP_Base_SpawnActivity_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEntryActivityRegistrationComponent*                 EntryActivityRegistration;                               // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                LayerGroupDisableReason;                                 // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimationLayerGroup*                                LayerGroupToDisableOnSpawn;                              // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               LayerGroupDisableRequestID;                              // 0x07D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULootDropComponent*                                  LootDropComponentRef;                                    // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant);
		void OnzombieCanBeReleased(class UParticipantSlotComponent* ParticipantSlot);
		void ParticipantReceived(class UParticipantSlotComponent* Participant);
		void ExecuteUbergraph_BP_Base_EntrySpawnActivity(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
