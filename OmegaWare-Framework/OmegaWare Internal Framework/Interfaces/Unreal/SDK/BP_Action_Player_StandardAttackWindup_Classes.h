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
	 * BlueprintGeneratedClass BP_Action_Player_StandardAttackWindup.BP_Action_Player_StandardAttackWindup_C
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Player_StandardAttackWindup_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_Player_C*                                   MyCharacter;                                             // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_MeleeWeaponItem_C*                          MeleeWeaponRef;                                          // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnBeginEarly();
		void Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout);
		void Init(class UObject* Params);
		void OnFailedToPlay_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName);
		void OnSectionChanged_A887B1C74DEF4227CF373F8B2E31778E(const class FName& SectionName);
		void OnNotifyEnd_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName);
		void OnNotifyBegin_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName);
		void OnInterrupted_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName);
		void OnBlendOut_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName);
		void OnCompleted_A887B1C74DEF4227CF373F8B2E31778E(const class FName& NotifyName);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Player_StandardAttackWindup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
