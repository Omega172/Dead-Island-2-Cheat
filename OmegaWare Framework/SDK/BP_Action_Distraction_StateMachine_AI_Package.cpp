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
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GoToNextFailedState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterActionEndReason                          EndActionReason                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::GoToNextFailedState(ECharacterActionEndReason EndActionReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GoToNextFailedState");
		
		UBP_Action_Distraction_StateMachine_AI_C_GoToNextFailedState_Params params {};
		params.EndActionReason = EndActionReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveStateBasedFacts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::RemoveStateBasedFacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveStateBasedFacts");
		
		UBP_Action_Distraction_StateMachine_AI_C_RemoveStateBasedFacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddStateBasedFacts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::AddStateBasedFacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddStateBasedFacts");
		
		UBP_Action_Distraction_StateMachine_AI_C_AddStateBasedFacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnCannotReachTargetInvestigationActionEnded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::OnCannotReachTargetInvestigationActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnCannotReachTargetInvestigationActionEnded");
		
		UBP_Action_Distraction_StateMachine_AI_C_OnCannotReachTargetInvestigationActionEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestCannotReachTargetInvestigationAction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::RequestCannotReachTargetInvestigationAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestCannotReachTargetInvestigationAction");
		
		UBP_Action_Distraction_StateMachine_AI_C_RequestCannotReachTargetInvestigationAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.SetDistractionSpeedOverride
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Activate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::SetDistractionSpeedOverride(bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.SetDistractionSpeedOverride");
		
		UBP_Action_Distraction_StateMachine_AI_C_SetDistractionSpeedOverride_Params params {};
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetInvestigationActionParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     ActionParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActionDefinition*                           ActionDefinition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionRequestParams               CharacterActionRequestParams                               (Parm, OutParm, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::GetInvestigationActionParams(class UCustomActionParamsBase* ActionParams, class UActionDefinition* ActionDefinition, struct FCharacterActionRequestParams* CharacterActionRequestParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetInvestigationActionParams");
		
		UBP_Action_Distraction_StateMachine_AI_C_GetInvestigationActionParams_Params params {};
		params.ActionParams = ActionParams;
		params.ActionDefinition = ActionDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterActionRequestParams != nullptr)
			*CharacterActionRequestParams = params.CharacterActionRequestParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.UnbindAndEndAction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       ActionId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCharacterActionRequestHelper*               ActionHelper                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::UnbindAndEndAction(struct FGuid* ActionId, class UCharacterActionRequestHelper** ActionHelper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.UnbindAndEndAction");
		
		UBP_Action_Distraction_StateMachine_AI_C_UnbindAndEndAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionId != nullptr)
			*ActionId = params.ActionId;
		if (ActionHelper != nullptr)
			*ActionHelper = params.ActionHelper;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnInvestigationActionEnded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::OnInvestigationActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnInvestigationActionEnded");
		
		UBP_Action_Distraction_StateMachine_AI_C_OnInvestigationActionEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetTravelToDistractionActionParams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionRequestParams               CharacterActionRequestParams                               (Parm, OutParm, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::GetTravelToDistractionActionParams(struct FCharacterActionRequestParams* CharacterActionRequestParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetTravelToDistractionActionParams");
		
		UBP_Action_Distraction_StateMachine_AI_C_GetTravelToDistractionActionParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterActionRequestParams != nullptr)
			*CharacterActionRequestParams = params.CharacterActionRequestParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.UnbindOnAllysCombatTargetChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::UnbindOnAllysCombatTargetChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.UnbindOnAllysCombatTargetChanged");
		
		UBP_Action_Distraction_StateMachine_AI_C_UnbindOnAllysCombatTargetChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetFriendlyStimOwnersCharacterAndController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADIAIController*                             Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::GetFriendlyStimOwnersCharacterAndController(class ADIAICharacter** Character, class ADIAIController** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetFriendlyStimOwnersCharacterAndController");
		
		UBP_Action_Distraction_StateMachine_AI_C_GetFriendlyStimOwnersCharacterAndController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.IsAlly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADICharacter*                                DIAICharactor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_Distraction_StateMachine_AI_C::IsAlly(class ADICharacter* DIAICharactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.IsAlly");
		
		UBP_Action_Distraction_StateMachine_AI_C_IsAlly_Params params {};
		params.DIAICharactor = DIAICharactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnAllysCombatTargetChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::OnAllysCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnAllysCombatTargetChanged");
		
		UBP_Action_Distraction_StateMachine_AI_C_OnAllysCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BindToStimOwnersCombatTargetChanged
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::BindToStimOwnersCombatTargetChanged(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BindToStimOwnersCombatTargetChanged");
		
		UBP_Action_Distraction_StateMachine_AI_C_BindToStimOwnersCombatTargetChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetDistractionFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     ReturnLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::GetDistractionFocus(struct FVector* ReturnLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetDistractionFocus");
		
		UBP_Action_Distraction_StateMachine_AI_C_GetDistractionFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnLocation != nullptr)
			*ReturnLocation = params.ReturnLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestInvestigationDurationTimer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Distraction_StateMachine_AI_C::RequestInvestigationDurationTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestInvestigationDurationTimer");
		
		UBP_Action_Distraction_StateMachine_AI_C_RequestInvestigationDurationTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestDistractionReactionDelayTimer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Distraction_StateMachine_AI_C::RequestDistractionReactionDelayTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestDistractionReactionDelayTimer");
		
		UBP_Action_Distraction_StateMachine_AI_C_RequestDistractionReactionDelayTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestDistractionTravelInterestTimer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Distraction_StateMachine_AI_C::RequestDistractionTravelInterestTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestDistractionTravelInterestTimer");
		
		UBP_Action_Distraction_StateMachine_AI_C_RequestDistractionTravelInterestTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveLookAtRequest
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::RemoveLookAtRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveLookAtRequest");
		
		UBP_Action_Distraction_StateMachine_AI_C_RemoveLookAtRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddLookAtRequest
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::AddLookAtRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddLookAtRequest");
		
		UBP_Action_Distraction_StateMachine_AI_C_AddLookAtRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestActivityInvestigationAction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::RequestActivityInvestigationAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestActivityInvestigationAction");
		
		UBP_Action_Distraction_StateMachine_AI_C_RequestActivityInvestigationAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestInvestigationAction
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::RequestInvestigationAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RequestInvestigationAction");
		
		UBP_Action_Distraction_StateMachine_AI_C_RequestInvestigationAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveDistractionStateTImers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::RemoveDistractionStateTImers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveDistractionStateTImers");
		
		UBP_Action_Distraction_StateMachine_AI_C_RemoveDistractionStateTImers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetMoveTargetData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     EQSLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StandStillOnSpot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     MoveTargetLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      MoveTargetActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MoveTargetOffsetFromActor                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MoveTargetDirectionAtDestination                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMoveTargetParams                           MoveTargetParams                                           (Parm, OutParm, NoDestructor)
	 * 		bool                                               UseDefaultParams                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::GetMoveTargetData(const struct FVector& EQSLocation, bool StandStillOnSpot, struct FVector* MoveTargetLocation, class AActor** MoveTargetActor, struct FVector* MoveTargetOffsetFromActor, struct FVector* MoveTargetDirectionAtDestination, struct FMoveTargetParams* MoveTargetParams, bool* UseDefaultParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetMoveTargetData");
		
		UBP_Action_Distraction_StateMachine_AI_C_GetMoveTargetData_Params params {};
		params.EQSLocation = EQSLocation;
		params.StandStillOnSpot = StandStillOnSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveTargetLocation != nullptr)
			*MoveTargetLocation = params.MoveTargetLocation;
		if (MoveTargetActor != nullptr)
			*MoveTargetActor = params.MoveTargetActor;
		if (MoveTargetOffsetFromActor != nullptr)
			*MoveTargetOffsetFromActor = params.MoveTargetOffsetFromActor;
		if (MoveTargetDirectionAtDestination != nullptr)
			*MoveTargetDirectionAtDestination = params.MoveTargetDirectionAtDestination;
		if (MoveTargetParams != nullptr)
			*MoveTargetParams = params.MoveTargetParams;
		if (UseDefaultParams != nullptr)
			*UseDefaultParams = params.UseDefaultParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndInvestigationState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::EndInvestigationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndInvestigationState");
		
		UBP_Action_Distraction_StateMachine_AI_C_EndInvestigationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.Begin Investigation State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::BeginInvestigationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.Begin Investigation State");
		
		UBP_Action_Distraction_StateMachine_AI_C_BeginInvestigationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnTravelToDistractionStateActionEnded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::OnTravelToDistractionStateActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnTravelToDistractionStateActionEnded");
		
		UBP_Action_Distraction_StateMachine_AI_C_OnTravelToDistractionStateActionEnded_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndTravelToDistractionState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::EndTravelToDistractionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndTravelToDistractionState");
		
		UBP_Action_Distraction_StateMachine_AI_C_EndTravelToDistractionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BeginTravelToDistractionState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::BeginTravelToDistractionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BeginTravelToDistractionState");
		
		UBP_Action_Distraction_StateMachine_AI_C_BeginTravelToDistractionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndLookAtReactionDelayState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::EndLookAtReactionDelayState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndLookAtReactionDelayState");
		
		UBP_Action_Distraction_StateMachine_AI_C_EndLookAtReactionDelayState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BeginLookAtReactionDelayState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::BeginLookAtReactionDelayState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BeginLookAtReactionDelayState");
		
		UBP_Action_Distraction_StateMachine_AI_C_BeginLookAtReactionDelayState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetNextState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               FailedState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDistractionStates                                 NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Action_Distraction_StateMachine_AI_C::GetNextState(bool FailedState, EDistractionStates* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GetNextState");
		
		UBP_Action_Distraction_StateMachine_AI_C_GetNextState_Params params {};
		params.FailedState = FailedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextState != nullptr)
			*NextState = params.NextState;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GoToNextState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::GoToNextState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GoToNextState");
		
		UBP_Action_Distraction_StateMachine_AI_C_GoToNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.EndState");
		
		UBP_Action_Distraction_StateMachine_AI_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GoToState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDistractionStates                                 NextState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::GoToState(EDistractionStates NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.GoToState");
		
		UBP_Action_Distraction_StateMachine_AI_C_GoToState_Params params {};
		params.NextState = NextState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BeginState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::BeginState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.BeginState");
		
		UBP_Action_Distraction_StateMachine_AI_C_BeginState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddHardDistractionTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::AddHardDistractionTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddHardDistractionTimer");
		
		UBP_Action_Distraction_StateMachine_AI_C_AddHardDistractionTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveMoveTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::RemoveMoveTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.RemoveMoveTarget");
		
		UBP_Action_Distraction_StateMachine_AI_C_RemoveMoveTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddMoveTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StandStillOnSpot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::AddMoveTarget(const struct FVector& Location, bool StandStillOnSpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.AddMoveTarget");
		
		UBP_Action_Distraction_StateMachine_AI_C_AddMoveTarget_Params params {};
		params.Location = Location;
		params.StandStillOnSpot = StandStillOnSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnBeginEarly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_Action_Distraction_StateMachine_AI_C::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnBeginEarly");
		
		UBP_Action_Distraction_StateMachine_AI_C_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnDistractionFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::OnDistractionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnDistractionFinished");
		
		UBP_Action_Distraction_StateMachine_AI_C_OnDistractionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnEnd");
		
		UBP_Action_Distraction_StateMachine_AI_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.HardTimeFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::HardTimeFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.HardTimeFinished");
		
		UBP_Action_Distraction_StateMachine_AI_C_HardTimeFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.OnBegin");
		
		UBP_Action_Distraction_StateMachine_AI_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.ExecuteUbergraph_BP_Action_Distraction_StateMachine_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Distraction_StateMachine_AI_C::ExecuteUbergraph_BP_Action_Distraction_StateMachine_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C.ExecuteUbergraph_BP_Action_Distraction_StateMachine_AI");
		
		UBP_Action_Distraction_StateMachine_AI_C_ExecuteUbergraph_BP_Action_Distraction_StateMachine_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Distraction_StateMachine_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Distraction_StateMachine_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Distraction_StateMachine_AI.BP_Action_Distraction_StateMachine_AI_C");
		return ptr;
	}

}


