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
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.GetFuryValuesComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APawn*                                       Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFuryValuesComponent*                        FuryValuesComponent                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::GetFuryValuesComponent(class APawn** Player, class UFuryValuesComponent** FuryValuesComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.GetFuryValuesComponent");
		
		UBP_InteractionState_EnergyDrinkCheck_C_GetFuryValuesComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player != nullptr)
			*Player = params.Player;
		if (FuryValuesComponent != nullptr)
			*FuryValuesComponent = params.FuryValuesComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.IsFuryUnlocked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APawn*                                       Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUnlocked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::IsFuryUnlocked(class APawn** Player, bool* IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.IsFuryUnlocked");
		
		UBP_InteractionState_EnergyDrinkCheck_C_IsFuryUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player != nullptr)
			*Player = params.Player;
		if (IsUnlocked != nullptr)
			*IsUnlocked = params.IsUnlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.CheckInteraction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsBlocked                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::CheckInteraction(class APawn** User, bool* IsBlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.CheckInteraction");
		
		UBP_InteractionState_EnergyDrinkCheck_C_CheckInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (User != nullptr)
			*User = params.User;
		if (IsBlocked != nullptr)
			*IsBlocked = params.IsBlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.IsPlayerHealthAtMax
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHealthAtMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::IsPlayerHealthAtMax(class APawn** Player, bool* IsHealthAtMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.IsPlayerHealthAtMax");
		
		UBP_InteractionState_EnergyDrinkCheck_C_IsPlayerHealthAtMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player != nullptr)
			*Player = params.Player;
		if (IsHealthAtMax != nullptr)
			*IsHealthAtMax = params.IsHealthAtMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.IsPlayerFuryAtMax
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFuryAtMax                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::IsPlayerFuryAtMax(class APawn** Player, bool* IsFuryAtMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.IsPlayerFuryAtMax");
		
		UBP_InteractionState_EnergyDrinkCheck_C_IsPlayerFuryAtMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player != nullptr)
			*Player = params.Player;
		if (IsFuryAtMax != nullptr)
			*IsFuryAtMax = params.IsFuryAtMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnInteractionComplete_Local
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::OnInteractionComplete_Local(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnInteractionComplete_Local");
		
		UBP_InteractionState_EnergyDrinkCheck_C_OnInteractionComplete_Local_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnInteractionComplete_Server
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::OnInteractionComplete_Server(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnInteractionComplete_Server");
		
		UBP_InteractionState_EnergyDrinkCheck_C_OnInteractionComplete_Server_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.Initialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       InInteractiveComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::Initialize(class UInteractiveComponent* InInteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.Initialize");
		
		UBP_InteractionState_EnergyDrinkCheck_C_Initialize_Params params {};
		params.InInteractiveComponent = InInteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.HealthUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LastHealth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::HealthUpdated(class AActor* DamagedActor, float LastHealth, float CurrentHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.HealthUpdated");
		
		UBP_InteractionState_EnergyDrinkCheck_C_HealthUpdated_Params params {};
		params.DamagedActor = DamagedActor;
		params.LastHealth = LastHealth;
		params.CurrentHealth = CurrentHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnFuryUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PreviousValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::OnFuryUpdate(float NewValue, float PreviousValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnFuryUpdate");
		
		UBP_InteractionState_EnergyDrinkCheck_C_OnFuryUpdate_Params params {};
		params.NewValue = NewValue;
		params.PreviousValue = PreviousValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnEnterRangeOrFocus_Local
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::OnEnterRangeOrFocus_Local(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnEnterRangeOrFocus_Local");
		
		UBP_InteractionState_EnergyDrinkCheck_C_OnEnterRangeOrFocus_Local_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnLeaveRangeAndFocus_Local
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::OnLeaveRangeAndFocus_Local(class APawn* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.OnLeaveRangeAndFocus_Local");
		
		UBP_InteractionState_EnergyDrinkCheck_C_OnLeaveRangeAndFocus_Local_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.ExecuteUbergraph_BP_InteractionState_EnergyDrinkCheck
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_InteractionState_EnergyDrinkCheck_C::ExecuteUbergraph_BP_InteractionState_EnergyDrinkCheck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C.ExecuteUbergraph_BP_InteractionState_EnergyDrinkCheck");
		
		UBP_InteractionState_EnergyDrinkCheck_C_ExecuteUbergraph_BP_InteractionState_EnergyDrinkCheck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_InteractionState_EnergyDrinkCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_InteractionState_EnergyDrinkCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionState_EnergyDrinkCheck.BP_InteractionState_EnergyDrinkCheck_C");
		return ptr;
	}

}


