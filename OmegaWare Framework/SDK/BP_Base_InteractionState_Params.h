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
	 * Function BP_Base_InteractionState.BP_Base_InteractionState_C.GetCurrentState
	 */
	struct UBP_Base_InteractionState_C_GetCurrentState_Params
	{
	public:
		bool                                                       bStateActive;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_InteractionState.BP_Base_InteractionState_C.CacheRequiredComponents
	 */
	struct UBP_Base_InteractionState_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState.BP_Base_InteractionState_C.UpdateInteractionState
	 */
	struct UBP_Base_InteractionState_C_UpdateInteractionState_Params
	{
	public:
		bool                                                       bIsBlocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Base_InteractionState.BP_Base_InteractionState_C.UnbindToStateDelegates
	 */
	struct UBP_Base_InteractionState_C_UnbindToStateDelegates_Params
	{	};

	/**
	 * Function BP_Base_InteractionState.BP_Base_InteractionState_C.BindToStateDelegates
	 */
	struct UBP_Base_InteractionState_C_BindToStateDelegates_Params
	{	};

	/**
	 * Function BP_Base_InteractionState.BP_Base_InteractionState_C.Initialize
	 */
	struct UBP_Base_InteractionState_C_Initialize_Params
	{
	public:
		class UInteractiveComponent*                               InInteractiveComponent;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState.BP_Base_InteractionState_C.Uninitialize
	 */
	struct UBP_Base_InteractionState_C_Uninitialize_Params
	{	};

	/**
	 * Function BP_Base_InteractionState.BP_Base_InteractionState_C.ExecuteUbergraph_BP_Base_InteractionState
	 */
	struct UBP_Base_InteractionState_C_ExecuteUbergraph_BP_Base_InteractionState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8Q3J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
