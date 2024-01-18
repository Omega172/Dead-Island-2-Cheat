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
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.RemoveCrossAnimActionCannotPushLifetimeFact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::RemoveCrossAnimActionCannotPushLifetimeFact(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.RemoveCrossAnimActionCannotPushLifetimeFact");
		
		UBPC_EntryComponent_RequestLevelSequence_C_RemoveCrossAnimActionCannotPushLifetimeFact_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.AddCrossAnimActionCannotPushLifetimeFact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::AddCrossAnimActionCannotPushLifetimeFact(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.AddCrossAnimActionCannotPushLifetimeFact");
		
		UBPC_EntryComponent_RequestLevelSequence_C_AddCrossAnimActionCannotPushLifetimeFact_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Log Debug Message For Action
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDSLogVerbosity                                    LogVerbosity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::LogDebugMessageForAction(const class FString& Message, class UParticipantSlotComponent* ParticipantSlot, EDSLogVerbosity LogVerbosity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Log Debug Message For Action");
		
		UBPC_EntryComponent_RequestLevelSequence_C_LogDebugMessageForAction_Params params {};
		params.Message = Message;
		params.ParticipantSlot = ParticipantSlot;
		params.LogVerbosity = LogVerbosity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.GetDataTableRowForAnimName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Base_Zombie_C*                           TableSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActivityTable                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RowFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSActivityData                              DataTableRow                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::GetDataTableRowForAnimName(class ABP_Base_Zombie_C** TableSource, const class FName& ActivityTable, const class FName& SequenceName, bool* RowFound, struct FSActivityData* DataTableRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.GetDataTableRowForAnimName");
		
		UBPC_EntryComponent_RequestLevelSequence_C_GetDataTableRowForAnimName_Params params {};
		params.ActivityTable = ActivityTable;
		params.SequenceName = SequenceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TableSource != nullptr)
			*TableSource = params.TableSource;
		if (RowFound != nullptr)
			*RowFound = params.RowFound;
		if (DataTableRow != nullptr)
			*DataTableRow = params.DataTableRow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Play Current Level Sequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Paticipant                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::PlayCurrentLevelSequence(class UParticipantSlotComponent* Paticipant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Play Current Level Sequence");
		
		UBPC_EntryComponent_RequestLevelSequence_C_PlayCurrentLevelSequence_Params params {};
		params.Paticipant = Paticipant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.GetLevelSequenceForActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELevelSequenceState                                SequenceState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseDefaultTable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequence*                              LevelSequence                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::GetLevelSequenceForActivity(class UParticipantSlotComponent* ParticipantSlot, const class FName& SequenceName, ELevelSequenceState SequenceState, bool UseDefaultTable, class ULevelSequence** LevelSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.GetLevelSequenceForActivity");
		
		UBPC_EntryComponent_RequestLevelSequence_C_GetLevelSequenceForActivity_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		params.SequenceName = SequenceName;
		params.SequenceState = SequenceState;
		params.UseDefaultTable = UseDefaultTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelSequence != nullptr)
			*LevelSequence = params.LevelSequence;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Set Participant Position For Level Sequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_ActionParams_BasePlayLevelSequence_C*    Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::SetParticipantPositionForLevelSequence(class UParticipantSlotComponent* ParticipantSlot, class UBP_ActionParams_BasePlayLevelSequence_C* Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Set Participant Position For Level Sequence");
		
		UBPC_EntryComponent_RequestLevelSequence_C_SetParticipantPositionForLevelSequence_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Add Level Sequence Params for Anim State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELevelSequenceState                                AnimState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_ActionParams_BasePlayLevelSequence_C*    LevelSequenceParams                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::AddLevelSequenceParamsforAnimState(ELevelSequenceState AnimState, class UBP_ActionParams_BasePlayLevelSequence_C* LevelSequenceParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Add Level Sequence Params for Anim State");
		
		UBPC_EntryComponent_RequestLevelSequence_C_AddLevelSequenceParamsforAnimState_Params params {};
		params.AnimState = AnimState;
		params.LevelSequenceParams = LevelSequenceParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Create Default Entry Actor Binding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBoundActor                                 BoundActor                                                 (Parm, OutParm)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::CreateDefaultEntryActorBinding(class UParticipantSlotComponent** Participant, struct FBoundActor* BoundActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Create Default Entry Actor Binding");
		
		UBPC_EntryComponent_RequestLevelSequence_C_CreateDefaultEntryActorBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Participant != nullptr)
			*Participant = params.Participant;
		if (BoundActor != nullptr)
			*BoundActor = params.BoundActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Prep Next Level Sequence Action
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::PrepNextLevelSequenceAction(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Prep Next Level Sequence Action");
		
		UBPC_EntryComponent_RequestLevelSequence_C_PrepNextLevelSequenceAction_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Start Level Sequence Action
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_ActionParams_BasePlayLevelSequence_C*    Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActionDefinition*                           Definition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FKnowledgeBaseFactKey>               LifetimeFactsWithDelayedRemoval                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::StartLevelSequenceAction(class UBP_ActionParams_BasePlayLevelSequence_C* Params, class UParticipantSlotComponent* Participant, class UActionDefinition** Definition, TArray<struct FKnowledgeBaseFactKey>* LifetimeFactsWithDelayedRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Start Level Sequence Action");
		
		UBPC_EntryComponent_RequestLevelSequence_C_StartLevelSequenceAction_Params params {};
		params.Params = Params;
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Definition != nullptr)
			*Definition = params.Definition;
		if (LifetimeFactsWithDelayedRemoval != nullptr)
			*LifetimeFactsWithDelayedRemoval = params.LifetimeFactsWithDelayedRemoval;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Start Interruptable Level Sequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_ActionParams_BasePlayLevelSequence_C*    Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::StartInterruptableLevelSequence(class UBP_ActionParams_BasePlayLevelSequence_C* Params, class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Start Interruptable Level Sequence");
		
		UBPC_EntryComponent_RequestLevelSequence_C_StartInterruptableLevelSequence_Params params {};
		params.Params = Params;
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.ReceiveBeginPlay");
		
		UBPC_EntryComponent_RequestLevelSequence_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.OnActionEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::OnActionEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.OnActionEnd");
		
		UBPC_EntryComponent_RequestLevelSequence_C_OnActionEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Perform Component Activity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::PerformComponentActivity(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Perform Component Activity");
		
		UBPC_EntryComponent_RequestLevelSequence_C_PerformComponentActivity_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Clean Component State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::CleanComponentState(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Clean Component State");
		
		UBPC_EntryComponent_RequestLevelSequence_C_CleanComponentState_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Setup component Activity Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::SetupcomponentActivityData(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Setup component Activity Data");
		
		UBPC_EntryComponent_RequestLevelSequence_C_SetupcomponentActivityData_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.OnActionResolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestID                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::OnActionResolved(const struct FGuid& RequestID, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.OnActionResolved");
		
		UBPC_EntryComponent_RequestLevelSequence_C_OnActionResolved_Params params {};
		params.RequestID = RequestID;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.ExecuteUbergraph_BPC_EntryComponent_RequestLevelSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_EntryComponent_RequestLevelSequence_C::ExecuteUbergraph_BPC_EntryComponent_RequestLevelSequence(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.ExecuteUbergraph_BPC_EntryComponent_RequestLevelSequence");
		
		UBPC_EntryComponent_RequestLevelSequence_C_ExecuteUbergraph_BPC_EntryComponent_RequestLevelSequence_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_EntryComponent_RequestLevelSequence_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_EntryComponent_RequestLevelSequence_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C");
		return ptr;
	}

}


