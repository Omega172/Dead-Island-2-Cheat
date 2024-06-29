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
	 * BlueprintGeneratedClass BP_Base_Screamer.BP_Base_Screamer_C
	 * Size -> 0x0028 (FullSize[0x10D0] - InheritedSize[0x10A8])
	 */
	class ABP_Base_Screamer_C : public ABP_Base_Zombie_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScriptedSequenceComponent*                          ScriptedSequence_SummonBackup;                           // 0x10B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UActorSpatialGroupOwnerComponent*                    ActorSpatialGroupOwner_SummonBackup;                     // 0x10B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTriggerShapeComponent*                              TriggerShape_SummonBackup;                               // 0x10C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    ScreamSphere;                                            // 0x10C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Base_Screamer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
