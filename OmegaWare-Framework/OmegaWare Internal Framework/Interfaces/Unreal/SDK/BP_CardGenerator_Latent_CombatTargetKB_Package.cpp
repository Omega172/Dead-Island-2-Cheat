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
	 * 		Name   -> Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.AddKBListenerForCombatTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      CombatTargetActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Latent_CombatTargetKB_C::AddKBListenerForCombatTarget(class AActor* CombatTargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.AddKBListenerForCombatTarget");
		
		UBP_CardGenerator_Latent_CombatTargetKB_C_AddKBListenerForCombatTarget_Params params {};
		params.CombatTargetActor = CombatTargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.GetBlueprintDescription
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UBP_CardGenerator_Latent_CombatTargetKB_C::GetBlueprintDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.GetBlueprintDescription");
		
		UBP_CardGenerator_Latent_CombatTargetKB_C_GetBlueprintDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnInitialise
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_CardGenerator_Latent_CombatTargetKB_C::OnInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnInitialise");
		
		UBP_CardGenerator_Latent_CombatTargetKB_C_OnInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnCombatTargetChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Latent_CombatTargetKB_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnCombatTargetChanged");
		
		UBP_CardGenerator_Latent_CombatTargetKB_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnExpressionChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CardGenerator_Latent_CombatTargetKB_C::OnExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnExpressionChanged");
		
		UBP_CardGenerator_Latent_CombatTargetKB_C_OnExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnUninitialise
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_CardGenerator_Latent_CombatTargetKB_C::OnUninitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.OnUninitialise");
		
		UBP_CardGenerator_Latent_CombatTargetKB_C_OnUninitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.ExecuteUbergraph_BP_CardGenerator_Latent_CombatTargetKB
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CardGenerator_Latent_CombatTargetKB_C::ExecuteUbergraph_BP_CardGenerator_Latent_CombatTargetKB(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C.ExecuteUbergraph_BP_CardGenerator_Latent_CombatTargetKB");
		
		UBP_CardGenerator_Latent_CombatTargetKB_C_ExecuteUbergraph_BP_CardGenerator_Latent_CombatTargetKB_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CardGenerator_Latent_CombatTargetKB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CardGenerator_Latent_CombatTargetKB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CardGenerator_Latent_CombatTargetKB.BP_CardGenerator_Latent_CombatTargetKB_C");
		return ptr;
	}

}


