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
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.EndStimOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::EndStimOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.EndStimOverride");
		
		UBPC_Distraction_GroupCoordinator_C_EndStimOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.BeginStimOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSStimOverrideParams                        StimOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::BeginStimOverride(const struct FSStimOverrideParams& StimOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.BeginStimOverride");
		
		UBPC_Distraction_GroupCoordinator_C_BeginStimOverride_Params params {};
		params.StimOverride = StimOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddDSLog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DebugText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EDSLogVerbosity                                    Verbosity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Distraction_GroupCoordinator_C::AddDSLog(const class FString& DebugText, EDSLogVerbosity Verbosity, bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddDSLog");
		
		UBPC_Distraction_GroupCoordinator_C_AddDSLog_Params params {};
		params.DebugText = DebugText;
		params.Verbosity = Verbosity;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.SetupDistractionLogger
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::SetupDistractionLogger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.SetupDistractionLogger");
		
		UBPC_Distraction_GroupCoordinator_C_SetupDistractionLogger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GlobalQueryParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           ActiveQuery                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::GlobalQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GlobalQueryParams");
		
		UBPC_Distraction_GroupCoordinator_C_GlobalQueryParams_Params params {};
		params.ActiveQuery = ActiveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetStimCooldownTimeStamp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FStimID                                     StimID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	float UBPC_Distraction_GroupCoordinator_C::GetStimCooldownTimeStamp(const struct FStimID& StimID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetStimCooldownTimeStamp");
		
		UBPC_Distraction_GroupCoordinator_C_GetStimCooldownTimeStamp_Params params {};
		params.StimID = StimID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddStimToCooldownList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStimID                                     StimID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Timestamp                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::AddStimToCooldownList(const struct FStimID& StimID, float Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddStimToCooldownList");
		
		UBPC_Distraction_GroupCoordinator_C_AddStimToCooldownList_Params params {};
		params.StimID = StimID;
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetStimSettings
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      OverrideInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AnchorComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Insigator                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBPC_Distraction_GroupCoordinator_C::GetStimSettings(class AActor* OverrideInstigator, class USceneComponent** AnchorComponent, class AActor** Insigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetStimSettings");
		
		UBPC_Distraction_GroupCoordinator_C_GetStimSettings_Params params {};
		params.OverrideInstigator = OverrideInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnchorComponent != nullptr)
			*AnchorComponent = params.AnchorComponent;
		if (Insigator != nullptr)
			*Insigator = params.Insigator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OverrideStimRadius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStim                                       StimSettings                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	struct FStim UBPC_Distraction_GroupCoordinator_C::OverrideStimRadius(struct FStim* StimSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OverrideStimRadius");
		
		UBPC_Distraction_GroupCoordinator_C_OverrideStimRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StimSettings != nullptr)
			*StimSettings = params.StimSettings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddAllPendingParticipantToActiveParticipantRegister
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSGroupDistractionParticipantData>   PendingParticipantsDataList                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPC_Distraction_GroupCoordinator_C::AddAllPendingParticipantToActiveParticipantRegister(TArray<struct FSGroupDistractionParticipantData>* PendingParticipantsDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddAllPendingParticipantToActiveParticipantRegister");
		
		UBPC_Distraction_GroupCoordinator_C_AddAllPendingParticipantToActiveParticipantRegister_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PendingParticipantsDataList != nullptr)
			*PendingParticipantsDataList = params.PendingParticipantsDataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.IsPendingParticipantsRemaining
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class ADIAICharacter*>                      PendingParticipantsList                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UBPC_Distraction_GroupCoordinator_C::IsPendingParticipantsRemaining(TArray<class ADIAICharacter*> PendingParticipantsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.IsPendingParticipantsRemaining");
		
		UBPC_Distraction_GroupCoordinator_C_IsPendingParticipantsRemaining_Params params {};
		params.PendingParticipantsList = PendingParticipantsList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RemovePendingParticipant
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ADIAICharacter*>                      PendingParticipantsList                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSGroupDistractionParticipantData>   PendingParticipantsDataList                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::RemovePendingParticipant(TArray<class ADIAICharacter*> PendingParticipantsList, TArray<struct FSGroupDistractionParticipantData> PendingParticipantsDataList, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RemovePendingParticipant");
		
		UBPC_Distraction_GroupCoordinator_C_RemovePendingParticipant_Params params {};
		params.PendingParticipantsList = PendingParticipantsList;
		params.PendingParticipantsDataList = PendingParticipantsDataList;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetClosestPendingParticipantIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSGroupDistractionParticipantData>   PendingParticipantsDataList                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	int32_t UBPC_Distraction_GroupCoordinator_C::GetClosestPendingParticipantIndex(TArray<struct FSGroupDistractionParticipantData>* PendingParticipantsDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetClosestPendingParticipantIndex");
		
		UBPC_Distraction_GroupCoordinator_C_GetClosestPendingParticipantIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PendingParticipantsDataList != nullptr)
			*PendingParticipantsDataList = params.PendingParticipantsDataList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddPendingParticipantToActiveParticipantRegister
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ADIAICharacter*>                      PendingParticipantsList                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSGroupDistractionParticipantData>   PendingParticipantsDataList                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::AddPendingParticipantToActiveParticipantRegister(TArray<class ADIAICharacter*>* PendingParticipantsList, TArray<struct FSGroupDistractionParticipantData>* PendingParticipantsDataList, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddPendingParticipantToActiveParticipantRegister");
		
		UBPC_Distraction_GroupCoordinator_C_AddPendingParticipantToActiveParticipantRegister_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PendingParticipantsList != nullptr)
			*PendingParticipantsList = params.PendingParticipantsList;
		if (PendingParticipantsDataList != nullptr)
			*PendingParticipantsDataList = params.PendingParticipantsDataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.IsCharacterAssignedToActivity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AActivityActor* UBPC_Distraction_GroupCoordinator_C::IsCharacterAssignedToActivity(class AActor* ItemToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.IsCharacterAssignedToActivity");
		
		UBPC_Distraction_GroupCoordinator_C_IsCharacterAssignedToActivity_Params params {};
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.SelectInstigator
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      DefaultInstigator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OverrideInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SelectedInstigator                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::SelectInstigator(class AActor* DefaultInstigator, class AActor* OverrideInstigator, class AActor** SelectedInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.SelectInstigator");
		
		UBPC_Distraction_GroupCoordinator_C_SelectInstigator_Params params {};
		params.DefaultInstigator = DefaultInstigator;
		params.OverrideInstigator = OverrideInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedInstigator != nullptr)
			*SelectedInstigator = params.SelectedInstigator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.SetNewLifespan
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLifespan                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::SetNewLifespan(float NewLifespan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.SetNewLifespan");
		
		UBPC_Distraction_GroupCoordinator_C_SetNewLifespan_Params params {};
		params.NewLifespan = NewLifespan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RemoveStim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::RemoveStim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RemoveStim");
		
		UBPC_Distraction_GroupCoordinator_C_RemoveStim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RequestStim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStimTemplate*                               StimTemplate                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OverrideInstigator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::RequestStim(class UStimTemplate* StimTemplate, class AActor* OverrideInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RequestStim");
		
		UBPC_Distraction_GroupCoordinator_C_RequestStim_Params params {};
		params.StimTemplate = StimTemplate;
		params.OverrideInstigator = OverrideInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetRemainingLifespan
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	float UBPC_Distraction_GroupCoordinator_C::GetRemainingLifespan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetRemainingLifespan");
		
		UBPC_Distraction_GroupCoordinator_C_GetRemainingLifespan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AssignCharacterToActivity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              ActivityActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Character                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::AssignCharacterToActivity(class AActivityActor* ActivityActor, class AActor* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AssignCharacterToActivity");
		
		UBPC_Distraction_GroupCoordinator_C_AssignCharacterToActivity_Params params {};
		params.ActivityActor = ActivityActor;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetActiveParticipantDestination
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TMap<class AActor*, struct FVector>                AILocations                                                (Parm, OutParm)
	 */
	void UBPC_Distraction_GroupCoordinator_C::GetActiveParticipantDestination(TMap<class AActor*, struct FVector>* AILocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetActiveParticipantDestination");
		
		UBPC_Distraction_GroupCoordinator_C_GetActiveParticipantDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AILocations != nullptr)
			*AILocations = params.AILocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.UnregisterParticipant
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADICharacter*                                Character                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::UnregisterParticipant(class ADICharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.UnregisterParticipant");
		
		UBPC_Distraction_GroupCoordinator_C_UnregisterParticipant_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.UpdateActiveParticipantDestination
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Distraction_GroupCoordinator_C::UpdateActiveParticipantDestination(class AActor* Character, const struct FVector& Location, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.UpdateActiveParticipantDestination");
		
		UBPC_Distraction_GroupCoordinator_C_UpdateActiveParticipantDestination_Params params {};
		params.Character = Character;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddToActiveParticipantsRegister
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSGroupDistractionParticipantData>   PendingParticipantsDataList                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPC_Distraction_GroupCoordinator_C::AddToActiveParticipantsRegister(TArray<struct FSGroupDistractionParticipantData>* PendingParticipantsDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddToActiveParticipantsRegister");
		
		UBPC_Distraction_GroupCoordinator_C_AddToActiveParticipantsRegister_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PendingParticipantsDataList != nullptr)
			*PendingParticipantsDataList = params.PendingParticipantsDataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ProjectPathEndLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBPC_Distraction_GroupCoordinator_C::ProjectPathEndLocation(class AAIController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ProjectPathEndLocation");
		
		UBPC_Distraction_GroupCoordinator_C_ProjectPathEndLocation_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetPendingParticipantsData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	TArray<struct FSGroupDistractionParticipantData> UBPC_Distraction_GroupCoordinator_C::GetPendingParticipantsData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetPendingParticipantsData");
		
		UBPC_Distraction_GroupCoordinator_C_GetPendingParticipantsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ProcessPendingParticipants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::ProcessPendingParticipants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ProcessPendingParticipants");
		
		UBPC_Distraction_GroupCoordinator_C_ProcessPendingParticipants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ClearAssignedActivity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              ActorActivity                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::ClearAssignedActivity(class AActivityActor* ActorActivity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ClearAssignedActivity");
		
		UBPC_Distraction_GroupCoordinator_C_ClearAssignedActivity_Params params {};
		params.ActorActivity = ActorActivity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetAvailableActivity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Character                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActivityActor*                              Activity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::GetAvailableActivity(class AActor* Character, const struct FVector& TargetLocation, class AActivityActor** Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetAvailableActivity");
		
		UBPC_Distraction_GroupCoordinator_C_GetAvailableActivity_Params params {};
		params.Character = Character;
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Activity != nullptr)
			*Activity = params.Activity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.DestroyActivityOnceItsEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              ActivityActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::DestroyActivityOnceItsEnded(class AActivityActor* ActivityActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.DestroyActivityOnceItsEnded");
		
		UBPC_Distraction_GroupCoordinator_C_DestroyActivityOnceItsEnded_Params params {};
		params.ActivityActor = ActivityActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnLifespanExpired
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::OnLifespanExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnLifespanExpired");
		
		UBPC_Distraction_GroupCoordinator_C_OnLifespanExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetActivityLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     LocationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector UBPC_Distraction_GroupCoordinator_C::GetActivityLocation(const struct FVector& LocationOffset, const struct FRotator& RotationOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetActivityLocation");
		
		UBPC_Distraction_GroupCoordinator_C_GetActivityLocation_Params params {};
		params.LocationOffset = LocationOffset;
		params.RotationOffset = RotationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.CancelActiveQuery
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::CancelActiveQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.CancelActiveQuery");
		
		UBPC_Distraction_GroupCoordinator_C_CancelActiveQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnQueryFinished
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnQueryFinished");
		
		UBPC_Distraction_GroupCoordinator_C_OnQueryFinished_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RunQuery
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::RunQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RunQuery");
		
		UBPC_Distraction_GroupCoordinator_C_RunQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AssignNextParticipant
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::AssignNextParticipant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AssignNextParticipant");
		
		UBPC_Distraction_GroupCoordinator_C_AssignNextParticipant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.EndParticipantMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              ParticipantToRemove                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::EndParticipantMovement(class ADIAICharacter* ParticipantToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.EndParticipantMovement");
		
		UBPC_Distraction_GroupCoordinator_C_EndParticipantMovement_Params params {};
		params.ParticipantToRemove = ParticipantToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.BeginParticipantMovement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              AddParticipantForProcessing                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::BeginParticipantMovement(class ADIAICharacter* AddParticipantForProcessing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.BeginParticipantMovement");
		
		UBPC_Distraction_GroupCoordinator_C_BeginParticipantMovement_Params params {};
		params.AddParticipantForProcessing = AddParticipantForProcessing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RemoveParticipantFromMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::RemoveParticipantFromMovement(class ADIAICharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RemoveParticipantFromMovement");
		
		UBPC_Distraction_GroupCoordinator_C_RemoveParticipantFromMovement_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddParticipantToMovement
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::AddParticipantToMovement(class ADIAICharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddParticipantToMovement");
		
		UBPC_Distraction_GroupCoordinator_C_AddParticipantToMovement_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RegisterParticipant
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::RegisterParticipant(class ADIAICharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RegisterParticipant");
		
		UBPC_Distraction_GroupCoordinator_C_RegisterParticipant_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ReceiveEndPlay");
		
		UBPC_Distraction_GroupCoordinator_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ReceiveBeginPlay");
		
		UBPC_Distraction_GroupCoordinator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnAddMovementRequest
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::OnAddMovementRequest(class ADIAICharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnAddMovementRequest");
		
		UBPC_Distraction_GroupCoordinator_C_OnAddMovementRequest_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnRemoveMovementRequest
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::OnRemoveMovementRequest(class ADIAICharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnRemoveMovementRequest");
		
		UBPC_Distraction_GroupCoordinator_C_OnRemoveMovementRequest_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnRemoveParticipant
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::OnRemoveParticipant(class ADIAICharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnRemoveParticipant");
		
		UBPC_Distraction_GroupCoordinator_C_OnRemoveParticipant_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnTryAddParticipant
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADIAICharacter*                              Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::OnTryAddParticipant(class ADIAICharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnTryAddParticipant");
		
		UBPC_Distraction_GroupCoordinator_C_OnTryAddParticipant_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ExecuteUbergraph_BPC_Distraction_GroupCoordinator
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Distraction_GroupCoordinator_C::ExecuteUbergraph_BPC_Distraction_GroupCoordinator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ExecuteUbergraph_BPC_Distraction_GroupCoordinator");
		
		UBPC_Distraction_GroupCoordinator_C_ExecuteUbergraph_BPC_Distraction_GroupCoordinator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AllParticipantsUnregistered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::AllParticipantsUnregistered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AllParticipantsUnregistered__DelegateSignature");
		
		UBPC_Distraction_GroupCoordinator_C_AllParticipantsUnregistered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RequestParticipationResult__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanParticipate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Distraction_GroupCoordinator_C::RequestParticipationResult__DelegateSignature(bool CanParticipate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RequestParticipationResult__DelegateSignature");
		
		UBPC_Distraction_GroupCoordinator_C_RequestParticipationResult__DelegateSignature_Params params {};
		params.CanParticipate = CanParticipate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnLifespanExpiredDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Distraction_GroupCoordinator_C::OnLifespanExpiredDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnLifespanExpiredDelegate__DelegateSignature");
		
		UBPC_Distraction_GroupCoordinator_C_OnLifespanExpiredDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Distraction_GroupCoordinator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Distraction_GroupCoordinator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C");
		return ptr;
	}

}


