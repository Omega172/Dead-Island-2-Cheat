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
	 * 		Name   -> Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.FetchVariables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             MeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPC_AnimationCoordinator_AI_C*              AnimationComponent                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      CombatTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AnimNotifyState_TorsoTwistPeriod_AI_C::FetchVariables(class UActorComponent* MeshComponent, class UBPC_AnimationCoordinator_AI_C** AnimationComponent, class AActor** CombatTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.FetchVariables");
		
		UBP_AnimNotifyState_TorsoTwistPeriod_AI_C_FetchVariables_Params params {};
		params.MeshComponent = MeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationComponent != nullptr)
			*AnimationComponent = params.AnimationComponent;
		if (CombatTarget != nullptr)
			*CombatTarget = params.CombatTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.Received_NotifyEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AnimNotifyState_TorsoTwistPeriod_AI_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.Received_NotifyEnd");
		
		UBP_AnimNotifyState_TorsoTwistPeriod_AI_C_Received_NotifyEnd_Params params {};
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
	 * 		Name   -> Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.Received_NotifyBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AnimNotifyState_TorsoTwistPeriod_AI_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.Received_NotifyBegin");
		
		UBP_AnimNotifyState_TorsoTwistPeriod_AI_C_Received_NotifyBegin_Params params {};
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
	 * 		Name   -> Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.GetNotifyName
	 * 		Flags  -> ()
	 */
	class FString UBP_AnimNotifyState_TorsoTwistPeriod_AI_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C.GetNotifyName");
		
		UBP_AnimNotifyState_TorsoTwistPeriod_AI_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AnimNotifyState_TorsoTwistPeriod_AI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AnimNotifyState_TorsoTwistPeriod_AI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_TorsoTwistPeriod_AI.BP_AnimNotifyState_TorsoTwistPeriod_AI_C");
		return ptr;
	}

}


