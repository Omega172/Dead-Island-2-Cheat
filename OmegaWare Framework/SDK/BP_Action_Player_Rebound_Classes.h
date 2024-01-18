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
	 * BlueprintGeneratedClass BP_Action_Player_Rebound.BP_Action_Player_Rebound_C
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Player_Rebound_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADIPlayerCharacter*                                  Player;                                                  // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        ReboundMontage;                                          // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFailedToPlay_15C93BB9447E32AC02A9AE819099BAA7(const class FName& NotifyName);
		void OnSectionChanged_15C93BB9447E32AC02A9AE819099BAA7(const class FName& SectionName);
		void OnNotifyEnd_15C93BB9447E32AC02A9AE819099BAA7(const class FName& NotifyName);
		void OnNotifyBegin_15C93BB9447E32AC02A9AE819099BAA7(const class FName& NotifyName);
		void OnInterrupted_15C93BB9447E32AC02A9AE819099BAA7(const class FName& NotifyName);
		void OnBlendOut_15C93BB9447E32AC02A9AE819099BAA7(const class FName& NotifyName);
		void OnCompleted_15C93BB9447E32AC02A9AE819099BAA7(const class FName& NotifyName);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Player_Rebound(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
