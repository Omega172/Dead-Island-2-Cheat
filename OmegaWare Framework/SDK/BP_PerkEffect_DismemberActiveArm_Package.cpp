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
	 * 		Name   -> Function BP_PerkEffect_DismemberActiveArm.BP_PerkEffect_DismemberActiveArm_C.GetBoneToBreak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneToBreak                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_DismemberActiveArm_C::GetBoneToBreak(class FName* BoneToBreak)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_DismemberActiveArm.BP_PerkEffect_DismemberActiveArm_C.GetBoneToBreak");
		
		UBP_PerkEffect_DismemberActiveArm_C_GetBoneToBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoneToBreak != nullptr)
			*BoneToBreak = params.BoneToBreak;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_DismemberActiveArm.BP_PerkEffect_DismemberActiveArm_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_DismemberActiveArm_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_DismemberActiveArm.BP_PerkEffect_DismemberActiveArm_C.OnStart");
		
		UBP_PerkEffect_DismemberActiveArm_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_DismemberActiveArm.BP_PerkEffect_DismemberActiveArm_C.ExecuteUbergraph_BP_PerkEffect_DismemberActiveArm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_DismemberActiveArm_C::ExecuteUbergraph_BP_PerkEffect_DismemberActiveArm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_DismemberActiveArm.BP_PerkEffect_DismemberActiveArm_C.ExecuteUbergraph_BP_PerkEffect_DismemberActiveArm");
		
		UBP_PerkEffect_DismemberActiveArm_C_ExecuteUbergraph_BP_PerkEffect_DismemberActiveArm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_DismemberActiveArm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_DismemberActiveArm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_DismemberActiveArm.BP_PerkEffect_DismemberActiveArm_C");
		return ptr;
	}

}


