/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Story_GameState.BP_Story_GameState_C.SetPlayerBusy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBusy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Story_GameState_C::SetPlayerBusy(bool bBusy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_GameState.BP_Story_GameState_C.SetPlayerBusy");
		
		ABP_Story_GameState_C_SetPlayerBusy_Params params {};
		params.bBusy = bBusy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Story_GameState.BP_Story_GameState_C.ShowScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ShowScreen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Story_GameState_C::ShowScreen(class UClass* ShowScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_GameState.BP_Story_GameState_C.ShowScreen");
		
		ABP_Story_GameState_C_ShowScreen_Params params {};
		params.ShowScreen = ShowScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Story_GameState.BP_Story_GameState_C.CloseCurrentScreen
	 * 		Flags  -> ()
	 */
	void ABP_Story_GameState_C::CloseCurrentScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_GameState.BP_Story_GameState_C.CloseCurrentScreen");
		
		ABP_Story_GameState_C_CloseCurrentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Story_GameState.BP_Story_GameState_C.ToggleGameMenu
	 * 		Flags  -> ()
	 */
	void ABP_Story_GameState_C::ToggleGameMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_GameState.BP_Story_GameState_C.ToggleGameMenu");
		
		ABP_Story_GameState_C_ToggleGameMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Story_GameState.BP_Story_GameState_C.ShowGameMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Story_GameState_C::ShowGameMenu(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_GameState.BP_Story_GameState_C.ShowGameMenu");
		
		ABP_Story_GameState_C_ShowGameMenu_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Story_GameState.BP_Story_GameState_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Story_GameState_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_GameState.BP_Story_GameState_C.ReceiveEndPlay");
		
		ABP_Story_GameState_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Story_GameState.BP_Story_GameState_C.EndGameMenuAudioState
	 * 		Flags  -> ()
	 */
	void ABP_Story_GameState_C::EndGameMenuAudioState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_GameState.BP_Story_GameState_C.EndGameMenuAudioState");
		
		ABP_Story_GameState_C_EndGameMenuAudioState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Story_GameState.BP_Story_GameState_C.ExecuteUbergraph_BP_Story_GameState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Story_GameState_C::ExecuteUbergraph_BP_Story_GameState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Story_GameState.BP_Story_GameState_C.ExecuteUbergraph_BP_Story_GameState");
		
		ABP_Story_GameState_C_ExecuteUbergraph_BP_Story_GameState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Story_GameState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Story_GameState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Story_GameState.BP_Story_GameState_C");
		return ptr;
	}

}


