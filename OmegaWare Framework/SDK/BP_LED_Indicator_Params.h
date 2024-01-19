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
	 * Function BP_LED_Indicator.BP_LED_Indicator_C.UpdateLEDState
	 */
	struct ABP_LED_Indicator_C_UpdateLEDState_Params
	{	};

	/**
	 * Function BP_LED_Indicator.BP_LED_Indicator_C.OnRep_LEDState
	 */
	struct ABP_LED_Indicator_C_OnRep_LEDState_Params
	{	};

	/**
	 * Function BP_LED_Indicator.BP_LED_Indicator_C.SetEnabled
	 */
	struct ABP_LED_Indicator_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LED_Indicator.BP_LED_Indicator_C.SetPowered
	 */
	struct ABP_LED_Indicator_C_SetPowered_Params
	{	};

	/**
	 * Function BP_LED_Indicator.BP_LED_Indicator_C.SetUnpowered
	 */
	struct ABP_LED_Indicator_C_SetUnpowered_Params
	{	};

	/**
	 * Function BP_LED_Indicator.BP_LED_Indicator_C.UserConstructionScript
	 */
	struct ABP_LED_Indicator_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_LED_Indicator.BP_LED_Indicator_C.ReceiveBeginPlay
	 */
	struct ABP_LED_Indicator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_LED_Indicator.BP_LED_Indicator_C.ExecuteUbergraph_BP_LED_Indicator
	 */
	struct ABP_LED_Indicator_C_ExecuteUbergraph_BP_LED_Indicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4NTE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
