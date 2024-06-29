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
	 * 		Name   -> Function BP_PerkEffect_ShowVulnerablePopupText.BP_PerkEffect_ShowVulnerablePopupText_C.Get Actor Direction from Local Player
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ShowVulnerablePopupText_C::GetActorDirectionfromLocalPlayer(class AActor* Actor, struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ShowVulnerablePopupText.BP_PerkEffect_ShowVulnerablePopupText_C.Get Actor Direction from Local Player");
		
		UBP_PerkEffect_ShowVulnerablePopupText_C_GetActorDirectionfromLocalPlayer_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ShowVulnerablePopupText.BP_PerkEffect_ShowVulnerablePopupText_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_ShowVulnerablePopupText_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ShowVulnerablePopupText.BP_PerkEffect_ShowVulnerablePopupText_C.OnStart");
		
		UBP_PerkEffect_ShowVulnerablePopupText_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_ShowVulnerablePopupText.BP_PerkEffect_ShowVulnerablePopupText_C.ExecuteUbergraph_BP_PerkEffect_ShowVulnerablePopupText
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_ShowVulnerablePopupText_C::ExecuteUbergraph_BP_PerkEffect_ShowVulnerablePopupText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_ShowVulnerablePopupText.BP_PerkEffect_ShowVulnerablePopupText_C.ExecuteUbergraph_BP_PerkEffect_ShowVulnerablePopupText");
		
		UBP_PerkEffect_ShowVulnerablePopupText_C_ExecuteUbergraph_BP_PerkEffect_ShowVulnerablePopupText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_ShowVulnerablePopupText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_ShowVulnerablePopupText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_ShowVulnerablePopupText.BP_PerkEffect_ShowVulnerablePopupText_C");
		return ptr;
	}

}


