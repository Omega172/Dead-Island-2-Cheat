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
	 * BlueprintGeneratedClass BP_Action_Player_Throw.BP_Action_Player_Throw_C
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	class UBP_Action_Player_Throw_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_Player_C*                                   MyCharacter;                                             // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_MeleeWeaponItem_C*                          MeleeWeaponRef;                                          // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckStamina(bool* CanTakeAction);
		bool OnBeginEarly();
		void OnFailedToPlay_11B59D5A4FF44CD1430705A83714F546(const class FName& NotifyName);
		void OnSectionChanged_11B59D5A4FF44CD1430705A83714F546(const class FName& SectionName);
		void OnNotifyEnd_11B59D5A4FF44CD1430705A83714F546(const class FName& NotifyName);
		void OnNotifyBegin_11B59D5A4FF44CD1430705A83714F546(const class FName& NotifyName);
		void OnInterrupted_11B59D5A4FF44CD1430705A83714F546(const class FName& NotifyName);
		void OnBlendOut_11B59D5A4FF44CD1430705A83714F546(const class FName& NotifyName);
		void OnCompleted_11B59D5A4FF44CD1430705A83714F546(const class FName& NotifyName);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void ThrowTriggered();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_Player_Throw(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
