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
	 * BlueprintGeneratedClass BP_Action_Player_StandardAttackRecovery.BP_Action_Player_StandardAttackRecovery_C
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Player_StandardAttackRecovery_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIPlayerCharacter*                                  Player;                                                  // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        RecoveryMontage;                                         // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFailedToPlay_053E489A431B245FB400D8854CE2DC9E(const class FName& NotifyName);
		void OnSectionChanged_053E489A431B245FB400D8854CE2DC9E(const class FName& SectionName);
		void OnNotifyEnd_053E489A431B245FB400D8854CE2DC9E(const class FName& NotifyName);
		void OnNotifyBegin_053E489A431B245FB400D8854CE2DC9E(const class FName& NotifyName);
		void OnInterrupted_053E489A431B245FB400D8854CE2DC9E(const class FName& NotifyName);
		void OnBlendOut_053E489A431B245FB400D8854CE2DC9E(const class FName& NotifyName);
		void OnCompleted_053E489A431B245FB400D8854CE2DC9E(const class FName& NotifyName);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Player_StandardAttackRecovery(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
