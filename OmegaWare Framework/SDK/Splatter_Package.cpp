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
	 * 		Name   -> PredefinedFunction USplatterMeshParameters.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplatterMeshParameters::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Splatter.SplatterMeshParameters");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2FA80
	 * 		Name   -> Function Splatter.SplatterMeshComponent.UpdateSoftInfluences
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSplatterSoftPrimitive>              SoftUpdatePrims                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USplatterMeshComponent::UpdateSoftInfluences(TArray<struct FSplatterSoftPrimitive>* SoftUpdatePrims)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.UpdateSoftInfluences");
		
		USplatterMeshComponent_UpdateSoftInfluences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SoftUpdatePrims != nullptr)
			*SoftUpdatePrims = params.SoftUpdatePrims;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F860
	 * 		Name   -> Function Splatter.SplatterMeshComponent.SplatterDecal
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSplatterMeshInfo                           InInfo                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FMatrix USplatterMeshComponent::SplatterDecal(const struct FVector& InLocation, const struct FRotator& InRotation, const struct FSplatterMeshInfo& InInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.SplatterDecal");
		
		USplatterMeshComponent_SplatterDecal_Params params {};
		params.InLocation = InLocation;
		params.InRotation = InRotation;
		params.InInfo = InInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F7A0
	 * 		Name   -> Function Splatter.SplatterMeshComponent.SetDisplacementRenderTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      InRenderTarget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplatterMeshComponent::SetDisplacementRenderTarget(class UTextureRenderTarget2D* InRenderTarget, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.SetDisplacementRenderTarget");
		
		USplatterMeshComponent_SetDisplacementRenderTarget_Params params {};
		params.InRenderTarget = InRenderTarget;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F6E0
	 * 		Name   -> Function Splatter.SplatterMeshComponent.SetDiffuseRenderTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      InRenderTarget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplatterMeshComponent::SetDiffuseRenderTarget(class UTextureRenderTarget2D* InRenderTarget, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.SetDiffuseRenderTarget");
		
		USplatterMeshComponent_SetDiffuseRenderTarget_Params params {};
		params.InRenderTarget = InRenderTarget;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F6C0
	 * 		Name   -> Function Splatter.SplatterMeshComponent.RefreshMaterials
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USplatterMeshComponent::RefreshMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.RefreshMaterials");
		
		USplatterMeshComponent_RefreshMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F5B0
	 * 		Name   -> Function Splatter.SplatterMeshComponent.IsBoneValid
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESplatterType                                      SplatterType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutSocketIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USplatterMeshComponent::IsBoneValid(const class FName& BoneName, ESplatterType SplatterType, int32_t* OutSocketIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.IsBoneValid");
		
		USplatterMeshComponent_IsBoneValid_Params params {};
		params.BoneName = BoneName;
		params.SplatterType = SplatterType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSocketIndex != nullptr)
			*OutSocketIndex = params.OutSocketIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F520
	 * 		Name   -> Function Splatter.SplatterMeshComponent.GetDisplacementRenderTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* USplatterMeshComponent::GetDisplacementRenderTarget(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.GetDisplacementRenderTarget");
		
		USplatterMeshComponent_GetDisplacementRenderTarget_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F490
	 * 		Name   -> Function Splatter.SplatterMeshComponent.GetDiffuseRenderTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* USplatterMeshComponent::GetDiffuseRenderTarget(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.GetDiffuseRenderTarget");
		
		USplatterMeshComponent_GetDiffuseRenderTarget_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F3C0
	 * 		Name   -> Function Splatter.SplatterMeshComponent.GetBoneEndAxis
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutSocketIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshSocket* USplatterMeshComponent::GetBoneEndAxis(const class FName& BoneName, int32_t* OutSocketIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.GetBoneEndAxis");
		
		USplatterMeshComponent_GetBoneEndAxis_Params params {};
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSocketIndex != nullptr)
			*OutSocketIndex = params.OutSocketIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F300
	 * 		Name   -> Function Splatter.SplatterMeshComponent.CreateSplatterMeshResources
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplatterMeshParameters*                     InParameters                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplatterMeshComponent::CreateSplatterMeshResources(class UPrimitiveComponent* Component, class USplatterMeshParameters* InParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.CreateSplatterMeshResources");
		
		USplatterMeshComponent_CreateSplatterMeshResources_Params params {};
		params.Component = Component;
		params.InParameters = InParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F2E0
	 * 		Name   -> Function Splatter.SplatterMeshComponent.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USplatterMeshComponent::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.Clear");
		
		USplatterMeshComponent_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A2F260
	 * 		Name   -> Function Splatter.SplatterMeshComponent.ApplySplatterSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USplatterSet*                                SplatterSet                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplatterMeshComponent::ApplySplatterSet(class USplatterSet* SplatterSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Splatter.SplatterMeshComponent.ApplySplatterSet");
		
		USplatterMeshComponent_ApplySplatterSet_Params params {};
		params.SplatterSet = SplatterSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplatterMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplatterMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Splatter.SplatterMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplatterPluginSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplatterPluginSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Splatter.SplatterPluginSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplatterSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplatterSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Splatter.SplatterSet");
		return ptr;
	}

}


