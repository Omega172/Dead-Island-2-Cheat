/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenEntryScreen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OpenEntryScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenEntryScreen");
		
		ABP_FrontEndGameMode_C_OpenEntryScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ScheduleOpenFrontendMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMenuOpeningParams                          MenuOpeningParams                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_FrontEndGameMode_C::ScheduleOpenFrontendMenu(const struct FMenuOpeningParams& MenuOpeningParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ScheduleOpenFrontendMenu");
		
		ABP_FrontEndGameMode_C_ScheduleOpenFrontendMenu_Params params {};
		params.MenuOpeningParams = MenuOpeningParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ExecuteOpenFrontendMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::ExecuteOpenFrontendMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ExecuteOpenFrontendMenu");
		
		ABP_FrontEndGameMode_C_ExecuteOpenFrontendMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenUserSignIn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OpenUserSignIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenUserSignIn");
		
		ABP_FrontEndGameMode_C_OpenUserSignIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenGameLobby
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameType                                          GameType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FrontEndGameMode_C::OpenGameLobby(EGameType GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenGameLobby");
		
		ABP_FrontEndGameMode_C_OpenGameLobby_Params params {};
		params.GameType = GameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.CloseBackgroundVideo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::CloseBackgroundVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.CloseBackgroundVideo");
		
		ABP_FrontEndGameMode_C_CloseBackgroundVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenBackgroundVideo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OpenBackgroundVideo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenBackgroundVideo");
		
		ABP_FrontEndGameMode_C_OpenBackgroundVideo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenMapBrowser
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameType                                          GameType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FrontEndGameMode_C::OpenMapBrowser(EGameType GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenMapBrowser");
		
		ABP_FrontEndGameMode_C_OpenMapBrowser_Params params {};
		params.GameType = GameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenMainMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OpenMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenMainMenu");
		
		ABP_FrontEndGameMode_C_OpenMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenTitleScreen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OpenTitleScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OpenTitleScreen");
		
		ABP_FrontEndGameMode_C_OpenTitleScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnBackToTitleScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OnBackToTitleScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnBackToTitleScreen");
		
		ABP_FrontEndGameMode_C_OnBackToTitleScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FrontEndGameMode_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ReceiveEndPlay");
		
		ABP_FrontEndGameMode_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterSplash
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OnEnterSplash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterSplash");
		
		ABP_FrontEndGameMode_C_OnEnterSplash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterUserSignIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OnEnterUserSignIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterUserSignIn");
		
		ABP_FrontEndGameMode_C_OnEnterUserSignIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterFrontEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OnEnterFrontEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterFrontEnd");
		
		ABP_FrontEndGameMode_C_OnEnterFrontEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterJoinPartyGame
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OnEnterJoinPartyGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterJoinPartyGame");
		
		ABP_FrontEndGameMode_C_OnEnterJoinPartyGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnMenuClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMenuInstance*                               MenuInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FrontEndGameMode_C::OnMenuClosed(class UMenuInstance* MenuInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnMenuClosed");
		
		ABP_FrontEndGameMode_C_OnMenuClosed_Params params {};
		params.MenuInstance = MenuInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ReceiveBeginPlay");
		
		ABP_FrontEndGameMode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterEntry
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_FrontEndGameMode_C::OnEnterEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.OnEnterEntry");
		
		ABP_FrontEndGameMode_C_OnEnterEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ExecuteUbergraph_BP_FrontEndGameMode
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FrontEndGameMode_C::ExecuteUbergraph_BP_FrontEndGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FrontEndGameMode.BP_FrontEndGameMode_C.ExecuteUbergraph_BP_FrontEndGameMode");
		
		ABP_FrontEndGameMode_C_ExecuteUbergraph_BP_FrontEndGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FrontEndGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FrontEndGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontEndGameMode.BP_FrontEndGameMode_C");
		return ptr;
	}

}


