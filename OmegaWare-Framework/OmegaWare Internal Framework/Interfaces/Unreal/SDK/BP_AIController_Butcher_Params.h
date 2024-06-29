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
	 * Function BP_AIController_Butcher.BP_AIController_Butcher_C.OnButcherCrouchRequirementMet
	 */
	struct ABP_AIController_Butcher_C_OnButcherCrouchRequirementMet_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P2EC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AIController_Butcher.BP_AIController_Butcher_C.RequestCrouchAction
	 */
	struct ABP_AIController_Butcher_C_RequestCrouchAction_Params
	{	};

	/**
	 * Function BP_AIController_Butcher.BP_AIController_Butcher_C.ReceivePossess
	 */
	struct ABP_AIController_Butcher_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_Butcher.BP_AIController_Butcher_C.CrouchActionSetup
	 */
	struct ABP_AIController_Butcher_C_CrouchActionSetup_Params
	{	};

	/**
	 * Function BP_AIController_Butcher.BP_AIController_Butcher_C.ReceiveUnPossess
	 */
	struct ABP_AIController_Butcher_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_Butcher.BP_AIController_Butcher_C.ExecuteUbergraph_BP_AIController_Butcher
	 */
	struct ABP_AIController_Butcher_C_ExecuteUbergraph_BP_AIController_Butcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
