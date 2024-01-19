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
	 * 		Name   -> Function BP_ModularEffect_RemoveIcon.BP_ModularEffect_RemoveIcon_C.PerformEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UModularEffectParams*                        ModularEffectParams                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_RemoveIcon_C::PerformEffect(class AActor* Actor, class UModularEffectParams* ModularEffectParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_RemoveIcon.BP_ModularEffect_RemoveIcon_C.PerformEffect");
		
		UBP_ModularEffect_RemoveIcon_C_PerformEffect_Params params {};
		params.Actor = Actor;
		params.ModularEffectParams = ModularEffectParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_RemoveIcon.BP_ModularEffect_RemoveIcon_C.ExecuteUbergraph_BP_ModularEffect_RemoveIcon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_RemoveIcon_C::ExecuteUbergraph_BP_ModularEffect_RemoveIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_RemoveIcon.BP_ModularEffect_RemoveIcon_C.ExecuteUbergraph_BP_ModularEffect_RemoveIcon");
		
		UBP_ModularEffect_RemoveIcon_C_ExecuteUbergraph_BP_ModularEffect_RemoveIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ModularEffect_RemoveIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ModularEffect_RemoveIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModularEffect_RemoveIcon.BP_ModularEffect_RemoveIcon_C");
		return ptr;
	}

}


