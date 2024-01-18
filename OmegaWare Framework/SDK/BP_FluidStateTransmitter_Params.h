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
	 * Function BP_FluidStateTransmitter.BP_FluidStateTransmitter_C.OnServerActivated
	 */
	struct UBP_FluidStateTransmitter_C_OnServerActivated_Params
	{
	public:
		ETransmittableStatus                                       StatusType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZ7K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Strength;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FluidStateTransmitter.BP_FluidStateTransmitter_C.OnServerDeactivated
	 */
	struct UBP_FluidStateTransmitter_C_OnServerDeactivated_Params
	{
	public:
		ETransmittableStatus                                       StatusType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FluidStateTransmitter.BP_FluidStateTransmitter_C.ExecuteUbergraph_BP_FluidStateTransmitter
	 */
	struct UBP_FluidStateTransmitter_C_ExecuteUbergraph_BP_FluidStateTransmitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
