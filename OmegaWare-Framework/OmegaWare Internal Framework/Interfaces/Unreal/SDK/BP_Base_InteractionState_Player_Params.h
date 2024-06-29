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
	 * Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.UserExitedRange
	 */
	struct UBP_Base_InteractionState_Player_C_UserExitedRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.UserEnteredRange
	 */
	struct UBP_Base_InteractionState_Player_C_UserEnteredRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.OnEnterRangedIconRange_Local
	 */
	struct UBP_Base_InteractionState_Player_C_OnEnterRangedIconRange_Local_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.OnLeaveRangedIconRange_Local
	 */
	struct UBP_Base_InteractionState_Player_C_OnLeaveRangedIconRange_Local_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.Initialize
	 */
	struct UBP_Base_InteractionState_Player_C_Initialize_Params
	{
	public:
		class UInteractiveComponent*                               InInteractiveComponent;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.Uninitialize
	 */
	struct UBP_Base_InteractionState_Player_C_Uninitialize_Params
	{	};

	/**
	 * Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.ExecuteUbergraph_BP_Base_InteractionState_Player
	 */
	struct UBP_Base_InteractionState_Player_C_ExecuteUbergraph_BP_Base_InteractionState_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJVU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
