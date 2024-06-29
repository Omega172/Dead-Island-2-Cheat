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
	 * Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.UserExitedRange
	 */
	struct UBP_InteractionState_HostileClose_C_UserExitedRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.UserEnteredRange
	 */
	struct UBP_InteractionState_HostileClose_C_UserEnteredRange_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.On Hostile Tracking Updated
	 */
	struct UBP_InteractionState_HostileClose_C_OnHostileTrackingUpdated_Params
	{
	public:
		struct FVector                                             OriginLocation;                                          // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHostilesInArea;                                         // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.Uninitialize
	 */
	struct UBP_InteractionState_HostileClose_C_Uninitialize_Params
	{	};

	/**
	 * Function BP_InteractionState_HostileClose.BP_InteractionState_HostileClose_C.ExecuteUbergraph_BP_InteractionState_HostileClose
	 */
	struct UBP_InteractionState_HostileClose_C_ExecuteUbergraph_BP_InteractionState_HostileClose_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_14UT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
