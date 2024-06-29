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
	 * BlueprintGeneratedClass BP_Action_Player_HeavyAttackIntro.BP_Action_Player_HeavyAttackIntro_C
	 * Size -> 0x0048 (FullSize[0x0128] - InheritedSize[0x00E0])
	 */
	class UBP_Action_Player_HeavyAttackIntro_C : public UHeavyAttackIntroCharacterAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_Player_C*                                   PlayerCharacter;                                         // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CharacterSkeletalMeshRef;                                // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayAntic;                                               // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PIZK[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CharacterMesh;                                           // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_MeleeWeaponItem_C*                          MeleeWeaponRef;                                          // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        AnticMontageToUse;                                       // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RecoveryActive;                                          // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XC9T[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseFactKey                               ResolveWindupFact;                                       // 0x011C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ResolveWindup(class UAnimMontage** WindupToPlay);
		void GetAntic(bool* Continue);
		void Init(class UCustomActionParamsBase* UserParams);
		void OnFailedToPlay_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName);
		void OnSectionChanged_767FC960478F7BA1580F798E3C0CED85(const class FName& SectionName);
		void OnNotifyEnd_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName);
		void OnNotifyBegin_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName);
		void OnInterrupted_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName);
		void OnBlendOut_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName);
		void OnCompleted_767FC960478F7BA1580F798E3C0CED85(const class FName& NotifyName);
		void OnFailedToPlay_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName);
		void OnSectionChanged_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& SectionName);
		void OnNotifyEnd_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName);
		void OnNotifyBegin_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName);
		void OnInterrupted_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName);
		void OnBlendOut_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName);
		void OnCompleted_30A9C0DF4D407C341A89718DA8E7D4F7(const class FName& NotifyName);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_Player_HeavyAttackIntro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
