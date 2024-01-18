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
	 * BlueprintGeneratedClass BPC_BaseEntryComponent.BPC_BaseEntryComponent_C
	 * Size -> 0x0128 (FullSize[0x0210] - InheritedSize[0x00E8])
	 */
	class UBPC_BaseEntryComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<class UParticipantSlotComponent*, class ADIAICharacter*> Characters;                                              // 0x00F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ABP_Base_SpawnActivity_C*                            Owner;                                                   // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PerformPreAnimationSetupLogic;                           // 0x0148(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable
		class FScriptMulticastDelegate                             PerformPreAnimationtriggerLogic;                         // 0x0158(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, AdvancedDisplay, BlueprintCallable
		TMap<class UParticipantSlotComponent*, bool>               OnComponentActivitySetupComplete;                        // 0x0168(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		TMap<class UParticipantSlotComponent*, bool>               OnComponentActivityComplete;                             // 0x01B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay
		class UDSLogChannelHandle*                                 DebugLogger;                                             // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LogDebugMessageWithParticipant(const class FString& Message, class UParticipantSlotComponent* ParticipantSlot, EDSLogVerbosity LogVerbosity);
		void LogDebugMessage(const class FString& Message, EDSLogVerbosity LogVerbosity);
		void SetupcomponentActivityData(class UParticipantSlotComponent* Participant);
		void CleanComponentState(class UParticipantSlotComponent* ParticipantSlot);
		void PerformComponentActivity(class UParticipantSlotComponent* ParticipantSlot);
		void PreparetoPerformComponentActivity(class UParticipantSlotComponent* ParticipantSlot);
		void ReceiveBeginPlay();
		void OnOwnerParticipantWillArrive(class UParticipantSlotComponent* Participant);
		void OnShouldPerformComponentActivity(class UParticipantSlotComponent* ParticipantSlot);
		void FnOnComponentActivityComplete(class UParticipantSlotComponent* ParticipantSlot);
		void OnOwnerParticipantReceived(class UParticipantSlotComponent* Participant);
		void OnZombieWillBeReleased(class UParticipantSlotComponent* ParticipantSlot);
		void ExecuteUbergraph_BPC_BaseEntryComponent(int32_t EntryPoint);
		void PerformPreAnimationtriggerLogic__DelegateSignature();
		void PerformPreAnimationSetupLogic__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
