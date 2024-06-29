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
	 * BlueprintGeneratedClass BP_Action_Player_InstantUseItem_PickUp.BP_Action_Player_InstantUseItem_PickUp_C
	 * Size -> 0x0034 (FullSize[0x0104] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Player_InstantUseItem_PickUp_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_InstantUsePickup_C*                         InstantItem;                                             // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDIAnimInstance*                                     CharacterAnimInstance;                                   // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        MontageToPlay;                                           // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Player_C*                                   Player;                                                  // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ItemEffectsApplied;                                      // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VCH9[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WeaponHideReason;                                        // 0x00FC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout);
		void ConsumeItem(class ABP_Base_InstantUsePickup_C* Item);
		void ApplyEffects();
		void OnFailedToPlay_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName);
		void OnSectionChanged_63686BC947A0D905815B2A9AEB96C5B4(const class FName& SectionName);
		void OnNotifyEnd_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName);
		void OnNotifyBegin_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName);
		void OnInterrupted_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName);
		void OnBlendOut_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName);
		void OnCompleted_63686BC947A0D905815B2A9AEB96C5B4(const class FName& NotifyName);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Player_InstantUseItem_PickUp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
