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
	 * 		Name   -> Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.OnCharacterPossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AIMovement_AI_C::OnCharacterPossessed(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.OnCharacterPossessed");
		
		UBPC_AIMovement_AI_C_OnCharacterPossessed_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.RemoveAgainstWallFactDisableListener
	 * 		Flags  -> ()
	 */
	void UBPC_AIMovement_AI_C::RemoveAgainstWallFactDisableListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.RemoveAgainstWallFactDisableListener");
		
		UBPC_AIMovement_AI_C_RemoveAgainstWallFactDisableListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.OnDisableAgainstWallFactExpressionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AIMovement_AI_C::OnDisableAgainstWallFactExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.OnDisableAgainstWallFactExpressionChanged");
		
		UBPC_AIMovement_AI_C_OnDisableAgainstWallFactExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.AddAgainstWallFactDisableListener
	 * 		Flags  -> ()
	 */
	void UBPC_AIMovement_AI_C::AddAgainstWallFactDisableListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.AddAgainstWallFactDisableListener");
		
		UBPC_AIMovement_AI_C_AddAgainstWallFactDisableListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.TryGetCachedMovementData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MovementDataName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSCachedMovementData                        CachedMovementData                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPC_AIMovement_AI_C::TryGetCachedMovementData(const class FName& MovementDataName, bool* Success, struct FSCachedMovementData* CachedMovementData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.TryGetCachedMovementData");
		
		UBPC_AIMovement_AI_C_TryGetCachedMovementData_Params params {};
		params.MovementDataName = MovementDataName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CachedMovementData != nullptr)
			*CachedMovementData = params.CachedMovementData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_AIMovement_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.ReceiveBeginPlay");
		
		UBPC_AIMovement_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AIMovement_AI_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.ReceiveEndPlay");
		
		UBPC_AIMovement_AI_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.ExecuteUbergraph_BPC_AIMovement_AI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AIMovement_AI_C::ExecuteUbergraph_BPC_AIMovement_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_AIMovement_AI.BPC_AIMovement_AI_C.ExecuteUbergraph_BPC_AIMovement_AI");
		
		UBPC_AIMovement_AI_C_ExecuteUbergraph_BPC_AIMovement_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AIMovement_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AIMovement_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AIMovement_AI.BPC_AIMovement_AI_C");
		return ptr;
	}

}


