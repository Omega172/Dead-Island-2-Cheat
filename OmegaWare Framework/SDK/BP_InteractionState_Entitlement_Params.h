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
	 * Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.GetCurrentState
	 */
	struct UBP_InteractionState_Entitlement_C_GetCurrentState_Params
	{
	public:
		bool                                                       bStateActive;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.UnbindToStateDelegates
	 */
	struct UBP_InteractionState_Entitlement_C_UnbindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.UpdateText
	 */
	struct UBP_InteractionState_Entitlement_C_UpdateText_Params
	{	};

	/**
	 * Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.UpdateInteractionState
	 */
	struct UBP_InteractionState_Entitlement_C_UpdateInteractionState_Params
	{
	public:
		bool                                                       bIsBlocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.OnEntitlementStateChanged
	 */
	struct UBP_InteractionState_Entitlement_C_OnEntitlementStateChanged_Params
	{
	public:
		bool                                                       bHasAllRequiredEntitlements;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.BindToStateDelegates
	 */
	struct UBP_InteractionState_Entitlement_C_BindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.CacheRequiredComponents
	 */
	struct UBP_InteractionState_Entitlement_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.OnEnterState
	 */
	struct UBP_InteractionState_Entitlement_C_OnEnterState_Params
	{	};

	/**
	 * Function BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C.ExecuteUbergraph_BP_InteractionState_Entitlement
	 */
	struct UBP_InteractionState_Entitlement_C_ExecuteUbergraph_BP_InteractionState_Entitlement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RYII[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
