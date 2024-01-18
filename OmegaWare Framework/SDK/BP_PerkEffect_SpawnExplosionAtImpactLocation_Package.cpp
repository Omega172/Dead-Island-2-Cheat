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
	 * 		Name   -> Function BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C.GetImpactLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADICharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_SpawnExplosionAtImpactLocation_C::GetImpactLocation(class ADICharacter* Character, struct FVector* ImpactPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C.GetImpactLocation");
		
		UBP_PerkEffect_SpawnExplosionAtImpactLocation_C_GetImpactLocation_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImpactPoint != nullptr)
			*ImpactPoint = params.ImpactPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C.OnStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_SpawnExplosionAtImpactLocation_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C.OnStart");
		
		UBP_PerkEffect_SpawnExplosionAtImpactLocation_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C.ExecuteUbergraph_BP_PerkEffect_SpawnExplosionAtImpactLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_SpawnExplosionAtImpactLocation_C::ExecuteUbergraph_BP_PerkEffect_SpawnExplosionAtImpactLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C.ExecuteUbergraph_BP_PerkEffect_SpawnExplosionAtImpactLocation");
		
		UBP_PerkEffect_SpawnExplosionAtImpactLocation_C_ExecuteUbergraph_BP_PerkEffect_SpawnExplosionAtImpactLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_SpawnExplosionAtImpactLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_SpawnExplosionAtImpactLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_SpawnExplosionAtImpactLocation.BP_PerkEffect_SpawnExplosionAtImpactLocation_C");
		return ptr;
	}

}


