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
	 * Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.GetCurrentState
	 */
	struct UBP_InteractionState_NeedsPower_C_GetCurrentState_Params
	{
	public:
		bool                                                       bStateActive;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.CacheRequiredComponents
	 */
	struct UBP_InteractionState_NeedsPower_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.UnbindToStateDelegates
	 */
	struct UBP_InteractionState_NeedsPower_C_UnbindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.BindToStateDelegates
	 */
	struct UBP_InteractionState_NeedsPower_C_BindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_NeedsPower.BP_InteractionState_NeedsPower_C.UpdatePowerState
	 */
	struct UBP_InteractionState_NeedsPower_C_UpdatePowerState_Params
	{
	public:
		bool                                                       bHasPower;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
