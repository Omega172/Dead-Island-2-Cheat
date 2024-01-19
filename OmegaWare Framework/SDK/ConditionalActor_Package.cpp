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
	 * 		RVA    -> 0x00DB3980
	 * 		Name   -> Function ConditionalActor.ConditionalActor.OnSpawnHandlerSpawned
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              SpawnedActors                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AConditionalActor::OnSpawnHandlerSpawned(bool bSuccess, TArray<class AActor*> SpawnedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalActor.ConditionalActor.OnSpawnHandlerSpawned");
		
		AConditionalActor_OnSpawnHandlerSpawned_Params params {};
		params.bSuccess = bSuccess;
		params.SpawnedActors = SpawnedActors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB3A80
	 * 		Name   -> Function ConditionalActor.ConditionalActor.OnSpawnedActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AConditionalActor::OnSpawnedActorDestroyed(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalActor.ConditionalActor.OnSpawnedActorDestroyed");
		
		AConditionalActor_OnSpawnedActorDestroyed_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB3960
	 * 		Name   -> Function ConditionalActor.ConditionalActor.OnCooldownComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AConditionalActor::OnCooldownComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalActor.ConditionalActor.OnCooldownComplete");
		
		AConditionalActor_OnCooldownComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DB38E0
	 * 		Name   -> Function ConditionalActor.ConditionalActor.OnActorSourceProvidedActor
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AConditionalActor::OnActorSourceProvidedActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalActor.ConditionalActor.OnActorSourceProvidedActor");
		
		AConditionalActor_OnActorSourceProvidedActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AConditionalActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AConditionalActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalActor.ConditionalActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCC4B0
	 * 		Name   -> Function ConditionalActor.ConditionalActorPostSpawnOperation.Execute
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConditionalActorPostSpawnOperation::Execute(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConditionalActor.ConditionalActorPostSpawnOperation.Execute");
		
		UConditionalActorPostSpawnOperation_Execute_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalActorPostSpawnOperation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalActorPostSpawnOperation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConditionalActor.ConditionalActorPostSpawnOperation");
		return ptr;
	}

}


