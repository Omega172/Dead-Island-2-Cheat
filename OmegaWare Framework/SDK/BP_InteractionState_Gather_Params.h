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
	 * Function BP_InteractionState_Gather.BP_InteractionState_Gather_C.UnbindToStateDelegates
	 */
	struct UBP_InteractionState_Gather_C_UnbindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Gather.BP_InteractionState_Gather_C.BindToStateDelegates
	 */
	struct UBP_InteractionState_Gather_C_BindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Gather.BP_InteractionState_Gather_C.OnGatherFactChanged
	 */
	struct UBP_InteractionState_Gather_C_OnGatherFactChanged_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_Gather.BP_InteractionState_Gather_C.CacheRequiredComponents
	 */
	struct UBP_InteractionState_Gather_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Gather.BP_InteractionState_Gather_C.Initialize
	 */
	struct UBP_InteractionState_Gather_C_Initialize_Params
	{
	public:
		class UInteractiveComponent*                               InInteractiveComponent;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Gather.BP_InteractionState_Gather_C.GatherFactChanged
	 */
	struct UBP_InteractionState_Gather_C_GatherFactChanged_Params
	{
	public:
		bool                                                       bGatherState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_Gather.BP_InteractionState_Gather_C.UpdateState
	 */
	struct UBP_InteractionState_Gather_C_UpdateState_Params
	{	};

	/**
	 * Function BP_InteractionState_Gather.BP_InteractionState_Gather_C.ExecuteUbergraph_BP_InteractionState_Gather
	 */
	struct UBP_InteractionState_Gather_C_ExecuteUbergraph_BP_InteractionState_Gather_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
