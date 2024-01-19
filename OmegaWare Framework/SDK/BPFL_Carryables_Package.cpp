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
	 * 		Name   -> Function BPFL_Carryables.BPFL_Carryables_C.UpdateCarryableImpactData
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class UImpactOnCollisionDetectionComponent*        ImpactOnCollisionDetection                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       HitDetectionGUID                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       OverlapDetectionGUID                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InstigatorSet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_Carryables_C::STATIC_UpdateCarryableImpactData(struct FEventInstigator* Instigator, class UImpactOnCollisionDetectionComponent* ImpactOnCollisionDetection, const struct FGuid& HitDetectionGUID, const struct FGuid& OverlapDetectionGUID, class UObject* __WorldContext, bool* InstigatorSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Carryables.BPFL_Carryables_C.UpdateCarryableImpactData");
		
		UBPFL_Carryables_C_UpdateCarryableImpactData_Params params {};
		params.ImpactOnCollisionDetection = ImpactOnCollisionDetection;
		params.HitDetectionGUID = HitDetectionGUID;
		params.OverlapDetectionGUID = OverlapDetectionGUID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instigator != nullptr)
			*Instigator = params.Instigator;
		if (InstigatorSet != nullptr)
			*InstigatorSet = params.InstigatorSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_Carryables.BPFL_Carryables_C.EnableImpactsOnCarryable
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UImpactOnCollisionDetectionComponent*        CarryableImpactOnCollisionDetection                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       DisableRequestID                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Carryables_C::STATIC_EnableImpactsOnCarryable(class UImpactOnCollisionDetectionComponent* CarryableImpactOnCollisionDetection, struct FGuid* DisableRequestID, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Carryables.BPFL_Carryables_C.EnableImpactsOnCarryable");
		
		UBPFL_Carryables_C_EnableImpactsOnCarryable_Params params {};
		params.CarryableImpactOnCollisionDetection = CarryableImpactOnCollisionDetection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisableRequestID != nullptr)
			*DisableRequestID = params.DisableRequestID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_Carryables.BPFL_Carryables_C.DisableImpactsOnCarryable
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UImpactOnCollisionDetectionComponent*        CarryableImpactOnCollisionDetection                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       DisableRequestGUID                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       DisableRequestID                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Carryables_C::STATIC_DisableImpactsOnCarryable(class UImpactOnCollisionDetectionComponent* CarryableImpactOnCollisionDetection, const class FName& Reason, struct FGuid* DisableRequestGUID, class UObject* __WorldContext, struct FGuid* DisableRequestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Carryables.BPFL_Carryables_C.DisableImpactsOnCarryable");
		
		UBPFL_Carryables_C_DisableImpactsOnCarryable_Params params {};
		params.CarryableImpactOnCollisionDetection = CarryableImpactOnCollisionDetection;
		params.Reason = Reason;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisableRequestGUID != nullptr)
			*DisableRequestGUID = params.DisableRequestGUID;
		if (DisableRequestID != nullptr)
			*DisableRequestID = params.DisableRequestID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_Carryables.BPFL_Carryables_C.SetupCarryableImpactOnCollisionDetection
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPC_Carryable_C*                            CarryableComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPC_CarryableImpactOnCollisionDetection_C*  CarryableImpactOnCollisionDetectionComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USphereComponent*                            OverlapSphere                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OverlapSphereExtraRadius                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        DisableImpactsReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       DisableRequestGUID                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       HitDetectionGUID                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       OverlapDetectionGUID                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       DisableRequestID                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Carryables_C::STATIC_SetupCarryableImpactOnCollisionDetection(class UBPC_Carryable_C* CarryableComponent, class UBPC_CarryableImpactOnCollisionDetection_C* CarryableImpactOnCollisionDetectionComponent, class UPrimitiveComponent* PrimitiveComponent, class USphereComponent* OverlapSphere, float OverlapSphereExtraRadius, const class FName& DisableImpactsReason, struct FGuid* DisableRequestGUID, class UObject* __WorldContext, struct FGuid* HitDetectionGUID, struct FGuid* OverlapDetectionGUID, struct FGuid* DisableRequestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Carryables.BPFL_Carryables_C.SetupCarryableImpactOnCollisionDetection");
		
		UBPFL_Carryables_C_SetupCarryableImpactOnCollisionDetection_Params params {};
		params.CarryableComponent = CarryableComponent;
		params.CarryableImpactOnCollisionDetectionComponent = CarryableImpactOnCollisionDetectionComponent;
		params.PrimitiveComponent = PrimitiveComponent;
		params.OverlapSphere = OverlapSphere;
		params.OverlapSphereExtraRadius = OverlapSphereExtraRadius;
		params.DisableImpactsReason = DisableImpactsReason;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisableRequestGUID != nullptr)
			*DisableRequestGUID = params.DisableRequestGUID;
		if (HitDetectionGUID != nullptr)
			*HitDetectionGUID = params.HitDetectionGUID;
		if (OverlapDetectionGUID != nullptr)
			*OverlapDetectionGUID = params.OverlapDetectionGUID;
		if (DisableRequestID != nullptr)
			*DisableRequestID = params.DisableRequestID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BPFL_Carryables.BPFL_Carryables_C.IsCarrierLocal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UCarryableComponent*                         CarryableComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ContextualActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOutIsLocal                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_Carryables_C::IsCarrierLocal(class UCarryableComponent* CarryableComponent, class AActor* ContextualActor, class UObject* __WorldContext, bool* bOutIsLocal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Carryables.BPFL_Carryables_C.IsCarrierLocal");
		
		UBPFL_Carryables_C_IsCarrierLocal_Params params {};
		params.CarryableComponent = CarryableComponent;
		params.ContextualActor = ContextualActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsLocal != nullptr)
			*bOutIsLocal = params.bOutIsLocal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_Carryables_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_Carryables_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Carryables.BPFL_Carryables_C");
		return ptr;
	}

}


