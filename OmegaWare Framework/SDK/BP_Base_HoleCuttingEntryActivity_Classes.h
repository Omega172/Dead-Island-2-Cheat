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
	 * BlueprintGeneratedClass BP_Base_HoleCuttingEntryActivity.BP_Base_HoleCuttingEntryActivity_C
	 * Size -> 0x005C (FullSize[0x084C] - InheritedSize[0x07F0])
	 */
	class ABP_Base_HoleCuttingEntryActivity_C : public ABP_Base_EntrySpawnActivity_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Opening;                                                 // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_EntryComponent_RequestLevelSequence_C*          BPC_EntryComponent_RequestLevelSequence;                 // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDecalComponent*                                     HoleDecal;                                               // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                ActionToPerform;                                         // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldLoopAnimation;                                     // 0x0818(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9QWQ[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoundActor>                                 BoundActors;                                             // 0x0820(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FColor                                              ColourTint;                                              // 0x0830(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BindName;                                                // 0x0834(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDoorLightmapType                                          LightmapType;                                            // 0x083C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VLMSampleatObjectCentre;                                 // 0x083D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6UF9[0x2];                                   // 0x083E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             VLMSampleOffset;                                         // 0x0840(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetLightingOverrides();
		void ConstructBoundActors(class UParticipantSlotComponent** ParticipantSlot);
		void UserConstructionScript();
		void OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant);
		void ExecuteUbergraph_BP_Base_HoleCuttingEntryActivity(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
