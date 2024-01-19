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
	 * 		Name   -> Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.On Removed Modular Effect Icon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDIconBase*                                Icon                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_ShowIcon_C::OnRemovedModularEffectIcon(class UHUDIconBase* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.On Removed Modular Effect Icon");
		
		UBP_ModularEffect_ShowIcon_C_OnRemovedModularEffectIcon_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.PerformEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UModularEffectParams*                        ModularEffectParams                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_ShowIcon_C::PerformEffect(class AActor* Actor, class UModularEffectParams* ModularEffectParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.PerformEffect");
		
		UBP_ModularEffect_ShowIcon_C_PerformEffect_Params params {};
		params.Actor = Actor;
		params.ModularEffectParams = ModularEffectParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_ShowIcon_C::OnEnd(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.OnEnd");
		
		UBP_ModularEffect_ShowIcon_C_OnEnd_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.ExecuteUbergraph_BP_ModularEffect_ShowIcon
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_ShowIcon_C::ExecuteUbergraph_BP_ModularEffect_ShowIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C.ExecuteUbergraph_BP_ModularEffect_ShowIcon");
		
		UBP_ModularEffect_ShowIcon_C_ExecuteUbergraph_BP_ModularEffect_ShowIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ModularEffect_ShowIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ModularEffect_ShowIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModularEffect_ShowIcon.BP_ModularEffect_ShowIcon_C");
		return ptr;
	}

}


