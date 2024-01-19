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
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.OnRep_CurrentDetonationState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::OnRep_CurrentDetonationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.OnRep_CurrentDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_OnRep_CurrentDetonationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.GetNewWorldScale
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              DefaultValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSPutrefiedSpitScaleModificationParams      Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Projectile_Slobber_Putrefied_C::GetNewWorldScale(float DefaultValue, const struct FSPutrefiedSpitScaleModificationParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.GetNewWorldScale");
		
		ABP_Projectile_Slobber_Putrefied_C_GetNewWorldScale_Params params {};
		params.DefaultValue = DefaultValue;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.IntialiseModifyScaleTimelineParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSPutrefiedSpitScaleModificationParams      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::IntialiseModifyScaleTimelineParams(const struct FSPutrefiedSpitScaleModificationParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.IntialiseModifyScaleTimelineParams");
		
		ABP_Projectile_Slobber_Putrefied_C_IntialiseModifyScaleTimelineParams_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EndVolatileDetonationState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::EndVolatileDetonationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EndVolatileDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_EndVolatileDetonationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EndEmbeddedDetonationState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::EndEmbeddedDetonationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EndEmbeddedDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_EndEmbeddedDetonationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EndDetonationState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::EndDetonationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EndDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_EndDetonationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginVolatileDetonationState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::BeginVolatileDetonationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginVolatileDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_BeginVolatileDetonationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginEmbeddedDetonationState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::BeginEmbeddedDetonationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginEmbeddedDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_BeginEmbeddedDetonationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginIdleDetonationState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::BeginIdleDetonationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginIdleDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_BeginIdleDetonationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginDetonationState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::BeginDetonationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BeginDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_BeginDetonationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.GoToNextDetonationState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::GoToNextDetonationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.GoToNextDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_GoToNextDetonationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.GoToDetonationState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPutrefiedProjectileState                          NextDetonationState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::GoToDetonationState(EPutrefiedProjectileState NextDetonationState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.GoToDetonationState");
		
		ABP_Projectile_Slobber_Putrefied_C_GoToDetonationState_Params params {};
		params.NextDetonationState = NextDetonationState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.TryGetHitCosmeticEffectDefinition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCosmeticEffectsDefinition*                  ReturnCosmeticEffect                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::TryGetHitCosmeticEffectDefinition(class UObject* Object, class UCosmeticEffectsDefinition** ReturnCosmeticEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.TryGetHitCosmeticEffectDefinition");
		
		ABP_Projectile_Slobber_Putrefied_C_TryGetHitCosmeticEffectDefinition_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnCosmeticEffect != nullptr)
			*ReturnCosmeticEffect = params.ReturnCosmeticEffect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.UnbindListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::UnbindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.UnbindListeners");
		
		ABP_Projectile_Slobber_Putrefied_C_UnbindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BindListeners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::BindListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BindListeners");
		
		ABP_Projectile_Slobber_Putrefied_C_BindListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ProjectileActorAttached
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AModularProjectileActor*                     ModularProjectileActor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttachPosition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttachmentInfo                             AttachmentInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::ProjectileActorAttached(class AModularProjectileActor* ModularProjectileActor, const struct FVector& AttachPosition, const struct FAttachmentInfo& AttachmentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ProjectileActorAttached");
		
		ABP_Projectile_Slobber_Putrefied_C_ProjectileActorAttached_Params params {};
		params.ModularProjectileActor = ModularProjectileActor;
		params.AttachPosition = AttachPosition;
		params.AttachmentInfo = AttachmentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ProjectileActorEmbedded
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AModularProjectileActor*                     ModularProjectileActor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AttachPosition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  ProjectileHitResult                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::ProjectileActorEmbedded(class AModularProjectileActor* ModularProjectileActor, const struct FVector& AttachPosition, const struct FHitResult& ProjectileHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ProjectileActorEmbedded");
		
		ABP_Projectile_Slobber_Putrefied_C_ProjectileActorEmbedded_Params params {};
		params.ModularProjectileActor = ModularProjectileActor;
		params.AttachPosition = AttachPosition;
		params.ProjectileHitResult = ProjectileHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.UserConstructionScript");
		
		ABP_Projectile_Slobber_Putrefied_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ModifyScale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::ModifyScale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ModifyScale__FinishedFunc");
		
		ABP_Projectile_Slobber_Putrefied_C_ModifyScale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ModifyScale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::ModifyScale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ModifyScale__UpdateFunc");
		
		ABP_Projectile_Slobber_Putrefied_C_ModifyScale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ReceiveBeginPlay");
		
		ABP_Projectile_Slobber_Putrefied_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EnableExpandedShootCollider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::EnableExpandedShootCollider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.EnableExpandedShootCollider");
		
		ABP_Projectile_Slobber_Putrefied_C_EnableExpandedShootCollider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ReceiveHit");
		
		ABP_Projectile_Slobber_Putrefied_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ModifyScaleOverTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSPutrefiedSpitScaleModificationParams      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::ModifyScaleOverTime(const struct FSPutrefiedSpitScaleModificationParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ModifyScaleOverTime");
		
		ABP_Projectile_Slobber_Putrefied_C_ModifyScaleOverTime_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ReceiveEndPlay");
		
		ABP_Projectile_Slobber_Putrefied_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.StopModifyingScale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::StopModifyingScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.StopModifyingScale");
		
		ABP_Projectile_Slobber_Putrefied_C_StopModifyingScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BndEvt__Damageable_K2Node_ComponentBoundEvent_1_ActorTakeDamageDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventInstigator                            InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDSDamageData                               DSDamageData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::BndEvt__Damageable_K2Node_ComponentBoundEvent_1_ActorTakeDamageDelegate__DelegateSignature(class AActor* DamagedActor, float Damage, const struct FDamageEvent& DamageEvent, const struct FEventInstigator& InstigatedBy, class AActor* DamageCauser, const struct FDSDamageData& DSDamageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.BndEvt__Damageable_K2Node_ComponentBoundEvent_1_ActorTakeDamageDelegate__DelegateSignature");
		
		ABP_Projectile_Slobber_Putrefied_C_BndEvt__Damageable_K2Node_ComponentBoundEvent_1_ActorTakeDamageDelegate__DelegateSignature_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.DamageEvent = DamageEvent;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.DSDamageData = DSDamageData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ExecuteUbergraph_BP_Projectile_Slobber_Putrefied
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Projectile_Slobber_Putrefied_C::ExecuteUbergraph_BP_Projectile_Slobber_Putrefied(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C.ExecuteUbergraph_BP_Projectile_Slobber_Putrefied");
		
		ABP_Projectile_Slobber_Putrefied_C_ExecuteUbergraph_BP_Projectile_Slobber_Putrefied_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Projectile_Slobber_Putrefied_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Projectile_Slobber_Putrefied_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Slobber_Putrefied.BP_Projectile_Slobber_Putrefied_C");
		return ptr;
	}

}


