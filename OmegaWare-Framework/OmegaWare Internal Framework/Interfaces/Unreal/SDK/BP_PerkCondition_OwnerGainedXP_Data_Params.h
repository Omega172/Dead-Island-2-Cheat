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
	 * Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.BindPlayerProgressionEvent
	 */
	struct UBP_PerkCondition_OwnerGainedXP_Data_C_BindPlayerProgressionEvent_Params
	{
	public:
		class ADIPlayerController*                                 DIPlayerController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Bind;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4EPE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.OnXPChanged
	 */
	struct UBP_PerkCondition_OwnerGainedXP_Data_C_OnXPChanged_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PreviousValue;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.OnPossesed
	 */
	struct UBP_PerkCondition_OwnerGainedXP_Data_C_OnPossesed_Params
	{
	public:
		class AController*                                         PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_OwnerGainedXP_Data.BP_PerkCondition_OwnerGainedXP_Data_C.ExecuteUbergraph_BP_PerkCondition_OwnerGainedXP_Data
	 */
	struct UBP_PerkCondition_OwnerGainedXP_Data_C_ExecuteUbergraph_BP_PerkCondition_OwnerGainedXP_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
