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
	 * Function BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C.IsPlayerHealthAtMax
	 */
	struct UBP_InteractionState_SnackBarCheck_C_IsPlayerHealthAtMax_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHealthAtMax;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VE07[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C.CheckInteraction
	 */
	struct UBP_InteractionState_SnackBarCheck_C_CheckInteraction_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBlocked;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C.Initialize
	 */
	struct UBP_InteractionState_SnackBarCheck_C_Initialize_Params
	{
	public:
		class UInteractiveComponent*                               InInteractiveComponent;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C.OnInteractionComplete_Local
	 */
	struct UBP_InteractionState_SnackBarCheck_C_OnInteractionComplete_Local_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BJDL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C.OnInteractionComplete_Server
	 */
	struct UBP_InteractionState_SnackBarCheck_C_OnInteractionComplete_Server_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZRMH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C.UpdatedHealth
	 */
	struct UBP_InteractionState_SnackBarCheck_C_UpdatedHealth_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LastHealth;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentHealth;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C.OnEnterRangeOrFocus_Local
	 */
	struct UBP_InteractionState_SnackBarCheck_C_OnEnterRangeOrFocus_Local_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C.OnLeaveRangeAndFocus_Local
	 */
	struct UBP_InteractionState_SnackBarCheck_C_OnLeaveRangeAndFocus_Local_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_SnackBarCheck.BP_InteractionState_SnackBarCheck_C.ExecuteUbergraph_BP_InteractionState_SnackBarCheck
	 */
	struct UBP_InteractionState_SnackBarCheck_C_ExecuteUbergraph_BP_InteractionState_SnackBarCheck_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3S40[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
