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
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.OnOpenableStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOpenableState                                     NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnActivity_BangOnSurface_C::OnOpenableStateChanged(EOpenableState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.OnOpenableStateChanged");
		
		ABP_SpawnActivity_BangOnSurface_C_OnOpenableStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.OnTriggerEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnActivity_BangOnSurface_C::OnTriggerEvent(unsigned char Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.OnTriggerEvent");
		
		ABP_SpawnActivity_BangOnSurface_C_OnTriggerEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.AssignActivityData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SpawningActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGeneratingActorConfigDataAsset*             Config                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnActivity_BangOnSurface_C::AssignActivityData(class AActor* SpawningActor, class UGeneratingActorConfigDataAsset* Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.AssignActivityData");
		
		ABP_SpawnActivity_BangOnSurface_C_AssignActivityData_Params params {};
		params.SpawningActor = SpawningActor;
		params.Config = Config;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SpawnActivity_BangOnSurface_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ReceiveBeginPlay");
		
		ABP_SpawnActivity_BangOnSurface_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnActivity_BangOnSurface_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ReceiveEndPlay");
		
		ABP_SpawnActivity_BangOnSurface_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ExecuteUbergraph_BP_SpawnActivity_BangOnSurface
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnActivity_BangOnSurface_C::ExecuteUbergraph_BP_SpawnActivity_BangOnSurface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ExecuteUbergraph_BP_SpawnActivity_BangOnSurface");
		
		ABP_SpawnActivity_BangOnSurface_C_ExecuteUbergraph_BP_SpawnActivity_BangOnSurface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpawnActivity_BangOnSurface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpawnActivity_BangOnSurface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C");
		return ptr;
	}

}


