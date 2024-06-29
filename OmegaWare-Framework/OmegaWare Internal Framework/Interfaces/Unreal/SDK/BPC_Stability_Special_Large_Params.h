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
	 * Function BPC_Stability_Special_Large.BPC_Stability_Special_Large_C.ReceiveBeginPlay
	 */
	struct UBPC_Stability_Special_Large_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Stability_Special_Large.BPC_Stability_Special_Large_C.OnStabilityFullyDepleted
	 */
	struct UBPC_Stability_Special_Large_C_OnStabilityFullyDepleted_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Stability_Special_Large.BPC_Stability_Special_Large_C.ExecuteUbergraph_BPC_Stability_Special_Large
	 */
	struct UBPC_Stability_Special_Large_C_ExecuteUbergraph_BPC_Stability_Special_Large_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6LQL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
