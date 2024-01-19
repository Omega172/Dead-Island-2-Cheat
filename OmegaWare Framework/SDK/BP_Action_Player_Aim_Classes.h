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
	 * BlueprintGeneratedClass BP_Action_Player_Aim.BP_Action_Player_Aim_C
	 * Size -> 0x0038 (FullSize[0x0108] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Player_Aim_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_Player_C*                                   MyCharacter;                                             // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AimRestartTimerHandle;                                   // 0x00E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        MontageToPlay;                                           // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_MeleeWeaponItem_C*                          MeleeWeaponRef;                                          // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCosmeticEffectsID                                  RumbleEffectID;                                          // 0x00F8(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RGGU[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticEffectsDefinition*                          RumbleEffect;                                            // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnBeginEarly();
		void Init();
		void OnFailedToPlay_92671E564B602D3CDE275489C45CFA7E(const class FName& NotifyName);
		void OnSectionChanged_92671E564B602D3CDE275489C45CFA7E(const class FName& SectionName);
		void OnNotifyEnd_92671E564B602D3CDE275489C45CFA7E(const class FName& NotifyName);
		void OnNotifyBegin_92671E564B602D3CDE275489C45CFA7E(const class FName& NotifyName);
		void OnInterrupted_92671E564B602D3CDE275489C45CFA7E(const class FName& NotifyName);
		void OnBlendOut_92671E564B602D3CDE275489C45CFA7E(const class FName& NotifyName);
		void OnCompleted_92671E564B602D3CDE275489C45CFA7E(const class FName& NotifyName);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void StartAimAnims();
		void ExecuteUbergraph_BP_Action_Player_Aim(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
