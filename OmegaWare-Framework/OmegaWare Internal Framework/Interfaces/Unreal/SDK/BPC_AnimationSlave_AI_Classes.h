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
	 * BlueprintGeneratedClass BPC_AnimationSlave_AI.BPC_AnimationSlave_AI_C
	 * Size -> 0x001A (FullSize[0x065A] - InheritedSize[0x0640])
	 */
	class UBPC_AnimationSlave_AI_C : public UAnimationSlaveComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0640(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             KB;                                                      // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DelayTimerGUID;                                          // 0x0650(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       DelayedFactSet;                                          // 0x0658(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseDelayedLocomotionSyncState;                           // 0x0659(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SyncStateExpressionChanged(bool Result);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnDelayOver();
		void ExecuteUbergraph_BPC_AnimationSlave_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
