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
	 * BlueprintGeneratedClass BP_Base_FocusedActivity.BP_Base_FocusedActivity_C
	 * Size -> 0x0070 (FullSize[0x0830] - InheritedSize[0x07C0])
	 */
	class ABP_Base_FocusedActivity_C : public ABP_Base_AmbientSpawnActivity_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_EntryComponent_RequestLevelSequence_C*          BPC_EntryComponent_RequestLevelSequence;                 // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                ActionToPerform;                                         // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBoundActor>                                 ActorsTobind;                                            // 0x07D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay
		struct FGameSequencePlaybackParams                         DefaultPlaybackParams;                                   // 0x07E8(0x0024) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		struct FGameSequencePlaybackParams                         LoopingPlaybackParams;                                   // 0x080C(0x0024) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay

	public:
		void AddAnimationForState(class UParticipantSlotComponent* Participant, ELevelSequenceState State, const struct FGameSequencePlaybackParams& CustomPlaybackParams, bool ForceEarlyMontageOrphaning);
		void SetupAnimationParams(class UParticipantSlotComponent* Participant);
		void OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant);
		void ExecuteUbergraph_BP_Base_FocusedActivity(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
