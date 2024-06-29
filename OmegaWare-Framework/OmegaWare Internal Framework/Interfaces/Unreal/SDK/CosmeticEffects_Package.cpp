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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_CosmeticEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_CosmeticEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.AnimNotify_CosmeticEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_CosmeticEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_CosmeticEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.AnimNotifyState_CosmeticEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8730
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectData.OnComplete
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCosmeticEffectData::OnComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectData.OnComplete");
		
		UCosmeticEffectData_OnComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForceCompleteCosmeticEffectEnforcementHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForceCompleteCosmeticEffectEnforcementHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.ForceCompleteCosmeticEffectEnforcementHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_PlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_PlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_PlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_Blendable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_Blendable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_Blendable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_Blendable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_Blendable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect_Blendable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectPlayerControllerCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectPlayerControllerCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectPlayerControllerCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_CameraAnim.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_CameraAnim::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect_CameraAnim");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_CameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_CameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect_CameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8750
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectData_Decal.OnDecalComponentDestroyed
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UActorComponent*                             DestroyedComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectData_Decal::OnDecalComponentDestroyed(class UActorComponent* DestroyedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectData_Decal.OnDecalComponentDestroyed");
		
		UCosmeticEffectData_Decal_OnDecalComponentDestroyed_Params params {};
		params.DestroyedComponent = DestroyedComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_Decal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_Decal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_Decal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_Decal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_Decal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect_Decal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_Duration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_Duration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_Duration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_Duration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_Duration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect_Duration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_Emitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_Emitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_Emitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_EmitterLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_EmitterLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_EmitterLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_EmitterAttached.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_EmitterAttached::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_EmitterAttached");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_Emitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_Emitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect_Emitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_PostProcess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_PostProcess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_PostProcess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_PostProcess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_PostProcess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect_PostProcess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_ScreenEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_ScreenEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_ScreenEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_ScreenEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_ScreenEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect_ScreenEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8AA0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectPlaceableActor.RequestStopEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ACosmeticEffectPlaceableActor::RequestStopEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectPlaceableActor.RequestStopEffect");
		
		ACosmeticEffectPlaceableActor_RequestStopEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8A10
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectPlaceableActor.RequestPlayEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInterruptCurrentEffect                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACosmeticEffectPlaceableActor::RequestPlayEffect(bool bInterruptCurrentEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectPlaceableActor.RequestPlayEffect");
		
		ACosmeticEffectPlaceableActor_RequestPlayEffect_Params params {};
		params.bInterruptCurrentEffect = bInterruptCurrentEffect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD85E0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectPlaceableActor.NetMulticastUpdateCosmeticEffect
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		bool                                               bShouldPlay                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterruptCurrentEffectIn                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACosmeticEffectPlaceableActor::NetMulticastUpdateCosmeticEffect(bool bShouldPlay, bool bInterruptCurrentEffectIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectPlaceableActor.NetMulticastUpdateCosmeticEffect");
		
		ACosmeticEffectPlaceableActor_NetMulticastUpdateCosmeticEffect_Params params {};
		params.bShouldPlay = bShouldPlay;
		params.bInterruptCurrentEffectIn = bInterruptCurrentEffectIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACosmeticEffectPlaceableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACosmeticEffectPlaceableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectPlaceableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_ParamThreshold.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_ParamThreshold::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_ParamThreshold");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_ParamThreshold.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_ParamThreshold::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffect_ParamThreshold");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD95F0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnLocationID
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCosmeticEffectsDefinition*                  Definition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectParams                       Params                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FCosmeticEffectsID UCosmeticEffectsBlueprintLibrary::STATIC_SpawnLocationID(class UObject* WorldContextObject, class UCosmeticEffectsDefinition* Definition, const struct FVector& InPosition, const struct FRotator& InRotation, const struct FCosmeticEffectParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnLocationID");
		
		UCosmeticEffectsBlueprintLibrary_SpawnLocationID_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Definition = Definition;
		params.InPosition = InPosition;
		params.InRotation = InRotation;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9410
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCosmeticEffectsDefinition*                  Definition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectParams                       Params                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectsBlueprintLibrary::STATIC_SpawnLocation(class UObject* WorldContextObject, class UCosmeticEffectsDefinition* Definition, const struct FVector& InPosition, const struct FRotator& InRotation, const struct FCosmeticEffectParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnLocation");
		
		UCosmeticEffectsBlueprintLibrary_SpawnLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Definition = Definition;
		params.InPosition = InPosition;
		params.InRotation = InRotation;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9150
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttachedID
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCosmeticEffectsDefinition*                  Definition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             InSceneComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        InPointName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectParams                       Params                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FCosmeticEffectsID UCosmeticEffectsBlueprintLibrary::STATIC_SpawnAttachedID(class UObject* WorldContextObject, class UCosmeticEffectsDefinition* Definition, class AActor* InActor, class USceneComponent* InSceneComponent, const struct FVector& InPosition, const struct FRotator& InRotation, const class FName& InPointName, const struct FCosmeticEffectParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttachedID");
		
		UCosmeticEffectsBlueprintLibrary_SpawnAttachedID_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Definition = Definition;
		params.InActor = InActor;
		params.InSceneComponent = InSceneComponent;
		params.InPosition = InPosition;
		params.InRotation = InRotation;
		params.InPointName = InPointName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD9090
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttachedActorID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCosmeticEffectsDefinition*                  Definition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCosmeticEffectsID UCosmeticEffectsBlueprintLibrary::STATIC_SpawnAttachedActorID(class AActor* Actor, class UCosmeticEffectsDefinition* Definition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttachedActorID");
		
		UCosmeticEffectsBlueprintLibrary_SpawnAttachedActorID_Params params {};
		params.Actor = Actor;
		params.Definition = Definition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8FE0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttachedActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCosmeticEffectsDefinition*                  Definition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectsBlueprintLibrary::STATIC_SpawnAttachedActor(class AActor* Actor, class UCosmeticEffectsDefinition* Definition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttachedActor");
		
		UCosmeticEffectsBlueprintLibrary_SpawnAttachedActor_Params params {};
		params.Actor = Actor;
		params.Definition = Definition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8D30
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttached
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCosmeticEffectsDefinition*                  Definition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             InSceneComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        InPointName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectParams                       Params                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectsBlueprintLibrary::STATIC_SpawnAttached(class UObject* WorldContextObject, class UCosmeticEffectsDefinition* Definition, class AActor* InActor, class USceneComponent* InSceneComponent, const struct FVector& InPosition, const struct FRotator& InRotation, const class FName& InPointName, const struct FCosmeticEffectParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SpawnAttached");
		
		UCosmeticEffectsBlueprintLibrary_SpawnAttached_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Definition = Definition;
		params.InActor = InActor;
		params.InSceneComponent = InSceneComponent;
		params.InPosition = InPosition;
		params.InRotation = InRotation;
		params.InPointName = InPointName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8BF0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SetVec3Parameter
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectsID                          CosmeticEffectsID                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCosmeticEffectsBlueprintLibrary::STATIC_SetVec3Parameter(class UObject* WorldContextObject, const struct FCosmeticEffectsID& CosmeticEffectsID, const class FName& Parameter, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SetVec3Parameter");
		
		UCosmeticEffectsBlueprintLibrary_SetVec3Parameter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CosmeticEffectsID = CosmeticEffectsID;
		params.Parameter = Parameter;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8AC0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SetParameter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectsID                          CosmeticEffectsID                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCosmeticEffectsBlueprintLibrary::STATIC_SetParameter(class UObject* WorldContextObject, const struct FCosmeticEffectsID& CosmeticEffectsID, const class FName& Parameter, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.SetParameter");
		
		UCosmeticEffectsBlueprintLibrary_SetParameter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CosmeticEffectsID = CosmeticEffectsID;
		params.Parameter = Parameter;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8950
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.RelinquishID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectsID                          CosmeticEffectsID                                          (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectsBlueprintLibrary::STATIC_RelinquishID(class UObject* WorldContextObject, struct FCosmeticEffectsID* CosmeticEffectsID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.RelinquishID");
		
		UCosmeticEffectsBlueprintLibrary_RelinquishID_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CosmeticEffectsID != nullptr)
			*CosmeticEffectsID = params.CosmeticEffectsID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD83E0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.LerpVec3Parameter
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectsID                          CosmeticEffectsID                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LerpTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECosmeticEffectLerpType                            LerpType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCosmeticEffectsBlueprintLibrary::STATIC_LerpVec3Parameter(class UObject* WorldContextObject, const struct FCosmeticEffectsID& CosmeticEffectsID, const class FName& Parameter, const struct FVector& NewValue, float LerpTime, float Delay, ECosmeticEffectLerpType LerpType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.LerpVec3Parameter");
		
		UCosmeticEffectsBlueprintLibrary_LerpVec3Parameter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CosmeticEffectsID = CosmeticEffectsID;
		params.Parameter = Parameter;
		params.NewValue = NewValue;
		params.LerpTime = LerpTime;
		params.Delay = Delay;
		params.LerpType = LerpType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD81F0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.LerpParameter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectsID                          CosmeticEffectsID                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LerpTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECosmeticEffectLerpType                            LerpType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCosmeticEffectsBlueprintLibrary::STATIC_LerpParameter(class UObject* WorldContextObject, const struct FCosmeticEffectsID& CosmeticEffectsID, const class FName& Parameter, float NewValue, float LerpTime, float Delay, ECosmeticEffectLerpType LerpType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.LerpParameter");
		
		UCosmeticEffectsBlueprintLibrary_LerpParameter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CosmeticEffectsID = CosmeticEffectsID;
		params.Parameter = Parameter;
		params.NewValue = NewValue;
		params.LerpTime = LerpTime;
		params.Delay = Delay;
		params.LerpType = LerpType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD80E0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.DestroyWithDelay
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectsID                          CosmeticEffectsID                                          (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectsBlueprintLibrary::STATIC_DestroyWithDelay(class UObject* WorldContextObject, struct FCosmeticEffectsID* CosmeticEffectsID, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.DestroyWithDelay");
		
		UCosmeticEffectsBlueprintLibrary_DestroyWithDelay_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CosmeticEffectsID != nullptr)
			*CosmeticEffectsID = params.CosmeticEffectsID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8020
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.Destroy
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCosmeticEffectsID                          CosmeticEffectsID                                          (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectsBlueprintLibrary::STATIC_Destroy(class UObject* WorldContextObject, struct FCosmeticEffectsID* CosmeticEffectsID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsBlueprintLibrary.Destroy");
		
		UCosmeticEffectsBlueprintLibrary_Destroy_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CosmeticEffectsID != nullptr)
			*CosmeticEffectsID = params.CosmeticEffectsID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectsBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectsBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD87D0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectDataStore.OnEffectCompleted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UCosmeticEffect*                             Effect                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCosmeticEffectData*                         Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectDataStore::OnEffectCompleted(class UCosmeticEffect* Effect, class UCosmeticEffectData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectDataStore.OnEffectCompleted");
		
		UCosmeticEffectDataStore_OnEffectCompleted_Params params {};
		params.Effect = Effect;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectDataStore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectDataStore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectDataStore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_Definition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_Definition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectData_Definition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectsDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectsDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectsDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD7FA0
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsManager.DelayedDestroyCallback
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		struct FCosmeticEffectsID                          EffectID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACosmeticEffectsManager::DelayedDestroyCallback(const struct FCosmeticEffectsID& EffectID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsManager.DelayedDestroyCallback");
		
		ACosmeticEffectsManager_DelayedDestroyCallback_Params params {};
		params.EffectID = EffectID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACosmeticEffectsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACosmeticEffectsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD8890
	 * 		Name   -> Function CosmeticEffects.CosmeticEffectsObject.OnEffectCompleted
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCosmeticEffect*                             Effect                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCosmeticEffectData*                         Data                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectsObject::OnEffectCompleted(class UCosmeticEffect* Effect, class UCosmeticEffectData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.CosmeticEffectsObject.OnEffectCompleted");
		
		UCosmeticEffectsObject_OnEffectCompleted_Params params {};
		params.Effect = Effect;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectsObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectsObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectsObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectParamRemap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectParamRemap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectParamRemap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectParamRemap_Scale.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectParamRemap_Scale::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectParamRemap_Scale");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectParamRemap_Rename.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectParamRemap_Rename::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectParamRemap_Rename");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectParamRemap_NumericKBExpression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectParamRemap_NumericKBExpression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectParamRemap_NumericKBExpression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectParamRemap_GraphScale.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectParamRemap_GraphScale::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectParamRemap_GraphScale");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectParamRemap_Clamp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectParamRemap_Clamp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectParamRemap_Clamp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectsTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectsTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.CosmeticEffectsTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFadingCosmeticEffectDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFadingCosmeticEffectDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.FadingCosmeticEffectDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD86B0
	 * 		Name   -> Function CosmeticEffects.FadingCosmeticEffectsManager.OnActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFadingCosmeticEffectsManager::OnActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CosmeticEffects.FadingCosmeticEffectsManager.OnActorDestroyed");
		
		AFadingCosmeticEffectsManager_OnActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFadingCosmeticEffectsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFadingCosmeticEffectsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CosmeticEffects.FadingCosmeticEffectsManager");
		return ptr;
	}

}


