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
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.SetLifetimeFacts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_BasePlayLevelSequence_C::SetLifetimeFacts(bool Increment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.SetLifetimeFacts");
		
		UBP_Action_BasePlayLevelSequence_C_SetLifetimeFacts_Params params {};
		params.Increment = Increment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnSequenceTimeRemaining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRequested                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_BasePlayLevelSequence_C::OnSequenceTimeRemaining(float TimeRequested)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnSequenceTimeRemaining");
		
		UBP_Action_BasePlayLevelSequence_C_OnSequenceTimeRemaining_Params params {};
		params.TimeRequested = TimeRequested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.UnbindClientInterruptAndBlockExpression
	 * 		Flags  -> ()
	 */
	void UBP_Action_BasePlayLevelSequence_C::UnbindClientInterruptAndBlockExpression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.UnbindClientInterruptAndBlockExpression");
		
		UBP_Action_BasePlayLevelSequence_C_UnbindClientInterruptAndBlockExpression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.BindClientInterruptAndBlockExpression
	 * 		Flags  -> ()
	 */
	void UBP_Action_BasePlayLevelSequence_C::BindClientInterruptAndBlockExpression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.BindClientInterruptAndBlockExpression");
		
		UBP_Action_BasePlayLevelSequence_C_BindClientInterruptAndBlockExpression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.PlayGameSequence
	 * 		Flags  -> ()
	 */
	void UBP_Action_BasePlayLevelSequence_C::PlayGameSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.PlayGameSequence");
		
		UBP_Action_BasePlayLevelSequence_C_PlayGameSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.CleanUpGameSequence
	 * 		Flags  -> ()
	 */
	void UBP_Action_BasePlayLevelSequence_C::CleanUpGameSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.CleanUpGameSequence");
		
		UBP_Action_BasePlayLevelSequence_C_CleanUpGameSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.GatherPrerequisites
	 * 		Flags  -> ()
	 */
	bool UBP_Action_BasePlayLevelSequence_C::GatherPrerequisites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.GatherPrerequisites");
		
		UBP_Action_BasePlayLevelSequence_C_GatherPrerequisites_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.SetEndCollisionAndMovementMode
	 * 		Flags  -> ()
	 */
	void UBP_Action_BasePlayLevelSequence_C::SetEndCollisionAndMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.SetEndCollisionAndMovementMode");
		
		UBP_Action_BasePlayLevelSequence_C_SetEndCollisionAndMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.SetBeginCollisionAndMovementMode
	 * 		Flags  -> ()
	 */
	void UBP_Action_BasePlayLevelSequence_C::SetBeginCollisionAndMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.SetBeginCollisionAndMovementMode");
		
		UBP_Action_BasePlayLevelSequence_C_SetBeginCollisionAndMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.Resolve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterActionResolveParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ECharacterActionResolution                         OutResolution                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutQueuedTimeout                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_BasePlayLevelSequence_C::Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.Resolve");
		
		UBP_Action_BasePlayLevelSequence_C_Resolve_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResolution != nullptr)
			*OutResolution = params.OutResolution;
		if (OutQueuedTimeout != nullptr)
			*OutQueuedTimeout = params.OutQueuedTimeout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.Unload Cached Variables
	 * 		Flags  -> ()
	 */
	void UBP_Action_BasePlayLevelSequence_C::UnloadCachedVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.Unload Cached Variables");
		
		UBP_Action_BasePlayLevelSequence_C_UnloadCachedVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.Unhide Character
	 * 		Flags  -> ()
	 */
	void UBP_Action_BasePlayLevelSequence_C::UnhideCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.Unhide Character");
		
		UBP_Action_BasePlayLevelSequence_C_UnhideCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_BasePlayLevelSequence_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnBegin");
		
		UBP_Action_BasePlayLevelSequence_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_BasePlayLevelSequence_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnEnd");
		
		UBP_Action_BasePlayLevelSequence_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnGameSequenceStopped
	 * 		Flags  -> ()
	 */
	void UBP_Action_BasePlayLevelSequence_C::OnGameSequenceStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnGameSequenceStopped");
		
		UBP_Action_BasePlayLevelSequence_C_OnGameSequenceStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnClientInterruptAndBlockExpressionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_BasePlayLevelSequence_C::OnClientInterruptAndBlockExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.OnClientInterruptAndBlockExpressionChanged");
		
		UBP_Action_BasePlayLevelSequence_C_OnClientInterruptAndBlockExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.ExecuteUbergraph_BP_Action_BasePlayLevelSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_BasePlayLevelSequence_C::ExecuteUbergraph_BP_Action_BasePlayLevelSequence(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C.ExecuteUbergraph_BP_Action_BasePlayLevelSequence");
		
		UBP_Action_BasePlayLevelSequence_C_ExecuteUbergraph_BP_Action_BasePlayLevelSequence_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_BasePlayLevelSequence_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_BasePlayLevelSequence_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_BasePlayLevelSequence.BP_Action_BasePlayLevelSequence_C");
		return ptr;
	}

}


