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
	 * 		Name   -> Function BP_Action_StatusEffect_Conductive_AI.BP_Action_StatusEffect_Conductive_AI_C.Resolve
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterActionResolveParams               Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ECharacterActionResolution                         OutResolution                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutQueuedTimeout                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Conductive_AI_C::Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Conductive_AI.BP_Action_StatusEffect_Conductive_AI_C.Resolve");
		
		UBP_Action_StatusEffect_Conductive_AI_C_Resolve_Params params {};
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
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Conductive_AI.BP_Action_StatusEffect_Conductive_AI_C.OnConstruct
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Conductive_AI_C::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Conductive_AI.BP_Action_StatusEffect_Conductive_AI_C.OnConstruct");
		
		UBP_Action_StatusEffect_Conductive_AI_C_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Action_StatusEffect_Conductive_AI.BP_Action_StatusEffect_Conductive_AI_C.ExecuteUbergraph_BP_Action_StatusEffect_Conductive_AI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Action_StatusEffect_Conductive_AI_C::ExecuteUbergraph_BP_Action_StatusEffect_Conductive_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Action_StatusEffect_Conductive_AI.BP_Action_StatusEffect_Conductive_AI_C.ExecuteUbergraph_BP_Action_StatusEffect_Conductive_AI");
		
		UBP_Action_StatusEffect_Conductive_AI_C_ExecuteUbergraph_BP_Action_StatusEffect_Conductive_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Action_StatusEffect_Conductive_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Action_StatusEffect_Conductive_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_StatusEffect_Conductive_AI.BP_Action_StatusEffect_Conductive_AI_C");
		return ptr;
	}

}


