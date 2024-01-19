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
	 * 		Name   -> Function BP_Part_Jaw.BP_Part_Jaw_C.BeginDetachedState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      ParentSkeletalMeshComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AngularVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Part_Jaw_C::BeginDetachedState(class USkeletalMeshComponent** ParentSkeletalMeshComponent, const struct FVector& Velocity, const struct FVector& AngularVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Part_Jaw.BP_Part_Jaw_C.BeginDetachedState");
		
		ABP_Part_Jaw_C_BeginDetachedState_Params params {};
		params.Velocity = Velocity;
		params.AngularVelocity = AngularVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParentSkeletalMeshComponent != nullptr)
			*ParentSkeletalMeshComponent = params.ParentSkeletalMeshComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Part_Jaw.BP_Part_Jaw_C.BeginAttachedState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      ParentSkeletalMeshComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Part_Jaw_C::BeginAttachedState(class USkeletalMeshComponent* ParentSkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Part_Jaw.BP_Part_Jaw_C.BeginAttachedState");
		
		ABP_Part_Jaw_C_BeginAttachedState_Params params {};
		params.ParentSkeletalMeshComponent = ParentSkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Part_Jaw.BP_Part_Jaw_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Part_Jaw_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Part_Jaw.BP_Part_Jaw_C.ReceiveBeginPlay");
		
		ABP_Part_Jaw_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Part_Jaw.BP_Part_Jaw_C.OnSpawn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      ParentSkeletalMeshComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Part_Jaw_C::OnSpawn(class USkeletalMeshComponent* ParentSkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Part_Jaw.BP_Part_Jaw_C.OnSpawn");
		
		ABP_Part_Jaw_C_OnSpawn_Params params {};
		params.ParentSkeletalMeshComponent = ParentSkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Part_Jaw.BP_Part_Jaw_C.OnDetach
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      ParentSkeletalMeshComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AngularVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Part_Jaw_C::OnDetach(class USkeletalMeshComponent* ParentSkeletalMeshComponent, const struct FVector& Velocity, const struct FVector& AngularVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Part_Jaw.BP_Part_Jaw_C.OnDetach");
		
		ABP_Part_Jaw_C_OnDetach_Params params {};
		params.ParentSkeletalMeshComponent = ParentSkeletalMeshComponent;
		params.Velocity = Velocity;
		params.AngularVelocity = AngularVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Part_Jaw.BP_Part_Jaw_C.SetFadeValue
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FadeValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Part_Jaw_C::SetFadeValue(float FadeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Part_Jaw.BP_Part_Jaw_C.SetFadeValue");
		
		ABP_Part_Jaw_C_SetFadeValue_Params params {};
		params.FadeValue = FadeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function BP_Part_Jaw.BP_Part_Jaw_C.ExecuteUbergraph_BP_Part_Jaw
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Part_Jaw_C::ExecuteUbergraph_BP_Part_Jaw(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Part_Jaw.BP_Part_Jaw_C.ExecuteUbergraph_BP_Part_Jaw");
		
		ABP_Part_Jaw_C_ExecuteUbergraph_BP_Part_Jaw_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Part_Jaw_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Part_Jaw_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Part_Jaw.BP_Part_Jaw_C");
		return ptr;
	}

}


