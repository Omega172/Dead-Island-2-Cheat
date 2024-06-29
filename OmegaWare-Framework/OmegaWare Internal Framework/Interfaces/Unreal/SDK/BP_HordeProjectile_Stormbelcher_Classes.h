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
	 * BlueprintGeneratedClass BP_HordeProjectile_Stormbelcher.BP_HordeProjectile_Stormbelcher_C
	 * Size -> 0x0040 (FullSize[0x05F0] - InheritedSize[0x05B0])
	 */
	class ABP_HordeProjectile_Stormbelcher_C : public AModularProjectileActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStateTransmitterComponent*                          ShockTransmission;                                       // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      GrowSize_NewTrack_0_4B5E6CF546B5EFF6EEC2B9A938D82E0A;    // 0x05C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         GrowSize__Direction_4B5E6CF546B5EFF6EEC2B9A938D82E0A;    // 0x05CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VRZK[0x3];                                   // 0x05CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  GrowSize;                                                // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MaxSize;                                                 // 0x05D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MinSize;                                                 // 0x05E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GrowSize__FinishedFunc();
		void GrowSize__UpdateFunc();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_HordeProjectile_Stormbelcher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
