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
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DestroyOrOrphanActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::DestroyOrOrphanActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DestroyOrOrphanActivity");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_DestroyOrOrphanActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.UnbindKnowledgeBaseListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::UnbindKnowledgeBaseListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.UnbindKnowledgeBaseListeners");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_UnbindKnowledgeBaseListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.BindKnowledgeBaseListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::BindKnowledgeBaseListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.BindKnowledgeBaseListeners");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_BindKnowledgeBaseListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DestroyActivityOnActivityEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActivityEndedReason                               EndReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::DestroyActivityOnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DestroyActivityOnActivityEnded");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_DestroyActivityOnActivityEnded_Params params {};
		params.Activity = Activity;
		params.EndReason = EndReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DespawnActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::DespawnActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DespawnActivity");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_DespawnActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DeactivateActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::DeactivateActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DeactivateActivity");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_DeactivateActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SpawnOrActivateActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::SpawnOrActivateActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SpawnOrActivateActivity");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_SpawnOrActivateActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SetActivityActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::SetActivityActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SetActivityActive");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_SetActivityActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.CleanUpAndDestroyActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::CleanUpAndDestroyActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.CleanUpAndDestroyActivity");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_CleanUpAndDestroyActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.IsActivityActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ActivityActive                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::IsActivityActive(bool* ActivityActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.IsActivityActive");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_IsActivityActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActivityActive != nullptr)
			*ActivityActive = params.ActivityActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DisableActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::DisableActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.DisableActivity");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_DisableActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SpawnActivity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::SpawnActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SpawnActivity");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_SpawnActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.UpdateActivityPositionAndEnable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::UpdateActivityPositionAndEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.UpdateActivityPositionAndEnable");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_UpdateActivityPositionAndEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.On Evaluate Expression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::OnEvaluateExpression(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.On Evaluate Expression");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_OnEvaluateExpression_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SetupExpressionListenerForActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::SetupExpressionListenerForActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.SetupExpressionListenerForActor");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_SetupExpressionListenerForActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.On Owner Destruction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::OnOwnerDestruction(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.On Owner Destruction");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_OnOwnerDestruction_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ReceiveBeginPlay");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ReceiveEndPlay");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ExecuteUbergraph_BPC_Base_ConditionalActivityGeneratorComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::ExecuteUbergraph_BPC_Base_ConditionalActivityGeneratorComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ExecuteUbergraph_BPC_Base_ConditionalActivityGeneratorComponent");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_ExecuteUbergraph_BPC_Base_ConditionalActivityGeneratorComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ActivityWillBeEnabled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::ActivityWillBeEnabled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ActivityWillBeEnabled__DelegateSignature");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_ActivityWillBeEnabled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ActivityWillBeDisabled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_Base_ConditionalActivityGeneratorComponent_C::ActivityWillBeDisabled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C.ActivityWillBeDisabled__DelegateSignature");
		
		UBPC_Base_ConditionalActivityGeneratorComponent_C_ActivityWillBeDisabled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Base_ConditionalActivityGeneratorComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Base_ConditionalActivityGeneratorComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Base_ConditionalActivityGeneratorComponent.BPC_Base_ConditionalActivityGeneratorComponent_C");
		return ptr;
	}

}


