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
	 * 		Name   -> PredefinedFunction UAnimNotifyState_SplatterAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_SplatterAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.AnimNotifyState_SplatterAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttachmentSpecBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttachmentSpecBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.AttachmentSpecBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticMeshAttachmentSpec.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticMeshAttachmentSpec::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.StaticMeshAttachmentSpec");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkeletalMeshAttachmentSpec.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkeletalMeshAttachmentSpec::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.SkeletalMeshAttachmentSpec");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSubSectionAttachmentSpec.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSubSectionAttachmentSpec::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.MeshSubSectionAttachmentSpec");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorAttachmentSpec.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorAttachmentSpec::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.ActorAttachmentSpec");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttachmentSpecAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttachmentSpecAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.AttachmentSpecAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function CharacterKitRuntime.BodyPartActor.OnSpawn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABodyPartActor::OnSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.BodyPartActor.OnSpawn");
		
		ABodyPartActor_OnSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function CharacterKitRuntime.BodyPartActor.OnDetach
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABodyPartActor::OnDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.BodyPartActor.OnDetach");
		
		ABodyPartActor_OnDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ED7090
	 * 		Name   -> Function CharacterKitRuntime.BodyPartActor.BuildMeshFromViscera
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMesh                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                SectionsToKeep                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ABodyPartActor::BuildMeshFromViscera(class USkeletalMeshComponent* SkeletalMesh, TArray<class FName> SectionsToKeep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.BodyPartActor.BuildMeshFromViscera");
		
		ABodyPartActor_BuildMeshFromViscera_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		params.SectionsToKeep = SectionsToKeep;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABodyPartActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABodyPartActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.BodyPartActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterInitialStateInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterInitialStateInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.CharacterInitialStateInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterInitialStateWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterInitialStateWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.CharacterInitialStateWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ED74A0
	 * 		Name   -> Function CharacterKitRuntime.CharacterKitMeshUtils.ShowSubSections
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMesh                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                SectionsToKeep                                             (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterKitMeshUtils::STATIC_ShowSubSections(class USkeletalMeshComponent* SkeletalMesh, TArray<class FName> SectionsToKeep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.CharacterKitMeshUtils.ShowSubSections");
		
		UCharacterKitMeshUtils_ShowSubSections_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		params.SectionsToKeep = SectionsToKeep;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ED7430
	 * 		Name   -> Function CharacterKitRuntime.CharacterKitMeshUtils.ShowAllSubSections
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMesh                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterKitMeshUtils::STATIC_ShowAllSubSections(class USkeletalMeshComponent* SkeletalMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.CharacterKitMeshUtils.ShowAllSubSections");
		
		UCharacterKitMeshUtils_ShowAllSubSections_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ED71B0
	 * 		Name   -> Function CharacterKitRuntime.CharacterKitMeshUtils.HideAllSubSections
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMesh                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterKitMeshUtils::STATIC_HideAllSubSections(class USkeletalMeshComponent* SkeletalMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.CharacterKitMeshUtils.HideAllSubSections");
		
		UCharacterKitMeshUtils_HideAllSubSections_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterKitMeshUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterKitMeshUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.CharacterKitMeshUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterMaterialMasks.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterMaterialMasks::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.CharacterMaterialMasks");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModelVariationPreviewComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModelVariationPreviewComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.ModelVariationPreviewComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASkeletalMeshAttachmentActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASkeletalMeshAttachmentActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.SkeletalMeshAttachmentActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASkeletalMeshBodyPartAttachmentActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASkeletalMeshBodyPartAttachmentActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.SkeletalMeshBodyPartAttachmentActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASkeletalMeshSubSectionAttachmentActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASkeletalMeshSubSectionAttachmentActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.SkeletalMeshSubSectionAttachmentActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.SocketBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USafeRegion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USafeRegion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.SafeRegion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBreakRegion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreakRegion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.BreakRegion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULimb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULimb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.Limb");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketSetAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketSetAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.SocketSetAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function CharacterKitRuntime.BodyPartActorInterface.OnSpawn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      ParentSkeletalMeshComponent                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBodyPartActorInterface::OnSpawn(class USkeletalMeshComponent* ParentSkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.BodyPartActorInterface.OnSpawn");
		
		UBodyPartActorInterface_OnSpawn_Params params {};
		params.ParentSkeletalMeshComponent = ParentSkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function CharacterKitRuntime.BodyPartActorInterface.OnDetach
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      ParentSkeletalMeshComponent                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AngularVelocity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBodyPartActorInterface::OnDetach(class USkeletalMeshComponent* ParentSkeletalMeshComponent, const struct FVector& Velocity, const struct FVector& AngularVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.BodyPartActorInterface.OnDetach");
		
		UBodyPartActorInterface_OnDetach_Params params {};
		params.ParentSkeletalMeshComponent = ParentSkeletalMeshComponent;
		params.Velocity = Velocity;
		params.AngularVelocity = AngularVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBodyPartActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyPartActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.BodyPartActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnableParts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnableParts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.SpawnableParts");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ED75B0
	 * 		Name   -> Function CharacterKitRuntime.SpawnablePartsUtils.UnHideSkeletonPart
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Skeleton                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PartName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnablePartsUtils::STATIC_UnHideSkeletonPart(class USkeletalMeshComponent* Skeleton, const class FName& PartName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.SpawnablePartsUtils.UnHideSkeletonPart");
		
		USpawnablePartsUtils_UnHideSkeletonPart_Params params {};
		params.Skeleton = Skeleton;
		params.PartName = PartName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ED7360
	 * 		Name   -> Function CharacterKitRuntime.SpawnablePartsUtils.IsSkeletonPartVisible
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Skeleton                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PartName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnablePartsUtils::STATIC_IsSkeletonPartVisible(class USkeletalMeshComponent* Skeleton, const class FName& PartName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.SpawnablePartsUtils.IsSkeletonPartVisible");
		
		USpawnablePartsUtils_IsSkeletonPartVisible_Params params {};
		params.Skeleton = Skeleton;
		params.PartName = PartName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ED72F0
	 * 		Name   -> Function CharacterKitRuntime.SpawnablePartsUtils.HideViscera
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Skeleton                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpawnablePartsUtils::STATIC_HideViscera(class USkeletalMeshComponent* Skeleton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.SpawnablePartsUtils.HideViscera");
		
		USpawnablePartsUtils_HideViscera_Params params {};
		params.Skeleton = Skeleton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ED7220
	 * 		Name   -> Function CharacterKitRuntime.SpawnablePartsUtils.HideSkeletonPart
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Skeleton                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PartName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USpawnablePartsUtils::STATIC_HideSkeletonPart(class USkeletalMeshComponent* Skeleton, const class FName& PartName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterKitRuntime.SpawnablePartsUtils.HideSkeletonPart");
		
		USpawnablePartsUtils_HideSkeletonPart_Params params {};
		params.Skeleton = Skeleton;
		params.PartName = PartName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnablePartsUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnablePartsUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.SpawnablePartsUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStaticMeshAttachmentActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaticMeshAttachmentActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.StaticMeshAttachmentActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraArrow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraArrow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraArrow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraBreakageEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraBreakageEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraBreakageEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraGibbableSubSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraGibbableSubSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraGibbableSubSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraSwitchableGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraSwitchableGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraSwitchableGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraSwitchableVariant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraSwitchableVariant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraSwitchableVariant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraSoftBodyGPUInfluence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraSoftBodyGPUInfluence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraSoftBodyGPUInfluence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraSoftBodyModifer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraSoftBodyModifer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraSoftBodyModifer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraRuleset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraRuleset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraRuleset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraStateBlacklistRuleset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraStateBlacklistRuleset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraStateBlacklistRuleset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisceraAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisceraAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharacterKitRuntime.VisceraAsset");
		return ptr;
	}

}


