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
	 * 		Name   -> Function BPC_Player_Stamina.BPC_Player_Stamina_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Player_Stamina_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Player_Stamina.BPC_Player_Stamina_C.ReceiveBeginPlay");
		
		UBPC_Player_Stamina_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Player_Stamina.BPC_Player_Stamina_C.OnStaminaUpdatedDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PreviousStamina                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Stamina                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Player_Stamina_C::OnStaminaUpdatedDelegate_Event(class AActor* Actor, float PreviousStamina, float Stamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Player_Stamina.BPC_Player_Stamina_C.OnStaminaUpdatedDelegate_Event");
		
		UBPC_Player_Stamina_C_OnStaminaUpdatedDelegate_Event_Params params {};
		params.Actor = Actor;
		params.PreviousStamina = PreviousStamina;
		params.Stamina = Stamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Player_Stamina.BPC_Player_Stamina_C.ExecuteUbergraph_BPC_Player_Stamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Player_Stamina_C::ExecuteUbergraph_BPC_Player_Stamina(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Player_Stamina.BPC_Player_Stamina_C.ExecuteUbergraph_BPC_Player_Stamina");
		
		UBPC_Player_Stamina_C_ExecuteUbergraph_BPC_Player_Stamina_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Player_Stamina_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Player_Stamina_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Player_Stamina.BPC_Player_Stamina_C");
		return ptr;
	}

}


