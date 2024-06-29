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
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.SetFactsToReplicate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::SetFactsToReplicate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.SetFactsToReplicate");
		
		ABP_Projectile_Walker_InsectSwarm_C_SetFactsToReplicate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.GetDispersalCosmentic
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UCosmeticEffectsDefinition* ABP_Projectile_Walker_InsectSwarm_C::GetDispersalCosmentic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.GetDispersalCosmentic");
		
		ABP_Projectile_Walker_InsectSwarm_C_GetDispersalCosmentic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.UnbindDamageListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::UnbindDamageListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.UnbindDamageListeners");
		
		ABP_Projectile_Walker_InsectSwarm_C_UnbindDamageListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BindDamageListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::BindDamageListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BindDamageListeners");
		
		ABP_Projectile_Walker_InsectSwarm_C_BindDamageListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ChangeSwarmsParticlesLifetime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::ChangeSwarmsParticlesLifetime(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ChangeSwarmsParticlesLifetime");
		
		ABP_Projectile_Walker_InsectSwarm_C_ChangeSwarmsParticlesLifetime_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.SwarmDispersalReason
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::SwarmDispersalReason(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.SwarmDispersalReason");
		
		ABP_Projectile_Walker_InsectSwarm_C_SwarmDispersalReason_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnTargetingCollisionBeginOverlap
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::OnTargetingCollisionBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnTargetingCollisionBeginOverlap");
		
		ABP_Projectile_Walker_InsectSwarm_C_OnTargetingCollisionBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnStatusTypeBlockedReasonsUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStateTransmitterComponent*                  Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETransmittableStatus                               Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsNowBlocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCurrentlyActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::OnStatusTypeBlockedReasonsUpdated(class UStateTransmitterComponent* Component, ETransmittableStatus Status, bool bIsNowBlocked, bool bCurrentlyActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnStatusTypeBlockedReasonsUpdated");
		
		ABP_Projectile_Walker_InsectSwarm_C_OnStatusTypeBlockedReasonsUpdated_Params params {};
		params.Component = Component;
		params.Status = Status;
		params.bIsNowBlocked = bIsNowBlocked;
		params.bCurrentlyActive = bCurrentlyActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnStatusTypeDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStateTransmitterComponent*                  Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETransmittableStatus                               StatusType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::OnStatusTypeDeactivated(class UStateTransmitterComponent* Component, ETransmittableStatus StatusType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnStatusTypeDeactivated");
		
		ABP_Projectile_Walker_InsectSwarm_C_OnStatusTypeDeactivated_Params params {};
		params.Component = Component;
		params.StatusType = StatusType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnStatusTypeActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStateTransmitterComponent*                  Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETransmittableStatus                               StatusType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::OnStatusTypeActivated(class UStateTransmitterComponent* Component, ETransmittableStatus StatusType, float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnStatusTypeActivated");
		
		ABP_Projectile_Walker_InsectSwarm_C_OnStatusTypeActivated_Params params {};
		params.Component = Component;
		params.StatusType = StatusType;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnAnyImpactReceived
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::OnAnyImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnAnyImpactReceived");
		
		ABP_Projectile_Walker_InsectSwarm_C_OnAnyImpactReceived_Params params {};
		params.Actor = Actor;
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnSwarmDispersingExpressionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::OnSwarmDispersingExpressionChanged(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnSwarmDispersingExpressionChanged");
		
		ABP_Projectile_Walker_InsectSwarm_C_OnSwarmDispersingExpressionChanged_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnOwnerEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::OnOwnerEnded(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.OnOwnerEnded");
		
		ABP_Projectile_Walker_InsectSwarm_C_OnOwnerEnded_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.UnbindListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::UnbindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.UnbindListeners");
		
		ABP_Projectile_Walker_InsectSwarm_C_UnbindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.GetImpactDispersalData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKnowledgeBaseFactKey                       Value                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Projectile_Walker_InsectSwarm_C::GetImpactDispersalData(class UBaseImpactEventResultWrapper* ImpactEvent, struct FKnowledgeBaseFactKey* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.GetImpactDispersalData");
		
		ABP_Projectile_Walker_InsectSwarm_C_GetImpactDispersalData_Params params {};
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.IsTargetHostile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Projectile_Walker_InsectSwarm_C::IsTargetHostile(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.IsTargetHostile");
		
		ABP_Projectile_Walker_InsectSwarm_C_IsTargetHostile_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.IsValidHomingTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     PotentialTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Projectile_Walker_InsectSwarm_C::IsValidHomingTarget(class UObject* PotentialTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.IsValidHomingTarget");
		
		ABP_Projectile_Walker_InsectSwarm_C_IsValidHomingTarget_Params params {};
		params.PotentialTarget = PotentialTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.GetNewBestTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewPotentialTarget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             NewBestTarget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::GetNewBestTarget(class AActor* NewPotentialTarget, class USceneComponent** NewBestTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.GetNewBestTarget");
		
		ABP_Projectile_Walker_InsectSwarm_C_GetNewBestTarget_Params params {};
		params.NewPotentialTarget = NewPotentialTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewBestTarget != nullptr)
			*NewBestTarget = params.NewBestTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.RaytraceToLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Projectile_Walker_InsectSwarm_C::RaytraceToLocation(const struct FVector& TargetLocation, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.RaytraceToLocation");
		
		ABP_Projectile_Walker_InsectSwarm_C_RaytraceToLocation_Params params {};
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ApplyBurningCosmetic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::ApplyBurningCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ApplyBurningCosmetic");
		
		ABP_Projectile_Walker_InsectSwarm_C_ApplyBurningCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BeginSwarmBehaviour
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::BeginSwarmBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BeginSwarmBehaviour");
		
		ABP_Projectile_Walker_InsectSwarm_C_BeginSwarmBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.EnableIntialLocationHoming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::EnableIntialLocationHoming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.EnableIntialLocationHoming");
		
		ABP_Projectile_Walker_InsectSwarm_C_EnableIntialLocationHoming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.CacheKnowledgeBases
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::CacheKnowledgeBases()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.CacheKnowledgeBases");
		
		ABP_Projectile_Walker_InsectSwarm_C_CacheKnowledgeBases_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BindListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::BindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BindListeners");
		
		ABP_Projectile_Walker_InsectSwarm_C_BindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.EndProjectileResponse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PassiveDispersal                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::EndProjectileResponse(bool PassiveDispersal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.EndProjectileResponse");
		
		ABP_Projectile_Walker_InsectSwarm_C_EndProjectileResponse_Params params {};
		params.PassiveDispersal = PassiveDispersal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.CacheHitResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::CacheHitResult(class UObject* ImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.CacheHitResult");
		
		ABP_Projectile_Walker_InsectSwarm_C_CacheHitResult_Params params {};
		params.ImpactEvent = ImpactEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.IntialiseControllerAndCombatTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::IntialiseControllerAndCombatTarget(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.IntialiseControllerAndCombatTarget");
		
		ABP_Projectile_Walker_InsectSwarm_C_IntialiseControllerAndCombatTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.UserConstructionScript");
		
		ABP_Projectile_Walker_InsectSwarm_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ReceiveBeginPlay");
		
		ABP_Projectile_Walker_InsectSwarm_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");
		
		ABP_Projectile_Walker_InsectSwarm_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ReceiveEndPlay");
		
		ABP_Projectile_Walker_InsectSwarm_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ExecuteUbergraph_BP_Projectile_Walker_InsectSwarm
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Walker_InsectSwarm_C::ExecuteUbergraph_BP_Projectile_Walker_InsectSwarm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C.ExecuteUbergraph_BP_Projectile_Walker_InsectSwarm");
		
		ABP_Projectile_Walker_InsectSwarm_C_ExecuteUbergraph_BP_Projectile_Walker_InsectSwarm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Projectile_Walker_InsectSwarm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Projectile_Walker_InsectSwarm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Walker_InsectSwarm.BP_Projectile_Walker_InsectSwarm_C");
		return ptr;
	}

}


