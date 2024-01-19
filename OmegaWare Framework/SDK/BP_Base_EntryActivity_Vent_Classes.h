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
	 * BlueprintGeneratedClass BP_Base_EntryActivity_Vent.BP_Base_EntryActivity_Vent_C
	 * Size -> 0x001C (FullSize[0x0868] - InheritedSize[0x084C])
	 */
	class ABP_Base_EntryActivity_Vent_C : public ABP_Base_HoleCuttingEntryActivity_C
	{
	public:
		unsigned char                                              UnknownData_EJIZ[0x4];                                   // 0x084C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Vent;                                                    // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESpawnVentMeshVariant                                      VentType;                                                // 0x0858(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FJ6U[0x7];                                   // 0x0859(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_DataAsset_SpawnMeshVariant_Vent_C*               VentMeshConfig;                                          // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BindOpening();
		void ConstructBoundActors(class UParticipantSlotComponent** ParticipantSlot);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
