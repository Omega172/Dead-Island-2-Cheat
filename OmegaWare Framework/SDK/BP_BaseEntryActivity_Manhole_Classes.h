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
	 * BlueprintGeneratedClass BP_BaseEntryActivity_Manhole.BP_BaseEntryActivity_Manhole_C
	 * Size -> 0x000C (FullSize[0x0858] - InheritedSize[0x084C])
	 */
	class ABP_BaseEntryActivity_Manhole_C : public ABP_Base_HoleCuttingEntryActivity_C
	{
	public:
		unsigned char                                              UnknownData_5RRC[0x4];                                   // 0x084C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Sewer;                                                   // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ConstructBoundActors(class UParticipantSlotComponent** ParticipantSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
