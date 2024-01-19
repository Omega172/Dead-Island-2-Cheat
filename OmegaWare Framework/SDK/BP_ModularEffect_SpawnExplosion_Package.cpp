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
	 * 		Name   -> Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.GetLocationFromFirstMeshComp
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector UBP_ModularEffect_SpawnExplosion_C::GetLocationFromFirstMeshComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.GetLocationFromFirstMeshComp");
		
		UBP_ModularEffect_SpawnExplosion_C_GetLocationFromFirstMeshComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.GetLocationFromTag
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bValidComponent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector UBP_ModularEffect_SpawnExplosion_C::GetLocationFromTag(bool* bValidComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.GetLocationFromTag");
		
		UBP_ModularEffect_SpawnExplosion_C_GetLocationFromTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidComponent != nullptr)
			*bValidComponent = params.bValidComponent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.GetExplosionLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ExplosionLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_SpawnExplosion_C::GetExplosionLocation(class AActor* Actor, struct FVector* ExplosionLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.GetExplosionLocation");
		
		UBP_ModularEffect_SpawnExplosion_C_GetExplosionLocation_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExplosionLocation != nullptr)
			*ExplosionLocation = params.ExplosionLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.PerformEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UModularEffectParams*                        ModularEffectParams                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_SpawnExplosion_C::PerformEffect(class AActor* Actor, class UModularEffectParams* ModularEffectParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.PerformEffect");
		
		UBP_ModularEffect_SpawnExplosion_C_PerformEffect_Params params {};
		params.Actor = Actor;
		params.ModularEffectParams = ModularEffectParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.ExecuteUbergraph_BP_ModularEffect_SpawnExplosion
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ModularEffect_SpawnExplosion_C::ExecuteUbergraph_BP_ModularEffect_SpawnExplosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C.ExecuteUbergraph_BP_ModularEffect_SpawnExplosion");
		
		UBP_ModularEffect_SpawnExplosion_C_ExecuteUbergraph_BP_ModularEffect_SpawnExplosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ModularEffect_SpawnExplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ModularEffect_SpawnExplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModularEffect_SpawnExplosion.BP_ModularEffect_SpawnExplosion_C");
		return ptr;
	}

}


