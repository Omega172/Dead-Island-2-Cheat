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
	 * 		Name   -> Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.OnStartFindSession
	 * 		Flags  -> ()
	 */
	void ABP_Frontend_PlayerController_C::OnStartFindSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.OnStartFindSession");
		
		ABP_Frontend_PlayerController_C_OnStartFindSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.OnStartCreateSession
	 * 		Flags  -> ()
	 */
	void ABP_Frontend_PlayerController_C::OnStartCreateSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.OnStartCreateSession");
		
		ABP_Frontend_PlayerController_C_OnStartCreateSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.OpenGameLobbyWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGameType                                          InGameType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Frontend_PlayerController_C::OpenGameLobbyWidget(EGameType InGameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.OpenGameLobbyWidget");
		
		ABP_Frontend_PlayerController_C_OpenGameLobbyWidget_Params params {};
		params.InGameType = InGameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.ExecuteUbergraph_BP_Frontend_PlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Frontend_PlayerController_C::ExecuteUbergraph_BP_Frontend_PlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Frontend_PlayerController.BP_Frontend_PlayerController_C.ExecuteUbergraph_BP_Frontend_PlayerController");
		
		ABP_Frontend_PlayerController_C_ExecuteUbergraph_BP_Frontend_PlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Frontend_PlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Frontend_PlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Frontend_PlayerController.BP_Frontend_PlayerController_C");
		return ptr;
	}

}


