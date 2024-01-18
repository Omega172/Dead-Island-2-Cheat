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
	 * BlueprintGeneratedClass BP_Action_Player_CancelAttackActions.BP_Action_Player_CancelAttackActions_C
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UBP_Action_Player_CancelAttackActions_C : public UCharacterAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                AnimSetName;                                             // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIPlayerCharacter*                                  DICharacter;                                             // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFailedToPlay_59A2912344798E57A5C17BA5DCDD6A24(const class FName& NotifyName);
		void OnSectionChanged_59A2912344798E57A5C17BA5DCDD6A24(const class FName& SectionName);
		void OnNotifyEnd_59A2912344798E57A5C17BA5DCDD6A24(const class FName& NotifyName);
		void OnNotifyBegin_59A2912344798E57A5C17BA5DCDD6A24(const class FName& NotifyName);
		void OnInterrupted_59A2912344798E57A5C17BA5DCDD6A24(const class FName& NotifyName);
		void OnBlendOut_59A2912344798E57A5C17BA5DCDD6A24(const class FName& NotifyName);
		void OnCompleted_59A2912344798E57A5C17BA5DCDD6A24(const class FName& NotifyName);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_Player_CancelAttackActions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
