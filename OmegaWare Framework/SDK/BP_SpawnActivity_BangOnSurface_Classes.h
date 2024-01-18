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
	 * BlueprintGeneratedClass BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C
	 * Size -> 0x0018 (FullSize[0x0848] - InheritedSize[0x0830])
	 */
	class ABP_SpawnActivity_BangOnSurface_C : public ABP_Base_FocusedActivity_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ReferencePlane;                                          // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AOpenableActor*                                      Openable;                                                // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnOpenableStateChanged(EOpenableState NewState);
		void OnTriggerEvent(unsigned char Event);
		void SetRelatedActor(class AActor* Actor);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_SpawnActivity_BangOnSurface(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
