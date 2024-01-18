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
	 * Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.GetCurrentState
	 */
	struct UBP_InteractionState_Door_OneSided_C_GetCurrentState_Params
	{
	public:
		bool                                                       bStateActive;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.UnbindToStateDelegates
	 */
	struct UBP_InteractionState_Door_OneSided_C_UnbindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.OnDoorOpened
	 */
	struct UBP_InteractionState_Door_OneSided_C_OnDoorOpened_Params
	{	};

	/**
	 * Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.OnDoorClosed
	 */
	struct UBP_InteractionState_Door_OneSided_C_OnDoorClosed_Params
	{	};

	/**
	 * Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.OnDoorStateChanged
	 */
	struct UBP_InteractionState_Door_OneSided_C_OnDoorStateChanged_Params
	{
	public:
		EOpenableState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.BindToStateDelegates
	 */
	struct UBP_InteractionState_Door_OneSided_C_BindToStateDelegates_Params
	{	};

	/**
	 * Function BP_InteractionState_Door_OneSided.BP_InteractionState_Door_OneSided_C.CacheRequiredComponents
	 */
	struct UBP_InteractionState_Door_OneSided_C_CacheRequiredComponents_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
