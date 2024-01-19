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
	 * BlueprintGeneratedClass BP_PerkCondition_PlayerHasPerformedAbility_Data.BP_PerkCondition_PlayerHasPerformedAbility_Data_C
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UBP_PerkCondition_PlayerHasPerformedAbility_Data_C : public UConditionCustomDataBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UActionDefinition*>                           ActionDefinition;                                        // 0x0040(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UBPC_Action_Player_C*                                BPCPlayerCharacterAction;                                // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ActionBegin(const struct FGuid& RequestID, const class FName& ActionType);
		void ExecuteUbergraph_BP_PerkCondition_PlayerHasPerformedAbility_Data(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
