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
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.ProjectileTrackingAddedDebug
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::ProjectileTrackingAddedDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.ProjectileTrackingAddedDebug");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_ProjectileTrackingAddedDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.EvaluateImpactAccuracy
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ActualHitLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAccurate                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::EvaluateImpactAccuracy(const struct FVector& ActualHitLocation, bool* IsAccurate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.EvaluateImpactAccuracy");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_EvaluateImpactAccuracy_Params params {};
		params.ActualHitLocation = ActualHitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAccurate != nullptr)
			*IsAccurate = params.IsAccurate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.InitialiseVariables
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      PerkEffectStartParams                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::InitialiseVariables(const struct FPerkEffectStartParams& PerkEffectStartParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.InitialiseVariables");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_InitialiseVariables_Params params {};
		params.PerkEffectStartParams = PerkEffectStartParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnStart
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPerkEffectStartParams                      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::OnStart(const struct FPerkEffectStartParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnStart");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnCombatTargetChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCombatTargetComponent*                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::OnCombatTargetChanged(class UCombatTargetComponent* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnCombatTargetChanged");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnCombatTargetChanged_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.On Projectile Created
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UActorProjectileSpawnModule*                 ProjectileSpawnModule                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AModularProjectileActor*                     ModularProjectileActor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::OnProjectileCreated(class UActorProjectileSpawnModule* ProjectileSpawnModule, class AModularProjectileActor* ModularProjectileActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.On Projectile Created");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnProjectileCreated_Params params {};
		params.ProjectileSpawnModule = ProjectileSpawnModule;
		params.ModularProjectileActor = ModularProjectileActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnProjectileHit
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::OnProjectileHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnProjectileHit");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnProjectileHit_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.ProjectileHasNotLandedAfterExcessiveDuration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::ProjectileHasNotLandedAfterExcessiveDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.ProjectileHasNotLandedAfterExcessiveDuration");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_ProjectileHasNotLandedAfterExcessiveDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnModulesInitialized
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::OnModulesInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.OnModulesInitialized");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_OnModulesInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.ExecuteUbergraph_BP_PerkEffect_TrackProjectileAccuracy_AI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerkEffect_TrackProjectileAccuracy_AI_C::ExecuteUbergraph_BP_PerkEffect_TrackProjectileAccuracy_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C.ExecuteUbergraph_BP_PerkEffect_TrackProjectileAccuracy_AI");
		
		UBP_PerkEffect_TrackProjectileAccuracy_AI_C_ExecuteUbergraph_BP_PerkEffect_TrackProjectileAccuracy_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerkEffect_TrackProjectileAccuracy_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerkEffect_TrackProjectileAccuracy_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerkEffect_TrackProjectileAccuracy_AI.BP_PerkEffect_TrackProjectileAccuracy_AI_C");
		return ptr;
	}

}


