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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.HandleSatisfy
	 */
	struct UBP_PerkCondition_PlayerLootedContainer_Data_C_HandleSatisfy_Params
	{
	public:
		ELootContainerMapDiscoveryType                             ContainerType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.Possessed
	 */
	struct UBP_PerkCondition_PlayerLootedContainer_Data_C_Possessed_Params
	{
	public:
		class AController*                                         PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.SetupLootingListener
	 */
	struct UBP_PerkCondition_PlayerLootedContainer_Data_C_SetupLootingListener_Params
	{	};

	/**
	 * Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.RemoveLootingListener
	 */
	struct UBP_PerkCondition_PlayerLootedContainer_Data_C_RemoveLootingListener_Params
	{	};

	/**
	 * Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.OnPlayerLooted
	 */
	struct UBP_PerkCondition_PlayerLootedContainer_Data_C_OnPlayerLooted_Params
	{
	public:
		class ADIPlayerController*                                 PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALootableContainer*                                  LootableContainer;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.OnPlayerLooted_Trunk
	 */
	struct UBP_PerkCondition_PlayerLootedContainer_Data_C_OnPlayerLooted_Trunk_Params
	{
	public:
		ELootContainerMapDiscoveryType                             LootContainerType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_PlayerLootedContainer_Data.BP_PerkCondition_PlayerLootedContainer_Data_C.ExecuteUbergraph_BP_PerkCondition_PlayerLootedContainer_Data
	 */
	struct UBP_PerkCondition_PlayerLootedContainer_Data_C_ExecuteUbergraph_BP_PerkCondition_PlayerLootedContainer_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_33A5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
