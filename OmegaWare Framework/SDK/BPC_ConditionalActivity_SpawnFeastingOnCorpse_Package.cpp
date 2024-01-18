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
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.DestroyOrOrphanActivity
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::DestroyOrOrphanActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.DestroyOrOrphanActivity");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_DestroyOrOrphanActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.PlayDeadPosingDebug
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::PlayDeadPosingDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.PlayDeadPosingDebug");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_PlayDeadPosingDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.BindKnowledgeBaseListeners
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::BindKnowledgeBaseListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.BindKnowledgeBaseListeners");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_BindKnowledgeBaseListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetupActivity
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::SetupActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetupActivity");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SetupActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetActivityTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxFloorDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FoundSpawnLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  ReturnTransform                                            (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::SetActivityTransform(class USceneComponent* Target, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, float MaxFloorDistance, bool* FoundSpawnLocation, struct FTransform* ReturnTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetActivityTransform");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SetActivityTransform_Params params {};
		params.Target = Target;
		params.LocationOffset = LocationOffset;
		params.RotationOffset = RotationOffset;
		params.MaxFloorDistance = MaxFloorDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundSpawnLocation != nullptr)
			*FoundSpawnLocation = params.FoundSpawnLocation;
		if (ReturnTransform != nullptr)
			*ReturnTransform = params.ReturnTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.RemoveFeastingCorpseLingerReason
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::RemoveFeastingCorpseLingerReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.RemoveFeastingCorpseLingerReason");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_RemoveFeastingCorpseLingerReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.AddFeastingCorpseLingerReason
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::AddFeastingCorpseLingerReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.AddFeastingCorpseLingerReason");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_AddFeastingCorpseLingerReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.OnParticipantWillBeReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::OnParticipantWillBeReleased(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.OnParticipantWillBeReleased");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_OnParticipantWillBeReleased_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.OnParticipantWillArrive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::OnParticipantWillArrive(class UParticipantSlotComponent* Participant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.OnParticipantWillArrive");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_OnParticipantWillArrive_Params params {};
		params.Participant = Participant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.UpdateTargetTransform
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::UpdateTargetTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.UpdateTargetTransform");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_UpdateTargetTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.IsStationary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStationary                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::IsStationary(bool* IsStationary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.IsStationary");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_IsStationary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsStationary != nullptr)
			*IsStationary = params.IsStationary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.IsActivityActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActivityActive                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::IsActivityActive(bool* ActivityActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.IsActivityActive");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_IsActivityActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActivityActive != nullptr)
			*ActivityActive = params.ActivityActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.DisableActivity
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::DisableActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.DisableActivity");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_DisableActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SpawnActivity
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::SpawnActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SpawnActivity");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SpawnActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.UpdateActivityPositionAndEnable
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::UpdateActivityPositionAndEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.UpdateActivityPositionAndEnable");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_UpdateActivityPositionAndEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetActivityActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::SetActivityActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetActivityActive");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SetActivityActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetupExpressionListenerForActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::SetupExpressionListenerForActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.SetupExpressionListenerForActor");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_SetupExpressionListenerForActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.CleanUpAndDestroyActivity
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::CleanUpAndDestroyActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.CleanUpAndDestroyActivity");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_CleanUpAndDestroyActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.On Evaluate Expression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::OnEvaluateExpression(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.On Evaluate Expression");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_OnEvaluateExpression_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.UpdateActivityState
	 * 		Flags  -> ()
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::UpdateActivityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.UpdateActivityState");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_UpdateActivityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.ExecuteUbergraph_BPC_ConditionalActivity_SpawnFeastingOnCorpse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::ExecuteUbergraph_BPC_ConditionalActivity_SpawnFeastingOnCorpse(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C.ExecuteUbergraph_BPC_ConditionalActivity_SpawnFeastingOnCorpse");
		
		UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C_ExecuteUbergraph_BPC_ConditionalActivity_SpawnFeastingOnCorpse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_ConditionalActivity_SpawnFeastingOnCorpse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ConditionalActivity_SpawnFeastingOnCorpse.BPC_ConditionalActivity_SpawnFeastingOnCorpse_C");
		return ptr;
	}

}


