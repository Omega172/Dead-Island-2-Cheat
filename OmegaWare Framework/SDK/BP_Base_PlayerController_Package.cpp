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
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.ToggleScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OpeningScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::ToggleScreen(const class FName& OpeningScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.ToggleScreen");
		
		ABP_Base_PlayerController_C_ToggleScreen_Params params {};
		params.OpeningScreen = OpeningScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OpenMenuInternal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OpeningScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OpenMenuInternal(const class FName& OpeningScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OpenMenuInternal");
		
		ABP_Base_PlayerController_C_OpenMenuInternal_Params params {};
		params.OpeningScreen = OpeningScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.SetForceFeedbackEnabledForControlScheme
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EControlSchemeType                                 ControlScheme                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::SetForceFeedbackEnabledForControlScheme(EControlSchemeType ControlScheme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.SetForceFeedbackEnabledForControlScheme");
		
		ABP_Base_PlayerController_C_SetForceFeedbackEnabledForControlScheme_Params params {};
		params.ControlScheme = ControlScheme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.InpMapActEvt_ToggleGameMenu_InputMapperActionEventNode_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::InpMapActEvt_ToggleGameMenu_InputMapperActionEventNode_3(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.InpMapActEvt_ToggleGameMenu_InputMapperActionEventNode_3");
		
		ABP_Base_PlayerController_C_InpMapActEvt_ToggleGameMenu_InputMapperActionEventNode_3_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.InpMapActEvt_ShowGameMenu_InputMapperActionEventNode_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::InpMapActEvt_ShowGameMenu_InputMapperActionEventNode_2(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.InpMapActEvt_ShowGameMenu_InputMapperActionEventNode_2");
		
		ABP_Base_PlayerController_C_InpMapActEvt_ShowGameMenu_InputMapperActionEventNode_2_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.InpMapActEvt_VoiceCommandListenHold_InputMapperActionEventNode_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::InpMapActEvt_VoiceCommandListenHold_InputMapperActionEventNode_1(EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.InpMapActEvt_VoiceCommandListenHold_InputMapperActionEventNode_1");
		
		ABP_Base_PlayerController_C_InpMapActEvt_VoiceCommandListenHold_InputMapperActionEventNode_1_Params params {};
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_PlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.ReceiveBeginPlay");
		
		ABP_Base_PlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnControlSchemeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EControlSchemeType                                 CurrentControlScheme                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControlSchemeType                                 LastControlScheme                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnControlSchemeChanged(EControlSchemeType CurrentControlScheme, EControlSchemeType LastControlScheme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnControlSchemeChanged");
		
		ABP_Base_PlayerController_C_OnControlSchemeChanged_Params params {};
		params.CurrentControlScheme = CurrentControlScheme;
		params.LastControlScheme = LastControlScheme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenPlayerMenuInputEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenPlayerMenuInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenPlayerMenuInputEvent_Event");
		
		ABP_Base_PlayerController_C_OnOpenPlayerMenuInputEvent_Event_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.ReceiveEndPlay");
		
		ABP_Base_PlayerController_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenQuestLogInputEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenQuestLogInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenQuestLogInputEvent_Event");
		
		ABP_Base_PlayerController_C_OnOpenQuestLogInputEvent_Event_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenCharacterInputEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenCharacterInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenCharacterInputEvent_Event");
		
		ABP_Base_PlayerController_C_OnOpenCharacterInputEvent_Event_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenInventoryInputEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenInventoryInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenInventoryInputEvent_Event");
		
		ABP_Base_PlayerController_C_OnOpenInventoryInputEvent_Event_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenMapInputEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenMapInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenMapInputEvent_Event");
		
		ABP_Base_PlayerController_C_OnOpenMapInputEvent_Event_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnTogglePlayerMenuInputEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnTogglePlayerMenuInputEvent_Event(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnTogglePlayerMenuInputEvent_Event");
		
		ABP_Base_PlayerController_C_OnTogglePlayerMenuInputEvent_Event_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnPostHUDInitialised
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIHUD*                                      HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnPostHUDInitialised(class ADIHUD* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnPostHUDInitialised");
		
		ABP_Base_PlayerController_C_OnPostHUDInitialised_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnPreHUDDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIHUD*                                      HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnPreHUDDestroyed(class ADIHUD* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnPreHUDDestroyed");
		
		ABP_Base_PlayerController_C_OnPreHUDDestroyed_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.ExecuteUbergraph_BP_Base_PlayerController
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::ExecuteUbergraph_BP_Base_PlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.ExecuteUbergraph_BP_Base_PlayerController");
		
		ABP_Base_PlayerController_C_ExecuteUbergraph_BP_Base_PlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.PlayerLootedCarTrunk__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELootContainerMapDiscoveryType                     LootContainerType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::PlayerLootedCarTrunk__DelegateSignature(ELootContainerMapDiscoveryType LootContainerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.PlayerLootedCarTrunk__DelegateSignature");
		
		ABP_Base_PlayerController_C_PlayerLootedCarTrunk__DelegateSignature_Params params {};
		params.LootContainerType = LootContainerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnTogglePlayerMenuInputEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnTogglePlayerMenuInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnTogglePlayerMenuInputEvent__DelegateSignature");
		
		ABP_Base_PlayerController_C_OnTogglePlayerMenuInputEvent__DelegateSignature_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenMapInputEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenMapInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenMapInputEvent__DelegateSignature");
		
		ABP_Base_PlayerController_C_OnOpenMapInputEvent__DelegateSignature_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenInventoryInputEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenInventoryInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenInventoryInputEvent__DelegateSignature");
		
		ABP_Base_PlayerController_C_OnOpenInventoryInputEvent__DelegateSignature_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenCharacterInputEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenCharacterInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenCharacterInputEvent__DelegateSignature");
		
		ABP_Base_PlayerController_C_OnOpenCharacterInputEvent__DelegateSignature_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenQuestLogInputEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenQuestLogInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenQuestLogInputEvent__DelegateSignature");
		
		ABP_Base_PlayerController_C_OnOpenQuestLogInputEvent__DelegateSignature_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenPlayerMenuInputEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputActionEventType                              Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_PlayerController_C::OnOpenPlayerMenuInputEvent__DelegateSignature(class UInputMapperAction* Action, EInputActionEventType Type, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PlayerController.BP_Base_PlayerController_C.OnOpenPlayerMenuInputEvent__DelegateSignature");
		
		ABP_Base_PlayerController_C_OnOpenPlayerMenuInputEvent__DelegateSignature_Params params {};
		params.Action = Action;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_PlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_PlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_PlayerController.BP_Base_PlayerController_C");
		return ptr;
	}

}


