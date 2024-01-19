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
	 * BlueprintGeneratedClass BP_Action_Player_ThrowingAttack.BP_Action_Player_ThrowingAttack_C
	 * Size -> 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Player_ThrowingAttack_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_Player_C*                                   PlayerCharacter;                                         // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_Player_ThrowingAttack_C*            ThrowingAttackParams;                                    // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInventoryComponent*                                 PlayerInventory;                                         // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckStamina(bool* CanTakeAction);
		bool OnBeginEarly();
		void MakeProjectile();
		void OnFailedToPlay_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName);
		void OnSectionChanged_DF819F014193E18B5C179D975AAA4639(const class FName& SectionName);
		void OnNotifyEnd_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName);
		void OnNotifyBegin_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName);
		void OnInterrupted_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName);
		void OnBlendOut_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName);
		void OnCompleted_DF819F014193E18B5C179D975AAA4639(const class FName& NotifyName);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ThrowWeapon();
		void ExecuteUbergraph_BP_Action_Player_ThrowingAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
