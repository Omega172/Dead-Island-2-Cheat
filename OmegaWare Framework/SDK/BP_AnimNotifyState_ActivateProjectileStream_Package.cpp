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
	 * 		Name   -> Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.SetManualMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URangedWeaponModulesComponent*               RangedWeaponModule                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDSLogChannelHandle*                         DSLogger                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AnimNotifyState_ActivateProjectileStream_C::SetManualMovement(class AActor* OwnerActor, class URangedWeaponModulesComponent* RangedWeaponModule, class UDSLogChannelHandle* DSLogger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.SetManualMovement");
		
		UBP_AnimNotifyState_ActivateProjectileStream_C_SetManualMovement_Params params {};
		params.OwnerActor = OwnerActor;
		params.RangedWeaponModule = RangedWeaponModule;
		params.DSLogger = DSLogger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.DetermineMovementOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDSLogChannelHandle*                         DSLogger                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetYawOffset                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AnimNotifyState_ActivateProjectileStream_C::DetermineMovementOffset(class AActor* Actor, class UDSLogChannelHandle* DSLogger, float* TargetYawOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.DetermineMovementOffset");
		
		UBP_AnimNotifyState_ActivateProjectileStream_C_DetermineMovementOffset_Params params {};
		params.Actor = Actor;
		params.DSLogger = DSLogger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetYawOffset != nullptr)
			*TargetYawOffset = params.TargetYawOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.IsTargetToTheLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AnimNotifyState_ActivateProjectileStream_C::IsTargetToTheLeft(class AActor* Source, class AActor* Target, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.IsTargetToTheLeft");
		
		UBP_AnimNotifyState_ActivateProjectileStream_C_IsTargetToTheLeft_Params params {};
		params.Source = Source;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.SelectAndSetProjectileStream
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDSLogChannelHandle*                         DSLogger                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AnimNotifyState_ActivateProjectileStream_C::SelectAndSetProjectileStream(class AActor* OwnerActor, bool Enable, class UDSLogChannelHandle* DSLogger, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.SelectAndSetProjectileStream");
		
		UBP_AnimNotifyState_ActivateProjectileStream_C_SelectAndSetProjectileStream_Params params {};
		params.OwnerActor = OwnerActor;
		params.Enable = Enable;
		params.DSLogger = DSLogger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.GetProcessedFireModeIdentifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ProcessedFireModeIdentifier                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AnimNotifyState_ActivateProjectileStream_C::GetProcessedFireModeIdentifier(class AActor* Actor, class FName* ProcessedFireModeIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.GetProcessedFireModeIdentifier");
		
		UBP_AnimNotifyState_ActivateProjectileStream_C_GetProcessedFireModeIdentifier_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProcessedFireModeIdentifier != nullptr)
			*ProcessedFireModeIdentifier = params.ProcessedFireModeIdentifier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.DetermineDistanceVariation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KB                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDSLogChannelHandle*                         DSLogger                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AnimNotifyState_ActivateProjectileStream_C::DetermineDistanceVariation(class UKnowledgeBaseComponent* KB, class UDSLogChannelHandle* DSLogger, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.DetermineDistanceVariation");
		
		UBP_AnimNotifyState_ActivateProjectileStream_C_DetermineDistanceVariation_Params params {};
		params.KB = KB;
		params.DSLogger = DSLogger;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.SetProjectileStream
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URangedWeaponModulesComponent*               RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AnimNotifyState_ActivateProjectileStream_C::SetProjectileStream(bool Enable, class AActor* Actor, class URangedWeaponModulesComponent* RangedWeaponComponent, bool* Succeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.SetProjectileStream");
		
		UBP_AnimNotifyState_ActivateProjectileStream_C_SetProjectileStream_Params params {};
		params.Enable = Enable;
		params.Actor = Actor;
		params.RangedWeaponComponent = RangedWeaponComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Succeeded != nullptr)
			*Succeeded = params.Succeeded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.Received_NotifyEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AnimNotifyState_ActivateProjectileStream_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.Received_NotifyEnd");
		
		UBP_AnimNotifyState_ActivateProjectileStream_C_Received_NotifyEnd_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.Received_NotifyBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AnimNotifyState_ActivateProjectileStream_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C.Received_NotifyBegin");
		
		UBP_AnimNotifyState_ActivateProjectileStream_C_Received_NotifyBegin_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.TotalDuration = TotalDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AnimNotifyState_ActivateProjectileStream_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimNotifyState_ActivateProjectileStream_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_ActivateProjectileStream.BP_AnimNotifyState_ActivateProjectileStream_C");
		return ptr;
	}

}


