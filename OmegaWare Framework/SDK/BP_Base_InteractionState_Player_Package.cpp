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
	 * 		Name   -> Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.UserExitedRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Player_C::UserExitedRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.UserExitedRange");
		
		UBP_Base_InteractionState_Player_C_UserExitedRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.UserEnteredRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Player_C::UserEnteredRange(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.UserEnteredRange");
		
		UBP_Base_InteractionState_Player_C_UserEnteredRange_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.OnEnterRangedIconRange_Local
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Player_C::OnEnterRangedIconRange_Local(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.OnEnterRangedIconRange_Local");
		
		UBP_Base_InteractionState_Player_C_OnEnterRangedIconRange_Local_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.OnLeaveRangedIconRange_Local
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Player_C::OnLeaveRangedIconRange_Local(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.OnLeaveRangedIconRange_Local");
		
		UBP_Base_InteractionState_Player_C_OnLeaveRangedIconRange_Local_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.Initialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       InInteractiveComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Player_C::Initialize(class UInteractiveComponent* InInteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.Initialize");
		
		UBP_Base_InteractionState_Player_C_Initialize_Params params {};
		params.InInteractiveComponent = InInteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.Uninitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Base_InteractionState_Player_C::Uninitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.Uninitialize");
		
		UBP_Base_InteractionState_Player_C_Uninitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.ExecuteUbergraph_BP_Base_InteractionState_Player
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_InteractionState_Player_C::ExecuteUbergraph_BP_Base_InteractionState_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C.ExecuteUbergraph_BP_Base_InteractionState_Player");
		
		UBP_Base_InteractionState_Player_C_ExecuteUbergraph_BP_Base_InteractionState_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_InteractionState_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_InteractionState_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_InteractionState_Player.BP_Base_InteractionState_Player_C");
		return ptr;
	}

}


