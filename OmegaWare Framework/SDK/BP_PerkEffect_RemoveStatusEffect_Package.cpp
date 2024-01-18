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
	 * 		Name   -> Function BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C.RemoveStatusEffectByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              TypeClassArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PerkEffect_RemoveStatusEffect_C::RemoveStatusEffectByClass(class ADIPlayerCharacter* Player, TArray<class UClass*>* TypeClassArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C.RemoveStatusEffectByClass");
		
		UBP_PerkEffect_RemoveStatusEffect_C_RemoveStatusEffectByClass_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TypeClassArray != nullptr)
			*TypeClassArray = params.TypeClassArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_RemoveStatusEffect_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C.OnStart");
		
		UBP_PerkEffect_RemoveStatusEffect_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C.ExecuteUbergraph_BP_PerkEffect_RemoveStatusEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_RemoveStatusEffect_C::ExecuteUbergraph_BP_PerkEffect_RemoveStatusEffect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C.ExecuteUbergraph_BP_PerkEffect_RemoveStatusEffect");
		
		UBP_PerkEffect_RemoveStatusEffect_C_ExecuteUbergraph_BP_PerkEffect_RemoveStatusEffect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_RemoveStatusEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_RemoveStatusEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_RemoveStatusEffect.BP_PerkEffect_RemoveStatusEffect_C");
		return ptr;
	}

}


