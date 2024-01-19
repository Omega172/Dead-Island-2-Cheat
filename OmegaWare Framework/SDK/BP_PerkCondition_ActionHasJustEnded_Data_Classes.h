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
	 * BlueprintGeneratedClass BP_PerkCondition_ActionHasJustEnded_Data.BP_PerkCondition_ActionHasJustEnded_Data_C
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UBP_PerkCondition_ActionHasJustEnded_Data_C : public UConditionCustomDataBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADICharacter*                                        Owner;                                                   // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnPlayer;                                                // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KW1S[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponEquippableComponent*                          WeaponEquippable;                                        // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ActionHasEnded(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason);
		void UnbindFromEndAction();
		void ListenToItemBeingEquipped(class UWeaponEquippableComponent* OnEquippable);
		void EquippableAssigned(class UPaperDollSlot* PaperDollSlot);
		void BindToEndAction();
		void ExecuteUbergraph_BP_PerkCondition_ActionHasJustEnded_Data(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
