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
	 * Function BP_InteractionState_Lockdown.BP_InteractionState_Lockdown_C.GetCurrentState
	 */
	struct UBP_InteractionState_Lockdown_C_GetCurrentState_Params
	{
	public:
		bool                                                       bStateActive;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_Lockdown.BP_InteractionState_Lockdown_C.UnbindToStateDelegates
	 */
	struct UBP_InteractionState_Lockdown_C_UnbindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Lockdown.BP_InteractionState_Lockdown_C.BindToStateDelegates
	 */
	struct UBP_InteractionState_Lockdown_C_BindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Lockdown.BP_InteractionState_Lockdown_C.CacheRequiredComponents
	 */
	struct UBP_InteractionState_Lockdown_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
