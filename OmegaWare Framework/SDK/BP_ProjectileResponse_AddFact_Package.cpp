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
	 * 		Name   -> Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.SetFactsAsReplicating
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<struct FKnowledgeBaseFactKey>               Facts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	TArray<struct FKnowledgeBaseFactKey> UBP_ProjectileResponse_AddFact_C::SetFactsAsReplicating(TArray<struct FKnowledgeBaseFactKey>* Facts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.SetFactsAsReplicating");
		
		UBP_ProjectileResponse_AddFact_C_SetFactsAsReplicating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Facts != nullptr)
			*Facts = params.Facts;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.ReceiveOnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_ProjectileResponse_AddFact_C::ReceiveOnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.ReceiveOnTriggered");
		
		UBP_ProjectileResponse_AddFact_C_ReceiveOnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.ReceiveInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_ProjectileResponse_AddFact_C::ReceiveInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.ReceiveInitialize");
		
		UBP_ProjectileResponse_AddFact_C_ReceiveInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.ExecuteUbergraph_BP_ProjectileResponse_AddFact
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProjectileResponse_AddFact_C::ExecuteUbergraph_BP_ProjectileResponse_AddFact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C.ExecuteUbergraph_BP_ProjectileResponse_AddFact");
		
		UBP_ProjectileResponse_AddFact_C_ExecuteUbergraph_BP_ProjectileResponse_AddFact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProjectileResponse_AddFact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProjectileResponse_AddFact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileResponse_AddFact.BP_ProjectileResponse_AddFact_C");
		return ptr;
	}

}


