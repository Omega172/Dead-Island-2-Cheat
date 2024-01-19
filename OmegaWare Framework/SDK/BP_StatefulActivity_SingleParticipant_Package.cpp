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
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CollectBlueprintLinks
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class AActor*> ABP_StatefulActivity_SingleParticipant_C::CollectBlueprintLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CollectBlueprintLinks");
		
		ABP_StatefulActivity_SingleParticipant_C_CollectBlueprintLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.Prepare Wrapper Action Params
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::PrepareWrapperActionParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.Prepare Wrapper Action Params");
		
		ABP_StatefulActivity_SingleParticipant_C_PrepareWrapperActionParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessBoundActors
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              Values                                                     (Parm, OutParm)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ProcessBoundActors(TArray<class AActor*>* Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessBoundActors");
		
		ABP_StatefulActivity_SingleParticipant_C_ProcessBoundActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Values != nullptr)
			*Values = params.Values;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckConsecutiveInvalidStates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::CheckConsecutiveInvalidStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckConsecutiveInvalidStates");
		
		ABP_StatefulActivity_SingleParticipant_C_CheckConsecutiveInvalidStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckStateRequirements
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatefulActivityAnimation                  State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		bool                                               RequirementsMet                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::CheckStateRequirements(const struct FStatefulActivityAnimation& State, bool* RequirementsMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckStateRequirements");
		
		ABP_StatefulActivity_SingleParticipant_C_CheckStateRequirements_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequirementsMet != nullptr)
			*RequirementsMet = params.RequirementsMet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.FindFirstLevelSequence
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::FindFirstLevelSequence(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.FindFirstLevelSequence");
		
		ABP_StatefulActivity_SingleParticipant_C_FindFirstLevelSequence_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.SetParticipantTravelToLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULevelSequence*                              LevelSequence                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::SetParticipantTravelToLocation(class ULevelSequence* LevelSequence, class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.SetParticipantTravelToLocation");
		
		ABP_StatefulActivity_SingleParticipant_C_SetParticipantTravelToLocation_Params params {};
		params.LevelSequence = LevelSequence;
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RemoveParticipantOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::RemoveParticipantOptions(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RemoveParticipantOptions");
		
		ABP_StatefulActivity_SingleParticipant_C_RemoveParticipantOptions_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ApplyParticipantOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ApplyParticipantOptions(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ApplyParticipantOptions");
		
		ABP_StatefulActivity_SingleParticipant_C_ApplyParticipantOptions_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UnprocessParticipantData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::UnprocessParticipantData(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UnprocessParticipantData");
		
		ABP_StatefulActivity_SingleParticipant_C_UnprocessParticipantData_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessPrimaryParticipantData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ProcessPrimaryParticipantData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessPrimaryParticipantData");
		
		ABP_StatefulActivity_SingleParticipant_C_ProcessPrimaryParticipantData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UnbindParticipantSlots
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::UnbindParticipantSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UnbindParticipantSlots");
		
		ABP_StatefulActivity_SingleParticipant_C_UnbindParticipantSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessParticipantSlots
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ProcessParticipantSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessParticipantSlots");
		
		ABP_StatefulActivity_SingleParticipant_C_ProcessParticipantSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ConstructQDState
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEmotion*                                    StateEmotion                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSQuestDeliveryParams                       QDParams                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStatefulActivityAnimation                  StatefulActivityAnimation                                  (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ConstructQDState(class UEmotion* StateEmotion, const struct FSQuestDeliveryParams& QDParams, struct FStatefulActivityAnimation* StatefulActivityAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ConstructQDState");
		
		ABP_StatefulActivity_SingleParticipant_C_ConstructQDState_Params params {};
		params.StateEmotion = StateEmotion;
		params.QDParams = QDParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatefulActivityAnimation != nullptr)
			*StatefulActivityAnimation = params.StatefulActivityAnimation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ConstructQDParams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSQuestDeliveryParams                       QDParams                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UEmotion*                                    StateEmotion                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ConstructQDParams(const class FName& StateName, const struct FSQuestDeliveryParams& QDParams, class UEmotion* StateEmotion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ConstructQDParams");
		
		ABP_StatefulActivity_SingleParticipant_C_ConstructQDParams_Params params {};
		params.StateName = StateName;
		params.QDParams = QDParams;
		params.StateEmotion = StateEmotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.PrepareNewQuestDelivery
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::PrepareNewQuestDelivery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.PrepareNewQuestDelivery");
		
		ABP_StatefulActivity_SingleParticipant_C_PrepareNewQuestDelivery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CancelAllActivityActions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::CancelAllActivityActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CancelAllActivityActions");
		
		ABP_StatefulActivity_SingleParticipant_C_CancelAllActivityActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckAnimSetIsValid
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatefulActivityAnimation                  State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsStateValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::CheckAnimSetIsValid(const struct FStatefulActivityAnimation& State, const class FName& StateName, bool* IsStateValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckAnimSetIsValid");
		
		ABP_StatefulActivity_SingleParticipant_C_CheckAnimSetIsValid_Params params {};
		params.State = State;
		params.StateName = StateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsStateValid != nullptr)
			*IsStateValid = params.IsStateValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessAnimationStateData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NextStateName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsStateValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ProcessAnimationStateData(const class FName& NextStateName, bool* IsStateValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessAnimationStateData");
		
		ABP_StatefulActivity_SingleParticipant_C_ProcessAnimationStateData_Params params {};
		params.NextStateName = NextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsStateValid != nullptr)
			*IsStateValid = params.IsStateValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessGenericStateData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ProcessGenericStateData(const class FName& StateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessGenericStateData");
		
		ABP_StatefulActivity_SingleParticipant_C_ProcessGenericStateData_Params params {};
		params.StateName = StateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.SetupActivityLogger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::SetupActivityLogger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.SetupActivityLogger");
		
		ABP_StatefulActivity_SingleParticipant_C_SetupActivityLogger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.GetValidActivityStateNames
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::GetValidActivityStateNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.GetValidActivityStateNames");
		
		ABP_StatefulActivity_SingleParticipant_C_GetValidActivityStateNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessAnimationStateExitParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStatefulActivityAnimation                  State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		class FName                                        NextStateName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ProcessAnimationStateExitParams(const struct FStatefulActivityAnimation& State, const class FName& NextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessAnimationStateExitParams");
		
		ABP_StatefulActivity_SingleParticipant_C_ProcessAnimationStateExitParams_Params params {};
		params.State = State;
		params.NextStateName = NextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessParticipantData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ProcessParticipantData(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessParticipantData");
		
		ABP_StatefulActivity_SingleParticipant_C_ProcessParticipantData_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UpdateParticipantState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::UpdateParticipantState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UpdateParticipantState");
		
		ABP_StatefulActivity_SingleParticipant_C_UpdateParticipantState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckAllParticipantsReceived
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllParticipantsReceived                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::CheckAllParticipantsReceived(bool* AllParticipantsReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckAllParticipantsReceived");
		
		ABP_StatefulActivity_SingleParticipant_C_CheckAllParticipantsReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllParticipantsReceived != nullptr)
			*AllParticipantsReceived = params.AllParticipantsReceived;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UserConstructionScript");
		
		ABP_StatefulActivity_SingleParticipant_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnRequestFailed_F97C15244645008957D815956A379B5C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnRequestFailed_F97C15244645008957D815956A379B5C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnRequestFailed_F97C15244645008957D815956A379B5C");
		
		ABP_StatefulActivity_SingleParticipant_C_OnRequestFailed_F97C15244645008957D815956A379B5C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnCustomSignal_F97C15244645008957D815956A379B5C
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCustomSignalParams        CustomSignalParams                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnCustomSignal_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnCustomSignal_F97C15244645008957D815956A379B5C");
		
		ABP_StatefulActivity_SingleParticipant_C_OnCustomSignal_F97C15244645008957D815956A379B5C_Params params {};
		params.CustomSignalParams = CustomSignalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnEnd_F97C15244645008957D815956A379B5C
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnEndParams                 EndParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnEnd_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnEndParams& EndParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnEnd_F97C15244645008957D815956A379B5C");
		
		ABP_StatefulActivity_SingleParticipant_C_OnEnd_F97C15244645008957D815956A379B5C_Params params {};
		params.EndParams = EndParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnBegin_F97C15244645008957D815956A379B5C
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnBeginParams               BeginParams                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnBegin_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnBeginParams& BeginParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnBegin_F97C15244645008957D815956A379B5C");
		
		ABP_StatefulActivity_SingleParticipant_C_OnBegin_F97C15244645008957D815956A379B5C_Params params {};
		params.BeginParams = BeginParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnCancelled_F97C15244645008957D815956A379B5C
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnCancelledParams           CancelledParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnCancelled_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnCancelledParams& CancelledParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnCancelled_F97C15244645008957D815956A379B5C");
		
		ABP_StatefulActivity_SingleParticipant_C_OnCancelled_F97C15244645008957D815956A379B5C_Params params {};
		params.CancelledParams = CancelledParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnResolved_F97C15244645008957D815956A379B5C
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnResolvedParams            ResolvedParams                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnResolved_F97C15244645008957D815956A379B5C(const struct FCharacterActionOnResolvedParams& ResolvedParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnResolved_F97C15244645008957D815956A379B5C");
		
		ABP_StatefulActivity_SingleParticipant_C_OnResolved_F97C15244645008957D815956A379B5C_Params params {};
		params.ResolvedParams = ResolvedParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnActionsFailed_34CDD7D84E5752605A2C109F9BDC0C87
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnActionsFailed_34CDD7D84E5752605A2C109F9BDC0C87()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnActionsFailed_34CDD7D84E5752605A2C109F9BDC0C87");
		
		ABP_StatefulActivity_SingleParticipant_C_OnActionsFailed_34CDD7D84E5752605A2C109F9BDC0C87_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnAllActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnAllActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnAllActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87");
		
		ABP_StatefulActivity_SingleParticipant_C_OnAllActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnNoActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnNoActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnNoActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87");
		
		ABP_StatefulActivity_SingleParticipant_C_OnNoActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.StartNewActivityState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsQuestDelivery                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::StartNewActivityState(bool IsQuestDelivery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.StartNewActivityState");
		
		ABP_StatefulActivity_SingleParticipant_C_StartNewActivityState_Params params {};
		params.IsQuestDelivery = IsQuestDelivery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnActivityStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnActivityStarted(class AActivityActor* Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnActivityStarted");
		
		ABP_StatefulActivity_SingleParticipant_C_OnActivityStarted_Params params {};
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ChangeActivityState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewActivityState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ChangeActivityState(const class FName& NewActivityState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ChangeActivityState");
		
		ABP_StatefulActivity_SingleParticipant_C_ChangeActivityState_Params params {};
		params.NewActivityState = NewActivityState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.LogActivityStateChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewStateName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::LogActivityStateChange(const class FName& NewStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.LogActivityStateChange");
		
		ABP_StatefulActivity_SingleParticipant_C_LogActivityStateChange_Params params {};
		params.NewStateName = NewStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.LogActivityStateSequenceChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewSequenceName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::LogActivityStateSequenceChange(const class FName& NewSequenceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.LogActivityStateSequenceChange");
		
		ABP_StatefulActivity_SingleParticipant_C_LogActivityStateSequenceChange_Params params {};
		params.NewSequenceName = NewSequenceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RequestActivityEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::RequestActivityEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RequestActivityEnd");
		
		ABP_StatefulActivity_SingleParticipant_C_RequestActivityEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RequestQuestDeliveryState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewActivityState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSQuestDeliveryParams                       QuestDeliveryParams                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UEmotion*                                    StateEmotion                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::RequestQuestDeliveryState(const class FName& NewActivityState, const struct FSQuestDeliveryParams& QuestDeliveryParams, class UEmotion* StateEmotion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RequestQuestDeliveryState");
		
		ABP_StatefulActivity_SingleParticipant_C_RequestQuestDeliveryState_Params params {};
		params.NewActivityState = NewActivityState;
		params.QuestDeliveryParams = QuestDeliveryParams;
		params.StateEmotion = StateEmotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnActivityEnded
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActivityEndedReason                               EndReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnActivityEnded");
		
		ABP_StatefulActivity_SingleParticipant_C_OnActivityEnded_Params params {};
		params.Activity = Activity;
		params.EndReason = EndReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.LogActivityStateRequest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        RequestedState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsStatePermitted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::LogActivityStateRequest(const class FName& RequestedState, bool IsStatePermitted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.LogActivityStateRequest");
		
		ABP_StatefulActivity_SingleParticipant_C_LogActivityStateRequest_Params params {};
		params.RequestedState = RequestedState;
		params.IsStatePermitted = IsStatePermitted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.QuestDeliveryFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::QuestDeliveryFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.QuestDeliveryFinished");
		
		ABP_StatefulActivity_SingleParticipant_C_QuestDeliveryFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.DecideNextState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::DecideNextState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.DecideNextState");
		
		ABP_StatefulActivity_SingleParticipant_C_DecideNextState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ParticipantReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantReceived");
		
		ABP_StatefulActivity_SingleParticipant_C_ParticipantReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ParticipantReleased(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantReleased");
		
		ABP_StatefulActivity_SingleParticipant_C_ParticipantReleased_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantInterrupted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ParticipantInterrupted(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantInterrupted");
		
		ABP_StatefulActivity_SingleParticipant_C_ParticipantInterrupted_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantOnTheWay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ParticipantOnTheWay(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantOnTheWay");
		
		ABP_StatefulActivity_SingleParticipant_C_ParticipantOnTheWay_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.PrepareForFirstState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::PrepareForFirstState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.PrepareForFirstState");
		
		ABP_StatefulActivity_SingleParticipant_C_PrepareForFirstState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RequestFinalState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::RequestFinalState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RequestFinalState");
		
		ABP_StatefulActivity_SingleParticipant_C_RequestFinalState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnStateFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnStateFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnStateFailed");
		
		ABP_StatefulActivity_SingleParticipant_C_OnStateFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ExecuteUbergraph_BP_StatefulActivity_SingleParticipant
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ExecuteUbergraph_BP_StatefulActivity_SingleParticipant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ExecuteUbergraph_BP_StatefulActivity_SingleParticipant");
		
		ABP_StatefulActivity_SingleParticipant_C_ExecuteUbergraph_BP_StatefulActivity_SingleParticipant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ActivityActionEnd__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnEndParams                 EndParams                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class FName                                        CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ActivityActionEnd__DelegateSignature(const struct FCharacterActionOnEndParams& EndParams, const class FName& CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ActivityActionEnd__DelegateSignature");
		
		ABP_StatefulActivity_SingleParticipant_C_ActivityActionEnd__DelegateSignature_Params params {};
		params.EndParams = EndParams;
		params.CurrentState = CurrentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ActivityActionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionOnBeginParams               BeginParams                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::ActivityActionChanged__DelegateSignature(const struct FCharacterActionOnBeginParams& BeginParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ActivityActionChanged__DelegateSignature");
		
		ABP_StatefulActivity_SingleParticipant_C_ActivityActionChanged__DelegateSignature_Params params {};
		params.BeginParams = BeginParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnParticipantsRecieved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StatefulActivity_SingleParticipant_C::OnParticipantsRecieved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnParticipantsRecieved__DelegateSignature");
		
		ABP_StatefulActivity_SingleParticipant_C_OnParticipantsRecieved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_StatefulActivity_SingleParticipant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StatefulActivity_SingleParticipant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C");
		return ptr;
	}

}


