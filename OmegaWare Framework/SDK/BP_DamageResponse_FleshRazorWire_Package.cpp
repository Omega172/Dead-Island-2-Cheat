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
	 * 		Name   -> Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.IsCollisionValid
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USimpleCollisionInstanceData*                SimpleCollisionInstanceData                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_DamageResponse_FleshRazorWire_C::IsCollisionValid(class USimpleCollisionInstanceData* SimpleCollisionInstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.IsCollisionValid");
		
		UBP_DamageResponse_FleshRazorWire_C_IsCollisionValid_Params params {};
		params.SimpleCollisionInstanceData = SimpleCollisionInstanceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.RequestImpactEvent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEventInstigator                            EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_DamageResponse_FleshRazorWire_C::RequestImpactEvent(class AActor* DamagedActor, const struct FEventInstigator& EventInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.RequestImpactEvent");
		
		UBP_DamageResponse_FleshRazorWire_C_RequestImpactEvent_Params params {};
		params.DamagedActor = DamagedActor;
		params.EventInstigator = EventInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.BloodEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CollisionWorldPosition                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DamageResponse_FleshRazorWire_C::BloodEffect(class AActor* Actor, const struct FVector& CollisionWorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.BloodEffect");
		
		UBP_DamageResponse_FleshRazorWire_C_BloodEffect_Params params {};
		params.Actor = Actor;
		params.CollisionWorldPosition = CollisionWorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.HandleCollisionUpdate
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USimpleCollisionInstanceData*                SimpleCollisionInstanceData                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UpdateDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DamageResponse_FleshRazorWire_C::HandleCollisionUpdate(class USimpleCollisionInstanceData* SimpleCollisionInstanceData, float UpdateDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.HandleCollisionUpdate");
		
		UBP_DamageResponse_FleshRazorWire_C_HandleCollisionUpdate_Params params {};
		params.SimpleCollisionInstanceData = SimpleCollisionInstanceData;
		params.UpdateDeltaTime = UpdateDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.HandleCollision
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFullCollisionInstanceData*                  FullCollisionInstanceData                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DamageResponse_FleshRazorWire_C::HandleCollision(class UFullCollisionInstanceData* FullCollisionInstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.HandleCollision");
		
		UBP_DamageResponse_FleshRazorWire_C_HandleCollision_Params params {};
		params.FullCollisionInstanceData = FullCollisionInstanceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.ExecuteUbergraph_BP_DamageResponse_FleshRazorWire
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DamageResponse_FleshRazorWire_C::ExecuteUbergraph_BP_DamageResponse_FleshRazorWire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C.ExecuteUbergraph_BP_DamageResponse_FleshRazorWire");
		
		UBP_DamageResponse_FleshRazorWire_C_ExecuteUbergraph_BP_DamageResponse_FleshRazorWire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DamageResponse_FleshRazorWire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DamageResponse_FleshRazorWire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageResponse_FleshRazorWire.BP_DamageResponse_FleshRazorWire_C");
		return ptr;
	}

}


