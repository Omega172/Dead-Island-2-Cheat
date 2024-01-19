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
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.CollectBlueprintLinks
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class AActor*> ABP_Base_ElectricalAOE_C::CollectBlueprintLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.CollectBlueprintLinks");
		
		ABP_Base_ElectricalAOE_C_CollectBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.StopActiveAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::StopActiveAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.StopActiveAudio");
		
		ABP_Base_ElectricalAOE_C_StopActiveAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.StartActiveAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::StartActiveAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.StartActiveAudio");
		
		ABP_Base_ElectricalAOE_C_StartActiveAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.ConfigureAndMoveStateTransmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::ConfigureAndMoveStateTransmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.ConfigureAndMoveStateTransmitter");
		
		ABP_Base_ElectricalAOE_C_ConfigureAndMoveStateTransmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.DrawStateTransmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::DrawStateTransmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.DrawStateTransmitter");
		
		ABP_Base_ElectricalAOE_C_DrawStateTransmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnRep_ElectricEffectsActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::OnRep_ElectricEffectsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnRep_ElectricEffectsActive");
		
		ABP_Base_ElectricalAOE_C_OnRep_ElectricEffectsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.StopElectricEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::StopElectricEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.StopElectricEffects");
		
		ABP_Base_ElectricalAOE_C_StopElectricEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.MoveStateTransmitter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::MoveStateTransmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.MoveStateTransmitter");
		
		ABP_Base_ElectricalAOE_C_MoveStateTransmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnInactiveEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::OnInactiveEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnInactiveEnd");
		
		ABP_Base_ElectricalAOE_C_OnInactiveEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnActiveEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::OnActiveEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnActiveEnd");
		
		ABP_Base_ElectricalAOE_C_OnActiveEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnPowercutEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::OnPowercutEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnPowercutEnd");
		
		ABP_Base_ElectricalAOE_C_OnPowercutEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnPowercut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::OnPowercut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnPowercut");
		
		ABP_Base_ElectricalAOE_C_OnPowercut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.SparkCosmeticEffectsToGround
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::SparkCosmeticEffectsToGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.SparkCosmeticEffectsToGround");
		
		ABP_Base_ElectricalAOE_C_SparkCosmeticEffectsToGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.SparkCosmeticEffectsAroundSource
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::SparkCosmeticEffectsAroundSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.SparkCosmeticEffectsAroundSource");
		
		ABP_Base_ElectricalAOE_C_SparkCosmeticEffectsAroundSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.FindAndSetHeightFromGround
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::FindAndSetHeightFromGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.FindAndSetHeightFromGround");
		
		ABP_Base_ElectricalAOE_C_FindAndSetHeightFromGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.Detonate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::Detonate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.Detonate");
		
		ABP_Base_ElectricalAOE_C_Detonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnBrokenEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::OnBrokenEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnBrokenEnd");
		
		ABP_Base_ElectricalAOE_C_OnBrokenEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.RequestStartingActions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::RequestStartingActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.RequestStartingActions");
		
		ABP_Base_ElectricalAOE_C_RequestStartingActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnBroken
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::OnBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnBroken");
		
		ABP_Base_ElectricalAOE_C_OnBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnInactive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::OnInactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnInactive");
		
		ABP_Base_ElectricalAOE_C_OnInactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::OnActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.OnActive");
		
		ABP_Base_ElectricalAOE_C_OnActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.UserConstructionScript");
		
		ABP_Base_ElectricalAOE_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_ElectricalAOE_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.ReceiveBeginPlay");
		
		ABP_Base_ElectricalAOE_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.BlueprintOnBeginAction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ElectricalAOE_C::BlueprintOnBeginAction(const struct FGuid& RequestId, const class FName& ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.BlueprintOnBeginAction");
		
		ABP_Base_ElectricalAOE_C_BlueprintOnBeginAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.BlueprintOnEndAction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActionType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterActionEndedReason                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ElectricalAOE_C::BlueprintOnEndAction(const struct FGuid& RequestId, const class FName& ActionType, ECharacterActionEndedReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.BlueprintOnEndAction");
		
		ABP_Base_ElectricalAOE_C_BlueprintOnEndAction_Params params {};
		params.RequestId = RequestId;
		params.ActionType = ActionType;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ElectricalAOE_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.ReceiveEndPlay");
		
		ABP_Base_ElectricalAOE_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ElectricalAOE_C::BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature");
		
		ABP_Base_ElectricalAOE_C_BndEvt__ImpactEvent_K2Node_ComponentBoundEvent_0_OnAnyImpactEventReceivedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.ExecuteUbergraph_BP_Base_ElectricalAOE
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_ElectricalAOE_C::ExecuteUbergraph_BP_Base_ElectricalAOE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C.ExecuteUbergraph_BP_Base_ElectricalAOE");
		
		ABP_Base_ElectricalAOE_C_ExecuteUbergraph_BP_Base_ElectricalAOE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_ElectricalAOE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_ElectricalAOE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_ElectricalAOE.BP_Base_ElectricalAOE_C");
		return ptr;
	}

}


