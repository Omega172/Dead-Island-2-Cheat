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
	 * Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.GetCurrentState
	 */
	struct UBP_InteractionState_Blocked_C_GetCurrentState_Params
	{
	public:
		bool                                                       bStateActive;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.UnbindToStateDelegates
	 */
	struct UBP_InteractionState_Blocked_C_UnbindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.CacheRequiredComponents
	 */
	struct UBP_InteractionState_Blocked_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.BindToStateDelegates
	 */
	struct UBP_InteractionState_Blocked_C_BindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.OnEnterState
	 */
	struct UBP_InteractionState_Blocked_C_OnEnterState_Params
	{	};

	/**
	 * Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.OnLeaveState
	 */
	struct UBP_InteractionState_Blocked_C_OnLeaveState_Params
	{	};

	/**
	 * Function BP_InteractionState_Blocked.BP_InteractionState_Blocked_C.ExecuteUbergraph_BP_InteractionState_Blocked
	 */
	struct UBP_InteractionState_Blocked_C_ExecuteUbergraph_BP_InteractionState_Blocked_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X4Q1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
