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
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.Unpossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StimEmitter_Player_C::Unpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.Unpossessed");
		
		UBPC_StimEmitter_Player_C_Unpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.Possessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StimEmitter_Player_C::Possessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.Possessed");
		
		UBPC_StimEmitter_Player_C_Possessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.GetPlayerID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StimEmitter_Player_C::GetPlayerID(int32_t* PlayerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.GetPlayerID");
		
		UBPC_StimEmitter_Player_C_GetPlayerID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerID != nullptr)
			*PlayerID = params.PlayerID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.UpdateIgnorePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewIgnorePlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StimEmitter_Player_C::UpdateIgnorePlayer(bool NewIgnorePlayer, int32_t PlayerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.UpdateIgnorePlayer");
		
		UBPC_StimEmitter_Player_C_UpdateIgnorePlayer_Params params {};
		params.NewIgnorePlayer = NewIgnorePlayer;
		params.PlayerID = PlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.DoJump
	 * 		Flags  -> ()
	 */
	void UBPC_StimEmitter_Player_C::DoJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.DoJump");
		
		UBPC_StimEmitter_Player_C_DoJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.SetEmitterActivationByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FStimChooser                                StimName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBPC_StimEmitter_Player_C::SetEmitterActivationByName(bool bActive, struct FStimChooser* StimName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.SetEmitterActivationByName");
		
		UBPC_StimEmitter_Player_C_SetEmitterActivationByName_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StimName != nullptr)
			*StimName = params.StimName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.DoLowerBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StimEmitter_Player_C::DoLowerBody(const class FName& Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.DoLowerBody");
		
		UBPC_StimEmitter_Player_C_DoLowerBody_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.EndAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterActionEndedReason                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StimEmitter_Player_C::EndAction(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.EndAction");
		
		UBPC_StimEmitter_Player_C_EndAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.OnIgnorePlayerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PlayerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StimEmitter_Player_C::OnIgnorePlayerChanged(bool Value, int32_t PlayerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.OnIgnorePlayerChanged");
		
		UBPC_StimEmitter_Player_C_OnIgnorePlayerChanged_Params params {};
		params.Value = Value;
		params.PlayerID = PlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.BeginAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StimEmitter_Player_C::BeginAction(const struct FGuid& RequestId, const class FName& ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.BeginAction");
		
		UBPC_StimEmitter_Player_C_BeginAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_StimEmitter_Player_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.ReceiveBeginPlay");
		
		UBPC_StimEmitter_Player_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.ExecuteUbergraph_BPC_StimEmitter_Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_StimEmitter_Player_C::ExecuteUbergraph_BPC_StimEmitter_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_StimEmitter_Player.BPC_StimEmitter_Player_C.ExecuteUbergraph_BPC_StimEmitter_Player");
		
		UBPC_StimEmitter_Player_C_ExecuteUbergraph_BPC_StimEmitter_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_StimEmitter_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_StimEmitter_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_StimEmitter_Player.BPC_StimEmitter_Player_C");
		return ptr;
	}

}


