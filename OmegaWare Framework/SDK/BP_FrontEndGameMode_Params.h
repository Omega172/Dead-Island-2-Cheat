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
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenEntryScreen
	 */
	struct ABP_FrontEndGameMode_C_OpenEntryScreen_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ScheduleOpenFrontendMenu
	 */
	struct ABP_FrontEndGameMode_C_ScheduleOpenFrontendMenu_Params
	{
	public:
		struct FMenuOpeningParams                                  MenuOpeningParams;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ExecuteOpenFrontendMenu
	 */
	struct ABP_FrontEndGameMode_C_ExecuteOpenFrontendMenu_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenUserSignIn
	 */
	struct ABP_FrontEndGameMode_C_OpenUserSignIn_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenGameLobby
	 */
	struct ABP_FrontEndGameMode_C_OpenGameLobby_Params
	{
	public:
		EGameType                                                  GameType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ELW5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.CloseBackgroundVideo
	 */
	struct ABP_FrontEndGameMode_C_CloseBackgroundVideo_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenBackgroundVideo
	 */
	struct ABP_FrontEndGameMode_C_OpenBackgroundVideo_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenMapBrowser
	 */
	struct ABP_FrontEndGameMode_C_OpenMapBrowser_Params
	{
	public:
		EGameType                                                  GameType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenMainMenu
	 */
	struct ABP_FrontEndGameMode_C_OpenMainMenu_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenTitleScreen
	 */
	struct ABP_FrontEndGameMode_C_OpenTitleScreen_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnBackToTitleScreen
	 */
	struct ABP_FrontEndGameMode_C_OnBackToTitleScreen_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ReceiveEndPlay
	 */
	struct ABP_FrontEndGameMode_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterSplash
	 */
	struct ABP_FrontEndGameMode_C_OnEnterSplash_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterUserSignIn
	 */
	struct ABP_FrontEndGameMode_C_OnEnterUserSignIn_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterFrontEnd
	 */
	struct ABP_FrontEndGameMode_C_OnEnterFrontEnd_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterJoinPartyGame
	 */
	struct ABP_FrontEndGameMode_C_OnEnterJoinPartyGame_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnMenuClosed
	 */
	struct ABP_FrontEndGameMode_C_OnMenuClosed_Params
	{
	public:
		class UMenuInstance*                                       MenuInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ReceiveBeginPlay
	 */
	struct ABP_FrontEndGameMode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterEntry
	 */
	struct ABP_FrontEndGameMode_C_OnEnterEntry_Params
	{	};

	/**
	 * Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ExecuteUbergraph_BP_FrontEndGameMode
	 */
	struct ABP_FrontEndGameMode_C_ExecuteUbergraph_BP_FrontEndGameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
