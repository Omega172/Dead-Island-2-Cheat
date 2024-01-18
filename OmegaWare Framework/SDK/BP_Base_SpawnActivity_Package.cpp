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
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.EndBehaviourModifiers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Agent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::EndBehaviourModifiers(class APawn* Agent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.EndBehaviourModifiers");
		
		ABP_Base_SpawnActivity_C_EndBehaviourModifiers_Params params {};
		params.Agent = Agent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.BeginBehaviourModifiers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::BeginBehaviourModifiers(class APawn* Agent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.BeginBehaviourModifiers");
		
		ABP_Base_SpawnActivity_C_BeginBehaviourModifiers_Params params {};
		params.Agent = Agent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.UnbindFromAgentImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::UnbindFromAgentImpact(class AActor* Agent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.UnbindFromAgentImpact");
		
		ABP_Base_SpawnActivity_C_UnbindFromAgentImpact_Params params {};
		params.Agent = Agent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.BindToAgentImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::BindToAgentImpact(class AActor* Agent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.BindToAgentImpact");
		
		ABP_Base_SpawnActivity_C_BindToAgentImpact_Params params {};
		params.Agent = Agent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ShouldImpactEjectParticipants
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ParticipantsShouldLeave                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_SpawnActivity_C::ShouldImpactEjectParticipants(class AActor* AffectedActor, class UBaseImpactEventResultWrapper* ImpactEvent, bool* ParticipantsShouldLeave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ShouldImpactEjectParticipants");
		
		ABP_Base_SpawnActivity_C_ShouldImpactEjectParticipants_Params params {};
		params.AffectedActor = AffectedActor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticipantsShouldLeave != nullptr)
			*ParticipantsShouldLeave = params.ParticipantsShouldLeave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnImpactReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnImpactReceived");
		
		ABP_Base_SpawnActivity_C_OnImpactReceived_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Force Agent To Traversal Position
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::ForceAgentToTraversalPosition(class UParticipantSlotComponent* ParticipantComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Force Agent To Traversal Position");
		
		ABP_Base_SpawnActivity_C_ForceAgentToTraversalPosition_Params params {};
		params.ParticipantComponent = ParticipantComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.AlignTraversalTargetWithGround
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPositionOffset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::AlignTraversalTargetWithGround(const struct FVector& StartPositionOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.AlignTraversalTargetWithGround");
		
		ABP_Base_SpawnActivity_C_AlignTraversalTargetWithGround_Params params {};
		params.StartPositionOffset = StartPositionOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Is All Component Activity Complete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ComponentsReady                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_SpawnActivity_C::IsAllComponentActivityComplete(class UParticipantSlotComponent* ParticipantSlot, bool* ComponentsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Is All Component Activity Complete");
		
		ABP_Base_SpawnActivity_C_IsAllComponentActivityComplete_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentsReady != nullptr)
			*ComponentsReady = params.ComponentsReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Is All Pre-Activity Setup Complete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ComponentsReady                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_SpawnActivity_C::IsAllPreActivitySetupComplete(class UParticipantSlotComponent* ParticipantSlot, bool* ComponentsReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Is All Pre-Activity Setup Complete");
		
		ABP_Base_SpawnActivity_C_IsAllPreActivitySetupComplete_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentsReady != nullptr)
			*ComponentsReady = params.ComponentsReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Clear Component Response Counters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::ClearComponentResponseCounters(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Clear Component Response Counters");
		
		ABP_Base_SpawnActivity_C_ClearComponentResponseCounters_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Setup And Run Ignoring Callbacks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::SetupAndRunIgnoringCallbacks(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Setup And Run Ignoring Callbacks");
		
		ABP_Base_SpawnActivity_C_SetupAndRunIgnoringCallbacks_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Clean Up Spawn Process
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::CleanUpSpawnProcess(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Clean Up Spawn Process");
		
		ABP_Base_SpawnActivity_C_CleanUpSpawnProcess_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Log Spawn Error Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ErrorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::LogSpawnErrorMessage(const class FString& ErrorMessage, class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Log Spawn Error Message");
		
		ABP_Base_SpawnActivity_C_LogSpawnErrorMessage_Params params {};
		params.ErrorMessage = ErrorMessage;
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Throw Spawn Error
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ErrorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::ThrowSpawnError(const class FString& ErrorMessage, class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Throw Spawn Error");
		
		ABP_Base_SpawnActivity_C_ThrowSpawnError_Params params {};
		params.ErrorMessage = ErrorMessage;
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Set Actor Start Location
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::SetActorStartLocation(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Set Actor Start Location");
		
		ABP_Base_SpawnActivity_C_SetActorStartLocation_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Initialise Actor Instance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::InitialiseActorInstance(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Initialise Actor Instance");
		
		ABP_Base_SpawnActivity_C_InitialiseActorInstance_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Base_SpawnActivity_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.UserConstructionScript");
		
		ABP_Base_SpawnActivity_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Set Up Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::SetUpActor(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Set Up Actor");
		
		ABP_Base_SpawnActivity_C_SetUpActor_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Component Pre Activity Setup Complete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnComponentPreActivitySetupComplete(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Component Pre Activity Setup Complete");
		
		ABP_Base_SpawnActivity_C_OnComponentPreActivitySetupComplete_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Base_SpawnActivity_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ReceiveBeginPlay");
		
		ABP_Base_SpawnActivity_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Participant Will Be Received
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnParticipantWillBeReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Participant Will Be Received");
		
		ABP_Base_SpawnActivity_C_OnParticipantWillBeReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On zombie Can Be Released
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnzombieCanBeReleased(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On zombie Can Be Released");
		
		ABP_Base_SpawnActivity_C_OnzombieCanBeReleased_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Component Activity Complete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnComponentActivityComplete(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Component Activity Complete");
		
		ABP_Base_SpawnActivity_C_OnComponentActivityComplete_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ParticipantReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::ParticipantReceived(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ParticipantReceived");
		
		ABP_Base_SpawnActivity_C_ParticipantReceived_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ParticipantReleasedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::ParticipantReleasedDelegate(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ParticipantReleasedDelegate");
		
		ABP_Base_SpawnActivity_C_ParticipantReleasedDelegate_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ExecuteUbergraph_BP_Base_SpawnActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::ExecuteUbergraph_BP_Base_SpawnActivity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.ExecuteUbergraph_BP_Base_SpawnActivity");
		
		ABP_Base_SpawnActivity_C_ExecuteUbergraph_BP_Base_SpawnActivity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnParticipantWillBeReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnParticipantWillBeReceived__DelegateSignature(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnParticipantWillBeReceived__DelegateSignature");
		
		ABP_Base_SpawnActivity_C_OnParticipantWillBeReceived__DelegateSignature_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnDIAICharacterReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADIAICharacter*                              SpawnedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnDIAICharacterReceived__DelegateSignature(class ADIAICharacter* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnDIAICharacterReceived__DelegateSignature");
		
		ABP_Base_SpawnActivity_C_OnDIAICharacterReceived__DelegateSignature_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnZombieWillBeReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnZombieWillBeReleased__DelegateSignature(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnZombieWillBeReleased__DelegateSignature");
		
		ABP_Base_SpawnActivity_C_OnZombieWillBeReleased__DelegateSignature_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Actor Setup Complete__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnActorSetupComplete__DelegateSignature(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.On Actor Setup Complete__DelegateSignature");
		
		ABP_Base_SpawnActivity_C_OnActorSetupComplete__DelegateSignature_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Trigger Activity__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::TriggerActivity__DelegateSignature(class UParticipantSlotComponent* ParticipantSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.Trigger Activity__DelegateSignature");
		
		ABP_Base_SpawnActivity_C_TriggerActivity__DelegateSignature_Params params {};
		params.ParticipantSlot = ParticipantSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnParticipantReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_SpawnActivity_C::OnParticipantReceived__DelegateSignature(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_SpawnActivity.BP_Base_SpawnActivity_C.OnParticipantReceived__DelegateSignature");
		
		ABP_Base_SpawnActivity_C_OnParticipantReceived__DelegateSignature_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_SpawnActivity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_SpawnActivity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_SpawnActivity.BP_Base_SpawnActivity_C");
		return ptr;
	}

}


