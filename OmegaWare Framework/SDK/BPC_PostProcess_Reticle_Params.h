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
	 * Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.TickVariables
	 */
	struct UBPC_PostProcess_Reticle_C_TickVariables_Params
	{	};

	/**
	 * Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.InitVariables
	 */
	struct UBPC_PostProcess_Reticle_C_InitVariables_Params
	{	};

	/**
	 * Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.Set PostProcess
	 */
	struct UBPC_PostProcess_Reticle_C_SetPostProcess_Params
	{	};

	/**
	 * Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ReceiveBeginPlay
	 */
	struct UBPC_PostProcess_Reticle_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ReceiveTick
	 */
	struct UBPC_PostProcess_Reticle_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ReceiveEndPlay
	 */
	struct UBPC_PostProcess_Reticle_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C.ExecuteUbergraph_BPC_PostProcess_Reticle
	 */
	struct UBPC_PostProcess_Reticle_C_ExecuteUbergraph_BPC_PostProcess_Reticle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
