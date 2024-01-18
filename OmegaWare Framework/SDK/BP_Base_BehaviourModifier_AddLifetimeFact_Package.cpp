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
	 * 		Name   -> Function BP_Base_BehaviourModifier_AddLifetimeFact.BP_Base_BehaviourModifier_AddLifetimeFact_C.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_BehaviourModifier_AddLifetimeFact_C::OnBegin(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_BehaviourModifier_AddLifetimeFact.BP_Base_BehaviourModifier_AddLifetimeFact_C.OnBegin");
		
		UBP_Base_BehaviourModifier_AddLifetimeFact_C_OnBegin_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_BehaviourModifier_AddLifetimeFact.BP_Base_BehaviourModifier_AddLifetimeFact_C.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_BehaviourModifier_AddLifetimeFact_C::OnEnd(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_BehaviourModifier_AddLifetimeFact.BP_Base_BehaviourModifier_AddLifetimeFact_C.OnEnd");
		
		UBP_Base_BehaviourModifier_AddLifetimeFact_C_OnEnd_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_BehaviourModifier_AddLifetimeFact.BP_Base_BehaviourModifier_AddLifetimeFact_C.ExecuteUbergraph_BP_Base_BehaviourModifier_AddLifetimeFact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Base_BehaviourModifier_AddLifetimeFact_C::ExecuteUbergraph_BP_Base_BehaviourModifier_AddLifetimeFact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_BehaviourModifier_AddLifetimeFact.BP_Base_BehaviourModifier_AddLifetimeFact_C.ExecuteUbergraph_BP_Base_BehaviourModifier_AddLifetimeFact");
		
		UBP_Base_BehaviourModifier_AddLifetimeFact_C_ExecuteUbergraph_BP_Base_BehaviourModifier_AddLifetimeFact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Base_BehaviourModifier_AddLifetimeFact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Base_BehaviourModifier_AddLifetimeFact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_BehaviourModifier_AddLifetimeFact.BP_Base_BehaviourModifier_AddLifetimeFact_C");
		return ptr;
	}

}


