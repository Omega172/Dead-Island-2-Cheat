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
	 * 		Name   -> Function WBP_GameLobby.WBP_GameLobby_C.UpdateStatusText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StatusText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_GameLobby_C::UpdateStatusText(const class FText& StatusText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameLobby.WBP_GameLobby_C.UpdateStatusText");
		
		UWBP_GameLobby_C_UpdateStatusText_Params params {};
		params.StatusText = StatusText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_GameLobby.WBP_GameLobby_C.ReturnToMapSelect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_GameLobby_C::ReturnToMapSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameLobby.WBP_GameLobby_C.ReturnToMapSelect");
		
		UWBP_GameLobby_C_ReturnToMapSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_GameLobby.WBP_GameLobby_C.OnSessionFailed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWBP_GameLobby_C::OnSessionFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameLobby.WBP_GameLobby_C.OnSessionFailed");
		
		UWBP_GameLobby_C_OnSessionFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function WBP_GameLobby.WBP_GameLobby_C.ExecuteUbergraph_WBP_GameLobby
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_GameLobby_C::ExecuteUbergraph_WBP_GameLobby(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_GameLobby.WBP_GameLobby_C.ExecuteUbergraph_WBP_GameLobby");
		
		UWBP_GameLobby_C_ExecuteUbergraph_WBP_GameLobby_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_GameLobby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_GameLobby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameLobby.WBP_GameLobby_C");
		return ptr;
	}

}


