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
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.RemoveAggressiveStatusEffect
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformed_Mutator_C::RemoveAggressiveStatusEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.RemoveAggressiveStatusEffect");
		
		UBP_Action_Transformed_Mutator_C_RemoveAggressiveStatusEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.AddAggressiveStatusEffect
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformed_Mutator_C::AddAggressiveStatusEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.AddAggressiveStatusEffect");
		
		UBP_Action_Transformed_Mutator_C_AddAggressiveStatusEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.RemoveWalkerActivityAbilities
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformed_Mutator_C::RemoveWalkerActivityAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.RemoveWalkerActivityAbilities");
		
		UBP_Action_Transformed_Mutator_C_RemoveWalkerActivityAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OverridePropagationData
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformed_Mutator_C::OverridePropagationData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OverridePropagationData");
		
		UBP_Action_Transformed_Mutator_C_OverridePropagationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Transformed_Mutator_C::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OnEnd");
		
		UBP_Action_Transformed_Mutator_C_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OnBlockLoopingGoreExpressionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Action_Transformed_Mutator_C::OnBlockLoopingGoreExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OnBlockLoopingGoreExpressionChanged");
		
		UBP_Action_Transformed_Mutator_C_OnBlockLoopingGoreExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.DestroyLoopingGoreAudioIfValid
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformed_Mutator_C::DestroyLoopingGoreAudioIfValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.DestroyLoopingGoreAudioIfValid");
		
		UBP_Action_Transformed_Mutator_C_DestroyLoopingGoreAudioIfValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.CreateLoopingGoreAudio
	 * 		Flags  -> ()
	 */
	void UBP_Action_Transformed_Mutator_C::CreateLoopingGoreAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.CreateLoopingGoreAudio");
		
		UBP_Action_Transformed_Mutator_C_CreateLoopingGoreAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_Action_Transformed_Mutator_C::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.OnBegin");
		
		UBP_Action_Transformed_Mutator_C_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.ExecuteUbergraph_BP_Action_Transformed_Mutator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_Transformed_Mutator_C::ExecuteUbergraph_BP_Action_Transformed_Mutator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C.ExecuteUbergraph_BP_Action_Transformed_Mutator");
		
		UBP_Action_Transformed_Mutator_C_ExecuteUbergraph_BP_Action_Transformed_Mutator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_Transformed_Mutator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_Transformed_Mutator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C");
		return ptr;
	}

}


