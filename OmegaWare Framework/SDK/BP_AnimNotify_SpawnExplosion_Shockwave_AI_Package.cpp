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
	 * 		Name   -> Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.GetTargetBounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ADSCharacter*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ZOrigin                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Extent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C::GetTargetBounds(class ADSCharacter* Target, float* ZOrigin, float* Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.GetTargetBounds");
		
		UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C_GetTargetBounds_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZOrigin != nullptr)
			*ZOrigin = params.ZOrigin;
		if (Extent != nullptr)
			*Extent = params.Extent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.GetExplosionBounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              ExplosionZ                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ZOrigin                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Extent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C::GetExplosionBounds(float ExplosionZ, float* ZOrigin, float* Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.GetExplosionBounds");
		
		UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C_GetExplosionBounds_Params params {};
		params.ExplosionZ = ExplosionZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZOrigin != nullptr)
			*ZOrigin = params.ZOrigin;
		if (Extent != nullptr)
			*Extent = params.Extent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.CanShockwaveHitCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ADSCharacter*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ExplosionLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADSCharacter*                                Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C::CanShockwaveHitCharacter(class ADSCharacter* Target, const struct FVector& ExplosionLocation, class ADSCharacter* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.CanShockwaveHitCharacter");
		
		UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C_CanShockwaveHitCharacter_Params params {};
		params.Target = Target;
		params.ExplosionLocation = ExplosionLocation;
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.ListOfActorsToIgnore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UExplosionActionArchetype*                   ExplosionActionArchetype                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADICharacter*                                Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ExplosionLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, OutParm)
	 */
	void UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C::ListOfActorsToIgnore(class UExplosionActionArchetype* ExplosionActionArchetype, class ADICharacter* Owner, const struct FVector& ExplosionLocation, TArray<class AActor*>* ActorsToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C.ListOfActorsToIgnore");
		
		UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C_ListOfActorsToIgnore_Params params {};
		params.ExplosionActionArchetype = ExplosionActionArchetype;
		params.Owner = Owner;
		params.ExplosionLocation = ExplosionLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToIgnore != nullptr)
			*ActorsToIgnore = params.ActorsToIgnore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimNotify_SpawnExplosion_Shockwave_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_SpawnExplosion_Shockwave_AI.BP_AnimNotify_SpawnExplosion_Shockwave_AI_C");
		return ptr;
	}

}


