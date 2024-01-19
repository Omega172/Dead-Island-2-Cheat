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
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.AllowInteraction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Base_AI_C::AllowInteraction(class APawn* User, class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.AllowInteraction");
		
		ABP_Base_AI_C_AllowInteraction_Params params {};
		params.User = User;
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.GetInteractIconClass
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* ABP_Base_AI_C::GetInteractIconClass(class UInteractiveComponent* InteractiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.GetInteractIconClass");
		
		ABP_Base_AI_C_GetInteractIconClass_Params params {};
		params.InteractiveComponent = InteractiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.RefreshAIHUDSlateVisbility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::RefreshAIHUDSlateVisbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.RefreshAIHUDSlateVisbility");
		
		ABP_Base_AI_C_RefreshAIHUDSlateVisbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.Increment Counter Facts
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FKnowledgeBaseFactKey>               FactsToApply                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Base_AI_C::IncrementCounterFacts(TArray<struct FKnowledgeBaseFactKey>* FactsToApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.Increment Counter Facts");
		
		ABP_Base_AI_C_IncrementCounterFacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactsToApply != nullptr)
			*FactsToApply = params.FactsToApply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.RemoveAIHUDSlate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::RemoveAIHUDSlate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.RemoveAIHUDSlate");
		
		ABP_Base_AI_C_RemoveAIHUDSlate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.AddAIHUDSlate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::AddAIHUDSlate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.AddAIHUDSlate");
		
		ABP_Base_AI_C_AddAIHUDSlate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.ToggleDebugPassive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PassiveRequested                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::ToggleDebugPassive(bool PassiveRequested, const class FString& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.ToggleDebugPassive");
		
		ABP_Base_AI_C_ToggleDebugPassive_Params params {};
		params.PassiveRequested = PassiveRequested;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.CounterPreConditionsMet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConditionsMet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AI_C::CounterPreConditionsMet(bool* ConditionsMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.CounterPreConditionsMet");
		
		ABP_Base_AI_C_CounterPreConditionsMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConditionsMet != nullptr)
			*ConditionsMet = params.ConditionsMet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.ApplyPerks
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPerkDefinition*>                     PerksToApply                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Base_AI_C::ApplyPerks(TArray<class UPerkDefinition*>* PerksToApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.ApplyPerks");
		
		ABP_Base_AI_C_ApplyPerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerksToApply != nullptr)
			*PerksToApply = params.PerksToApply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.OnRep_Is AI HUD Visible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::OnRep_IsAIHUDVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.OnRep_Is AI HUD Visible");
		
		ABP_Base_AI_C_OnRep_IsAIHUDVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.AddParticleSystemComponent
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             ParticleTemplate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystemComponent*                    ParticleSystemComponent                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::AddParticleSystemComponent(class UParticleSystem* ParticleTemplate, class UParticleSystemComponent** ParticleSystemComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.AddParticleSystemComponent");
		
		ABP_Base_AI_C_AddParticleSystemComponent_Params params {};
		params.ParticleTemplate = ParticleTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticleSystemComponent != nullptr)
			*ParticleSystemComponent = params.ParticleSystemComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.AddProjectileSpawner
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ProjectileSpawnRate                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ProjectileClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DecayLength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 VelocityDecayCurve                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCurveFloat*                                 OffsetDecayCurve                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MinimumRandomOffset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MaximumRandomOffset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPC_ProjectileSpawner_C*                    ProjectileSpawnerComponent                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::AddProjectileSpawner(float ProjectileSpawnRate, class UClass* ProjectileClass, float DecayLength, class UCurveFloat* VelocityDecayCurve, class UCurveFloat* OffsetDecayCurve, const struct FVector& MinimumRandomOffset, const struct FVector& MaximumRandomOffset, const struct FVector& Location, class UBPC_ProjectileSpawner_C** ProjectileSpawnerComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.AddProjectileSpawner");
		
		ABP_Base_AI_C_AddProjectileSpawner_Params params {};
		params.ProjectileSpawnRate = ProjectileSpawnRate;
		params.ProjectileClass = ProjectileClass;
		params.DecayLength = DecayLength;
		params.VelocityDecayCurve = VelocityDecayCurve;
		params.OffsetDecayCurve = OffsetDecayCurve;
		params.MinimumRandomOffset = MinimumRandomOffset;
		params.MaximumRandomOffset = MaximumRandomOffset;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectileSpawnerComponent != nullptr)
			*ProjectileSpawnerComponent = params.ProjectileSpawnerComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.OnCounterInteractionCompleteInternal
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCoopSequenceTaskSetupParams_Counter*        CounterSetupParams                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::OnCounterInteractionCompleteInternal(class APawn* User, class UCoopSequenceTaskSetupParams_Counter** CounterSetupParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.OnCounterInteractionCompleteInternal");
		
		ABP_Base_AI_C_OnCounterInteractionCompleteInternal_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CounterSetupParams != nullptr)
			*CounterSetupParams = params.CounterSetupParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.InitHitReactBalacingData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::InitHitReactBalacingData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.InitHitReactBalacingData");
		
		ABP_Base_AI_C_InitHitReactBalacingData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.OnCounterInteractionComplete
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCoopSequenceTaskSetupParams_Counter*        CounterSetupParams                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::OnCounterInteractionComplete(class APawn* User, class UCoopSequenceTaskSetupParams_Counter** CounterSetupParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.OnCounterInteractionComplete");
		
		ABP_Base_AI_C_OnCounterInteractionComplete_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CounterSetupParams != nullptr)
			*CounterSetupParams = params.CounterSetupParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.TryToCreateCrawler
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::TryToCreateCrawler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.TryToCreateCrawler");
		
		ABP_Base_AI_C_TryToCreateCrawler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.GetSpawnBehaviourTargetActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::GetSpawnBehaviourTargetActor(class AActor** TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.GetSpawnBehaviourTargetActor");
		
		ABP_Base_AI_C_GetSpawnBehaviourTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.CombatStateChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECosmeticCombatState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::CombatStateChanged(ECosmeticCombatState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.CombatStateChanged");
		
		ABP_Base_AI_C_CombatStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.IsAlive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               Alive                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AI_C::IsAlive(bool* Alive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.IsAlive");
		
		ABP_Base_AI_C_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alive != nullptr)
			*Alive = params.Alive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.UserConstructionScript");
		
		ABP_Base_AI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.ReplicateState_6BAAE5034F7256B2BD052ABA7E7992D1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PredictionKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomParamsBase*                           Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::ReplicateState_6BAAE5034F7256B2BD052ABA7E7992D1(int32_t PredictionKey, class UCustomParamsBase* Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.ReplicateState_6BAAE5034F7256B2BD052ABA7E7992D1");
		
		ABP_Base_AI_C_ReplicateState_6BAAE5034F7256B2BD052ABA7E7992D1_Params params {};
		params.PredictionKey = PredictionKey;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.Interrupted_6BAAE5034F7256B2BD052ABA7E7992D1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCoopSequenceTask*                           Task                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::Interrupted_6BAAE5034F7256B2BD052ABA7E7992D1(class UCoopSequenceTask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.Interrupted_6BAAE5034F7256B2BD052ABA7E7992D1");
		
		ABP_Base_AI_C_Interrupted_6BAAE5034F7256B2BD052ABA7E7992D1_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.Completed_6BAAE5034F7256B2BD052ABA7E7992D1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCoopSequenceTask*                           Task                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::Completed_6BAAE5034F7256B2BD052ABA7E7992D1(class UCoopSequenceTask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.Completed_6BAAE5034F7256B2BD052ABA7E7992D1");
		
		ABP_Base_AI_C_Completed_6BAAE5034F7256B2BD052ABA7E7992D1_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.Activated_6BAAE5034F7256B2BD052ABA7E7992D1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::Activated_6BAAE5034F7256B2BD052ABA7E7992D1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.Activated_6BAAE5034F7256B2BD052ABA7E7992D1");
		
		ABP_Base_AI_C_Activated_6BAAE5034F7256B2BD052ABA7E7992D1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.ReplicateState_EA1999CC48FDB102BE36DA8992CA26FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PredictionKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomParamsBase*                           Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::ReplicateState_EA1999CC48FDB102BE36DA8992CA26FF(int32_t PredictionKey, class UCustomParamsBase* Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.ReplicateState_EA1999CC48FDB102BE36DA8992CA26FF");
		
		ABP_Base_AI_C_ReplicateState_EA1999CC48FDB102BE36DA8992CA26FF_Params params {};
		params.PredictionKey = PredictionKey;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.Interrupted_EA1999CC48FDB102BE36DA8992CA26FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCoopSequenceTask*                           Task                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::Interrupted_EA1999CC48FDB102BE36DA8992CA26FF(class UCoopSequenceTask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.Interrupted_EA1999CC48FDB102BE36DA8992CA26FF");
		
		ABP_Base_AI_C_Interrupted_EA1999CC48FDB102BE36DA8992CA26FF_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.Completed_EA1999CC48FDB102BE36DA8992CA26FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCoopSequenceTask*                           Task                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::Completed_EA1999CC48FDB102BE36DA8992CA26FF(class UCoopSequenceTask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.Completed_EA1999CC48FDB102BE36DA8992CA26FF");
		
		ABP_Base_AI_C_Completed_EA1999CC48FDB102BE36DA8992CA26FF_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.Activated_EA1999CC48FDB102BE36DA8992CA26FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::Activated_EA1999CC48FDB102BE36DA8992CA26FF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.Activated_EA1999CC48FDB102BE36DA8992CA26FF");
		
		ABP_Base_AI_C_Activated_EA1999CC48FDB102BE36DA8992CA26FF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.ReceivePossessed");
		
		ABP_Base_AI_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.Death
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::Death()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.Death");
		
		ABP_Base_AI_C_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_AI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.ReceiveBeginPlay");
		
		ABP_Base_AI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.BndEvt__BPC_AI_MultiPartDamageable_K2Node_ComponentBoundEvent_0_ActorDeadDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::BndEvt__BPC_AI_MultiPartDamageable_K2Node_ComponentBoundEvent_0_ActorDeadDelegate__DelegateSignature(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.BndEvt__BPC_AI_MultiPartDamageable_K2Node_ComponentBoundEvent_0_ActorDeadDelegate__DelegateSignature");
		
		ABP_Base_AI_C_BndEvt__BPC_AI_MultiPartDamageable_K2Node_ComponentBoundEvent_0_ActorDeadDelegate__DelegateSignature_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.BndEvt__HeadStompInteractive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::BndEvt__HeadStompInteractive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.BndEvt__HeadStompInteractive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature");
		
		ABP_Base_AI_C_BndEvt__HeadStompInteractive_K2Node_ComponentBoundEvent_3_InteractDelegate__DelegateSignature_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.BndEvt__CounterInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       User                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionMode                                   Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCustomInteractionActionParams*              CustomParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::BndEvt__CounterInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature(class APawn* User, EInteractionMode Mode, class UCustomInteractionActionParams* CustomParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.BndEvt__CounterInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature");
		
		ABP_Base_AI_C_BndEvt__CounterInteractive_K2Node_ComponentBoundEvent_2_InteractDelegate__DelegateSignature_Params params {};
		params.User = User;
		params.Mode = Mode;
		params.CustomParams = CustomParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.ReceiveEndPlay");
		
		ABP_Base_AI_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.OnHUDVisibilityUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Base_AI_C::OnHUDVisibilityUpdated(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.OnHUDVisibilityUpdated");
		
		ABP_Base_AI_C_OnHUDVisibilityUpdated_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.ExecuteUbergraph_BP_Base_AI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_AI_C::ExecuteUbergraph_BP_Base_AI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.ExecuteUbergraph_BP_Base_AI");
		
		ABP_Base_AI_C_ExecuteUbergraph_BP_Base_AI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Base_AI.BP_Base_AI_C.OnBeginPlay__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_AI_C::OnBeginPlay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_AI.BP_Base_AI_C.OnBeginPlay__DelegateSignature");
		
		ABP_Base_AI_C_OnBeginPlay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_AI.BP_Base_AI_C");
		return ptr;
	}

}


