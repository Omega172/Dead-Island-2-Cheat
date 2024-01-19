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
	 * Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.DisableAimGuildance
	 */
	struct UBPC_PlayerTargetGuidance_C_DisableAimGuildance_Params
	{	};

	/**
	 * Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.EnableAimGuidance
	 */
	struct UBPC_PlayerTargetGuidance_C_EnableAimGuidance_Params
	{	};

	/**
	 * Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.ReceiveBeginPlay
	 */
	struct UBPC_PlayerTargetGuidance_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_PlayerTargetGuidance.BPC_PlayerTargetGuidance_C.ExecuteUbergraph_BPC_PlayerTargetGuidance
	 */
	struct UBPC_PlayerTargetGuidance_C_ExecuteUbergraph_BPC_PlayerTargetGuidance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X37L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
