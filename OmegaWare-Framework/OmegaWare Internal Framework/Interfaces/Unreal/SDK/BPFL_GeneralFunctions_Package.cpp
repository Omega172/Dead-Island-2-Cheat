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
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.UnbindActionDelegates
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               CharacterActionHelper                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              OnActionEnded                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnActionResolved                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnActionCancelled                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_UnbindActionDelegates(class UCharacterActionRequestHelper* CharacterActionHelper, const class FScriptDelegate& OnActionEnded, const class FScriptDelegate& OnActionResolved, const class FScriptDelegate& OnActionCancelled, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.UnbindActionDelegates");
		
		UBPFL_GeneralFunctions_C_UnbindActionDelegates_Params params {};
		params.CharacterActionHelper = CharacterActionHelper;
		params.OnActionEnded = OnActionEnded;
		params.OnActionResolved = OnActionResolved;
		params.OnActionCancelled = OnActionCancelled;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.BindActionDelegates
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCharacterActionRequestHelper*               CharacterActionHelper                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              OnActionEnded                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnActionResolved                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              OnActionCancelled                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_BindActionDelegates(class UCharacterActionRequestHelper* CharacterActionHelper, const class FScriptDelegate& OnActionEnded, const class FScriptDelegate& OnActionResolved, const class FScriptDelegate& OnActionCancelled, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.BindActionDelegates");
		
		UBPFL_GeneralFunctions_C_BindActionDelegates_Params params {};
		params.CharacterActionHelper = CharacterActionHelper;
		params.OnActionEnded = OnActionEnded;
		params.OnActionResolved = OnActionResolved;
		params.OnActionCancelled = OnActionCancelled;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.ResetAllReleventStaticMeshsCollisionResponsesToStaticMeshDefaults
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UStaticMeshComponent*>                StaticMeshComponents                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<ECollisionChannel>                          CollisionChannelsToOverride                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::ResetAllReleventStaticMeshsCollisionResponsesToStaticMeshDefaults(TArray<class UStaticMeshComponent*>* StaticMeshComponents, TArray<ECollisionChannel>* CollisionChannelsToOverride, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.ResetAllReleventStaticMeshsCollisionResponsesToStaticMeshDefaults");
		
		UBPFL_GeneralFunctions_C_ResetAllReleventStaticMeshsCollisionResponsesToStaticMeshDefaults_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaticMeshComponents != nullptr)
			*StaticMeshComponents = params.StaticMeshComponents;
		if (CollisionChannelsToOverride != nullptr)
			*CollisionChannelsToOverride = params.CollisionChannelsToOverride;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.ResetCollisionResponsesToStaticMeshDefaults
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        StaticMeshComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<ECollisionChannel>                          CollisionChannelsToReset                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::ResetCollisionResponsesToStaticMeshDefaults(class UStaticMeshComponent* StaticMeshComponent, TArray<ECollisionChannel>* CollisionChannelsToReset, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.ResetCollisionResponsesToStaticMeshDefaults");
		
		UBPFL_GeneralFunctions_C_ResetCollisionResponsesToStaticMeshDefaults_Params params {};
		params.StaticMeshComponent = StaticMeshComponent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CollisionChannelsToReset != nullptr)
			*CollisionChannelsToReset = params.CollisionChannelsToReset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SphereTraceFromLocation
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationToTraceFrom                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationForTraceEnd                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SphereRadius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     UpVector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AcceptedAngleTolerance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AcceptedAngleErrorMargin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDrawDebugTrace                                    DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConditionsMet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitObject                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AcceptedAngleToleranceMet                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_SphereTraceFromLocation(class UObject* WorldContextObject, const struct FVector& LocationToTraceFrom, const struct FVector& LocationForTraceEnd, float SphereRadius, ETraceTypeQuery TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& UpVector, float AcceptedAngleTolerance, float AcceptedAngleErrorMargin, EDrawDebugTrace DrawDebugType, class UObject* __WorldContext, bool* ConditionsMet, bool* HitObject, bool* AcceptedAngleToleranceMet, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SphereTraceFromLocation");
		
		UBPFL_GeneralFunctions_C_SphereTraceFromLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocationToTraceFrom = LocationToTraceFrom;
		params.LocationForTraceEnd = LocationForTraceEnd;
		params.SphereRadius = SphereRadius;
		params.TraceChannel = TraceChannel;
		params.ActorsToIgnore = ActorsToIgnore;
		params.UpVector = UpVector;
		params.AcceptedAngleTolerance = AcceptedAngleTolerance;
		params.AcceptedAngleErrorMargin = AcceptedAngleErrorMargin;
		params.DrawDebugType = DrawDebugType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConditionsMet != nullptr)
			*ConditionsMet = params.ConditionsMet;
		if (HitObject != nullptr)
			*HitObject = params.HitObject;
		if (AcceptedAngleToleranceMet != nullptr)
			*AcceptedAngleToleranceMet = params.AcceptedAngleToleranceMet;
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.Find Or Add Actor Component
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_FindOrAddActorComponent(class AActor* Actor, class UClass* InClass, class UObject* __WorldContext, class UActorComponent** Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.Find Or Add Actor Component");
		
		UBPFL_GeneralFunctions_C_FindOrAddActorComponent_Params params {};
		params.Actor = Actor;
		params.InClass = InClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Component != nullptr)
			*Component = params.Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineVerticalFacingPositionOffset
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharacterLocationType                             CharacterLocationType                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FacingDegree                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_DetermineVerticalFacingPositionOffset(class AActor* Actor, const struct FVector& Position, float RotationalOffset, ECharacterLocationType CharacterLocationType, class UObject* __WorldContext, float* FacingDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineVerticalFacingPositionOffset");
		
		UBPFL_GeneralFunctions_C_DetermineVerticalFacingPositionOffset_Params params {};
		params.Actor = Actor;
		params.Position = Position;
		params.RotationalOffset = RotationalOffset;
		params.CharacterLocationType = CharacterLocationType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FacingDegree != nullptr)
			*FacingDegree = params.FacingDegree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsLocationFacingLocation2D
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SourceLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxFacingAngle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Inverse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      UpwardVectorActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FacingDegree                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_IsLocationFacingLocation2D(const struct FVector& SourceLocation, const struct FVector& Direction, const struct FVector& TargetLocation, float RotationalOffset, float MaxFacingAngle, bool Inverse, class AActor* UpwardVectorActor, class UObject* __WorldContext, bool* Result, float* FacingDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsLocationFacingLocation2D");
		
		UBPFL_GeneralFunctions_C_IsLocationFacingLocation2D_Params params {};
		params.SourceLocation = SourceLocation;
		params.Direction = Direction;
		params.TargetLocation = TargetLocation;
		params.RotationalOffset = RotationalOffset;
		params.MaxFacingAngle = MaxFacingAngle;
		params.Inverse = Inverse;
		params.UpwardVectorActor = UpwardVectorActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (FacingDegree != nullptr)
			*FacingDegree = params.FacingDegree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineLocationAndDirectionFacingLocationOffset2D
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SourcePosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      UpwardVectorActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FacingDegree                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_DetermineLocationAndDirectionFacingLocationOffset2D(const struct FVector& SourcePosition, const struct FVector& Direction, const struct FVector& TargetPosition, float RotationalOffset, class AActor* UpwardVectorActor, class UObject* __WorldContext, float* FacingDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineLocationAndDirectionFacingLocationOffset2D");
		
		UBPFL_GeneralFunctions_C_DetermineLocationAndDirectionFacingLocationOffset2D_Params params {};
		params.SourcePosition = SourcePosition;
		params.Direction = Direction;
		params.TargetPosition = TargetPosition;
		params.RotationalOffset = RotationalOffset;
		params.UpwardVectorActor = UpwardVectorActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FacingDegree != nullptr)
			*FacingDegree = params.FacingDegree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsLocationFacingActor2D
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SourceLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SourceDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxFacingAngle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Inverse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotationalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FacingDegree                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_IsLocationFacingActor2D(const struct FVector& SourceLocation, const struct FVector& SourceDirection, class AActor* Target, float MaxFacingAngle, bool Inverse, float RotationalOffset, class UObject* __WorldContext, bool* Result, float* FacingDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsLocationFacingActor2D");
		
		UBPFL_GeneralFunctions_C_IsLocationFacingActor2D_Params params {};
		params.SourceLocation = SourceLocation;
		params.SourceDirection = SourceDirection;
		params.Target = Target;
		params.MaxFacingAngle = MaxFacingAngle;
		params.Inverse = Inverse;
		params.RotationalOffset = RotationalOffset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (FacingDegree != nullptr)
			*FacingDegree = params.FacingDegree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineLocationAndDirectionFacingActorOffset2D
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FacingDegree                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_DetermineLocationAndDirectionFacingActorOffset2D(const struct FVector& Position, const struct FVector& Direction, class AActor* Actor, float RotationalOffset, class UObject* __WorldContext, float* FacingDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineLocationAndDirectionFacingActorOffset2D");
		
		UBPFL_GeneralFunctions_C_DetermineLocationAndDirectionFacingActorOffset2D_Params params {};
		params.Position = Position;
		params.Direction = Direction;
		params.Actor = Actor;
		params.RotationalOffset = RotationalOffset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FacingDegree != nullptr)
			*FacingDegree = params.FacingDegree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.CompareFloat
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EComparisonOperator                                Operator                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EqualityErrorTolerance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ComparisonReturnValue                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_CompareFloat(float Left, EComparisonOperator Operator, float Right, float EqualityErrorTolerance, class UObject* __WorldContext, bool* ComparisonReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.CompareFloat");
		
		UBPFL_GeneralFunctions_C_CompareFloat_Params params {};
		params.Left = Left;
		params.Operator = Operator;
		params.Right = Right;
		params.EqualityErrorTolerance = EqualityErrorTolerance;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComparisonReturnValue != nullptr)
			*ComparisonReturnValue = params.ComparisonReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsActorFacingLocation2D
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxFacingAngle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Inverse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotationalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FacingDegree                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_IsActorFacingLocation2D(class AActor* Source, const struct FVector& Target, float MaxFacingAngle, bool Inverse, float RotationalOffset, class UObject* __WorldContext, bool* Result, float* FacingDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsActorFacingLocation2D");
		
		UBPFL_GeneralFunctions_C_IsActorFacingLocation2D_Params params {};
		params.Source = Source;
		params.Target = Target;
		params.MaxFacingAngle = MaxFacingAngle;
		params.Inverse = Inverse;
		params.RotationalOffset = RotationalOffset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (FacingDegree != nullptr)
			*FacingDegree = params.FacingDegree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SafeModifyFact
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_SafeModifyFact(class UKnowledgeBaseComponent* Target, const struct FKnowledgeBaseFactKey& FactKey, int32_t Delta, class UObject* __WorldContext, int32_t* NewValue, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SafeModifyFact");
		
		UBPFL_GeneralFunctions_C_SafeModifyFact_Params params {};
		params.Target = Target;
		params.FactKey = FactKey;
		params.Delta = Delta;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewValue != nullptr)
			*NewValue = params.NewValue;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetDistanceBetweenLocations
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocationOne                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationTwo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EComparisonOperator                                ComparisonOperator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ComparisonValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ErrorTolerance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistanceBetween                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ComparisonReturnValue                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetDistanceBetweenLocations(const struct FVector& LocationOne, const struct FVector& LocationTwo, EComparisonOperator ComparisonOperator, float ComparisonValue, float ErrorTolerance, class UObject* __WorldContext, float* DistanceBetween, bool* ComparisonReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetDistanceBetweenLocations");
		
		UBPFL_GeneralFunctions_C_GetDistanceBetweenLocations_Params params {};
		params.LocationOne = LocationOne;
		params.LocationTwo = LocationTwo;
		params.ComparisonOperator = ComparisonOperator;
		params.ComparisonValue = ComparisonValue;
		params.ErrorTolerance = ErrorTolerance;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistanceBetween != nullptr)
			*DistanceBetween = params.DistanceBetween;
		if (ComparisonReturnValue != nullptr)
			*ComparisonReturnValue = params.ComparisonReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.LineTraceFromLocation
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationToTraceFrom                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationForTraceEnd                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     UpVector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AcceptedAngleTolerance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AcceptedAngleErrorMargin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDrawDebugTrace                                    DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ConditionsMet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitObject                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AcceptedAngleToleranceMet                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_LineTraceFromLocation(class UObject* WorldContextObject, const struct FVector& LocationToTraceFrom, const struct FVector& LocationForTraceEnd, ETraceTypeQuery TraceChannel, TArray<class AActor*> ActorsToIgnore, const struct FVector& UpVector, float AcceptedAngleTolerance, float AcceptedAngleErrorMargin, EDrawDebugTrace DrawDebugType, class UObject* __WorldContext, bool* ConditionsMet, bool* HitObject, bool* AcceptedAngleToleranceMet, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.LineTraceFromLocation");
		
		UBPFL_GeneralFunctions_C_LineTraceFromLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocationToTraceFrom = LocationToTraceFrom;
		params.LocationForTraceEnd = LocationForTraceEnd;
		params.TraceChannel = TraceChannel;
		params.ActorsToIgnore = ActorsToIgnore;
		params.UpVector = UpVector;
		params.AcceptedAngleTolerance = AcceptedAngleTolerance;
		params.AcceptedAngleErrorMargin = AcceptedAngleErrorMargin;
		params.DrawDebugType = DrawDebugType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConditionsMet != nullptr)
			*ConditionsMet = params.ConditionsMet;
		if (HitObject != nullptr)
			*HitObject = params.HitObject;
		if (AcceptedAngleToleranceMet != nullptr)
			*AcceptedAngleToleranceMet = params.AcceptedAngleToleranceMet;
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetFinalImpactDamage
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      AffectedActor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAffectedActorRecord                        FinalDamageParams                                          (Parm, OutParm)
	 * 		bool                                               ReturnSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetFinalImpactDamage(class UBaseImpactEventResultWrapper* ImpactEvent, class AActor* AffectedActor, class UObject* __WorldContext, struct FAffectedActorRecord* FinalDamageParams, bool* ReturnSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetFinalImpactDamage");
		
		UBPFL_GeneralFunctions_C_GetFinalImpactDamage_Params params {};
		params.ImpactEvent = ImpactEvent;
		params.AffectedActor = AffectedActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FinalDamageParams != nullptr)
			*FinalDamageParams = params.FinalDamageParams;
		if (ReturnSuccess != nullptr)
			*ReturnSuccess = params.ReturnSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.FindComponentByName
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ComponentName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             ComponentOut                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_FindComponentByName(class AActor* Actor, const class FName& ComponentName, class UObject* __WorldContext, class UActorComponent** ComponentOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.FindComponentByName");
		
		UBPFL_GeneralFunctions_C_FindComponentByName_Params params {};
		params.Actor = Actor;
		params.ComponentName = ComponentName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentOut != nullptr)
			*ComponentOut = params.ComponentOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCommonImpactFactFloat
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      AffectedActor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FactValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetCommonImpactFactFloat(class UBaseImpactEventResultWrapper* ImpactEvent, class AActor* AffectedActor, const struct FKnowledgeBaseFactKey& FactKey, class UObject* __WorldContext, float* FactValue, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCommonImpactFactFloat");
		
		UBPFL_GeneralFunctions_C_GetCommonImpactFactFloat_Params params {};
		params.ImpactEvent = ImpactEvent;
		params.AffectedActor = AffectedActor;
		params.FactKey = FactKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCommonImpactFactBool
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      AffectedActor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FactValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetCommonImpactFactBool(class UBaseImpactEventResultWrapper* ImpactEvent, class AActor* AffectedActor, const struct FKnowledgeBaseFactKey& FactKey, class UObject* __WorldContext, bool* FactValue, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCommonImpactFactBool");
		
		UBPFL_GeneralFunctions_C_GetCommonImpactFactBool_Params params {};
		params.ImpactEvent = ImpactEvent;
		params.AffectedActor = AffectedActor;
		params.FactKey = FactKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCommonImpactAndDamageParams
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGeneralImpactEventResultParams             ImpactParams                                               (Parm, OutParm)
	 * 		struct FCommonImpactDamageResultParams             CommonDamageParams                                         (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetCommonImpactAndDamageParams(class UBaseImpactEventResultWrapper* ImpactEvent, class UObject* __WorldContext, struct FGeneralImpactEventResultParams* ImpactParams, struct FCommonImpactDamageResultParams* CommonDamageParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCommonImpactAndDamageParams");
		
		UBPFL_GeneralFunctions_C_GetCommonImpactAndDamageParams_Params params {};
		params.ImpactEvent = ImpactEvent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImpactParams != nullptr)
			*ImpactParams = params.ImpactParams;
		if (CommonDamageParams != nullptr)
			*CommonDamageParams = params.CommonDamageParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.FindComponentOfType
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             ComponentOut                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_FindComponentOfType(class AActor* Actor, class UClass* Component, class UObject* __WorldContext, class UActorComponent** ComponentOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.FindComponentOfType");
		
		UBPFL_GeneralFunctions_C_FindComponentOfType_Params params {};
		params.Actor = Actor;
		params.Component = Component;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentOut != nullptr)
			*ComponentOut = params.ComponentOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SetInteractiveDisableReason
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractiveComponent*                       TargetComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInteractable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        DisableReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_SetInteractiveDisableReason(class UInteractiveComponent* TargetComponent, bool bInteractable, const class FName& DisableReason, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SetInteractiveDisableReason");
		
		UBPFL_GeneralFunctions_C_SetInteractiveDisableReason_Params params {};
		params.TargetComponent = TargetComponent;
		params.bInteractable = bInteractable;
		params.DisableReason = DisableReason;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.TransitionPlayerCamera
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADIPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTransitionFromPlayerView                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ViewTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BlendDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseBlend                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UActorFeed*                                  CameraFeedIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorFeed*                                  CameraFeedOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_TransitionPlayerCamera(class UObject* Target, class ADIPlayerCharacter* Player, bool bTransitionFromPlayerView, class AActor* ViewTarget, float BlendDuration, bool bUseBlend, class UActorFeed* CameraFeedIn, class UObject* __WorldContext, class UActorFeed** CameraFeedOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.TransitionPlayerCamera");
		
		UBPFL_GeneralFunctions_C_TransitionPlayerCamera_Params params {};
		params.Target = Target;
		params.Player = Player;
		params.bTransitionFromPlayerView = bTransitionFromPlayerView;
		params.ViewTarget = ViewTarget;
		params.BlendDuration = BlendDuration;
		params.bUseBlend = bUseBlend;
		params.CameraFeedIn = CameraFeedIn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraFeedOut != nullptr)
			*CameraFeedOut = params.CameraFeedOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.PointImpactCausedDamage
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FPointImpactEventResult                     PointImpact                                                (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DamageCaused                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_PointImpactCausedDamage(const struct FPointImpactEventResult& PointImpact, class UObject* __WorldContext, bool* DamageCaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.PointImpactCausedDamage");
		
		UBPFL_GeneralFunctions_C_PointImpactCausedDamage_Params params {};
		params.PointImpact = PointImpact;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageCaused != nullptr)
			*DamageCaused = params.DamageCaused;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCommonImpactDamageParams
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBaseImpactEventResultWrapper*               ImpactEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCommonImpactDamageResultParams             CommonDamageParams                                         (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetCommonImpactDamageParams(class UBaseImpactEventResultWrapper* ImpactEvent, class UObject* __WorldContext, struct FCommonImpactDamageResultParams* CommonDamageParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCommonImpactDamageParams");
		
		UBPFL_GeneralFunctions_C_GetCommonImpactDamageParams_Params params {};
		params.ImpactEvent = ImpactEvent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CommonDamageParams != nullptr)
			*CommonDamageParams = params.CommonDamageParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineFacingPositionOffset2D
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FacingDegree                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_DetermineFacingPositionOffset2D(class AActor* Actor, const struct FVector& Position, float RotationalOffset, class UObject* __WorldContext, float* FacingDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineFacingPositionOffset2D");
		
		UBPFL_GeneralFunctions_C_DetermineFacingPositionOffset2D_Params params {};
		params.Actor = Actor;
		params.Position = Position;
		params.RotationalOffset = RotationalOffset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FacingDegree != nullptr)
			*FacingDegree = params.FacingDegree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsActorFacingActor2D
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxFacingAngle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Inverse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotationalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FacingDegree                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_IsActorFacingActor2D(class AActor* Source, class AActor* Target, float MaxFacingAngle, bool Inverse, float RotationalOffset, class UObject* __WorldContext, bool* Result, float* FacingDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsActorFacingActor2D");
		
		UBPFL_GeneralFunctions_C_IsActorFacingActor2D_Params params {};
		params.Source = Source;
		params.Target = Target;
		params.MaxFacingAngle = MaxFacingAngle;
		params.Inverse = Inverse;
		params.RotationalOffset = RotationalOffset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (FacingDegree != nullptr)
			*FacingDegree = params.FacingDegree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineFacingActorOffset2D
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotationalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FacingDegree                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_DetermineFacingActorOffset2D(class AActor* Source, class AActor* Target, float RotationalOffset, class UObject* __WorldContext, float* FacingDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DetermineFacingActorOffset2D");
		
		UBPFL_GeneralFunctions_C_DetermineFacingActorOffset2D_Params params {};
		params.Source = Source;
		params.Target = Target;
		params.RotationalOffset = RotationalOffset;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FacingDegree != nullptr)
			*FacingDegree = params.FacingDegree;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.MoveTo150cmOffTheGround
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractiveComponent*                       InteractiveComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HeightLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_MoveTo150cmOffTheGround(class AActor* Actor, class UInteractiveComponent* InteractiveComponent, bool HeightLocked, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.MoveTo150cmOffTheGround");
		
		UBPFL_GeneralFunctions_C_MoveTo150cmOffTheGround_Params params {};
		params.Actor = Actor;
		params.InteractiveComponent = InteractiveComponent;
		params.HeightLocked = HeightLocked;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.RemoveParamsFromStack
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomParamsStackContainer*                 Stack                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       ParamGUID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SuccessfullyRemoved                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_RemoveParamsFromStack(class UCustomParamsStackContainer* Stack, const struct FGuid& ParamGUID, class UObject* __WorldContext, bool* SuccessfullyRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.RemoveParamsFromStack");
		
		UBPFL_GeneralFunctions_C_RemoveParamsFromStack_Params params {};
		params.Stack = Stack;
		params.ParamGUID = ParamGUID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SuccessfullyRemoved != nullptr)
			*SuccessfullyRemoved = params.SuccessfullyRemoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SelectClosestLocation
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TestLocation1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TestLocation2                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ClosestLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasLocation1Closest                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_SelectClosestLocation(const struct FVector& Location, const struct FVector& TestLocation1, const struct FVector& TestLocation2, class UObject* __WorldContext, struct FVector* ClosestLocation, bool* WasLocation1Closest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SelectClosestLocation");
		
		UBPFL_GeneralFunctions_C_SelectClosestLocation_Params params {};
		params.Location = Location;
		params.TestLocation1 = TestLocation1;
		params.TestLocation2 = TestLocation2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestLocation != nullptr)
			*ClosestLocation = params.ClosestLocation;
		if (WasLocation1Closest != nullptr)
			*WasLocation1Closest = params.WasLocation1Closest;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.PlayerLookingAndFacingLocation
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LookingAndFacing                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LookingAtDotResult                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FacingDotResult                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_PlayerLookingAndFacingLocation(class ADIPlayerCharacter* Player, const struct FVector& Location, const struct FVector& Direction, class UObject* __WorldContext, bool* LookingAndFacing, float* LookingAtDotResult, float* FacingDotResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.PlayerLookingAndFacingLocation");
		
		UBPFL_GeneralFunctions_C_PlayerLookingAndFacingLocation_Params params {};
		params.Player = Player;
		params.Location = Location;
		params.Direction = Direction;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LookingAndFacing != nullptr)
			*LookingAndFacing = params.LookingAndFacing;
		if (LookingAtDotResult != nullptr)
			*LookingAtDotResult = params.LookingAtDotResult;
		if (FacingDotResult != nullptr)
			*FacingDotResult = params.FacingDotResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.PlayerLookingAtLocation
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocationToTest                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DotResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LookingAt                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_PlayerLookingAtLocation(class ADIPlayerCharacter* Player, const struct FVector& LocationToTest, class UObject* __WorldContext, float* DotResult, bool* LookingAt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.PlayerLookingAtLocation");
		
		UBPFL_GeneralFunctions_C_PlayerLookingAtLocation_Params params {};
		params.Player = Player;
		params.LocationToTest = LocationToTest;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DotResult != nullptr)
			*DotResult = params.DotResult;
		if (LookingAt != nullptr)
			*LookingAt = params.LookingAt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCharacterAnimInstance
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDIAnimInstance*                             AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetCharacterAnimInstance(class ADIPlayerCharacter* Player, class UObject* __WorldContext, class UDIAnimInstance** AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCharacterAnimInstance");
		
		UBPFL_GeneralFunctions_C_GetCharacterAnimInstance_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimInstance != nullptr)
			*AnimInstance = params.AnimInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SubtractFloatWithFloor
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Decrement                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Limit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAtLimit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UBPFL_GeneralFunctions_C::STATIC_SubtractFloatWithFloor(float Value, float Decrement, float Limit, class UObject* __WorldContext, bool* IsAtLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SubtractFloatWithFloor");
		
		UBPFL_GeneralFunctions_C_SubtractFloatWithFloor_Params params {};
		params.Value = Value;
		params.Decrement = Decrement;
		params.Limit = Limit;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAtLimit != nullptr)
			*IsAtLimit = params.IsAtLimit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.AddFloatWithCeiling
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Limit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAtLimit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UBPFL_GeneralFunctions_C::STATIC_AddFloatWithCeiling(float Value, float Increment, float Limit, class UObject* __WorldContext, bool* IsAtLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.AddFloatWithCeiling");
		
		UBPFL_GeneralFunctions_C_AddFloatWithCeiling_Params params {};
		params.Value = Value;
		params.Increment = Increment;
		params.Limit = Limit;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAtLimit != nullptr)
			*IsAtLimit = params.IsAtLimit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GeneratePointDamageData
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 InstigatorController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADICharacter*                                DamageTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageToApply                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        HitBoneName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BaseDamage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitFromDirecton                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class AController*                                 EventInstigator                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDSDamageData                               DSDamageData                                               (Parm, OutParm, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GeneratePointDamageData(class AController* InstigatorController, class ADICharacter* DamageTarget, float DamageToApply, float Force, class UClass* DamageType, const class FName& HitBoneName, class UObject* __WorldContext, class AActor** DamagedActor, float* BaseDamage, struct FVector* HitFromDirecton, struct FHitResult* HitInfo, class AController** EventInstigator, class AActor** DamageCauser, class UClass** DamageTypeClass, struct FDSDamageData* DSDamageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GeneratePointDamageData");
		
		UBPFL_GeneralFunctions_C_GeneratePointDamageData_Params params {};
		params.InstigatorController = InstigatorController;
		params.DamageTarget = DamageTarget;
		params.DamageToApply = DamageToApply;
		params.Force = Force;
		params.DamageType = DamageType;
		params.HitBoneName = HitBoneName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamagedActor != nullptr)
			*DamagedActor = params.DamagedActor;
		if (BaseDamage != nullptr)
			*BaseDamage = params.BaseDamage;
		if (HitFromDirecton != nullptr)
			*HitFromDirecton = params.HitFromDirecton;
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
		if (EventInstigator != nullptr)
			*EventInstigator = params.EventInstigator;
		if (DamageCauser != nullptr)
			*DamageCauser = params.DamageCauser;
		if (DamageTypeClass != nullptr)
			*DamageTypeClass = params.DamageTypeClass;
		if (DSDamageData != nullptr)
			*DSDamageData = params.DSDamageData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCharacterSkeletalMesh
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetCharacterSkeletalMesh(class ADIPlayerCharacter* Player, class UObject* __WorldContext, class USkeletalMeshComponent** Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetCharacterSkeletalMesh");
		
		UBPFL_GeneralFunctions_C_GetCharacterSkeletalMesh_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsActorAlive
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Alive                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_IsActorAlive(class AActor* Actor, class UObject* __WorldContext, bool* Alive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.IsActorAlive");
		
		UBPFL_GeneralFunctions_C_IsActorAlive_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alive != nullptr)
			*Alive = params.Alive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DisableListenToPlayerInputInObject
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          Playertolistento                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_DisableListenToPlayerInputInObject(class ADIPlayerCharacter* Playertolistento, class UObject* Object, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.DisableListenToPlayerInputInObject");
		
		UBPFL_GeneralFunctions_C_DisableListenToPlayerInputInObject_Params params {};
		params.Playertolistento = Playertolistento;
		params.Object = Object;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.ListenToPlayerInputInObject
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADIPlayerCharacter*                          Playertolistento                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_ListenToPlayerInputInObject(class ADIPlayerCharacter* Playertolistento, class UObject* Object, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.ListenToPlayerInputInObject");
		
		UBPFL_GeneralFunctions_C_ListenToPlayerInputInObject_Params params {};
		params.Playertolistento = Playertolistento;
		params.Object = Object;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetNumOfPlayers
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumPlayers                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetNumOfPlayers(class UObject* __WorldContext, int32_t* NumPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetNumOfPlayers");
		
		UBPFL_GeneralFunctions_C_GetNumOfPlayers_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumPlayers != nullptr)
			*NumPlayers = params.NumPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SetCutsceneModeOnPlayer
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UInputMapperActionFilterDefinition*          CutsceneInputMapperFilter                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_SetCutsceneModeOnPlayer(class AController* Controller, bool Enable, class UInputMapperActionFilterDefinition* CutsceneInputMapperFilter, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.SetCutsceneModeOnPlayer");
		
		UBPFL_GeneralFunctions_C_SetCutsceneModeOnPlayer_Params params {};
		params.Controller = Controller;
		params.Enable = Enable;
		params.CutsceneInputMapperFilter = CutsceneInputMapperFilter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.FlattenVector
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutVector                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_FlattenVector(const struct FVector& Vector, class AActor* Actor, class UObject* __WorldContext, struct FVector* OutVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.FlattenVector");
		
		UBPFL_GeneralFunctions_C_FlattenVector_Params params {};
		params.Vector = Vector;
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVector != nullptr)
			*OutVector = params.OutVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetPlayerID
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlayerID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_GetPlayerID(class AController* Controller, class UObject* __WorldContext, int32_t* PlayerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.GetPlayerID");
		
		UBPFL_GeneralFunctions_C_GetPlayerID_Params params {};
		params.Controller = Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerID != nullptr)
			*PlayerID = params.PlayerID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.FindValidGroundLocationFromPosition
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IncludePawnCollision                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ValidLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_GeneralFunctions_C::STATIC_FindValidGroundLocationFromPosition(const struct FVector& Location, class AActor* Actor, bool IncludePawnCollision, class UObject* __WorldContext, bool* Success, struct FVector* ValidLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_GeneralFunctions.BPFL_GeneralFunctions_C.FindValidGroundLocationFromPosition");
		
		UBPFL_GeneralFunctions_C_FindValidGroundLocationFromPosition_Params params {};
		params.Location = Location;
		params.Actor = Actor;
		params.IncludePawnCollision = IncludePawnCollision;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ValidLocation != nullptr)
			*ValidLocation = params.ValidLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_GeneralFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_GeneralFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_GeneralFunctions.BPFL_GeneralFunctions_C");
		return ptr;
	}

}


