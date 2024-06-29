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
	 * Function WBP_GameLobby.WBP_GameLobby_C.UpdateStatusText
	 */
	struct UWBP_GameLobby_C_UpdateStatusText_Params
	{
	public:
		class FText                                                StatusText;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_GameLobby.WBP_GameLobby_C.ReturnToMapSelect
	 */
	struct UWBP_GameLobby_C_ReturnToMapSelect_Params
	{	};

	/**
	 * Function WBP_GameLobby.WBP_GameLobby_C.OnSessionFailed
	 */
	struct UWBP_GameLobby_C_OnSessionFailed_Params
	{	};

	/**
	 * Function WBP_GameLobby.WBP_GameLobby_C.ExecuteUbergraph_WBP_GameLobby
	 */
	struct UWBP_GameLobby_C_ExecuteUbergraph_WBP_GameLobby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K3GY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
