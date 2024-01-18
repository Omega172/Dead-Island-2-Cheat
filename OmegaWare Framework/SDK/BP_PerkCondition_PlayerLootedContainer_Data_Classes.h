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
	 * BlueprintGeneratedClass BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C
	 * Size -> 0x0019 (FullSize[0x0051] - InheritedSize[0x0038])
	 */
	class UBP_PerkCondition_PlayerLootedContainer_Data_C : public UConditionCustomDataBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_PlayerController_C*                         PlayerController;                                        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADICharacter*                                        DICharacter;                                             // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELootContainerMapDiscoveryType                             ContainerToCheck;                                        // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandleSatisfy(ELootContainerMapDiscoveryType ContainerType);
		void Possessed(class AController* PlayerController);
		void SetupLootingListener();
		void RemoveLootingListener();
		void OnPlayerLooted(class ADIPlayerController* PlayerController, class ALootableContainer* LootableContainer);
		void OnPlayerLooted_Trunk(ELootContainerMapDiscoveryType LootContainerType);
		void ExecuteUbergraph_BP_PerkCondition_PlayerLootedContainer_Data(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
