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
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.CheckEntitlementIsValidForDisplayName
	 */
	struct ABP_Base_EntitlementObject_C_CheckEntitlementIsValidForDisplayName_Params
	{
	public:
		struct FDataTableRowHandle                                 Entitlement;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.UpdateCosmeticEffectVisibility
	 */
	struct ABP_Base_EntitlementObject_C_UpdateCosmeticEffectVisibility_Params
	{	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.GetEntitlementForDisplayName
	 */
	struct ABP_Base_EntitlementObject_C_GetEntitlementForDisplayName_Params
	{
	public:
		bool                                                       ValidEntitlementFound;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XQO7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDataTableRowHandle                                 EntitlementToUse;                                        // 0x0008(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.GetEntitlementDisplayName
	 */
	struct ABP_Base_EntitlementObject_C_GetEntitlementDisplayName_Params
	{
	public:
		struct FDataTableRowHandle                                 Entitlement;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       EntitlementFoundInRegistry;                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZTTK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DisplayName;                                             // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.SetEntitlementDisplayName
	 */
	struct ABP_Base_EntitlementObject_C_SetEntitlementDisplayName_Params
	{	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.UpdateParticleVisibility
	 */
	struct ABP_Base_EntitlementObject_C_UpdateParticleVisibility_Params
	{	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.InitializeFromEntitlementData
	 */
	struct ABP_Base_EntitlementObject_C_InitializeFromEntitlementData_Params
	{	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.CreateResponses
	 */
	struct ABP_Base_EntitlementObject_C_CreateResponses_Params
	{
	public:
		TArray<struct FDataTableRowHandle>                         EntitlementsRequired;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.CreateGameEvent
	 */
	struct ABP_Base_EntitlementObject_C_CreateGameEvent_Params
	{	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.AddGameEventResponders
	 */
	struct ABP_Base_EntitlementObject_C_AddGameEventResponders_Params
	{
	public:
		TArray<class UGameEventResponse*>                          ResponsesToAdd;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.BndEvt__Pickupable_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature
	 */
	struct ABP_Base_EntitlementObject_C_BndEvt__Pickupable_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S27H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.UpdateVisuals
	 */
	struct ABP_Base_EntitlementObject_C_UpdateVisuals_Params
	{	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.ReceiveBeginPlay
	 */
	struct ABP_Base_EntitlementObject_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.ReceiveUpdateVisibility
	 */
	struct ABP_Base_EntitlementObject_C_ReceiveUpdateVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.BndEvt__Pickupable_K2Node_ComponentBoundEvent_3_InteractionEnabledStateChangedDelegate__DelegateSignature
	 */
	struct ABP_Base_EntitlementObject_C_BndEvt__Pickupable_K2Node_ComponentBoundEvent_3_InteractionEnabledStateChangedDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_EntitlementObject.BP_Base_EntitlementObject_C.ExecuteUbergraph_BP_Base_EntitlementObject
	 */
	struct ABP_Base_EntitlementObject_C_ExecuteUbergraph_BP_Base_EntitlementObject_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4HLG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
