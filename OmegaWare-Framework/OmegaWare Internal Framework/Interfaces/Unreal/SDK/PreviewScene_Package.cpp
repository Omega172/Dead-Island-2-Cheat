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
	 * 		Name   -> PredefinedFunction APreviewSceneActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewSceneActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PreviewScene.PreviewSceneActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C84D80
	 * 		Name   -> Function PreviewScene.PreviewSceneComponent.SetPreviewTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreviewSceneComponent::SetPreviewTarget(class UTextureRenderTarget2D* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene.PreviewSceneComponent.SetPreviewTarget");
		
		UPreviewSceneComponent_SetPreviewTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C84D00
	 * 		Name   -> Function PreviewScene.PreviewSceneComponent.SetPreviewCamera
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCameraComponent*                            Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreviewSceneComponent::SetPreviewCamera(class UCameraComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene.PreviewSceneComponent.SetPreviewCamera");
		
		UPreviewSceneComponent_SetPreviewCamera_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C84C00
	 * 		Name   -> Function PreviewScene.PreviewSceneComponent.RemoveStreamingLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPreviewSceneComponent::RemoveStreamingLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene.PreviewSceneComponent.RemoveStreamingLevel");
		
		UPreviewSceneComponent_RemoveStreamingLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C84BE0
	 * 		Name   -> Function PreviewScene.PreviewSceneComponent.NotifyLevelShown
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPreviewSceneComponent::NotifyLevelShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene.PreviewSceneComponent.NotifyLevelShown");
		
		UPreviewSceneComponent_NotifyLevelShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C84BC0
	 * 		Name   -> Function PreviewScene.PreviewSceneComponent.NotifyLevelLoaded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPreviewSceneComponent::NotifyLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene.PreviewSceneComponent.NotifyLevelLoaded");
		
		UPreviewSceneComponent_NotifyLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C84A90
	 * 		Name   -> Function PreviewScene.PreviewSceneComponent.K2_SpawnActor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AActor* UPreviewSceneComponent::K2_SpawnActor(class UClass* Class, const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene.PreviewSceneComponent.K2_SpawnActor");
		
		UPreviewSceneComponent_K2_SpawnActor_Params params {};
		params.Class = Class;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function PreviewScene.PreviewSceneComponent.K2_OnLevelStreamingFinished
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPreviewSceneComponent::K2_OnLevelStreamingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene.PreviewSceneComponent.K2_OnLevelStreamingFinished");
		
		UPreviewSceneComponent_K2_OnLevelStreamingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C84A60
	 * 		Name   -> Function PreviewScene.PreviewSceneComponent.GetSceneCaptureComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class USceneCaptureComponent2D* UPreviewSceneComponent::GetSceneCaptureComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene.PreviewSceneComponent.GetSceneCaptureComponent");
		
		UPreviewSceneComponent_GetSceneCaptureComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C84870
	 * 		Name   -> Function PreviewScene.PreviewSceneComponent.AddStreamingLevel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoaded                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelStreaming* UPreviewSceneComponent::AddStreamingLevel(const struct FVector& Location, bool bLoaded, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene.PreviewSceneComponent.AddStreamingLevel");
		
		UPreviewSceneComponent_AddStreamingLevel_Params params {};
		params.Location = Location;
		params.bLoaded = bLoaded;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreviewSceneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreviewSceneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PreviewScene.PreviewSceneComponent");
		return ptr;
	}

}


