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
	 * Function BP_Story_GameState.BP_Story_GameState_C.SetPlayerBusy
	 */
	struct ABP_Story_GameState_C_SetPlayerBusy_Params
	{
	public:
		bool                                                       bBusy;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O50W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Story_GameState.BP_Story_GameState_C.ShowScreen
	 */
	struct ABP_Story_GameState_C_ShowScreen_Params
	{
	public:
		class UClass*                                              ShowScreen;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Story_GameState.BP_Story_GameState_C.CloseCurrentScreen
	 */
	struct ABP_Story_GameState_C_CloseCurrentScreen_Params
	{	};

	/**
	 * Function BP_Story_GameState.BP_Story_GameState_C.ToggleGameMenu
	 */
	struct ABP_Story_GameState_C_ToggleGameMenu_Params
	{	};

	/**
	 * Function BP_Story_GameState.BP_Story_GameState_C.ShowGameMenu
	 */
	struct ABP_Story_GameState_C_ShowGameMenu_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Story_GameState.BP_Story_GameState_C.ReceiveEndPlay
	 */
	struct ABP_Story_GameState_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Story_GameState.BP_Story_GameState_C.EndGameMenuAudioState
	 */
	struct ABP_Story_GameState_C_EndGameMenuAudioState_Params
	{	};

	/**
	 * Function BP_Story_GameState.BP_Story_GameState_C.ExecuteUbergraph_BP_Story_GameState
	 */
	struct ABP_Story_GameState_C_ExecuteUbergraph_BP_Story_GameState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
