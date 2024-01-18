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
	 * BlueprintGeneratedClass BPC_BaseEntryComponent_RequestAction.BPC_BaseEntryComponent_RequestAction_C
	 * Size -> 0x00D0 (FullSize[0x02E0] - InheritedSize[0x0210])
	 */
	class UBPC_BaseEntryComponent_RequestAction_C : public UBPC_BaseEntryComponent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FCharacterActionRequestParams                       CharacterActionParameters;                               // 0x0218(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay
		class UCharacterActionRequestHelper*                       ActionHelper;                                            // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<struct FGuid, class UParticipantSlotComponent*>       ActionParticipantReceipt;                                // 0x0240(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UParticipantSlotComponent*, bool>               ParticipantInterrupted;                                  // 0x0290(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OnParticipantInterrupted(class UParticipantSlotComponent* Participant);
		void EndAction();
		void RequestAction(class UParticipantSlotComponent* ParticipantSlot);
		void OnActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnActionResolved(const struct FGuid& RequestID, const struct FCharacterActionOnResolvedParams& Params);
		void CleanComponentState(class UParticipantSlotComponent* ParticipantSlot);
		void ExecuteUbergraph_BPC_BaseEntryComponent_RequestAction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
