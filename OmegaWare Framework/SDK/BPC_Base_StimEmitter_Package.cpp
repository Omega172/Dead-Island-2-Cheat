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
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.RemoveFeelAllyCloseStim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_StimEmitter_C::RemoveFeelAllyCloseStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.RemoveFeelAllyCloseStim");
		
		UBPC_Base_StimEmitter_C_RemoveFeelAllyCloseStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.AddFeelAllyCloseStim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStimTemplate*                               StimTemplate                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::AddFeelAllyCloseStim(class UStimTemplate* StimTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.AddFeelAllyCloseStim");
		
		UBPC_Base_StimEmitter_C_AddFeelAllyCloseStim_Params params {};
		params.StimTemplate = StimTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnCombatStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECombatState                                       NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::OnCombatStateChanged(ECombatState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnCombatStateChanged");
		
		UBPC_Base_StimEmitter_C_OnCombatStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnCharacterUnpossessed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_StimEmitter_C::OnCharacterUnpossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnCharacterUnpossessed");
		
		UBPC_Base_StimEmitter_C_OnCharacterUnpossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnCharacterPossessed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::OnCharacterPossessed(class AController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnCharacterPossessed");
		
		UBPC_Base_StimEmitter_C_OnCharacterPossessed_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.UninitialiseFeelAllyCloseStim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_StimEmitter_C::UninitialiseFeelAllyCloseStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.UninitialiseFeelAllyCloseStim");
		
		UBPC_Base_StimEmitter_C_UninitialiseFeelAllyCloseStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.IntialiseFeelAllyCloseStim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_StimEmitter_C::IntialiseFeelAllyCloseStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.IntialiseFeelAllyCloseStim");
		
		UBPC_Base_StimEmitter_C_IntialiseFeelAllyCloseStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.SetAlive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Alive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Base_StimEmitter_C::SetAlive(bool Alive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.SetAlive");
		
		UBPC_Base_StimEmitter_C_SetAlive_Params params {};
		params.Alive = Alive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnResurrect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_StimEmitter_C::OnResurrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnResurrect");
		
		UBPC_Base_StimEmitter_C_OnResurrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnDeath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_StimEmitter_C::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.OnDeath");
		
		UBPC_Base_StimEmitter_C_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_Base_StimEmitter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ReceiveBeginPlay");
		
		UBPC_Base_StimEmitter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ReceiveEndPlay");
		
		UBPC_Base_StimEmitter_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ExecuteUbergraph_BPC_Base_StimEmitter
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_StimEmitter_C::ExecuteUbergraph_BPC_Base_StimEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_StimEmitter.BPC_Base_StimEmitter_C.ExecuteUbergraph_BPC_Base_StimEmitter");
		
		UBPC_Base_StimEmitter_C_ExecuteUbergraph_BPC_Base_StimEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Base_StimEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Base_StimEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Base_StimEmitter.BPC_Base_StimEmitter_C");
		return ptr;
	}

}


