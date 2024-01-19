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
	 * 		Name   -> Function BP_BehaviourModifier_DisableCombat.BP_BehaviourModifier_DisableCombat_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BehaviourModifier_DisableCombat_C::OnBegin(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BehaviourModifier_DisableCombat.BP_BehaviourModifier_DisableCombat_C.OnBegin");
		
		UBP_BehaviourModifier_DisableCombat_C_OnBegin_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BehaviourModifier_DisableCombat.BP_BehaviourModifier_DisableCombat_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BehaviourModifier_DisableCombat_C::OnEnd(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BehaviourModifier_DisableCombat.BP_BehaviourModifier_DisableCombat_C.OnEnd");
		
		UBP_BehaviourModifier_DisableCombat_C_OnEnd_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_BehaviourModifier_DisableCombat.BP_BehaviourModifier_DisableCombat_C.ExecuteUbergraph_BP_BehaviourModifier_DisableCombat
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BehaviourModifier_DisableCombat_C::ExecuteUbergraph_BP_BehaviourModifier_DisableCombat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BehaviourModifier_DisableCombat.BP_BehaviourModifier_DisableCombat_C.ExecuteUbergraph_BP_BehaviourModifier_DisableCombat");
		
		UBP_BehaviourModifier_DisableCombat_C_ExecuteUbergraph_BP_BehaviourModifier_DisableCombat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BehaviourModifier_DisableCombat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BehaviourModifier_DisableCombat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BehaviourModifier_DisableCombat.BP_BehaviourModifier_DisableCombat_C");
		return ptr;
	}

}


