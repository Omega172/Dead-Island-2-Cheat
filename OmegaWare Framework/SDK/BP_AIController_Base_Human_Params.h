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
	 * Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.EnableCombat
	 */
	struct ABP_AIController_Base_Human_C_EnableCombat_Params
	{	};

	/**
	 * Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.DisableCombat
	 */
	struct ABP_AIController_Base_Human_C_DisableCombat_Params
	{	};

	/**
	 * Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ReceiveUnPossess
	 */
	struct ABP_AIController_Base_Human_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ReceiveBeginPlay
	 */
	struct ABP_AIController_Base_Human_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ReceivePossess
	 */
	struct ABP_AIController_Base_Human_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIController_Base_Human.BP_AIController_Base_Human_C.ExecuteUbergraph_BP_AIController_Base_Human
	 */
	struct ABP_AIController_Base_Human_C_ExecuteUbergraph_BP_AIController_Base_Human_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y5LD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
