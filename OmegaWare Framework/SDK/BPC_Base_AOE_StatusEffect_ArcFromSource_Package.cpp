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
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetRandomisedAffectedActorsSelection
	 * 		Flags  -> ()
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::SetRandomisedAffectedActorsSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetRandomisedAffectedActorsSelection");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_SetRandomisedAffectedActorsSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsApartOfTheRandomisedAffectedActorsSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_Base_AOE_StatusEffect_ArcFromSource_C::IsApartOfTheRandomisedAffectedActorsSelection(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsApartOfTheRandomisedAffectedActorsSelection");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_IsApartOfTheRandomisedAffectedActorsSelection_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsActorWithinComparisonDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EComparisonOperator                                Operator                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_Base_AOE_StatusEffect_ArcFromSource_C::IsActorWithinComparisonDistance(class AActor* TargetActor, EComparisonOperator Operator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsActorWithinComparisonDistance");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_IsActorWithinComparisonDistance_Params params {};
		params.TargetActor = TargetActor;
		params.Operator = Operator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetInstigator
	 * 		Flags  -> ()
	 */
	struct FEventInstigator UBPC_Base_AOE_StatusEffect_ArcFromSource_C::GetInstigator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetInstigator");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetInstigator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.CanReceiveArc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInterception                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBPC_Base_AOE_StatusEffect_ArcFromSource_C::CanReceiveArc(bool IsInterception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.CanReceiveArc");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_CanReceiveArc_Params params {};
		params.IsInterception = IsInterception;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.RequestTransmitStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::RequestTransmitStatus(const struct FHitResult& HitInfo, class AActor* AffectedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.RequestTransmitStatus");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_RequestTransmitStatus_Params params {};
		params.HitInfo = HitInfo;
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetTargetActorProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSArcFromSourceAffectedActorProperties      Properties                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_Base_AOE_StatusEffect_ArcFromSource_C::GetTargetActorProperties(struct FSArcFromSourceAffectedActorProperties* Properties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetTargetActorProperties");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetTargetActorProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Properties != nullptr)
			*Properties = params.Properties;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.TraceToAffectedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartTrace                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndTrace                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ErrorTolerance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDrawDebugTrace                                    DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	bool UBPC_Base_AOE_StatusEffect_ArcFromSource_C::TraceToAffectedActor(const struct FVector& StartTrace, const struct FVector& EndTrace, float ErrorTolerance, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.TraceToAffectedActor");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_TraceToAffectedActor_Params params {};
		params.StartTrace = StartTrace;
		params.EndTrace = EndTrace;
		params.ErrorTolerance = ErrorTolerance;
		params.DrawDebugType = DrawDebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsAcceptedFluidType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFluid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::IsAcceptedFluidType(class AActor* AffectedActor, bool* IsFluid, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsAcceptedFluidType");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_IsAcceptedFluidType_Params params {};
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFluid != nullptr)
			*IsFluid = params.IsFluid;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.FindTargetPointLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector UBPC_Base_AOE_StatusEffect_ArcFromSource_C::FindTargetPointLocation(class AActor* TargetActor, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.FindTargetPointLocation");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_FindTargetPointLocation_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.DoesActorMeetAliveRequirements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Alive                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::DoesActorMeetAliveRequirements(class AActor* Actor, bool* Alive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.DoesActorMeetAliveRequirements");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_DoesActorMeetAliveRequirements_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alive != nullptr)
			*Alive = params.Alive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetAcceptedClassArrays
	 * 		Flags  -> ()
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::SetAcceptedClassArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetAcceptedClassArrays");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_SetAcceptedClassArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.UniversalActorConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsInterception                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBPC_Base_AOE_StatusEffect_ArcFromSource_C::UniversalActorConditions(class AActor* AffectedActor, bool IsInterception)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.UniversalActorConditions");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_UniversalActorConditions_Params params {};
		params.AffectedActor = AffectedActor;
		params.IsInterception = IsInterception;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetMaxForceAndDamage
	 * 		Flags  -> ()
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::SetMaxForceAndDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetMaxForceAndDamage");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_SetMaxForceAndDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsAcceptedClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      ReturnClass                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::IsAcceptedClassType(class AActor* AffectedActor, bool* ReturnSuccess, class UClass** ReturnClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.IsAcceptedClassType");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_IsAcceptedClassType_Params params {};
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnSuccess != nullptr)
			*ReturnSuccess = params.ReturnSuccess;
		if (ReturnClass != nullptr)
			*ReturnClass = params.ReturnClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ForceModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DropOffValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::ForceModification(class AActor* TargetActor, float MaxValue, float* DropOffValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ForceModification");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ForceModification_Params params {};
		params.TargetActor = TargetActor;
		params.MaxValue = MaxValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropOffValue != nullptr)
			*DropOffValue = params.DropOffValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.DamageModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DropOffValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::DamageModification(class AActor* TargetActor, float MaxValue, float* DropOffValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.DamageModification");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_DamageModification_Params params {};
		params.TargetActor = TargetActor;
		params.MaxValue = MaxValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DropOffValue != nullptr)
			*DropOffValue = params.DropOffValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ApplyForceModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDSDamageData                               DSDamageData                                               (Parm, OutParm, NoDestructor)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::ApplyForceModification(struct FDSDamageData* DSDamageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ApplyForceModification");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ApplyForceModification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DSDamageData != nullptr)
			*DSDamageData = params.DSDamageData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ApplyDamageModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeneralImpactEventParams                   ArcShockGeneralImpactEvent                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::ApplyDamageModification(struct FGeneralImpactEventParams* ArcShockGeneralImpactEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ApplyDamageModification");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ApplyDamageModification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArcShockGeneralImpactEvent != nullptr)
			*ArcShockGeneralImpactEvent = params.ArcShockGeneralImpactEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.WasArcIntercepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OwnerLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     IntialTargetLocation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        IntialTargetBoneName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ErrorTolerance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasValidTarget                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewTargetBoneLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewTargetBoneName                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::WasArcIntercepted(const struct FVector& OwnerLocation, const struct FVector& IntialTargetLocation, const class FName& IntialTargetBoneName, float ErrorTolerance, bool* HasValidTarget, struct FVector* NewTargetBoneLocation, class FName* NewTargetBoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.WasArcIntercepted");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_WasArcIntercepted_Params params {};
		params.OwnerLocation = OwnerLocation;
		params.IntialTargetLocation = IntialTargetLocation;
		params.IntialTargetBoneName = IntialTargetBoneName;
		params.ErrorTolerance = ErrorTolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasValidTarget != nullptr)
			*HasValidTarget = params.HasValidTarget;
		if (NewTargetBoneLocation != nullptr)
			*NewTargetBoneLocation = params.NewTargetBoneLocation;
		if (NewTargetBoneName != nullptr)
			*NewTargetBoneName = params.NewTargetBoneName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.MeetsInterceptConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_Base_AOE_StatusEffect_ArcFromSource_C::MeetsInterceptConditions(class AActor* AffectedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.MeetsInterceptConditions");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_MeetsInterceptConditions_Params params {};
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetOwnerAndTargetLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OwnerLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        OwnerBoneName                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        TargetBoneName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::GetOwnerAndTargetLocations(class AActor* AffectedActor, struct FVector* OwnerLocation, class FName* OwnerBoneName, struct FVector* TargetLocation, class FName* TargetBoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetOwnerAndTargetLocations");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetOwnerAndTargetLocations_Params params {};
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnerLocation != nullptr)
			*OwnerLocation = params.OwnerLocation;
		if (OwnerBoneName != nullptr)
			*OwnerBoneName = params.OwnerBoneName;
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
		if (TargetBoneName != nullptr)
			*TargetBoneName = params.TargetBoneName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetOwnersLocationAndBoneName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::GetOwnersLocationAndBoneName(struct FVector* Location, class FName* BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetOwnersLocationAndBoneName");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetOwnersLocationAndBoneName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (BoneName != nullptr)
			*BoneName = params.BoneName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetAffectedActorsLocationAndBoneName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::GetAffectedActorsLocationAndBoneName(class AActor* AffectedActor, struct FVector* Location, class FName* BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetAffectedActorsLocationAndBoneName");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetAffectedActorsLocationAndBoneName_Params params {};
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (BoneName != nullptr)
			*BoneName = params.BoneName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.MeetsDirectArcConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_Base_AOE_StatusEffect_ArcFromSource_C::MeetsDirectArcConditions(class AActor* AffectedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.MeetsDirectArcConditions");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_MeetsDirectArcConditions_Params params {};
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetRandomBoneVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DICharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::GetRandomBoneVector(class AActor* DICharacter, bool* Success, struct FVector* Location, class FName* BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.GetRandomBoneVector");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_GetRandomBoneVector_Params params {};
		params.DICharacter = DICharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (Location != nullptr)
			*Location = params.Location;
		if (BoneName != nullptr)
			*BoneName = params.BoneName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.CreateParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OwnerLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::CreateParticle(class AActor* AffectedActor, const struct FVector& TargetLocation, const struct FVector& OwnerLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.CreateParticle");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_CreateParticle_Params params {};
		params.AffectedActor = AffectedActor;
		params.TargetLocation = TargetLocation;
		params.OwnerLocation = OwnerLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetInstigatorAndOwningCharacter
	 * 		Flags  -> ()
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::SetInstigatorAndOwningCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.SetInstigatorAndOwningCharacter");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_SetInstigatorAndOwningCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.RequestPointImpactOnTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::RequestPointImpactOnTarget(const struct FHitResult& HitInfo, class AActor* AffectedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.RequestPointImpactOnTarget");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_RequestPointImpactOnTarget_Params params {};
		params.HitInfo = HitInfo;
		params.AffectedActor = AffectedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ReceiveBeginPlay");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.Multicast_CreateParticleEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AffectedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OwnerLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::Multicast_CreateParticleEffect(class AActor* AffectedActor, const struct FVector& TargetLocation, const struct FVector& OwnerLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.Multicast_CreateParticleEffect");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_Multicast_CreateParticleEffect_Params params {};
		params.AffectedActor = AffectedActor;
		params.TargetLocation = TargetLocation;
		params.OwnerLocation = OwnerLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.UpdateActorAffected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::UpdateActorAffected(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.UpdateActorAffected");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_UpdateActorAffected_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.OnActorEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::OnActorEnter(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.OnActorEnter");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_OnActorEnter_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.OnActorExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::OnActorExit(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.OnActorExit");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_OnActorExit_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ReceiveEndPlay");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ExecuteUbergraph_BPC_Base_AOE_StatusEffect_ArcFromSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Base_AOE_StatusEffect_ArcFromSource_C::ExecuteUbergraph_BPC_Base_AOE_StatusEffect_ArcFromSource(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C.ExecuteUbergraph_BPC_Base_AOE_StatusEffect_ArcFromSource");
		
		UBPC_Base_AOE_StatusEffect_ArcFromSource_C_ExecuteUbergraph_BPC_Base_AOE_StatusEffect_ArcFromSource_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Base_AOE_StatusEffect_ArcFromSource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Base_AOE_StatusEffect_ArcFromSource_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Base_AOE_StatusEffect_ArcFromSource.BPC_Base_AOE_StatusEffect_ArcFromSource_C");
		return ptr;
	}

}


