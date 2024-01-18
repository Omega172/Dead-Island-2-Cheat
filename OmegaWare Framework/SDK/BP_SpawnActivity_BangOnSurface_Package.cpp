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
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.OnOpenableStateChanged
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.OnTriggerEvent
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.SetRelatedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnActivity_BangOnSurface_C::SetRelatedActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.SetRelatedActor");
		
		ABP_SpawnActivity_BangOnSurface_C_SetRelatedActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ReceiveEndPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnActivity_BangOnSurface.BP_SpawnActivity_BangOnSurface_C.ExecuteUbergraph_BP_SpawnActivity_BangOnSurface
	 * 		Flags  -> ()
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


