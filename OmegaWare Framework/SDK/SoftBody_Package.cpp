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
	 * 		Name   -> PredefinedFunction USoftBodyBaseNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyBaseNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyBaseNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyAnchorSphereNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyAnchorSphereNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyAnchorSphereNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyParticleSkinningGroupNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyParticleSkinningGroupNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyParticleSkinningGroupNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyParticleSkinningSphereNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyParticleSkinningSphereNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyParticleSkinningSphereNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyGroupCollisionsNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyGroupCollisionsNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyGroupCollisionsNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyCollisionBaseNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyCollisionBaseNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyCollisionBaseNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodySphereCollisionNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodySphereCollisionNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodySphereCollisionNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyCapsuleCollisionNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyCapsuleCollisionNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyCapsuleCollisionNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyPlaneCollisionNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyPlaneCollisionNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyPlaneCollisionNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyFixedCylinderCollisionNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyFixedCylinderCollisionNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyFixedCylinderCollisionNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF19D0
	 * 		Name   -> Function SoftBody.SoftBodyComponent.UpdateSimulationTransforms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bWasTeleport                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoftBodyComponent::UpdateSimulationTransforms(bool bWasTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.UpdateSimulationTransforms");
		
		USoftBodyComponent_UpdateSimulationTransforms_Params params {};
		params.bWasTeleport = bWasTeleport;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF1950
	 * 		Name   -> Function SoftBody.SoftBodyComponent.SetTargetMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoftBodyComponent::SetTargetMesh(class USkeletalMeshComponent* InMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.SetTargetMesh");
		
		USoftBodyComponent_SetTargetMesh_Params params {};
		params.InMesh = InMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF18C0
	 * 		Name   -> Function SoftBody.SoftBodyComponent.SetEnableAll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoftBodyComponent::SetEnableAll(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.SetEnableAll");
		
		USoftBodyComponent_SetEnableAll_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF17F0
	 * 		Name   -> Function SoftBody.SoftBodyComponent.SetEnable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SoftBodyNode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoftBodyComponent::SetEnable(const class FName& SoftBodyNode, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.SetEnable");
		
		USoftBodyComponent_SetEnable_Params params {};
		params.SoftBodyNode = SoftBodyNode;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF1770
	 * 		Name   -> Function SoftBody.SoftBodyComponent.SetDataAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoftBodyDataObject*                         DataAssetIn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoftBodyComponent::SetDataAsset(class USoftBodyDataObject* DataAssetIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.SetDataAsset");
		
		USoftBodyComponent_SetDataAsset_Params params {};
		params.DataAssetIn = DataAssetIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF16F0
	 * 		Name   -> Function SoftBody.SoftBodyComponent.FlagTeleportTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumberOfFrames                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoftBodyComponent::FlagTeleportTransition(int32_t NumberOfFrames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.FlagTeleportTransition");
		
		USoftBodyComponent_FlagTeleportTransition_Params params {};
		params.NumberOfFrames = NumberOfFrames;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF16D0
	 * 		Name   -> Function SoftBody.SoftBodyComponent.DestroySoftSimulations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USoftBodyComponent::DestroySoftSimulations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.DestroySoftSimulations");
		
		USoftBodyComponent_DestroySoftSimulations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF16B0
	 * 		Name   -> Function SoftBody.SoftBodyComponent.CreateSoftSimulations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USoftBodyComponent::CreateSoftSimulations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.CreateSoftSimulations");
		
		USoftBodyComponent_CreateSoftSimulations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF1630
	 * 		Name   -> Function SoftBody.SoftBodyComponent.CreateAndShareFrom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkinnedMeshComponent*                       ShareFrom                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoftBodyComponent::CreateAndShareFrom(class USkinnedMeshComponent* ShareFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.CreateAndShareFrom");
		
		USoftBodyComponent_CreateAndShareFrom_Params params {};
		params.ShareFrom = ShareFrom;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF1610
	 * 		Name   -> Function SoftBody.SoftBodyComponent.AutoEnableDisableVisibleSections
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USoftBodyComponent::AutoEnableDisableVisibleSections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.AutoEnableDisableVisibleSections");
		
		USoftBodyComponent_AutoEnableDisableVisibleSections_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF1510
	 * 		Name   -> Function SoftBody.SoftBodyComponent.AddSoftBodyImpulse
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSoftBodyImpulse                            ImpulseData                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        SoftBodyNode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoftBodyComponent::AddSoftBodyImpulse(const struct FSoftBodyImpulse& ImpulseData, const class FName& SoftBodyNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.AddSoftBodyImpulse");
		
		USoftBodyComponent_AddSoftBodyImpulse_Params params {};
		params.ImpulseData = ImpulseData;
		params.SoftBodyNode = SoftBodyNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EF1440
	 * 		Name   -> Function SoftBody.SoftBodyComponent.AddMovementModifier
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSoftBodyMovementModifer                    ModifierData                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USoftBodyComponent::AddMovementModifier(const struct FSoftBodyMovementModifer& ModifierData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoftBody.SoftBodyComponent.AddMovementModifier");
		
		USoftBodyComponent_AddMovementModifier_Params params {};
		params.ModifierData = ModifierData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyDataObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyDataObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyDataObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyGlobalSkinningNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyGlobalSkinningNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyGlobalSkinningNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyGlobalSkinningBaseRegion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyGlobalSkinningBaseRegion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyGlobalSkinningBaseRegion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyGlobalSkinningCapsule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyGlobalSkinningCapsule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyGlobalSkinningCapsule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyGlobalSkinningBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyGlobalSkinningBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyGlobalSkinningBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyLineChainNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyLineChainNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyLineChainNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASoftBodyManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASoftBodyManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodySimulationNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodySimulationNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodySimulationNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyTetraNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyTetraNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyTetraNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyTrimeshNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyTrimeshNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyTrimeshNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyFieldNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyFieldNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyFieldNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyFieldNodeConstraintData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyFieldNodeConstraintData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyFieldNodeConstraintData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyFieldNodeMaxDistData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyFieldNodeMaxDistData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyFieldNodeMaxDistData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyVolumeFieldNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyVolumeFieldNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyVolumeFieldNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodySphereFieldNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodySphereFieldNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodySphereFieldNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyCapsuleFieldNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyCapsuleFieldNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyCapsuleFieldNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyBoxFieldNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyBoxFieldNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyBoxFieldNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodyWindComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodyWindComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodyWindComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftBodySimulation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftBodySimulation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftBodySimulation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftSetupDataObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftSetupDataObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftSetupDataObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoftSetupCompiledData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoftSetupCompiledData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoftBody.SoftSetupCompiledData");
		return ptr;
	}

}


