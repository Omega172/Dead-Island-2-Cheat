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
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.RefreshAggressors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::RefreshAggressors(class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.RefreshAggressors");
		
		UBP_StatusEffect_Slowed_Screamer_C_RefreshAggressors_Params params {};
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.FindNearestAggressor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ToActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NearestAggressor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::FindNearestAggressor(class AActor* ToActor, class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState, class AActor** NearestAggressor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.FindNearestAggressor");
		
		UBP_StatusEffect_Slowed_Screamer_C_FindNearestAggressor_Params params {};
		params.ToActor = ToActor;
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NearestAggressor != nullptr)
			*NearestAggressor = params.NearestAggressor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::ReceiveEnd(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveEnd");
		
		UBP_StatusEffect_Slowed_Screamer_C_ReceiveEnd_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       FirstInstance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::ReceiveBegin(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* FirstInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveBegin");
		
		UBP_StatusEffect_Slowed_Screamer_C_ReceiveBegin_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		params.FirstInstance = FirstInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.IsOwnerObstructed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_StatusEffectParams_Slowed_Screamer_C*    Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_Base_StatusEffectTypeState_C*            TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Debug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::IsOwnerObstructed(class UBP_StatusEffectParams_Slowed_Screamer_C* Params, class UBP_Base_StatusEffectTypeState_C* TypeState, bool Debug, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.IsOwnerObstructed");
		
		UBP_StatusEffect_Slowed_Screamer_C_IsOwnerObstructed_Params params {};
		params.Params = Params;
		params.TypeState = TypeState;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.RequestSecondaryAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_Base_StatusEffectTypeState_C*            TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistanceScalar                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RequiredDistanceScalar                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DirectionScalar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RequiredDirectionScalar                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::RequestSecondaryAction(class UBP_Base_StatusEffectTypeState_C* TypeState, float DistanceScalar, float RequiredDistanceScalar, float DirectionScalar, float RequiredDirectionScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.RequestSecondaryAction");
		
		UBP_StatusEffect_Slowed_Screamer_C_RequestSecondaryAction_Params params {};
		params.TypeState = TypeState;
		params.DistanceScalar = DistanceScalar;
		params.RequiredDistanceScalar = RequiredDistanceScalar;
		params.DirectionScalar = DirectionScalar;
		params.RequiredDirectionScalar = RequiredDirectionScalar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ModifyCosmeticEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scalar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistanceScalar                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DirectionScalar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AngleScalar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::ModifyCosmeticEffect(class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState, float Scalar, float DistanceScalar, float DirectionScalar, float AngleScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ModifyCosmeticEffect");
		
		UBP_StatusEffect_Slowed_Screamer_C_ModifyCosmeticEffect_Params params {};
		params.TypeState = TypeState;
		params.Scalar = Scalar;
		params.DistanceScalar = DistanceScalar;
		params.DirectionScalar = DirectionScalar;
		params.AngleScalar = AngleScalar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ScaleModifierWithMovementAgainstInstigatorPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_StatusEffectParams_Slowed_Screamer_C*    Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Debug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ProcessedValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IsolatedDistanceElement                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IsolatedDirectionElement                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IsolatedSourceAngleElement                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::ScaleModifierWithMovementAgainstInstigatorPoint(class UBP_StatusEffectParams_Slowed_Screamer_C* Params, class UBP_StatusEffectTypeState_Slowed_Screamer_C* TypeState, bool Debug, float* ProcessedValue, float* IsolatedDistanceElement, float* IsolatedDirectionElement, float* IsolatedSourceAngleElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ScaleModifierWithMovementAgainstInstigatorPoint");
		
		UBP_StatusEffect_Slowed_Screamer_C_ScaleModifierWithMovementAgainstInstigatorPoint_Params params {};
		params.Params = Params;
		params.TypeState = TypeState;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProcessedValue != nullptr)
			*ProcessedValue = params.ProcessedValue;
		if (IsolatedDistanceElement != nullptr)
			*IsolatedDistanceElement = params.IsolatedDistanceElement;
		if (IsolatedDirectionElement != nullptr)
			*IsolatedDirectionElement = params.IsolatedDirectionElement;
		if (IsolatedSourceAngleElement != nullptr)
			*IsolatedSourceAngleElement = params.IsolatedSourceAngleElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveTickInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::ReceiveTickInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveTickInstance");
		
		UBP_StatusEffect_Slowed_Screamer_C_ReceiveTickInstance_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		params.Instance = Instance;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveEndInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::ReceiveEndInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveEndInstance");
		
		UBP_StatusEffect_Slowed_Screamer_C_ReceiveEndInstance_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveBeginInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffectComponent*                      Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectTypeState*                      TypeState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStatusEffectInstance*                       Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StatusEffect_Slowed_Screamer_C::ReceiveBeginInstance(class UStatusEffectComponent* Component, class UStatusEffectTypeState* TypeState, class UStatusEffectInstance* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C.ReceiveBeginInstance");
		
		UBP_StatusEffect_Slowed_Screamer_C_ReceiveBeginInstance_Params params {};
		params.Component = Component;
		params.TypeState = TypeState;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_StatusEffect_Slowed_Screamer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StatusEffect_Slowed_Screamer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StatusEffect_Slowed_Screamer.BP_StatusEffect_Slowed_Screamer_C");
		return ptr;
	}

}


