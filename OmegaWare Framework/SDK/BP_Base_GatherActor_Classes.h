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
	 * BlueprintGeneratedClass BP_Base_GatherActor.BP_Base_GatherActor_C
	 * Size -> 0x0034 (FullSize[0x036C] - InheritedSize[0x0338])
	 */
	class ABP_Base_GatherActor_C : public APlayerGatherer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PostProcess_GatherPoint_C*                       BP_PostProcess_GatherPoint;                              // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameAreaComponent*                                  GameArea;                                                // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bUseSafeArea;                                            // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T8WH[0x3];                                   // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               GatherRequestID;                                         // 0x035C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TryEndGather();
		void TryStartGather(class APawn* Initiator, const struct FGatherContext& Context, bool* bSuccess);
		void RequestGatherEnd();
		void RequestGather(class APawn* Initiator, const struct FGatherContext& Context, bool* bSuccess);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void StartGatherVisuals();
		void EndGatherVisuals();
		void EnableGatherShape();
		void DisableGatherShape();
		void OnStartGathering();
		void OnStopGathering();
		void BndEvt__PlayerGatherComponent_K2Node_ComponentBoundEvent_0_GatherComponentOnCancelled__DelegateSignature();
		void ExecuteUbergraph_BP_Base_GatherActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
