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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ToggleLootOutline
	 */
	struct ABP_Base_ItemPickup_C_ToggleLootOutline_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ClearDisplayName
	 */
	struct ABP_Base_ItemPickup_C_ClearDisplayName_Params
	{	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ProceduralItemMeshHandling
	 */
	struct ABP_Base_ItemPickup_C_ProceduralItemMeshHandling_Params
	{	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.StandardItemMeshHandling
	 */
	struct ABP_Base_ItemPickup_C_StandardItemMeshHandling_Params
	{	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.NullMeshes
	 */
	struct ABP_Base_ItemPickup_C_NullMeshes_Params
	{	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.SetComponentName
	 */
	struct ABP_Base_ItemPickup_C_SetComponentName_Params
	{	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.UserConstructionScript
	 */
	struct ABP_Base_ItemPickup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature
	 */
	struct ABP_Base_ItemPickup_C_BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U5LV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.OnCosmeticEffectsSetup
	 */
	struct ABP_Base_ItemPickup_C_OnCosmeticEffectsSetup_Params
	{
	public:
		EItemRarity                                                Rarity;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.OnConfiguredFrom
	 */
	struct ABP_Base_ItemPickup_C_OnConfiguredFrom_Params
	{
	public:
		class AItemActor*                                          ItemActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ReceiveBeginPlay
	 */
	struct ABP_Base_ItemPickup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_1_InteractionEnabledStateChangedDelegate__DelegateSignature
	 */
	struct ABP_Base_ItemPickup_C_BndEvt__PickupableComponent_K2Node_ComponentBoundEvent_1_InteractionEnabledStateChangedDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ExecuteUbergraph_BP_Base_ItemPickup
	 */
	struct ABP_Base_ItemPickup_C_ExecuteUbergraph_BP_Base_ItemPickup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_ItemPickup.BP_Base_ItemPickup_C.ItemPickupActorUndocked__DelegateSignature
	 */
	struct ABP_Base_ItemPickup_C_ItemPickupActorUndocked__DelegateSignature_Params
	{
	public:
		class ABP_Base_ItemPickup_C*                               ItemPickupActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
