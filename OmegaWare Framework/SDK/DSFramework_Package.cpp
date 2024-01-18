﻿/**
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
	 * 		Name   -> PredefinedFunction UCustomActionParamsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomActionParamsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CustomActionParamsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.SyncReplicatedState
	 * 		Flags  -> ()
	 */
	void UCharacterAction::SyncReplicatedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.SyncReplicatedState");
		
		UCharacterAction_SyncReplicatedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.SetWantsTickBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::SetWantsTickBP(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.SetWantsTickBP");
		
		UCharacterAction_SetWantsTickBP_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.ResolveQueueTime
	 * 		Flags  -> ()
	 */
	float UCharacterAction::ResolveQueueTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.ResolveQueueTime");
		
		UCharacterAction_ResolveQueueTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.Resolve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterActionResolveParams               Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ECharacterActionResolution                         OutResolution                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutQueuedTimeout                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::Resolve(const struct FCharacterActionResolveParams& Params, ECharacterActionResolution* OutResolution, float* OutQueuedTimeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.Resolve");
		
		UCharacterAction_Resolve_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResolution != nullptr)
			*OutResolution = params.OutResolution;
		if (OutQueuedTimeout != nullptr)
			*OutQueuedTimeout = params.OutQueuedTimeout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.OnTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::OnTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.OnTick");
		
		UCharacterAction_OnTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.OnResolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnResolvedParams            Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::OnResolved(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.OnResolved");
		
		UCharacterAction_OnResolved_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.OnReplicatedStateUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCustomActionParamsBase*                     ReplicatedState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::OnReplicatedStateUpdated(const struct FGuid& RequestId, class UCustomActionParamsBase* ReplicatedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.OnReplicatedStateUpdated");
		
		UCharacterAction_OnReplicatedStateUpdated_Params params {};
		params.RequestId = RequestId;
		params.ReplicatedState = ReplicatedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.OnEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnEndParams                 Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.OnEnd");
		
		UCharacterAction_OnEnd_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.OnConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomActionParamsBase*                     InitParams                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::OnConstruct(class UCustomActionParamsBase* InitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.OnConstruct");
		
		UCharacterAction_OnConstruct_Params params {};
		params.InitParams = InitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.OnBeginEarly
	 * 		Flags  -> ()
	 */
	bool UCharacterAction::OnBeginEarly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.OnBeginEarly");
		
		UCharacterAction_OnBeginEarly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.OnBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnBeginParams               Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.OnBegin");
		
		UCharacterAction_OnBegin_Params params {};
		params.RequestId = RequestId;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.IsActive
	 * 		Flags  -> ()
	 */
	bool UCharacterAction::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.IsActive");
		
		UCharacterAction_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.HasActionAuthority
	 * 		Flags  -> ()
	 */
	bool UCharacterAction::HasActionAuthority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.HasActionAuthority");
		
		UCharacterAction_HasActionAuthority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.GetOwner
	 * 		Flags  -> ()
	 */
	class AActor* UCharacterAction::GetOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.GetOwner");
		
		UCharacterAction_GetOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.GetNetworkRunningTime
	 * 		Flags  -> ()
	 */
	float UCharacterAction::GetNetworkRunningTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.GetNetworkRunningTime");
		
		UCharacterAction_GetNetworkRunningTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.GetElapsedTime
	 * 		Flags  -> ()
	 */
	float UCharacterAction::GetElapsedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.GetElapsedTime");
		
		UCharacterAction_GetElapsedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.GatherPrerequisites
	 * 		Flags  -> ()
	 */
	bool UCharacterAction::GatherPrerequisites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.GatherPrerequisites");
		
		UCharacterAction_GatherPrerequisites_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.EndRequestedBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       QueuedActionId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::EndRequestedBy(const struct FGuid& QueuedActionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.EndRequestedBy");
		
		UCharacterAction_EndRequestedBy_Params params {};
		params.QueuedActionId = QueuedActionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.EndAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterActionEndReason                          Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::EndAction(ECharacterActionEndReason Reason, float DelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.EndAction");
		
		UCharacterAction_EndAction_Params params {};
		params.Reason = Reason;
		params.DelayTime = DelayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterAction.CustomSignal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SignalName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterAction::CustomSignal(const class FName& SignalName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterAction.CustomSignal");
		
		UCharacterAction_CustomSignal_Params params {};
		params.SignalName = SignalName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailFeature_ExternalTickScheduler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailFeature_ExternalTickScheduler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AILevelOfDetailFeature_ExternalTickScheduler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIMovementComponent.RemoveMoveTargetEventDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSAIMovementComponent::RemoveMoveTargetEventDelegate(const class FName& Name, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIMovementComponent.RemoveMoveTargetEventDelegate");
		
		UDSAIMovementComponent_RemoveMoveTargetEventDelegate_Params params {};
		params.Name = Name;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIMovementComponent.RemoveMoveTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSAIMovementComponent::RemoveMoveTarget(const class FName& Name, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIMovementComponent.RemoveMoveTarget");
		
		UDSAIMovementComponent_RemoveMoveTarget_Params params {};
		params.Name = Name;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIMovementComponent.OnMovementCompletedFromController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIRequestID                                RequestId                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPathFollowingResult                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSAIMovementComponent::OnMovementCompletedFromController(const struct FAIRequestID& RequestId, EPathFollowingResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIMovementComponent.OnMovementCompletedFromController");
		
		UDSAIMovementComponent_OnMovementCompletedFromController_Params params {};
		params.RequestId = RequestId;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIMovementComponent.GetMoveTargetParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMoveTargetParams UDSAIMovementComponent::GetMoveTargetParams(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIMovementComponent.GetMoveTargetParams");
		
		UDSAIMovementComponent_GetMoveTargetParams_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIMovementComponent.GetDistanceToCurrentMoveTarget
	 * 		Flags  -> ()
	 */
	float UDSAIMovementComponent::GetDistanceToCurrentMoveTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIMovementComponent.GetDistanceToCurrentMoveTarget");
		
		UDSAIMovementComponent_GetDistanceToCurrentMoveTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIMovementComponent.GetCurrentMoveTargetLocation
	 * 		Flags  -> ()
	 */
	struct FVector UDSAIMovementComponent::GetCurrentMoveTargetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIMovementComponent.GetCurrentMoveTargetLocation");
		
		UDSAIMovementComponent_GetCurrentMoveTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIMovementComponent.AddMoveTargetEventDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSAIMovementComponent::AddMoveTargetEventDelegate(const class FName& Name, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIMovementComponent.AddMoveTargetEventDelegate");
		
		UDSAIMovementComponent_AddMoveTargetEventDelegate_Params params {};
		params.Name = Name;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIMovementComponent.AddMoveTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMoveTarget                                 MoveTarget                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseDefaultParams                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSAIMovementComponent::AddMoveTarget(const class FName& Name, const struct FMoveTarget& MoveTarget, bool bUseDefaultParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIMovementComponent.AddMoveTarget");
		
		UDSAIMovementComponent_AddMoveTarget_Params params {};
		params.Name = Name;
		params.MoveTarget = MoveTarget;
		params.bUseDefaultParams = bUseDefaultParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSAIMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSAIMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSAIMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemArchetype.GetUINameCaps
	 * 		Flags  -> ()
	 */
	class FText UItemArchetype::GetUINameCaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemArchetype.GetUINameCaps");
		
		UItemArchetype_GetUINameCaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemArchetype.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemArchetype::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemArchetype");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemInstanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemInstanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemInstanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.UpdateActorVisualsToReflectItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EItemVisualDetail                                  Detail                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AItemActor::UpdateActorVisualsToReflectItem(class AActor* Actor, EItemVisualDetail Detail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.UpdateActorVisualsToReflectItem");
		
		AItemActor_UpdateActorVisualsToReflectItem_Params params {};
		params.Actor = Actor;
		params.Detail = Detail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.ShouldHideInCounters
	 * 		Flags  -> ()
	 */
	bool AItemActor::ShouldHideInCounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.ShouldHideInCounters");
		
		AItemActor_ShouldHideInCounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.SetActorVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EItemVisualDetail                                  Detail                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AItemActor::SetActorVisuals(class AActor* Actor, EItemVisualDetail Detail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.SetActorVisuals");
		
		AItemActor_SetActorVisuals_Params params {};
		params.Actor = Actor;
		params.Detail = Detail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.OnTickReasonsCleared
	 * 		Flags  -> ()
	 */
	void AItemActor::OnTickReasonsCleared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.OnTickReasonsCleared");
		
		AItemActor_OnTickReasonsCleared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.OnTickReasonsActivated
	 * 		Flags  -> ()
	 */
	void AItemActor::OnTickReasonsActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.OnTickReasonsActivated");
		
		AItemActor_OnTickReasonsActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.OnRep_UIDataChanged
	 * 		Flags  -> ()
	 */
	void AItemActor::OnRep_UIDataChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.OnRep_UIDataChanged");
		
		AItemActor_OnRep_UIDataChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.OnRep_OwnerChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         PrevInventory                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AItemActor::OnRep_OwnerChanged(class UInventoryComponent* PrevInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.OnRep_OwnerChanged");
		
		AItemActor_OnRep_OwnerChanged_Params params {};
		params.PrevInventory = PrevInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.OnRep_ItemInstanceData
	 * 		Flags  -> ()
	 */
	void AItemActor::OnRep_ItemInstanceData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.OnRep_ItemInstanceData");
		
		AItemActor_OnRep_ItemInstanceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.OnRep_ItemArchetypePackage
	 * 		Flags  -> ()
	 */
	void AItemActor::OnRep_ItemArchetypePackage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.OnRep_ItemArchetypePackage");
		
		AItemActor_OnRep_ItemArchetypePackage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.OnRep_ItemArchetype
	 * 		Flags  -> ()
	 */
	void AItemActor::OnRep_ItemArchetype()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.OnRep_ItemArchetype");
		
		AItemActor_OnRep_ItemArchetype_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.K2_SetActorVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EItemVisualDetail                                  Detail                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AItemActor::K2_SetActorVisuals(class AActor* Actor, EItemVisualDetail Detail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.K2_SetActorVisuals");
		
		AItemActor_K2_SetActorVisuals_Params params {};
		params.Actor = Actor;
		params.Detail = Detail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.K2_OnInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ArchetypeIn                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItemInstanceData*                           InstanceDataIn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AItemActor::K2_OnInitialize(class UItemArchetype* ArchetypeIn, class UItemInstanceData* InstanceDataIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.K2_OnInitialize");
		
		AItemActor_K2_OnInitialize_Params params {};
		params.ArchetypeIn = ArchetypeIn;
		params.InstanceDataIn = InstanceDataIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.IsSellable
	 * 		Flags  -> ()
	 */
	bool AItemActor::IsSellable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.IsSellable");
		
		AItemActor_IsSellable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.IsScrappable
	 * 		Flags  -> ()
	 */
	bool AItemActor::IsScrappable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.IsScrappable");
		
		AItemActor_IsScrappable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.IsReady
	 * 		Flags  -> ()
	 */
	bool AItemActor::IsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.IsReady");
		
		AItemActor_IsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.IsFreeInShops
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ForPlayer                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AItemActor::IsFreeInShops(class APlayerController* ForPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.IsFreeInShops");
		
		AItemActor_IsFreeInShops_Params params {};
		params.ForPlayer = ForPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.IsDroppable
	 * 		Flags  -> ()
	 */
	bool AItemActor::IsDroppable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.IsDroppable");
		
		AItemActor_IsDroppable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetUISubCategory
	 * 		Flags  -> ()
	 */
	class FName AItemActor::GetUISubCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetUISubCategory");
		
		AItemActor_GetUISubCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetUIStats
	 * 		Flags  -> ()
	 */
	TMap<class FName, struct FItemStat> AItemActor::GetUIStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetUIStats");
		
		AItemActor_GetUIStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetUISourceName
	 * 		Flags  -> ()
	 */
	class FString AItemActor::GetUISourceName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetUISourceName");
		
		AItemActor_GetUISourceName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetUINameCaps
	 * 		Flags  -> ()
	 */
	class FText AItemActor::GetUINameCaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetUINameCaps");
		
		AItemActor_GetUINameCaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetUIName
	 * 		Flags  -> ()
	 */
	class FText AItemActor::GetUIName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetUIName");
		
		AItemActor_GetUIName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetUIIconTexture
	 * 		Flags  -> ()
	 */
	class UTexture2D* AItemActor::GetUIIconTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetUIIconTexture");
		
		AItemActor_GetUIIconTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetUIIconLabel
	 * 		Flags  -> ()
	 */
	class FString AItemActor::GetUIIconLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetUIIconLabel");
		
		AItemActor_GetUIIconLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetUIIconImage
	 * 		Flags  -> ()
	 */
	struct FSoftObjectPath AItemActor::GetUIIconImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetUIIconImage");
		
		AItemActor_GetUIIconImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetUIDescription
	 * 		Flags  -> ()
	 */
	class FText AItemActor::GetUIDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetUIDescription");
		
		AItemActor_GetUIDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetMaxCashValueForUpgrades
	 * 		Flags  -> ()
	 */
	int32_t AItemActor::GetMaxCashValueForUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetMaxCashValueForUpgrades");
		
		AItemActor_GetMaxCashValueForUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetMaxCashValue
	 * 		Flags  -> ()
	 */
	int32_t AItemActor::GetMaxCashValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetMaxCashValue");
		
		AItemActor_GetMaxCashValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetItemUIComponent
	 * 		Flags  -> ()
	 */
	class UItemUIComponent* AItemActor::GetItemUIComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetItemUIComponent");
		
		AItemActor_GetItemUIComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetInventoryOwner
	 * 		Flags  -> ()
	 */
	class AActor* AItemActor::GetInventoryOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetInventoryOwner");
		
		AItemActor_GetInventoryOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemActor.GetCurrentCashValue
	 * 		Flags  -> ()
	 */
	int32_t AItemActor::GetCurrentCashValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemActor.GetCurrentCashValue");
		
		AItemActor_GetCurrentCashValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AItemActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AItemActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSGFxMoviePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSGFxMoviePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSGFxMoviePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.EquippableComponent.OnUnequippableReasonsCleared
	 * 		Flags  -> ()
	 */
	void UEquippableComponent::OnUnequippableReasonsCleared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.EquippableComponent.OnUnequippableReasonsCleared");
		
		UEquippableComponent_OnUnequippableReasonsCleared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.EquippableComponent.OnUnequippableReasonsActive
	 * 		Flags  -> ()
	 */
	void UEquippableComponent::OnUnequippableReasonsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.EquippableComponent.OnUnequippableReasonsActive");
		
		UEquippableComponent_OnUnequippableReasonsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.EquippableComponent.OnRemovalFromPaperDollSlotCompleted
	 * 		Flags  -> ()
	 */
	void UEquippableComponent::OnRemovalFromPaperDollSlotCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.EquippableComponent.OnRemovalFromPaperDollSlotCompleted");
		
		UEquippableComponent_OnRemovalFromPaperDollSlotCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.EquippableComponent.OnIsLocalPlayerFactChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     InKnowledgeBaseComponent                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EKnowledgeBaseFactChangeType                       FactChangeType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippableComponent::OnIsLocalPlayerFactChanged(const struct FKnowledgeBaseFactKey& FactKey, class UKnowledgeBaseComponent* InKnowledgeBaseComponent, EKnowledgeBaseFactChangeType FactChangeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.EquippableComponent.OnIsLocalPlayerFactChanged");
		
		UEquippableComponent_OnIsLocalPlayerFactChanged_Params params {};
		params.FactKey = FactKey;
		params.InKnowledgeBaseComponent = InKnowledgeBaseComponent;
		params.FactChangeType = FactChangeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.EquippableComponent.IsAssignedToPaperDollSlot
	 * 		Flags  -> ()
	 */
	bool UEquippableComponent::IsAssignedToPaperDollSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.EquippableComponent.IsAssignedToPaperDollSlot");
		
		UEquippableComponent_IsAssignedToPaperDollSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.EquippableComponent.GetOwningItem
	 * 		Flags  -> ()
	 */
	class AItemActor* UEquippableComponent::GetOwningItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.EquippableComponent.GetOwningItem");
		
		UEquippableComponent_GetOwningItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.EquippableComponent.GetCurrentUser
	 * 		Flags  -> ()
	 */
	class AActor* UEquippableComponent::GetCurrentUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.EquippableComponent.GetCurrentUser");
		
		UEquippableComponent_GetCurrentUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.EquippableComponent.ClientAddShortcutItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemAssignmentShortcutGroupInstance*        InShortcutGroup                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InShortcutGroupIndex                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquippableComponent::ClientAddShortcutItem(class UItemAssignmentShortcutGroupInstance* InShortcutGroup, int32_t InShortcutGroupIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.EquippableComponent.ClientAddShortcutItem");
		
		UEquippableComponent_ClientAddShortcutItem_Params params {};
		params.InShortcutGroup = InShortcutGroup;
		params.InShortcutGroupIndex = InShortcutGroupIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquippableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquippableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.EquippableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseChallengeResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseChallengeResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.BaseChallengeResponse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGameInstance.GetExclusiveUser
	 * 		Flags  -> ()
	 */
	class UExclusiveUser* UDSGameInstance::GetExclusiveUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGameInstance.GetExclusiveUser");
		
		UDSGameInstance_GetExclusiveUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.UpdateComponentHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADSCharacter::UpdateComponentHidden(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.UpdateComponentHidden");
		
		ADSCharacter_UpdateComponentHidden_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.SetPerspective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPerspective                                       NewPerspective                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ADSCharacter::SetPerspective(EPerspective NewPerspective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.SetPerspective");
		
		ADSCharacter_SetPerspective_Params params {};
		params.NewPerspective = NewPerspective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.SetCharacterLocationWS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterLocationType                             LocationType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSweep                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETeleportType                                      Teleport                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADSCharacter::SetCharacterLocationWS(ECharacterLocationType LocationType, const struct FVector& NewLocation, bool bSweep, ETeleportType Teleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.SetCharacterLocationWS");
		
		ADSCharacter_SetCharacterLocationWS_Params params {};
		params.LocationType = LocationType;
		params.NewLocation = NewLocation;
		params.bSweep = bSweep;
		params.Teleport = Teleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.SetCharacterLocationLS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterLocationType                             LocationType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSweep                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETeleportType                                      Teleport                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADSCharacter::SetCharacterLocationLS(ECharacterLocationType LocationType, const struct FVector& NewLocation, bool bSweep, ETeleportType Teleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.SetCharacterLocationLS");
		
		ADSCharacter_SetCharacterLocationLS_Params params {};
		params.LocationType = LocationType;
		params.NewLocation = NewLocation;
		params.bSweep = bSweep;
		params.Teleport = Teleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.ServerCheatWalk
	 * 		Flags  -> ()
	 */
	void ADSCharacter::ServerCheatWalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.ServerCheatWalk");
		
		ADSCharacter_ServerCheatWalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.ServerCheatGhost
	 * 		Flags  -> ()
	 */
	void ADSCharacter::ServerCheatGhost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.ServerCheatGhost");
		
		ADSCharacter_ServerCheatGhost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.ServerCheatFly
	 * 		Flags  -> ()
	 */
	void ADSCharacter::ServerCheatFly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.ServerCheatFly");
		
		ADSCharacter_ServerCheatFly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.IsInAir
	 * 		Flags  -> ()
	 */
	bool ADSCharacter::IsInAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.IsInAir");
		
		ADSCharacter_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.IsControlAuthority
	 * 		Flags  -> ()
	 */
	bool ADSCharacter::IsControlAuthority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.IsControlAuthority");
		
		ADSCharacter_IsControlAuthority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.GetVelocityForLocomotion
	 * 		Flags  -> ()
	 */
	struct FVector ADSCharacter::GetVelocityForLocomotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.GetVelocityForLocomotion");
		
		ADSCharacter_GetVelocityForLocomotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.GetDSMesh
	 * 		Flags  -> ()
	 */
	class UDSSkeletalMeshComponent* ADSCharacter::GetDSMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.GetDSMesh");
		
		ADSCharacter_GetDSMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.GetDSCharacterMovement
	 * 		Flags  -> ()
	 */
	class UDSCharacterMovementComponent* ADSCharacter::GetDSCharacterMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.GetDSCharacterMovement");
		
		ADSCharacter_GetDSCharacterMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.GetDSCapsuleComponent
	 * 		Flags  -> ()
	 */
	class UDSCapsuleComponent* ADSCharacter::GetDSCapsuleComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.GetDSCapsuleComponent");
		
		ADSCharacter_GetDSCapsuleComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.GetCurrentAnimInstance
	 * 		Flags  -> ()
	 */
	class UAnimInstance* ADSCharacter::GetCurrentAnimInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.GetCurrentAnimInstance");
		
		ADSCharacter_GetCurrentAnimInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.GetCharacterLocationWS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterLocationType                             LocationType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ADSCharacter::GetCharacterLocationWS(ECharacterLocationType LocationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.GetCharacterLocationWS");
		
		ADSCharacter_GetCharacterLocationWS_Params params {};
		params.LocationType = LocationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacter.GetCharacterLocationLS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterLocationType                             LocationType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ADSCharacter::GetCharacterLocationLS(ECharacterLocationType LocationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacter.GetCharacterLocationLS");
		
		ADSCharacter_GetCharacterLocationLS_Params params {};
		params.LocationType = LocationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADSCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADSCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.UpdateMovementModeRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      NewRequestedMovementMode                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewCustomMovementMode                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCharacterMovementComponent::UpdateMovementModeRequest(const struct FGuid& RequestId, EMovementMode NewRequestedMovementMode, unsigned char NewCustomMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.UpdateMovementModeRequest");
		
		UDSCharacterMovementComponent_UpdateMovementModeRequest_Params params {};
		params.RequestId = RequestId;
		params.NewRequestedMovementMode = NewRequestedMovementMode;
		params.NewCustomMovementMode = NewCustomMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.RemovePushTypeRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCharacterMovementComponent::RemovePushTypeRequest(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.RemovePushTypeRequest");
		
		UDSCharacterMovementComponent_RemovePushTypeRequest_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.RemoveMovementModeRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCharacterMovementComponent::RemoveMovementModeRequest(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.RemoveMovementModeRequest");
		
		UDSCharacterMovementComponent_RemoveMovementModeRequest_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.IsActiveMovementModeRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSCharacterMovementComponent::IsActiveMovementModeRequest(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.IsActiveMovementModeRequest");
		
		UDSCharacterMovementComponent_IsActiveMovementModeRequest_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.InstantDampenExternalVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DampenToFraction                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EExtraVelocityChannel                              Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCharacterMovementComponent::InstantDampenExternalVelocity(float DampenToFraction, EExtraVelocityChannel Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.InstantDampenExternalVelocity");
		
		UDSCharacterMovementComponent_InstantDampenExternalVelocity_Params params {};
		params.DampenToFraction = DampenToFraction;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.GetLastWalkingFeetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOkInvalidResult                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCharacterMovementComponent::GetLastWalkingFeetLocation(struct FVector* Loc, EOkInvalidResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.GetLastWalkingFeetLocation");
		
		UDSCharacterMovementComponent_GetLastWalkingFeetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.GetFilteredCollisionSlowDownScale
	 * 		Flags  -> ()
	 */
	float UDSCharacterMovementComponent::GetFilteredCollisionSlowDownScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.GetFilteredCollisionSlowDownScale");
		
		UDSCharacterMovementComponent_GetFilteredCollisionSlowDownScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.ApplyCollsionSlowDownImpulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Impulse                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCharacterMovementComponent::ApplyCollsionSlowDownImpulse(const struct FHitResult& Hit, class UPrimitiveComponent* OtherComp, const struct FVector& Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.ApplyCollsionSlowDownImpulse");
		
		UDSCharacterMovementComponent_ApplyCollsionSlowDownImpulse_Params params {};
		params.Hit = Hit;
		params.OtherComp = OtherComp;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.AddTargetExternalVelocityImpulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EExtraVelocityChannel                              Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDirectional                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCharacterMovementComponent::AddTargetExternalVelocityImpulse(const struct FVector& TargetVelocity, float Strength, EExtraVelocityChannel Channel, bool bDirectional, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.AddTargetExternalVelocityImpulse");
		
		UDSCharacterMovementComponent_AddTargetExternalVelocityImpulse_Params params {};
		params.TargetVelocity = TargetVelocity;
		params.Strength = Strength;
		params.Channel = Channel;
		params.bDirectional = bDirectional;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.AddPushTypeRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PushType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UDSCharacterMovementComponent::AddPushTypeRequest(const class FName& Reason, const class FName& PushType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.AddPushTypeRequest");
		
		UDSCharacterMovementComponent_AddPushTypeRequest_Params params {};
		params.Reason = Reason;
		params.PushType = PushType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.AddMovementModeRequestWithCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      RequestedMovementMode                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      RequestedCustomMovementMode                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              RequestActiveCallback                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGuid UDSCharacterMovementComponent::AddMovementModeRequestWithCallback(const class FName& Reason, EMovementMode RequestedMovementMode, unsigned char RequestedCustomMovementMode, const class FScriptDelegate& RequestActiveCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.AddMovementModeRequestWithCallback");
		
		UDSCharacterMovementComponent_AddMovementModeRequestWithCallback_Params params {};
		params.Reason = Reason;
		params.RequestedMovementMode = RequestedMovementMode;
		params.RequestedCustomMovementMode = RequestedCustomMovementMode;
		params.RequestActiveCallback = RequestActiveCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.AddMovementModeRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      RequestedMovementMode                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      RequestedCustomMovementMode                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UDSCharacterMovementComponent::AddMovementModeRequest(const class FName& Reason, EMovementMode RequestedMovementMode, unsigned char RequestedCustomMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.AddMovementModeRequest");
		
		UDSCharacterMovementComponent_AddMovementModeRequest_Params params {};
		params.Reason = Reason;
		params.RequestedMovementMode = RequestedMovementMode;
		params.RequestedCustomMovementMode = RequestedCustomMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCharacterMovementComponent.AddExternalVelocityImpulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ExtraVelocity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EExtraVelocityChannel                              Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyIfAuthoritative                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCharacterMovementComponent::AddExternalVelocityImpulse(const struct FVector& ExtraVelocity, EExtraVelocityChannel Channel, bool bOnlyIfAuthoritative)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCharacterMovementComponent.AddExternalVelocityImpulse");
		
		UDSCharacterMovementComponent_AddExternalVelocityImpulse_Params params {};
		params.ExtraVelocity = ExtraVelocity;
		params.Channel = Channel;
		params.bOnlyIfAuthoritative = bOnlyIfAuthoritative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIController.UnregisterPossessionListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Listener                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADSAIController::UnregisterPossessionListener(class UObject* Listener, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIController.UnregisterPossessionListener");
		
		ADSAIController_UnregisterPossessionListener_Params params {};
		params.Listener = Listener;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIController.RemoveHomeArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHomeArea                                   HomeArea                                                   (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADSAIController::RemoveHomeArea(const class FName& Source, const struct FHomeArea& HomeArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIController.RemoveHomeArea");
		
		ADSAIController_RemoveHomeArea_Params params {};
		params.Source = Source;
		params.HomeArea = HomeArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIController.RegisterPossessionListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Listener                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReceiveLatePossess                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADSAIController::RegisterPossessionListener(class UObject* Listener, class AActor* Actor, bool bReceiveLatePossess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIController.RegisterPossessionListener");
		
		ADSAIController_RegisterPossessionListener_Params params {};
		params.Listener = Listener;
		params.Actor = Actor;
		params.bReceiveLatePossess = bReceiveLatePossess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIController.GetHomeAreaAsSpherical
	 * 		Flags  -> ()
	 */
	struct FHomeArea ADSAIController::GetHomeAreaAsSpherical()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIController.GetHomeAreaAsSpherical");
		
		ADSAIController_GetHomeAreaAsSpherical_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSAIController.AddHomeArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHomeArea                                   HomeArea                                                   (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ADSAIController::AddHomeArea(const class FName& Source, const struct FHomeArea& HomeArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSAIController.AddHomeArea");
		
		ADSAIController_AddHomeArea_Params params {};
		params.Source = Source;
		params.HomeArea = HomeArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADSAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADSAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPlayerController.SetMenuMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADSPlayerController::SetMenuMouse(bool bEnable, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPlayerController.SetMenuMouse");
		
		ADSPlayerController_SetMenuMouse_Params params {};
		params.bEnable = bEnable;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPlayerController.OnMenuMouseDisabled
	 * 		Flags  -> ()
	 */
	void ADSPlayerController::OnMenuMouseDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPlayerController.OnMenuMouseDisabled");
		
		ADSPlayerController_OnMenuMouseDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPlayerController.OnMenuMouseActive
	 * 		Flags  -> ()
	 */
	void ADSPlayerController::OnMenuMouseActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPlayerController.OnMenuMouseActive");
		
		ADSPlayerController_OnMenuMouseActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPlayerController.ActionFilterEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputMapperActionFilterDefinition*          ActionFilterDefinition                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADSPlayerController::ActionFilterEnable(class UInputMapperActionFilterDefinition* ActionFilterDefinition, bool bEnable, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPlayerController.ActionFilterEnable");
		
		ADSPlayerController_ActionFilterEnable_Params params {};
		params.ActionFilterDefinition = ActionFilterDefinition;
		params.bEnable = bEnable;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADSPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADSPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeComponent.ServerOnTierCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TierCompleted                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChallengeComponent::ServerOnTierCompleted(const class FName& ChallengeName, int32_t TierCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeComponent.ServerOnTierCompleted");
		
		UChallengeComponent_ServerOnTierCompleted_Params params {};
		params.ChallengeName = ChallengeName;
		params.TierCompleted = TierCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeComponent.OnTierCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TierCompleted                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChallengeComponent::OnTierCompleted(const class FName& ChallengeName, int32_t TierCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeComponent.OnTierCompleted");
		
		UChallengeComponent_OnTierCompleted_Params params {};
		params.ChallengeName = ChallengeName;
		params.TierCompleted = TierCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeComponent.ClientPauseChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChallengeComponent::ClientPauseChallenge(const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeComponent.ClientPauseChallenge");
		
		UChallengeComponent_ClientPauseChallenge_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeComponent.ClientIncrementChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProgressDelta                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChallengeComponent::ClientIncrementChallenge(const class FName& ChallengeName, int32_t ProgressDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeComponent.ClientIncrementChallenge");
		
		UChallengeComponent_ClientIncrementChallenge_Params params {};
		params.ChallengeName = ChallengeName;
		params.ProgressDelta = ProgressDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeComponent.ClientEnableChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChallengeComponent::ClientEnableChallenge(const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeComponent.ClientEnableChallenge");
		
		UChallengeComponent_ClientEnableChallenge_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallengeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ChallengeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSControllerTypeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSControllerTypeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSControllerTypeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnManager.ScheduleActorDespawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DespawnConditionsName                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DespawnReason                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBaseDespawnCallback*                        DespawnCallback                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADespawnManager::ScheduleActorDespawn(class AActor* InActor, const class FName& DespawnConditionsName, const class FString& DespawnReason, class UBaseDespawnCallback* DespawnCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnManager.ScheduleActorDespawn");
		
		ADespawnManager_ScheduleActorDespawn_Params params {};
		params.InActor = InActor;
		params.DespawnConditionsName = DespawnConditionsName;
		params.DespawnReason = DespawnReason;
		params.DespawnCallback = DespawnCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnManager.ResetDespawning
	 * 		Flags  -> ()
	 */
	void ADespawnManager::ResetDespawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnManager.ResetDespawning");
		
		ADespawnManager_ResetDespawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnManager.OnDespawningActorEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADespawnManager::OnDespawningActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnManager.OnDespawningActorEndPlay");
		
		ADespawnManager_OnDespawningActorEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnManager.NetMulticastHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADespawnManager::NetMulticastHide(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnManager.NetMulticastHide");
		
		ADespawnManager_NetMulticastHide_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnManager.NetMulticastEndExclusiveObservation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           Observer                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADespawnManager::NetMulticastEndExclusiveObservation(class AActor* Actor, class APlayerController* Observer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnManager.NetMulticastEndExclusiveObservation");
		
		ADespawnManager_NetMulticastEndExclusiveObservation_Params params {};
		params.Actor = Actor;
		params.Observer = Observer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnManager.NetMulticastBeginExclusiveObservation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           Observer                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AlwaysVisibleAtDistance                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NotVisibleAtDistance                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADespawnManager::NetMulticastBeginExclusiveObservation(class AActor* Actor, class APlayerController* Observer, float AlwaysVisibleAtDistance, float NotVisibleAtDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnManager.NetMulticastBeginExclusiveObservation");
		
		ADespawnManager_NetMulticastBeginExclusiveObservation_Params params {};
		params.Actor = Actor;
		params.Observer = Observer;
		params.AlwaysVisibleAtDistance = AlwaysVisibleAtDistance;
		params.NotVisibleAtDistance = NotVisibleAtDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnManager.InstantlyDespawnAllActors
	 * 		Flags  -> ()
	 */
	void ADespawnManager::InstantlyDespawnAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnManager.InstantlyDespawnAllActors");
		
		ADespawnManager_InstantlyDespawnAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnManager.DelayedRemoveActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBaseDespawnCallback*                        DespawnCallback                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediateHide                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADespawnManager::DelayedRemoveActor(class AActor* Actor, float DelayTime, class UBaseDespawnCallback* DespawnCallback, bool bImmediateHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnManager.DelayedRemoveActor");
		
		ADespawnManager_DelayedRemoveActor_Params params {};
		params.Actor = Actor;
		params.DelayTime = DelayTime;
		params.DespawnCallback = DespawnCallback;
		params.bImmediateHide = bImmediateHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnManager.AbortActorDespawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADespawnManager::AbortActorDespawn(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnManager.AbortActorDespawn");
		
		ADespawnManager_AbortActorDespawn_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADespawnManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADespawnManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DespawnManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFiniteOptionsProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFiniteOptionsProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.FiniteOptionsProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStringFiniteOptionsProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStringFiniteOptionsProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.StringFiniteOptionsProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFiniteOptionMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFiniteOptionMetaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.FiniteOptionMetaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADSGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADSGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGameViewportClient.AddExternalDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSGameViewportClient::AddExternalDisplayInfo(const class FString& InText, const struct FLinearColor& Colour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGameViewportClient.AddExternalDisplayInfo");
		
		UDSGameViewportClient_AddExternalDisplayInfo_Params params {};
		params.InText = InText;
		params.Colour = Colour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSGameViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSGameViewportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSGameViewportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSInputBindingManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSInputBindingManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSInputBindingManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSInputProfileManagerComponent.PushInputContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InContext                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSInputProfileManagerComponent::PushInputContext(const class FName& InContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSInputProfileManagerComponent.PushInputContext");
		
		UDSInputProfileManagerComponent_PushInputContext_Params params {};
		params.InContext = InContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSInputProfileManagerComponent.PopInputContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InContext                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSInputProfileManagerComponent::PopInputContext(const class FName& InContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSInputProfileManagerComponent.PopInputContext");
		
		UDSInputProfileManagerComponent_PopInputContext_Params params {};
		params.InContext = InContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSInputProfileManagerComponent.OnControlSchemeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlSchemeType                                 InCurrentControlScheme                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlSchemeType                                 LastControlScheme                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSInputProfileManagerComponent::OnControlSchemeChanged(EControlSchemeType InCurrentControlScheme, EControlSchemeType LastControlScheme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSInputProfileManagerComponent.OnControlSchemeChanged");
		
		UDSInputProfileManagerComponent_OnControlSchemeChanged_Params params {};
		params.InCurrentControlScheme = InCurrentControlScheme;
		params.LastControlScheme = LastControlScheme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSInputProfileManagerComponent.OnControllerTypeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputMapperControllerType                         InCurrentControllerType                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputMapperControllerType                         LastControllerType                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSInputProfileManagerComponent::OnControllerTypeChanged(EInputMapperControllerType InCurrentControllerType, EInputMapperControllerType LastControllerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSInputProfileManagerComponent.OnControllerTypeChanged");
		
		UDSInputProfileManagerComponent_OnControllerTypeChanged_Params params {};
		params.InCurrentControllerType = InCurrentControllerType;
		params.LastControllerType = LastControllerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSInputProfileManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSInputProfileManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSInputProfileManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryActor.GetInventoryComponent
	 * 		Flags  -> ()
	 */
	class UInventoryComponent* AInventoryActor::GetInventoryComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryActor.GetInventoryComponent");
		
		AInventoryActor_GetInventoryComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInventoryActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInventoryActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.InventoryActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.ServerRemoveItemByArchetype
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::ServerRemoveItemByArchetype(class UItemArchetype* ItemArchetype, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.ServerRemoveItemByArchetype");
		
		UInventoryComponent_ServerRemoveItemByArchetype_Params params {};
		params.ItemArchetype = ItemArchetype;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.ServerRemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemActor*                                  Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::ServerRemoveItem(class AItemActor* Item, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.ServerRemoveItem");
		
		UInventoryComponent_ServerRemoveItem_Params params {};
		params.Item = Item;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.ServerAddItemByArchetype
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldDropOnOverflow                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::ServerAddItemByArchetype(class UItemArchetype* ItemArchetype, int32_t Count, bool bShouldDropOnOverflow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.ServerAddItemByArchetype");
		
		UInventoryComponent_ServerAddItemByArchetype_Params params {};
		params.ItemArchetype = ItemArchetype;
		params.Count = Count;
		params.bShouldDropOnOverflow = bShouldDropOnOverflow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.ServerAddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemActor*                                  Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldDropOverflow                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::ServerAddItem(class AItemActor* Item, bool bShouldDropOverflow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.ServerAddItem");
		
		UInventoryComponent_ServerAddItem_Params params {};
		params.Item = Item;
		params.bShouldDropOverflow = bShouldDropOverflow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.OnSlotChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryCategorySlot                      Slot                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UInventoryCategoryContainer*                 Owner                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Delta                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::OnSlotChanged(const struct FInventoryCategorySlot& Slot, class UInventoryCategoryContainer* Owner, int32_t Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.OnSlotChanged");
		
		UInventoryComponent_OnSlotChanged_Params params {};
		params.Slot = Slot;
		params.Owner = Owner;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.OnSlotAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryCategorySlot                      Slot                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UInventoryCategoryContainer*                 Owner                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Delta                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::OnSlotAdded(const struct FInventoryCategorySlot& Slot, class UInventoryCategoryContainer* Owner, int32_t Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.OnSlotAdded");
		
		UInventoryComponent_OnSlotAdded_Params params {};
		params.Slot = Slot;
		params.Owner = Owner;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.HasItemArchetype
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AItemActor* UInventoryComponent::HasItemArchetype(class UItemArchetype* ItemArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.HasItemArchetype");
		
		UInventoryComponent_HasItemArchetype_Params params {};
		params.ItemArchetype = ItemArchetype;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.GetUser
	 * 		Flags  -> ()
	 */
	class AActor* UInventoryComponent::GetUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.GetUser");
		
		UInventoryComponent_GetUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.GetOccupiedSlotsInCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryCategory*                          ItemCategory                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryComponent::GetOccupiedSlotsInCategory(class UInventoryCategory* ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.GetOccupiedSlotsInCategory");
		
		UInventoryComponent_GetOccupiedSlotsInCategory_Params params {};
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.GetItemArchetypeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryComponent::GetItemArchetypeCount(class UItemArchetype* ItemArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.GetItemArchetypeCount");
		
		UInventoryComponent_GetItemArchetypeCount_Params params {};
		params.ItemArchetype = ItemArchetype;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.GetCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CategoryName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInventoryCategoryContainer* UInventoryComponent::GetCategory(const class FName& CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.GetCategory");
		
		UInventoryComponent_GetCategory_Params params {};
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.GetAvailableSlotsInCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryCategory*                          ItemCategory                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryComponent::GetAvailableSlotsInCategory(class UInventoryCategory* ItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.GetAvailableSlotsInCategory");
		
		UInventoryComponent_GetAvailableSlotsInCategory_Params params {};
		params.ItemCategory = ItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryComponent.ClientInventoryUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FClientInventoryUpdatedItem>         ReceivedItems                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::ClientInventoryUpdated(TArray<struct FClientInventoryUpdatedItem> ReceivedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryComponent.ClientInventoryUpdated");
		
		UInventoryComponent_ClientInventoryUpdated_Params params {};
		params.ReceivedItems = ReceivedItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.InventoryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemAssignmentShortcutsPersistentData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemAssignmentShortcutsPersistentData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemAssignmentShortcutsPersistentData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemUIComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemUIComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemUIComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSLocalPlayer.OnControlSchemeUsingMouseChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUsingMouse                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSLocalPlayer::OnControlSchemeUsingMouseChanged(bool bUsingMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSLocalPlayer.OnControlSchemeUsingMouseChanged");
		
		UDSLocalPlayer_OnControlSchemeUsingMouseChanged_Params params {};
		params.bUsingMouse = bUsingMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryCategoryContainer.IsRemainingCapacityForItemArchetype
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryCategoryContainer::IsRemainingCapacityForItemArchetype(class UItemArchetype* ItemArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryCategoryContainer.IsRemainingCapacityForItemArchetype");
		
		UInventoryCategoryContainer_IsRemainingCapacityForItemArchetype_Params params {};
		params.ItemArchetype = ItemArchetype;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryCategoryContainer.GetSlots
	 * 		Flags  -> ()
	 */
	TArray<struct FInventoryCategorySlot> UInventoryCategoryContainer::GetSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryCategoryContainer.GetSlots");
		
		UInventoryCategoryContainer_GetSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryCategoryContainer.GetRemainingCapacityForItemArchetype
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryCategoryContainer::GetRemainingCapacityForItemArchetype(class UItemArchetype* ItemArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryCategoryContainer.GetRemainingCapacityForItemArchetype");
		
		UInventoryCategoryContainer_GetRemainingCapacityForItemArchetype_Params params {};
		params.ItemArchetype = ItemArchetype;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.InventoryCategoryContainer.GetNumValidItems
	 * 		Flags  -> ()
	 */
	int32_t UInventoryCategoryContainer::GetNumValidItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.InventoryCategoryContainer.GetNumValidItems");
		
		UInventoryCategoryContainer_GetNumValidItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryCategoryContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryCategoryContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.InventoryCategoryContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ObjectDespawnManagerNotifier.OnActorFellOutOfWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectDespawnManagerNotifier::OnActorFellOutOfWorld(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ObjectDespawnManagerNotifier.OnActorFellOutOfWorld");
		
		UObjectDespawnManagerNotifier_OnActorFellOutOfWorld_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectDespawnManagerNotifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectDespawnManagerNotifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ObjectDespawnManagerNotifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionHandlerProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionHandlerProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionHandlerProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionHandlerProxyCulture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionHandlerProxyCulture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionHandlerProxyCulture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionHandlerProxy_ConsoleVariable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionHandlerProxy_ConsoleVariable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionHandlerProxy_ConsoleVariable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionHandlerProxyTelemetry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionHandlerProxyTelemetry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionHandlerProxyTelemetry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.RemoveItemFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperDollComponent::RemoveItemFrom(const class FName& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.RemoveItemFrom");
		
		UPaperDollComponent_RemoveItemFrom_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.OnRep_PaperDollState
	 * 		Flags  -> ()
	 */
	void UPaperDollComponent::OnRep_PaperDollState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.OnRep_PaperDollState");
		
		UPaperDollComponent_OnRep_PaperDollState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.OnOwnerPlayerCharacterUnpossessed
	 * 		Flags  -> ()
	 */
	void UPaperDollComponent::OnOwnerPlayerCharacterUnpossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.OnOwnerPlayerCharacterUnpossessed");
		
		UPaperDollComponent_OnOwnerPlayerCharacterUnpossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.OnOwnerPlayerCharacterPossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperDollComponent::OnOwnerPlayerCharacterPossessed(class AController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.OnOwnerPlayerCharacterPossessed");
		
		UPaperDollComponent_OnOwnerPlayerCharacterPossessed_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.GetSlotNameContainingItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemActor*                                  EquippableItem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UPaperDollComponent::GetSlotNameContainingItem(class AItemActor* EquippableItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.GetSlotNameContainingItem");
		
		UPaperDollComponent_GetSlotNameContainingItem_Params params {};
		params.EquippableItem = EquippableItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.GetSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPaperDollSlot* UPaperDollComponent::GetSlot(const class FName& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.GetSlot");
		
		UPaperDollComponent_GetSlot_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.GetItemPendingOrAssignedToSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AItemActor* UPaperDollComponent::GetItemPendingOrAssignedToSlot(const class FName& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.GetItemPendingOrAssignedToSlot");
		
		UPaperDollComponent_GetItemPendingOrAssignedToSlot_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.GetItemAssignmentShortcutGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ShortcutGroupName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UItemAssignmentShortcutGroupInstance* UPaperDollComponent::GetItemAssignmentShortcutGroup(const class FName& ShortcutGroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.GetItemAssignmentShortcutGroup");
		
		UPaperDollComponent_GetItemAssignmentShortcutGroup_Params params {};
		params.ShortcutGroupName = ShortcutGroupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.GetItemAssignedToSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AItemActor* UPaperDollComponent::GetItemAssignedToSlot(const class FName& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.GetItemAssignedToSlot");
		
		UPaperDollComponent_GetItemAssignedToSlot_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.GetEquippableAssignedToSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEquippableComponent* UPaperDollComponent::GetEquippableAssignedToSlot(const class FName& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.GetEquippableAssignedToSlot");
		
		UPaperDollComponent_GetEquippableAssignedToSlot_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.DeactivateSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperDollComponent::DeactivateSlot(const class FName& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.DeactivateSlot");
		
		UPaperDollComponent_DeactivateSlot_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.AssignItemTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEquippableComponent*                        Equippable                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperDollComponent::AssignItemTo(const class FName& SlotName, class UEquippableComponent* Equippable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.AssignItemTo");
		
		UPaperDollComponent_AssignItemTo_Params params {};
		params.SlotName = SlotName;
		params.Equippable = Equippable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollComponent.ActivateSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperDollComponent::ActivateSlot(const class FName& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollComponent.ActivateSlot");
		
		UPaperDollComponent_ActivateSlot_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperDollComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperDollComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PaperDollComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.StarerComponent.ServerStopStaring
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStareeComponent*                            StaringActor                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStarerComponent::ServerStopStaring(class UStareeComponent* StaringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.StarerComponent.ServerStopStaring");
		
		UStarerComponent_ServerStopStaring_Params params {};
		params.StaringActor = StaringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.StarerComponent.ServerStartStaring
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStareeComponent*                            StaringActor                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStarerComponent::ServerStartStaring(class UStareeComponent* StaringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.StarerComponent.ServerStartStaring");
		
		UStarerComponent_ServerStartStaring_Params params {};
		params.StaringActor = StaringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStarerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStarerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.StarerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPlayerState.OnRep_PaperDollState
	 * 		Flags  -> ()
	 */
	void ADSPlayerState::OnRep_PaperDollState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPlayerState.OnRep_PaperDollState");
		
		ADSPlayerState_OnRep_PaperDollState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPlayerState.OnRep_InventoryActor
	 * 		Flags  -> ()
	 */
	void ADSPlayerState::OnRep_InventoryActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPlayerState.OnRep_InventoryActor");
		
		ADSPlayerState_OnRep_InventoryActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPlayerState.GetInventoryActor
	 * 		Flags  -> ()
	 */
	class AInventoryActor* ADSPlayerState::GetInventoryActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPlayerState.GetInventoryActor");
		
		ADSPlayerState_GetInventoryActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPlayerState.GetInventory
	 * 		Flags  -> ()
	 */
	class UInventoryComponent* ADSPlayerState::GetInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPlayerState.GetInventory");
		
		ADSPlayerState_GetInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPlayerState.BlueprintOnRep_InventoryActor
	 * 		Flags  -> ()
	 */
	void ADSPlayerState::BlueprintOnRep_InventoryActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPlayerState.BlueprintOnRep_InventoryActor");
		
		ADSPlayerState_BlueprintOnRep_InventoryActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADSPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADSPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPresentationProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPresentationProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PresentationProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.StareeComponent.RemoveDisableReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DisableReason                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStareeComponent::RemoveDisableReason(const class FName& DisableReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.StareeComponent.RemoveDisableReason");
		
		UStareeComponent_RemoveDisableReason_Params params {};
		params.DisableReason = DisableReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.StareeComponent.OnCooldownComplete
	 * 		Flags  -> ()
	 */
	void UStareeComponent::OnCooldownComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.StareeComponent.OnCooldownComplete");
		
		UStareeComponent_OnCooldownComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.StareeComponent.IsWithinBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     PlayerLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UStareeComponent::IsWithinBounds(const struct FVector& PlayerLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.StareeComponent.IsWithinBounds");
		
		UStareeComponent_IsWithinBounds_Params params {};
		params.PlayerLocation = PlayerLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.StareeComponent.AddDisableReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DisableReason                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStareeComponent::AddDisableReason(const class FName& DisableReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.StareeComponent.AddDisableReason");
		
		UStareeComponent_AddDisableReason_Params params {};
		params.DisableReason = DisableReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStareeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStareeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.StareeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStareSystemManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStareSystemManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.StareSystemManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSSubtitlesManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSSubtitlesManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSSubtitlesManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADSWorldSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADSWorldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSWorldSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.BaseChallengeDataAsset.GetTierThreshold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UBaseChallengeDataAsset::GetTierThreshold(int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.BaseChallengeDataAsset.GetTierThreshold");
		
		UBaseChallengeDataAsset_GetTierThreshold_Params params {};
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.BaseChallengeDataAsset.GetTierForProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UBaseChallengeDataAsset::GetTierForProgress(int32_t Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.BaseChallengeDataAsset.GetTierForProgress");
		
		UBaseChallengeDataAsset_GetTierForProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.BaseChallengeDataAsset.GetTierCompletedForProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UBaseChallengeDataAsset::GetTierCompletedForProgress(int32_t Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.BaseChallengeDataAsset.GetTierCompletedForProgress");
		
		UBaseChallengeDataAsset_GetTierCompletedForProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.BaseChallengeDataAsset.GetNumTiers
	 * 		Flags  -> ()
	 */
	int32_t UBaseChallengeDataAsset::GetNumTiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.BaseChallengeDataAsset.GetNumTiers");
		
		UBaseChallengeDataAsset_GetNumTiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.BaseChallengeDataAsset.GetCompletionThreshold
	 * 		Flags  -> ()
	 */
	int32_t UBaseChallengeDataAsset::GetCompletionThreshold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.BaseChallengeDataAsset.GetCompletionThreshold");
		
		UBaseChallengeDataAsset_GetCompletionThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseChallengeDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseChallengeDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.BaseChallengeDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.RemoveChallengeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChallengeSetDataAsset*                      ChallengeSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChallengeManager::RemoveChallengeSet(class UChallengeSetDataAsset* ChallengeSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.RemoveChallengeSet");
		
		AChallengeManager_RemoveChallengeSet_Params params {};
		params.ChallengeSet = ChallengeSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.PauseChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADSPlayerController*                         Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChallengeManager::PauseChallenge(class ADSPlayerController* Player, const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.PauseChallenge");
		
		AChallengeManager_PauseChallenge_Params params {};
		params.Player = Player;
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.K2_RemoveCallbackForChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENotificationRule                                  NotificationRule                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChallengeManager::K2_RemoveCallbackForChallenge(class UObject* Object, const class FName& ChallengeName, ENotificationRule NotificationRule, const class FName& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.K2_RemoveCallbackForChallenge");
		
		AChallengeManager_K2_RemoveCallbackForChallenge_Params params {};
		params.Object = Object;
		params.ChallengeName = ChallengeName;
		params.NotificationRule = NotificationRule;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.K2_AddCallbackForChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENotificationRule                                  NotificationRule                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChallengeManager::K2_AddCallbackForChallenge(class UObject* Object, const class FName& ChallengeName, ENotificationRule NotificationRule, const class FName& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.K2_AddCallbackForChallenge");
		
		AChallengeManager_K2_AddCallbackForChallenge_Params params {};
		params.Object = Object;
		params.ChallengeName = ChallengeName;
		params.NotificationRule = NotificationRule;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.IncrementChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADSPlayerController*                         TargetedPlayerController                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProgressDelta                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChallengeManager::IncrementChallenge(class ADSPlayerController* TargetedPlayerController, const class FName& ChallengeName, int32_t ProgressDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.IncrementChallenge");
		
		AChallengeManager_IncrementChallenge_Params params {};
		params.TargetedPlayerController = TargetedPlayerController;
		params.ChallengeName = ChallengeName;
		params.ProgressDelta = ProgressDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetCompletedChallengesCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Category                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AChallengeManager::GetCompletedChallengesCount(const class FName& Category, int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetCompletedChallengesCount");
		
		AChallengeManager_GetCompletedChallengesCount_Params params {};
		params.Category = Category;
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeTierProgressFraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutProgress                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutTier                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChallengeManager::GetChallengeTierProgressFraction(const class FName& ChallengeName, float* OutProgress, int32_t* OutTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeTierProgressFraction");
		
		AChallengeManager_GetChallengeTierProgressFraction_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutProgress != nullptr)
			*OutProgress = params.OutProgress;
		if (OutTier != nullptr)
			*OutTier = params.OutTier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeTierProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutProgress                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutTier                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChallengeManager::GetChallengeTierProgress(const class FName& ChallengeName, int32_t* OutProgress, int32_t* OutTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeTierProgress");
		
		AChallengeManager_GetChallengeTierProgress_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutProgress != nullptr)
			*OutProgress = params.OutProgress;
		if (OutTier != nullptr)
			*OutTier = params.OutTier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeThresholdForTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AChallengeManager::GetChallengeThresholdForTier(const class FName& ChallengeName, int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeThresholdForTier");
		
		AChallengeManager_GetChallengeThresholdForTier_Params params {};
		params.ChallengeName = ChallengeName;
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeProgressFractionTowardsTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AChallengeManager::GetChallengeProgressFractionTowardsTier(const class FName& ChallengeName, int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeProgressFractionTowardsTier");
		
		AChallengeManager_GetChallengeProgressFractionTowardsTier_Params params {};
		params.ChallengeName = ChallengeName;
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeProgressFraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AChallengeManager::GetChallengeProgressFraction(const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeProgressFraction");
		
		AChallengeManager_GetChallengeProgressFraction_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AChallengeManager::GetChallengeProgress(const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeProgress");
		
		AChallengeManager_GetChallengeProgress_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseChallengeDataAsset*                     ChallengeData                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName AChallengeManager::GetChallengeName(class UBaseChallengeDataAsset* ChallengeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeName");
		
		AChallengeManager_GetChallengeName_Params params {};
		params.ChallengeData = ChallengeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeDisplayedProgressFractionTowardsTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AChallengeManager::GetChallengeDisplayedProgressFractionTowardsTier(const class FName& ChallengeName, int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeDisplayedProgressFractionTowardsTier");
		
		AChallengeManager_GetChallengeDisplayedProgressFractionTowardsTier_Params params {};
		params.ChallengeName = ChallengeName;
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeDisplayedProgressFraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AChallengeManager::GetChallengeDisplayedProgressFraction(const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeDisplayedProgressFraction");
		
		AChallengeManager_GetChallengeDisplayedProgressFraction_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeDisplayedProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AChallengeManager::GetChallengeDisplayedProgress(const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeDisplayedProgress");
		
		AChallengeManager_GetChallengeDisplayedProgress_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeDeltaProgressTowardsTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AChallengeManager::GetChallengeDeltaProgressTowardsTier(const class FName& ChallengeName, int32_t Tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeDeltaProgressTowardsTier");
		
		AChallengeManager_GetChallengeDeltaProgressTowardsTier_Params params {};
		params.ChallengeName = ChallengeName;
		params.Tier = Tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBaseChallengeDataAsset* AChallengeManager::GetChallengeData(const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeData");
		
		AChallengeManager_GetChallengeData_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallengeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Category                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AChallengeManager::GetChallengeCount(const class FName& Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallengeCount");
		
		AChallengeManager_GetChallengeCount_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.GetChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBaseChallengeRuntimeObject* AChallengeManager::GetChallenge(const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.GetChallenge");
		
		AChallengeManager_GetChallenge_Params params {};
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.CreateAndEnableChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADSPlayerController*                         Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChallengeName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChallengeManager::CreateAndEnableChallenge(class ADSPlayerController* Player, const class FName& ChallengeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.CreateAndEnableChallenge");
		
		AChallengeManager_CreateAndEnableChallenge_Params params {};
		params.Player = Player;
		params.ChallengeName = ChallengeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeManager.AddChallengeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChallengeSetDataAsset*                      ChallengeSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AChallengeManager::AddChallengeSet(class UChallengeSetDataAsset* ChallengeSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeManager.AddChallengeSet");
		
		AChallengeManager_AddChallengeSet_Params params {};
		params.ChallengeSet = ChallengeSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChallengeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChallengeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ChallengeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseChallengeRuntimeObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseChallengeRuntimeObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.BaseChallengeRuntimeObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DemoFilterList.IsFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDemoFilterType                                    InFilterType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDemoFilterList::IsFilterType(EDemoFilterType InFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DemoFilterList.IsFilterType");
		
		UDemoFilterList_IsFilterType_Params params {};
		params.InFilterType = InFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DemoFilterList.GetFilterType
	 * 		Flags  -> ()
	 */
	EDemoFilterType UDemoFilterList::GetFilterType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DemoFilterList.GetFilterType");
		
		UDemoFilterList_GetFilterType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemoFilterList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemoFilterList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DemoFilterList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.UnHideAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        HideReason                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAttachment::UnHideAttachment(const class FName& HideReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.UnHideAttachment");
		
		UAttachment_UnHideAttachment_Params params {};
		params.HideReason = HideReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.OnComponentDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             DestroyedComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttachment::OnComponentDestroyed(class UActorComponent* DestroyedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.OnComponentDestroyed");
		
		UAttachment_OnComponentDestroyed_Params params {};
		params.DestroyedComponent = DestroyedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.OnActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttachment::OnActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.OnActorDestroyed");
		
		UAttachment_OnActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.IsHidden
	 * 		Flags  -> ()
	 */
	bool UAttachment::IsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.IsHidden");
		
		UAttachment_IsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.IsAttachmentAllowed
	 * 		Flags  -> ()
	 */
	bool UAttachment::IsAttachmentAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.IsAttachmentAllowed");
		
		UAttachment_IsAttachmentAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.Initialize
	 * 		Flags  -> ()
	 */
	void UAttachment::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.Initialize");
		
		UAttachment_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.HideAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        HideReason                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAttachment::HideAttachment(const class FName& HideReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.HideAttachment");
		
		UAttachment_HideAttachment_Params params {};
		params.HideReason = HideReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.HasValidData
	 * 		Flags  -> ()
	 */
	bool UAttachment::HasValidData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.HasValidData");
		
		UAttachment_HasValidData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.GetAttachmentTargetComponent
	 * 		Flags  -> ()
	 */
	class UAttachmentComponent* UAttachment::GetAttachmentTargetComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.GetAttachmentTargetComponent");
		
		UAttachment_GetAttachmentTargetComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.GetAttachmentTarget
	 * 		Flags  -> ()
	 */
	class USceneComponent* UAttachment::GetAttachmentTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.GetAttachmentTarget");
		
		UAttachment_GetAttachmentTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.GetAttachmentSourceComponent
	 * 		Flags  -> ()
	 */
	class UAttachmentComponent* UAttachment::GetAttachmentSourceComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.GetAttachmentSourceComponent");
		
		UAttachment_GetAttachmentSourceComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.GetAttachmentSource
	 * 		Flags  -> ()
	 */
	class USceneComponent* UAttachment::GetAttachmentSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.GetAttachmentSource");
		
		UAttachment_GetAttachmentSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.Detach
	 * 		Flags  -> ()
	 */
	void UAttachment::Detach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.Detach");
		
		UAttachment_Detach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.CleanupAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDetachmentReason                                  DetachmentReason                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttachment::CleanupAttachment(EDetachmentReason DetachmentReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.CleanupAttachment");
		
		UAttachment_CleanupAttachment_Params params {};
		params.DetachmentReason = DetachmentReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.Attachment.Attach
	 * 		Flags  -> ()
	 */
	bool UAttachment::Attach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.Attachment.Attach");
		
		UAttachment_Attach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.Attachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSSkeletalMeshComponent.RemoveVisibilityBasedAnimTickOptionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSSkeletalMeshComponent::RemoveVisibilityBasedAnimTickOptionRequest(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSSkeletalMeshComponent.RemoveVisibilityBasedAnimTickOptionRequest");
		
		UDSSkeletalMeshComponent_RemoveVisibilityBasedAnimTickOptionRequest_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSSkeletalMeshComponent.AddVisibilityBasedAnimTickOptionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVisibilityBasedAnimTickOption                     AnimTickOption                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UDSSkeletalMeshComponent::AddVisibilityBasedAnimTickOptionRequest(const class FName& Reason, EVisibilityBasedAnimTickOption AnimTickOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSSkeletalMeshComponent.AddVisibilityBasedAnimTickOptionRequest");
		
		UDSSkeletalMeshComponent_AddVisibilityBasedAnimTickOptionRequest_Params params {};
		params.Reason = Reason;
		params.AnimTickOption = AnimTickOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSSkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSSkeletalMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.UntagAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::UntagAction(const struct FGuid& RequestId, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.UntagAction");
		
		UCharacterActionComponent_UntagAction_Params params {};
		params.RequestId = RequestId;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.TagAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::TagAction(const struct FGuid& RequestId, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.TagAction");
		
		UCharacterActionComponent_TagAction_Params params {};
		params.RequestId = RequestId;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.SetKnowledgeBaseComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     InKnowledgeBaseComponent                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::SetKnowledgeBaseComponent(class UKnowledgeBaseComponent* InKnowledgeBaseComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.SetKnowledgeBaseComponent");
		
		UCharacterActionComponent_SetKnowledgeBaseComponent_Params params {};
		params.InKnowledgeBaseComponent = InKnowledgeBaseComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.ServerUpdateStateParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserParamsObjectWrapper                    Params                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::ServerUpdateStateParams(const struct FUserParamsObjectWrapper& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.ServerUpdateStateParams");
		
		UCharacterActionComponent_ServerUpdateStateParams_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.ServerRequestDenied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::ServerRequestDenied(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.ServerRequestDenied");
		
		UCharacterActionComponent_ServerRequestDenied_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.ServerRequestCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::ServerRequestCancelled(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.ServerRequestCancelled");
		
		UCharacterActionComponent_ServerRequestCancelled_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.ServerRemoveCharacterActionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECharacterActionEndedReason                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::ServerRemoveCharacterActionRequest(const struct FGuid& RequestId, ECharacterActionEndedReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.ServerRemoveCharacterActionRequest");
		
		UCharacterActionComponent_ServerRemoveCharacterActionRequest_Params params {};
		params.RequestId = RequestId;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.ServerBounceReplicationBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUserParamsObjectWrapper                    UserParams                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::ServerBounceReplicationBlock(const struct FGuid& RequestId, const struct FUserParamsObjectWrapper& UserParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.ServerBounceReplicationBlock");
		
		UCharacterActionComponent_ServerBounceReplicationBlock_Params params {};
		params.RequestId = RequestId;
		params.UserParams = UserParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.ServerAddCharacterActionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterActionNetworkRequestItem          CharacterActionRequestItem                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::ServerAddCharacterActionRequest(const struct FCharacterActionNetworkRequestItem& CharacterActionRequestItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.ServerAddCharacterActionRequest");
		
		UCharacterActionComponent_ServerAddCharacterActionRequest_Params params {};
		params.CharacterActionRequestItem = CharacterActionRequestItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.RequestCharacterAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterActionRequestParams               RequestParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGuid UCharacterActionComponent::RequestCharacterAction(const struct FCharacterActionRequestParams& RequestParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.RequestCharacterAction");
		
		UCharacterActionComponent_RequestCharacterAction_Params params {};
		params.RequestParams = RequestParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.RegisterDefaultActions
	 * 		Flags  -> ()
	 */
	void UCharacterActionComponent::RegisterDefaultActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.RegisterDefaultActions");
		
		UCharacterActionComponent_RegisterDefaultActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.RegisterAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActionDefinition*                           ActionDefinition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCharacterActionComponent::RegisterAction(class UActionDefinition* ActionDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.RegisterAction");
		
		UCharacterActionComponent_RegisterAction_Params params {};
		params.ActionDefinition = ActionDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.OnRep_StateParamsArray
	 * 		Flags  -> ()
	 */
	void UCharacterActionComponent::OnRep_StateParamsArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.OnRep_StateParamsArray");
		
		UCharacterActionComponent_OnRep_StateParamsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.NetMulticastAddCharacterActionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterActionNetworkRequestItem          CharacterActionRequestItem                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::NetMulticastAddCharacterActionRequest(const struct FCharacterActionNetworkRequestItem& CharacterActionRequestItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.NetMulticastAddCharacterActionRequest");
		
		UCharacterActionComponent_NetMulticastAddCharacterActionRequest_Params params {};
		params.CharacterActionRequestItem = CharacterActionRequestItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.LoadActionDefinitions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActionDefinitions*                          Definitions                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::LoadActionDefinitions(class UActionDefinitions* Definitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.LoadActionDefinitions");
		
		UCharacterActionComponent_LoadActionDefinitions_Params params {};
		params.Definitions = Definitions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.IsValidActionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCharacterActionComponent::IsValidActionRequest(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.IsValidActionRequest");
		
		UCharacterActionComponent_IsValidActionRequest_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.GetInitParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCustomActionParamsBase*                     OutInitParams                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOkInvalidResult                                   Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::GetInitParams(const struct FGuid& RequestId, class UCustomActionParamsBase** OutInitParams, EOkInvalidResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.GetInitParams");
		
		UCharacterActionComponent_GetInitParams_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInitParams != nullptr)
			*OutInitParams = params.OutInitParams;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.FindByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCharacterAction* UCharacterActionComponent::FindByID(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.FindByID");
		
		UCharacterActionComponent_FindByID_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.FindActionsByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGuid>                               ResultArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCharacterActionComponent::FindActionsByTag(const class FName& Tag, TArray<struct FGuid>* ResultArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.FindActionsByTag");
		
		UCharacterActionComponent_FindActionsByTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultArray != nullptr)
			*ResultArray = params.ResultArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.FindActionsByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGuid>                               ResultArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCharacterActionComponent::FindActionsByName(const class FName& ActionName, TArray<struct FGuid>* ResultArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.FindActionsByName");
		
		UCharacterActionComponent_FindActionsByName_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultArray != nullptr)
			*ResultArray = params.ResultArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.FindActionsByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGuid>                               ResultArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCharacterActionComponent::FindActionsByClass(class UClass* ActionType, TArray<struct FGuid>* ResultArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.FindActionsByClass");
		
		UCharacterActionComponent_FindActionsByClass_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultArray != nullptr)
			*ResultArray = params.ResultArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.EndActionsByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECharacterActionEndReason                          Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCharacterActionComponent::EndActionsByTag(const class FName& Tag, ECharacterActionEndReason Reason, float DelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.EndActionsByTag");
		
		UCharacterActionComponent_EndActionsByTag_Params params {};
		params.Tag = Tag;
		params.Reason = Reason;
		params.DelayTime = DelayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.EndAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECharacterActionEndReason                          Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::EndAction(const struct FGuid& RequestId, ECharacterActionEndReason Reason, float DelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.EndAction");
		
		UCharacterActionComponent_EndAction_Params params {};
		params.RequestId = RequestId;
		params.Reason = Reason;
		params.DelayTime = DelayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.CustomSignal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SignalName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::CustomSignal(const struct FGuid& RequestId, const class FName& SignalName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.CustomSignal");
		
		UCharacterActionComponent_CustomSignal_Params params {};
		params.RequestId = RequestId;
		params.SignalName = SignalName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.ClientRequestCharacterAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ActionTypeHash                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUserParamsObjectWrapper                    InitParams                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MaxQueueTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::ClientRequestCharacterAction(int32_t ActionTypeHash, const struct FUserParamsObjectWrapper& InitParams, float MaxQueueTime, const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.ClientRequestCharacterAction");
		
		UCharacterActionComponent_ClientRequestCharacterAction_Params params {};
		params.ActionTypeHash = ActionTypeHash;
		params.InitParams = InitParams;
		params.MaxQueueTime = MaxQueueTime;
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionComponent.ClientEndAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECharacterActionEndedReason                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionComponent::ClientEndAction(const struct FGuid& RequestId, ECharacterActionEndedReason Reason, float DelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionComponent.ClientEndAction");
		
		UCharacterActionComponent_ClientEndAction_Params params {};
		params.RequestId = RequestId;
		params.Reason = Reason;
		params.DelayTime = DelayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterActionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterActionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterActionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.SetMemberValueArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ArrayName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            ArrayData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDSGFxObject::SetMemberValueArray(const class FString& ArrayName, TArray<struct FASValue> ArrayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.SetMemberValueArray");
		
		UDSGFxObject_SetMemberValueArray_Params params {};
		params.ArrayName = ArrayName;
		params.ArrayData = ArrayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.SetMemberValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FASValue                                    Input                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDSGFxObject::SetMemberValue(const class FString& MemberName, const struct FASValue& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.SetMemberValue");
		
		UDSGFxObject_SetMemberValue_Params params {};
		params.MemberName = MemberName;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.SetAssetFromOtherGFxObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxObject*                                  OtherGFxObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSGFxObject::SetAssetFromOtherGFxObject(class UGFxObject* OtherGFxObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.SetAssetFromOtherGFxObject");
		
		UDSGFxObject_SetAssetFromOtherGFxObject_Params params {};
		params.OtherGFxObject = OtherGFxObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.SetAssetFromMoviePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSGFxObject::SetAssetFromMoviePlayer(class UGFxMoviePlayer* MoviePlayer, const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.SetAssetFromMoviePlayer");
		
		UDSGFxObject_SetAssetFromMoviePlayer_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.SetAssetFromGFxObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxObject*                                  ParentGFxObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSGFxObject::SetAssetFromGFxObject(class UGFxObject* ParentGFxObject, const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.SetAssetFromGFxObject");
		
		UDSGFxObject_SetAssetFromGFxObject_Params params {};
		params.ParentGFxObject = ParentGFxObject;
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.SetAssetFromDSGFxObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDSGFxObject*                                ParentDSGFxObject                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSGFxObject::SetAssetFromDSGFxObject(class UDSGFxObject* ParentDSGFxObject, const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.SetAssetFromDSGFxObject");
		
		UDSGFxObject_SetAssetFromDSGFxObject_Params params {};
		params.ParentDSGFxObject = ParentDSGFxObject;
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.IsValid
	 * 		Flags  -> ()
	 */
	bool UDSGFxObject::IsValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.IsValid");
		
		UDSGFxObject_IsValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.IsNull
	 * 		Flags  -> ()
	 */
	bool UDSGFxObject::IsNull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.IsNull");
		
		UDSGFxObject_IsNull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.InvokeOptionalNoReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDSGFxObject::InvokeOptionalNoReturn(const class FString& FunctionName, TArray<struct FASValue> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.InvokeOptionalNoReturn");
		
		UDSGFxObject_InvokeOptionalNoReturn_Params params {};
		params.FunctionName = FunctionName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.InvokeNoReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDSGFxObject::InvokeNoReturn(const class FString& FunctionName, TArray<struct FASValue> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.InvokeNoReturn");
		
		UDSGFxObject_InvokeNoReturn_Params params {};
		params.FunctionName = FunctionName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.HasMemberValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSGFxObject::HasMemberValue(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.HasMemberValue");
		
		UDSGFxObject_HasMemberValue_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.GetMoviePlayer
	 * 		Flags  -> ()
	 */
	class UGFxMoviePlayer* UDSGFxObject::GetMoviePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.GetMoviePlayer");
		
		UDSGFxObject_GetMoviePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.GetMemberVariable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UDSGFxObject::GetMemberVariable(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.GetMemberVariable");
		
		UDSGFxObject_GetMemberVariable_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.GetMemberValueArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ArrayName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FASValue> UDSGFxObject::GetMemberValueArray(const class FString& ArrayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.GetMemberValueArray");
		
		UDSGFxObject_GetMemberValueArray_Params params {};
		params.ArrayName = ArrayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.GetMemberValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASValue UDSGFxObject::GetMemberValue(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.GetMemberValue");
		
		UDSGFxObject_GetMemberValue_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.GetGFxObject
	 * 		Flags  -> ()
	 */
	class UGFxObject* UDSGFxObject::GetGFxObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.GetGFxObject");
		
		UDSGFxObject_GetGFxObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.ClearAssetObject
	 * 		Flags  -> ()
	 */
	void UDSGFxObject::ClearAssetObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.ClearAssetObject");
		
		UDSGFxObject_ClearAssetObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSGFxObject.CheckIfMemberExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSGFxObject::CheckIfMemberExists(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSGFxObject.CheckIfMemberExists");
		
		UDSGFxObject_CheckIfMemberExists_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSGFxObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSGFxObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSGFxObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.UnregisterFromDirectCommands
	 * 		Flags  -> ()
	 */
	void UGFxDisplayObject::UnregisterFromDirectCommands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.UnregisterFromDirectCommands");
		
		UGFxDisplayObject_UnregisterFromDirectCommands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetYRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              YRotation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetYRotation(float YRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetYRotation");
		
		UGFxDisplayObject_SetYRotation_Params params {};
		params.YRotation = YRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetY
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetY(float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetY");
		
		UGFxDisplayObject_SetY_Params params {};
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetXRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              XRotation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetXRotation(float XRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetXRotation");
		
		UGFxDisplayObject_SetXRotation_Params params {};
		params.XRotation = XRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetX(float X)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetX");
		
		UGFxDisplayObject_SetX_Params params {};
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetWidth(float Width)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetWidth");
		
		UGFxDisplayObject_SetWidth_Params params {};
		params.Width = Width;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetVisible");
		
		UGFxDisplayObject_SetVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetScaleYFrac
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScaleYFrac                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetScaleYFrac(float ScaleYFrac)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetScaleYFrac");
		
		UGFxDisplayObject_SetScaleYFrac_Params params {};
		params.ScaleYFrac = ScaleYFrac;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetScaleXYFrac
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetScaleXYFrac(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetScaleXYFrac");
		
		UGFxDisplayObject_SetScaleXYFrac_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetScaleXFrac
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScaleXFrac                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetScaleXFrac(float ScaleXFrac)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetScaleXFrac");
		
		UGFxDisplayObject_SetScaleXFrac_Params params {};
		params.ScaleXFrac = ScaleXFrac;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetScaleFrac
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Scale2D                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetScaleFrac(const struct FVector2D& Scale2D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetScaleFrac");
		
		UGFxDisplayObject_SetScaleFrac_Params params {};
		params.Scale2D = Scale2D;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetRotation(float Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetRotation");
		
		UGFxDisplayObject_SetRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetPosition2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetPosition2D(const struct FVector2D& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetPosition2D");
		
		UGFxDisplayObject_SetPosition2D_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetHeight(float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetHeight");
		
		UGFxDisplayObject_SetHeight_Params params {};
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetEdgeAAMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDIEdgeAAMode                                      EdgeAAMode                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetEdgeAAMode(EDIEdgeAAMode EdgeAAMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetEdgeAAMode");
		
		UGFxDisplayObject_SetEdgeAAMode_Params params {};
		params.EdgeAAMode = EdgeAAMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FASDisplayInfo                              InDisplayInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetDisplayInfo(const struct FASDisplayInfo& InDisplayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetDisplayInfo");
		
		UGFxDisplayObject_SetDisplayInfo_Params params {};
		params.InDisplayInfo = InDisplayInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetColorTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Multiply                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Add                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetColorTransform(const struct FLinearColor& Multiply, const struct FLinearColor& Add)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetColorTransform");
		
		UGFxDisplayObject_SetColorTransform_Params params {};
		params.Multiply = Multiply;
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.SetAlphaFrac
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AlphaFrac                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDisplayObject::SetAlphaFrac(float AlphaFrac)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.SetAlphaFrac");
		
		UGFxDisplayObject_SetAlphaFrac_Params params {};
		params.AlphaFrac = AlphaFrac;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.RegisterForDirectCommands
	 * 		Flags  -> ()
	 */
	void UGFxDisplayObject::RegisterForDirectCommands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.RegisterForDirectCommands");
		
		UGFxDisplayObject_RegisterForDirectCommands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetYRotation
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetYRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetYRotation");
		
		UGFxDisplayObject_GetYRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetY
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetY()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetY");
		
		UGFxDisplayObject_GetY_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetXRotation
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetXRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetXRotation");
		
		UGFxDisplayObject_GetXRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetX
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetX");
		
		UGFxDisplayObject_GetX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetWidth
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetWidth");
		
		UGFxDisplayObject_GetWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetVisible
	 * 		Flags  -> ()
	 */
	bool UGFxDisplayObject::GetVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetVisible");
		
		UGFxDisplayObject_GetVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetSize2D
	 * 		Flags  -> ()
	 */
	struct FVector2D UGFxDisplayObject::GetSize2D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetSize2D");
		
		UGFxDisplayObject_GetSize2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetScaleYFrac
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetScaleYFrac()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetScaleYFrac");
		
		UGFxDisplayObject_GetScaleYFrac_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetScaleXFrac
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetScaleXFrac()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetScaleXFrac");
		
		UGFxDisplayObject_GetScaleXFrac_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetScaleFrac
	 * 		Flags  -> ()
	 */
	struct FVector2D UGFxDisplayObject::GetScaleFrac()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetScaleFrac");
		
		UGFxDisplayObject_GetScaleFrac_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetRotation
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetRotation");
		
		UGFxDisplayObject_GetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetPosition2D
	 * 		Flags  -> ()
	 */
	struct FVector2D UGFxDisplayObject::GetPosition2D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetPosition2D");
		
		UGFxDisplayObject_GetPosition2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetHeight
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetHeight");
		
		UGFxDisplayObject_GetHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FASDisplayInfo                              OutDisplayInfo                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UGFxDisplayObject::GetDisplayInfo(struct FASDisplayInfo* OutDisplayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetDisplayInfo");
		
		UGFxDisplayObject_GetDisplayInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDisplayInfo != nullptr)
			*OutDisplayInfo = params.OutDisplayInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDisplayObject.GetAlphaFrac
	 * 		Flags  -> ()
	 */
	float UGFxDisplayObject::GetAlphaFrac()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDisplayObject.GetAlphaFrac");
		
		UGFxDisplayObject_GetAlphaFrac_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxDisplayObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxDisplayObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxDisplayObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.Unload
	 * 		Flags  -> ()
	 */
	void UGFxMovieClip::Unload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.Unload");
		
		UGFxMovieClip_Unload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.RemoveMovieClipAndClear
	 * 		Flags  -> ()
	 */
	void UGFxMovieClip::RemoveMovieClipAndClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.RemoveMovieClipAndClear");
		
		UGFxMovieClip_RemoveMovieClipAndClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.LoadMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USwfMovie*                                   SwfMovie                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceAdvance                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMovieClip::LoadMovie(class USwfMovie* SwfMovie, bool bForceAdvance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.LoadMovie");
		
		UGFxMovieClip_LoadMovie_Params params {};
		params.SwfMovie = SwfMovie;
		params.bForceAdvance = bForceAdvance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.LoadImageAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSoftObjectPath                             AssetReference                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMovieClip::LoadImageAsset(const struct FSoftObjectPath& AssetReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.LoadImageAsset");
		
		UGFxMovieClip_LoadImageAsset_Params params {};
		params.AssetReference = AssetReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.GotoAndStopI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FrameNum                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMovieClip::GotoAndStopI(int32_t FrameNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.GotoAndStopI");
		
		UGFxMovieClip_GotoAndStopI_Params params {};
		params.FrameNum = FrameNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.GotoAndStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FrameString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMovieClip::GotoAndStop(const class FString& FrameString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.GotoAndStop");
		
		UGFxMovieClip_GotoAndStop_Params params {};
		params.FrameString = FrameString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.GotoAndPlayI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FrameNumber                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMovieClip::GotoAndPlayI(int32_t FrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.GotoAndPlayI");
		
		UGFxMovieClip_GotoAndPlayI_Params params {};
		params.FrameNumber = FrameNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.GotoAndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FrameString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMovieClip::GotoAndPlay(const class FString& FrameString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.GotoAndPlay");
		
		UGFxMovieClip_GotoAndPlay_Params params {};
		params.FrameString = FrameString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.GetTotalFrames
	 * 		Flags  -> ()
	 */
	int32_t UGFxMovieClip::GetTotalFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.GetTotalFrames");
		
		UGFxMovieClip_GetTotalFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.GetMovieClipName
	 * 		Flags  -> ()
	 */
	class FString UGFxMovieClip::GetMovieClipName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.GetMovieClipName");
		
		UGFxMovieClip_GetMovieClipName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.CreateEmptyMovieClipBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InstanceName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Depth                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UGFxMovieClip::CreateEmptyMovieClipBP(const class FString& InstanceName, int32_t Depth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.CreateEmptyMovieClipBP");
		
		UGFxMovieClip_CreateEmptyMovieClipBP_Params params {};
		params.InstanceName = InstanceName;
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMovieClip.AttachMovieBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SymbolName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InstanceName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Depth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UGFxMovieClip::AttachMovieBP(const class FString& SymbolName, const class FString& InstanceName, int32_t Depth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMovieClip.AttachMovieBP");
		
		UGFxMovieClip_AttachMovieBP_Params params {};
		params.SymbolName = SymbolName;
		params.InstanceName = InstanceName;
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxMovieClip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxMovieClip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxMovieClip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttachmentModule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttachmentModule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AttachmentModule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseDespawnCallback.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseDespawnCallback::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.BaseDespawnCallback");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentComponent.UnHideAttachmentsOnBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        HideReason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttachmentComponent::UnHideAttachmentsOnBone(const class FName& HideReason, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentComponent.UnHideAttachmentsOnBone");
		
		UAttachmentComponent_UnHideAttachmentsOnBone_Params params {};
		params.HideReason = HideReason;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentComponent.RemoveAllAttachments
	 * 		Flags  -> ()
	 */
	void UAttachmentComponent::RemoveAllAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentComponent.RemoveAllAttachments");
		
		UAttachmentComponent_RemoveAllAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentComponent.OnRep_NetworkedAttachments
	 * 		Flags  -> ()
	 */
	void UAttachmentComponent::OnRep_NetworkedAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentComponent.OnRep_NetworkedAttachments");
		
		UAttachmentComponent_OnRep_NetworkedAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentComponent.NamedAttachmentExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AttachmentName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAttachmentComponent::NamedAttachmentExists(const class FName& AttachmentName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentComponent.NamedAttachmentExists");
		
		UAttachmentComponent_NamedAttachmentExists_Params params {};
		params.AttachmentName = AttachmentName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentComponent.IsAttachmentAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAttachment*                                 Attachment                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAttachmentComponent::IsAttachmentAllowed(class UAttachment* Attachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentComponent.IsAttachmentAllowed");
		
		UAttachmentComponent_IsAttachmentAllowed_Params params {};
		params.Attachment = Attachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentComponent.HideAttachmentsOnBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        HideReason                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttachmentComponent::HideAttachmentsOnBone(const class FName& HideReason, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentComponent.HideAttachmentsOnBone");
		
		UAttachmentComponent_HideAttachmentsOnBone_Params params {};
		params.HideReason = HideReason;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentComponent.GetAttachments
	 * 		Flags  -> ()
	 */
	TArray<class UAttachment*> UAttachmentComponent::GetAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentComponent.GetAttachments");
		
		UAttachmentComponent_GetAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentComponent.GetAttachmentClassForActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UAttachmentComponent::GetAttachmentClassForActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentComponent.GetAttachmentClassForActor");
		
		UAttachmentComponent_GetAttachmentClassForActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentComponent.AnyAttachmentExists
	 * 		Flags  -> ()
	 */
	bool UAttachmentComponent::AnyAttachmentExists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentComponent.AnyAttachmentExists");
		
		UAttachmentComponent_AnyAttachmentExists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttachmentComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttachmentComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AttachmentComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AchievementsManager.GetAchievementsManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AAchievementsManager* AAchievementsManager::GetAchievementsManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AchievementsManager.GetAchievementsManager");
		
		AAchievementsManager_GetAchievementsManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAchievementsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAchievementsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AchievementsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ActionDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionDefinitions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionDefinitions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ActionDefinitions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorContextComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorContextComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ActorContextComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAILevelOfDetailFeature_MovementTickScheduler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAILevelOfDetailFeature_MovementTickScheduler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AILevelOfDetailFeature_MovementTickScheduler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_BaseAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_BaseAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AnimNotifyState_BaseAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_ActorAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_ActorAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AnimNotifyState_ActorAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_ChainableAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_ChainableAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AnimNotifyState_ChainableAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_SkeletalMeshAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_SkeletalMeshAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AnimNotifyState_SkeletalMeshAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_Slomo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_Slomo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AnimNotifyState_Slomo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_StaticMeshAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_StaticMeshAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AnimNotifyState_StaticMeshAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentManager.GetAttachmentManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AAttachmentManager* AAttachmentManager::GetAttachmentManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentManager.GetAttachmentManager");
		
		AAttachmentManager_GetAttachmentManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentManager.FindExistingNamedAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AttachmentName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAttachment* AAttachmentManager::FindExistingNamedAttachment(const class FName& AttachmentName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentManager.FindExistingNamedAttachment");
		
		AAttachmentManager_FindExistingNamedAttachment_Params params {};
		params.AttachmentName = AttachmentName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentManager.CreateAttachmentBetweenComponentAndActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SourceComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDynamicAttachmentRules                     DynamicAttachmentRules                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAttachment* AAttachmentManager::CreateAttachmentBetweenComponentAndActor(class USceneComponent* SourceComponent, class AActor* TargetActor, const struct FDynamicAttachmentRules& DynamicAttachmentRules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentManager.CreateAttachmentBetweenComponentAndActor");
		
		AAttachmentManager_CreateAttachmentBetweenComponentAndActor_Params params {};
		params.SourceComponent = SourceComponent;
		params.TargetActor = TargetActor;
		params.DynamicAttachmentRules = DynamicAttachmentRules;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentManager.CreateAttachmentBetweenActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToAttach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDynamicAttachmentRules                     DynamicAttachmentRules                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAttachment* AAttachmentManager::CreateAttachmentBetweenActors(class AActor* ActorToAttach, class AActor* TargetActor, const struct FDynamicAttachmentRules& DynamicAttachmentRules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentManager.CreateAttachmentBetweenActors");
		
		AAttachmentManager_CreateAttachmentBetweenActors_Params params {};
		params.ActorToAttach = ActorToAttach;
		params.TargetActor = TargetActor;
		params.DynamicAttachmentRules = DynamicAttachmentRules;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.AttachmentManager.CreateAttachmentBetweenActorAndComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToAttach                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             TargetComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDynamicAttachmentRules                     DynamicAttachmentRules                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAttachment* AAttachmentManager::CreateAttachmentBetweenActorAndComponent(class AActor* ActorToAttach, class USceneComponent* TargetComponent, const struct FDynamicAttachmentRules& DynamicAttachmentRules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.AttachmentManager.CreateAttachmentBetweenActorAndComponent");
		
		AAttachmentManager_CreateAttachmentBetweenActorAndComponent_Params params {};
		params.ActorToAttach = ActorToAttach;
		params.TargetComponent = TargetComponent;
		params.DynamicAttachmentRules = DynamicAttachmentRules;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAttachmentManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAttachmentManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AttachmentManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseChallengeRuntimeState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseChallengeRuntimeState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.BaseChallengeRuntimeState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABreezeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABreezeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.BreezeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraModifier_DepthOfField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraModifier_DepthOfField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CameraModifier_DepthOfField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraModifier_FieldOfView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraModifier_FieldOfView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CameraModifier_FieldOfView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallengeCompletionChallengeDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeCompletionChallengeDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ChallengeCompletionChallengeDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ChallengeCompletionChallengeRuntimeObject.OnChallengeComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseChallengeRuntimeObject*                 Challenge                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ENotificationRule                                  NotificationRule                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeltaProgress                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Progress                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChallengeCompletionChallengeRuntimeObject::OnChallengeComplete(class UBaseChallengeRuntimeObject* Challenge, ENotificationRule NotificationRule, int32_t DeltaProgress, int32_t Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ChallengeCompletionChallengeRuntimeObject.OnChallengeComplete");
		
		UChallengeCompletionChallengeRuntimeObject_OnChallengeComplete_Params params {};
		params.Challenge = Challenge;
		params.NotificationRule = NotificationRule;
		params.DeltaProgress = DeltaProgress;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallengeCompletionChallengeRuntimeObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeCompletionChallengeRuntimeObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ChallengeCompletionChallengeRuntimeObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallengeManagerRuntimeState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeManagerRuntimeState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ChallengeManagerRuntimeState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallengeResponse_UpdateAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeResponse_UpdateAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ChallengeResponse_UpdateAchievement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallengeSetDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallengeSetDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ChallengeSetDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionFactory.AllocateAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAllocateActionParams                       Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UCharacterAction* UCharacterActionFactory::AllocateAction(const struct FAllocateActionParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionFactory.AllocateAction");
		
		UCharacterActionFactory_AllocateAction_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterActionFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterActionFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterActionFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACharacterActionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACharacterActionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterActionManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterActionRequest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterActionRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterActionRequest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionRequestHelper.RequestAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterActionComponent*                   InCharacterActionComponent                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionRequestParams               RequestParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ECharacterActionHelperReferenceType                InReferenceType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UCharacterActionRequestHelper::RequestAction(class UCharacterActionComponent* InCharacterActionComponent, const struct FCharacterActionRequestParams& RequestParams, ECharacterActionHelperReferenceType InReferenceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionRequestHelper.RequestAction");
		
		UCharacterActionRequestHelper_RequestAction_Params params {};
		params.InCharacterActionComponent = InCharacterActionComponent;
		params.RequestParams = RequestParams;
		params.InReferenceType = InReferenceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionRequestHelper.IsRequestValid
	 * 		Flags  -> ()
	 */
	bool UCharacterActionRequestHelper::IsRequestValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionRequestHelper.IsRequestValid");
		
		UCharacterActionRequestHelper_IsRequestValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionRequestHelper.IsRequestStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERequestStatus                                     InRequestStatus                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCharacterActionRequestHelper::IsRequestStatus(ERequestStatus InRequestStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionRequestHelper.IsRequestStatus");
		
		UCharacterActionRequestHelper_IsRequestStatus_Params params {};
		params.InRequestStatus = InRequestStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionRequestHelper.IsRequestInProgress
	 * 		Flags  -> ()
	 */
	bool UCharacterActionRequestHelper::IsRequestInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionRequestHelper.IsRequestInProgress");
		
		UCharacterActionRequestHelper_IsRequestInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionRequestHelper.IsRequestForActionByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InActionName                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCharacterActionRequestHelper::IsRequestForActionByName(const class FName& InActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionRequestHelper.IsRequestForActionByName");
		
		UCharacterActionRequestHelper_IsRequestForActionByName_Params params {};
		params.InActionName = InActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionRequestHelper.IsRequestForAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActionDefinition*                           InDefinition                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCharacterActionRequestHelper::IsRequestForAction(class UActionDefinition* InDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionRequestHelper.IsRequestForAction");
		
		UCharacterActionRequestHelper_IsRequestForAction_Params params {};
		params.InDefinition = InDefinition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionRequestHelper.HasActionAuthority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterActionComponent*                   InCharacterActionComponent                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCharacterActionRequestHelper::HasActionAuthority(class UCharacterActionComponent* InCharacterActionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionRequestHelper.HasActionAuthority");
		
		UCharacterActionRequestHelper_HasActionAuthority_Params params {};
		params.InCharacterActionComponent = InCharacterActionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionRequestHelper.EndAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterActionEndReason                          Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWaitForActionEnd                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterActionRequestHelper::EndAction(ECharacterActionEndReason Reason, float DelayTime, bool bWaitForActionEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionRequestHelper.EndAction");
		
		UCharacterActionRequestHelper_EndAction_Params params {};
		params.Reason = Reason;
		params.DelayTime = DelayTime;
		params.bWaitForActionEnd = bWaitForActionEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterActionRequestHelper.CreateCharacterActionRequestHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCharacterActionRequestHelper* UCharacterActionRequestHelper::CreateCharacterActionRequestHelper(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterActionRequestHelper.CreateCharacterActionRequestHelper");
		
		UCharacterActionRequestHelper_CreateCharacterActionRequestHelper_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterActionRequestHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterActionRequestHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterActionRequestHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterActionResolutionTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterActionResolutionTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterActionResolutionTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomParamsStackItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomParamsStackItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CustomParamsStackItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterMovementModeRequestStackItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterMovementModeRequestStackItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterMovementModeRequestStackItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterMovementModePriorityConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterMovementModePriorityConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterMovementModePriorityConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterMultiActionMultiActorRequester.OnActionsSucceeded
	 * 		Flags  -> ()
	 */
	void UCharacterMultiActionMultiActorRequester::OnActionsSucceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterMultiActionMultiActorRequester.OnActionsSucceeded");
		
		UCharacterMultiActionMultiActorRequester_OnActionsSucceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CharacterMultiActionMultiActorRequester.OnActionsFailed
	 * 		Flags  -> ()
	 */
	void UCharacterMultiActionMultiActorRequester::OnActionsFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CharacterMultiActionMultiActorRequester.OnActionsFailed");
		
		UCharacterMultiActionMultiActorRequester_OnActionsFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterMultiActionMultiActorRequester.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterMultiActionMultiActorRequester::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CharacterMultiActionMultiActorRequester");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeBlueprintLibrary.GetDisplayNameForKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UControlSchemeBlueprintLibrary::GetDisplayNameForKey(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeBlueprintLibrary.GetDisplayNameForKey");
		
		UControlSchemeBlueprintLibrary_GetDisplayNameForKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeBlueprintLibrary.GetControlSchemeManagerFromPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UControlSchemeManager* UControlSchemeBlueprintLibrary::GetControlSchemeManagerFromPlayerController(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeBlueprintLibrary.GetControlSchemeManagerFromPlayerController");
		
		UControlSchemeBlueprintLibrary_GetControlSchemeManagerFromPlayerController_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeBlueprintLibrary.GetControlSchemeManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UControlSchemeManager* UControlSchemeBlueprintLibrary::GetControlSchemeManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeBlueprintLibrary.GetControlSchemeManager");
		
		UControlSchemeBlueprintLibrary_GetControlSchemeManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlSchemeBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlSchemeBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ControlSchemeBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeManager.IsMouseKeyboardControlScheme
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlSchemeType                                 ControlScheme                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlSchemeManager::IsMouseKeyboardControlScheme(EControlSchemeType ControlScheme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeManager.IsMouseKeyboardControlScheme");
		
		UControlSchemeManager_IsMouseKeyboardControlScheme_Params params {};
		params.ControlScheme = ControlScheme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeManager.IsGamepadControlScheme
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlSchemeType                                 ControlScheme                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlSchemeManager::IsGamepadControlScheme(EControlSchemeType ControlScheme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeManager.IsGamepadControlScheme");
		
		UControlSchemeManager_IsGamepadControlScheme_Params params {};
		params.ControlScheme = ControlScheme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeManager.IsCurrentlyMouseKeyboardControlScheme
	 * 		Flags  -> ()
	 */
	bool UControlSchemeManager::IsCurrentlyMouseKeyboardControlScheme()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeManager.IsCurrentlyMouseKeyboardControlScheme");
		
		UControlSchemeManager_IsCurrentlyMouseKeyboardControlScheme_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeManager.IsCurrentlyGamepadControlScheme
	 * 		Flags  -> ()
	 */
	bool UControlSchemeManager::IsCurrentlyGamepadControlScheme()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeManager.IsCurrentlyGamepadControlScheme");
		
		UControlSchemeManager_IsCurrentlyGamepadControlScheme_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeManager.GetCurrentControlScheme
	 * 		Flags  -> ()
	 */
	EControlSchemeType UControlSchemeManager::GetCurrentControlScheme()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeManager.GetCurrentControlScheme");
		
		UControlSchemeManager_GetCurrentControlScheme_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeManager.GetCurrentControllerType
	 * 		Flags  -> ()
	 */
	EInputMapperControllerType UControlSchemeManager::GetCurrentControllerType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeManager.GetCurrentControllerType");
		
		UControlSchemeManager_GetCurrentControllerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ControlSchemeManager.GetCurrentControllerLayout
	 * 		Flags  -> ()
	 */
	struct FControllerLayout UControlSchemeManager::GetCurrentControllerLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ControlSchemeManager.GetCurrentControllerLayout");
		
		UControlSchemeManager_GetCurrentControllerLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlSchemeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlSchemeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ControlSchemeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.UIColourRowHandleWrapper.GetLinearColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUIColourRowHandleWrapper::GetLinearColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.UIColourRowHandleWrapper.GetLinearColor");
		
		UUIColourRowHandleWrapper_GetLinearColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.UIColourRowHandleWrapper.GetColorName
	 * 		Flags  -> ()
	 */
	class FName UUIColourRowHandleWrapper::GetColorName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.UIColourRowHandleWrapper.GetColorName");
		
		UUIColourRowHandleWrapper_GetColorName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.UIColourRowHandleWrapper.GetColor
	 * 		Flags  -> ()
	 */
	struct FColor UUIColourRowHandleWrapper::GetColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.UIColourRowHandleWrapper.GetColor");
		
		UUIColourRowHandleWrapper_GetColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIColourRowHandleWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIColourRowHandleWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.UIColourRowHandleWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CosmeticEffectData_ParticleSystem.OnSystemFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystemComponent*                    InPS                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectData_ParticleSystem::OnSystemFinished(class UParticleSystemComponent* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CosmeticEffectData_ParticleSystem.OnSystemFinished");
		
		UCosmeticEffectData_ParticleSystem_OnSystemFinished_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CosmeticEffectData_ParticleSystem.OnSystemDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystemComponent*                    InPS                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCosmeticEffectData_ParticleSystem::OnSystemDestroyed(class UParticleSystemComponent* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CosmeticEffectData_ParticleSystem.OnSystemDestroyed");
		
		UCosmeticEffectData_ParticleSystem_OnSystemDestroyed_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_ParticleSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_ParticleSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CosmeticEffectData_ParticleSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_ParticleSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_ParticleSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CosmeticEffect_ParticleSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffectData_Slomo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffectData_Slomo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CosmeticEffectData_Slomo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCosmeticEffect_Slomo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCosmeticEffect_Slomo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CosmeticEffect_Slomo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CurveUtils.GetVelocityFromScaledDistanceCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCurveFloat*                                 ScaledCurve                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ValueScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCurveUtils::GetVelocityFromScaledDistanceCurve(class UCurveFloat* ScaledCurve, float Time, float TimeScale, float ValueScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CurveUtils.GetVelocityFromScaledDistanceCurve");
		
		UCurveUtils_GetVelocityFromScaledDistanceCurve_Params params {};
		params.ScaledCurve = ScaledCurve;
		params.Time = Time;
		params.TimeScale = TimeScale;
		params.ValueScale = ValueScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CurveUtils.GetVelocityFromDistanceCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCurveFloat*                                 DistanceCurve                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCurveUtils::GetVelocityFromDistanceCurve(class UCurveFloat* DistanceCurve, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CurveUtils.GetVelocityFromDistanceCurve");
		
		UCurveUtils_GetVelocityFromDistanceCurve_Params params {};
		params.DistanceCurve = DistanceCurve;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CurveUtils.GetAccelerationFromScaledDistanceCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCurveFloat*                                 ScaledCurve                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ValueScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCurveUtils::GetAccelerationFromScaledDistanceCurve(class UCurveFloat* ScaledCurve, float Time, float TimeScale, float ValueScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CurveUtils.GetAccelerationFromScaledDistanceCurve");
		
		UCurveUtils_GetAccelerationFromScaledDistanceCurve_Params params {};
		params.ScaledCurve = ScaledCurve;
		params.Time = Time;
		params.TimeScale = TimeScale;
		params.ValueScale = ValueScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CurveUtils.GetAccelerationFromDistanceCurve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCurveFloat*                                 DistanceCurve                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UCurveUtils::GetAccelerationFromDistanceCurve(class UCurveFloat* DistanceCurve, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CurveUtils.GetAccelerationFromDistanceCurve");
		
		UCurveUtils_GetAccelerationFromDistanceCurve_Params params {};
		params.DistanceCurve = DistanceCurve;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCurveUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurveUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CurveUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackContainer.Remove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCustomParamsStackContainer::Remove(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackContainer.Remove");
		
		UCustomParamsStackContainer_Remove_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackContainer.IsCurrentId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCustomParamsStackContainer::IsCurrentId(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackContainer.IsCurrentId");
		
		UCustomParamsStackContainer_IsCurrentId_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackContainer.GetRestrictTo
	 * 		Flags  -> ()
	 */
	class UClass* UCustomParamsStackContainer::GetRestrictTo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackContainer.GetRestrictTo");
		
		UCustomParamsStackContainer_GetRestrictTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackContainer.GetParamsById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCustomParamsStackItem* UCustomParamsStackContainer::GetParamsById(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackContainer.GetParamsById");
		
		UCustomParamsStackContainer_GetParamsById_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackContainer.GetParams
	 * 		Flags  -> ()
	 */
	class UCustomParamsStackItem* UCustomParamsStackContainer::GetParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackContainer.GetParams");
		
		UCustomParamsStackContainer_GetParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackContainer.CreateCustomParamsStackContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      InRestrictTo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCustomParamsStackContainer* UCustomParamsStackContainer::CreateCustomParamsStackContainer(class UObject* WorldContextObject, class UClass* InRestrictTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackContainer.CreateCustomParamsStackContainer");
		
		UCustomParamsStackContainer_CreateCustomParamsStackContainer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InRestrictTo = InRestrictTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackContainer.Add
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomParamsStackItem*                      Params                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UCustomParamsStackContainer::Add(class UCustomParamsStackItem* Params, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackContainer.Add");
		
		UCustomParamsStackContainer_Add_Params params {};
		params.Params = Params;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomParamsStackContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomParamsStackContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CustomParamsStackContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackItemHelper.Remove
	 * 		Flags  -> ()
	 */
	void UCustomParamsStackItemHelper::Remove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackItemHelper.Remove");
		
		UCustomParamsStackItemHelper_Remove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackItemHelper.CreateCustomParamsStackItemHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCustomParamsStackItemHelper* UCustomParamsStackItemHelper::CreateCustomParamsStackItemHelper(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackItemHelper.CreateCustomParamsStackItemHelper");
		
		UCustomParamsStackItemHelper_CreateCustomParamsStackItemHelper_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.CustomParamsStackItemHelper.Add
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InItemType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCustomParamsStackContainer*                 InContainer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCustomParamsStackItem* UCustomParamsStackItemHelper::Add(class UClass* InItemType, class UCustomParamsStackContainer* InContainer, int32_t InPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.CustomParamsStackItemHelper.Add");
		
		UCustomParamsStackItemHelper_Add_Params params {};
		params.InItemType = InItemType;
		params.InContainer = InContainer;
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomParamsStackItemHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomParamsStackItemHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.CustomParamsStackItemHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DemoSettings.GetDemoFeatureReason
	 * 		Flags  -> ()
	 */
	class FName UDemoSettings::GetDemoFeatureReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DemoSettings.GetDemoFeatureReason");
		
		UDemoSettings_GetDemoFeatureReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemoSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemoSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DemoSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDespawnConditionsMaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDespawnConditionsMaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DespawnConditionsMaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDespawnWeights.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDespawnWeights::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DespawnWeights");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnUtils.RemoveLingering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        LingeringReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDespawnUtils::RemoveLingering(class AActor* Actor, const class FName& LingeringReason, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnUtils.RemoveLingering");
		
		UDespawnUtils_RemoveLingering_Params params {};
		params.Actor = Actor;
		params.LingeringReason = LingeringReason;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnUtils.MarkLingering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        LingeringReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDespawnUtils::MarkLingering(class AActor* Actor, const class FName& LingeringReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnUtils.MarkLingering");
		
		UDespawnUtils_MarkLingering_Params params {};
		params.Actor = Actor;
		params.LingeringReason = LingeringReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnUtils.MakeLinger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        LingeringReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDespawnUtils::MakeLinger(class AActor* Actor, const class FName& LingeringReason, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnUtils.MakeLinger");
		
		UDespawnUtils_MakeLinger_Params params {};
		params.Actor = Actor;
		params.LingeringReason = LingeringReason;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DespawnUtils.IsLingering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDespawnUtils::IsLingering(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DespawnUtils.IsLingering");
		
		UDespawnUtils_IsLingering_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDespawnUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDespawnUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DespawnUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSAssetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSAssetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSAssetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCameraShake.SetShakeScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewShakeScale                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCameraShake::SetShakeScale(float NewShakeScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCameraShake.SetShakeScale");
		
		UDSCameraShake_SetShakeScale_Params params {};
		params.NewShakeScale = NewShakeScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSCameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCapsuleComponent.UpdateCollisionRequestToProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewCollisionProfileName                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSCapsuleComponent::UpdateCollisionRequestToProfile(const struct FGuid& RequestId, const class FName& NewCollisionProfileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCapsuleComponent.UpdateCollisionRequestToProfile");
		
		UDSCapsuleComponent_UpdateCollisionRequestToProfile_Params params {};
		params.RequestId = RequestId;
		params.NewCollisionProfileName = NewCollisionProfileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCapsuleComponent.UpdateCollisionRequestToCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCapsuleCustomCollisionParams               NewParams                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UDSCapsuleComponent::UpdateCollisionRequestToCustom(const struct FGuid& RequestId, const struct FCapsuleCustomCollisionParams& NewParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCapsuleComponent.UpdateCollisionRequestToCustom");
		
		UDSCapsuleComponent_UpdateCollisionRequestToCustom_Params params {};
		params.RequestId = RequestId;
		params.NewParams = NewParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCapsuleComponent.RemoveCollisionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSCapsuleComponent::RemoveCollisionRequest(const struct FGuid& RequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCapsuleComponent.RemoveCollisionRequest");
		
		UDSCapsuleComponent_RemoveCollisionRequest_Params params {};
		params.RequestId = RequestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCapsuleComponent.AddCustomCollisionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RequestReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCapsuleCustomCollisionParams               Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FGuid UDSCapsuleComponent::AddCustomCollisionRequest(const class FName& RequestReason, const struct FCapsuleCustomCollisionParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCapsuleComponent.AddCustomCollisionRequest");
		
		UDSCapsuleComponent_AddCustomCollisionRequest_Params params {};
		params.RequestReason = RequestReason;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSCapsuleComponent.AddCollisionProfileRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RequestReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        CollisionProfileName                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UDSCapsuleComponent::AddCollisionProfileRequest(const class FName& RequestReason, const class FName& CollisionProfileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSCapsuleComponent.AddCollisionProfileRequest");
		
		UDSCapsuleComponent_AddCollisionProfileRequest_Params params {};
		params.RequestReason = RequestReason;
		params.CollisionProfileName = CollisionProfileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSCapsuleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSCapsuleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCapsuleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADSCharacterMovementManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADSCharacterMovementManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCharacterMovementManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSCharacterPushTableElement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSCharacterPushTableElement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCharacterPushTableElement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSCharacterPushTableRow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSCharacterPushTableRow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCharacterPushTableRow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSCharacterPushTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSCharacterPushTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCharacterPushTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSCharacterSplineFollowCustomMovementState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSCharacterSplineFollowCustomMovementState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCharacterSplineFollowCustomMovementState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSComponentBlueprintFunctionLibrary.CreateSceneComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InstanceName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisibleInComponentHierarchy                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsRootComponent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ParentComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USceneComponent* UDSComponentBlueprintFunctionLibrary::CreateSceneComponent(class AActor* Actor, class UClass* ComponentClass, const class FName& InstanceName, bool bVisibleInComponentHierarchy, bool bIsRootComponent, class USceneComponent* ParentComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSComponentBlueprintFunctionLibrary.CreateSceneComponent");
		
		UDSComponentBlueprintFunctionLibrary_CreateSceneComponent_Params params {};
		params.Actor = Actor;
		params.ComponentClass = ComponentClass;
		params.InstanceName = InstanceName;
		params.bVisibleInComponentHierarchy = bVisibleInComponentHierarchy;
		params.bIsRootComponent = bIsRootComponent;
		params.ParentComponent = ParentComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSComponentBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSComponentBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSComponentBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMapperActionOverrideConfigGroupArray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMapperActionOverrideConfigGroupArray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.InputMapperActionOverrideConfigGroupArray");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControllerLayoutControlSchemeMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControllerLayoutControlSchemeMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ControllerLayoutControlSchemeMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryAtomic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryAtomic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryAtomic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSInputOptionsEntryActionOverideConfigGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSInputOptionsEntryActionOverideConfigGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSInputOptionsEntryActionOverideConfigGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.TranslateConstraintPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComp                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PositionDelta                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        CoordinateSpaceBone                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::TranslateConstraintPosition(class USkeletalMeshComponent* SkeletalMeshComp, const class FName& BoneName, const struct FVector& PositionDelta, const class FName& CoordinateSpaceBone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.TranslateConstraintPosition");
		
		UDSPhysicsUtils_TranslateConstraintPosition_Params params {};
		params.SkeletalMeshComp = SkeletalMeshComp;
		params.BoneName = BoneName;
		params.PositionDelta = PositionDelta;
		params.CoordinateSpaceBone = CoordinateSpaceBone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.SetAllPhysicsAngularVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComp                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewAngVel                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddToCurrent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::SetAllPhysicsAngularVelocity(class USkeletalMeshComponent* SkeletalMeshComp, const struct FVector& NewAngVel, bool bAddToCurrent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.SetAllPhysicsAngularVelocity");
		
		UDSPhysicsUtils_SetAllPhysicsAngularVelocity_Params params {};
		params.SkeletalMeshComp = SkeletalMeshComp;
		params.NewAngVel = NewAngVel;
		params.bAddToCurrent = bAddToCurrent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.PutAllBodiesToSleep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComp                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::PutAllBodiesToSleep(class USkeletalMeshComponent* SkeletalMeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.PutAllBodiesToSleep");
		
		UDSPhysicsUtils_PutAllBodiesToSleep_Params params {};
		params.SkeletalMeshComp = SkeletalMeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.GetVectorSpringVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     CurrentPosition                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CurrentVelocity                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpringConstant                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpringDamping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UDSPhysicsUtils::GetVectorSpringVelocity(const struct FVector& CurrentPosition, const struct FVector& CurrentVelocity, float DeltaTime, float SpringConstant, float SpringDamping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.GetVectorSpringVelocity");
		
		UDSPhysicsUtils_GetVectorSpringVelocity_Params params {};
		params.CurrentPosition = CurrentPosition;
		params.CurrentVelocity = CurrentVelocity;
		params.DeltaTime = DeltaTime;
		params.SpringConstant = SpringConstant;
		params.SpringDamping = SpringDamping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.GetSpringVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentPosition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentVelocity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpringConstant                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpringDamping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDSPhysicsUtils::GetSpringVelocity(float CurrentPosition, float CurrentVelocity, float DeltaTime, float SpringConstant, float SpringDamping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.GetSpringVelocity");
		
		UDSPhysicsUtils_GetSpringVelocity_Params params {};
		params.CurrentPosition = CurrentPosition;
		params.CurrentVelocity = CurrentVelocity;
		params.DeltaTime = DeltaTime;
		params.SpringConstant = SpringConstant;
		params.SpringDamping = SpringDamping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.ExpLerpV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UDSPhysicsUtils::ExpLerpV(const struct FVector& X, const struct FVector& TargetX, float DeltaTime, float Rate, float MaxRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.ExpLerpV");
		
		UDSPhysicsUtils_ExpLerpV_Params params {};
		params.X = X;
		params.TargetX = TargetX;
		params.DeltaTime = DeltaTime;
		params.Rate = Rate;
		params.MaxRate = MaxRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.ExpLerp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TargetX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDSPhysicsUtils::ExpLerp(float X, float TargetX, float DeltaTime, float Rate, float MaxRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.ExpLerp");
		
		UDSPhysicsUtils_ExpLerp_Params params {};
		params.X = X;
		params.TargetX = TargetX;
		params.DeltaTime = DeltaTime;
		params.Rate = Rate;
		params.MaxRate = MaxRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSVectorSpringSetVel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewVel                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSVectorSpringState                        SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSVectorSpringSetVel(const struct FVector& NewVel, struct FDSVectorSpringState* SpringState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSVectorSpringSetVel");
		
		UDSPhysicsUtils_DSVectorSpringSetVel_Params params {};
		params.NewVel = NewVel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSVectorSpringSetPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewPos                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSVectorSpringState                        SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSVectorSpringSetPos(const struct FVector& NewPos, struct FDSVectorSpringState* SpringState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSVectorSpringSetPos");
		
		UDSPhysicsUtils_DSVectorSpringSetPos_Params params {};
		params.NewPos = NewPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSVectorSpringInterp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetPos                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSVectorSpringState                        SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              SpringConstant                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpringDamping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSVectorSpringInterp(const struct FVector& TargetPos, struct FDSVectorSpringState* SpringState, float SpringConstant, float SpringDamping, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSVectorSpringInterp");
		
		UDSPhysicsUtils_DSVectorSpringInterp_Params params {};
		params.TargetPos = TargetPos;
		params.SpringConstant = SpringConstant;
		params.SpringDamping = SpringDamping;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSVectorSpringAddToVel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AddToVel                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSVectorSpringState                        SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSVectorSpringAddToVel(const struct FVector& AddToVel, struct FDSVectorSpringState* SpringState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSVectorSpringAddToVel");
		
		UDSPhysicsUtils_DSVectorSpringAddToVel_Params params {};
		params.AddToVel = AddToVel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSVectorSpringAddToPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AddToPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSVectorSpringState                        SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSVectorSpringAddToPos(const struct FVector& AddToPos, struct FDSVectorSpringState* SpringState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSVectorSpringAddToPos");
		
		UDSPhysicsUtils_DSVectorSpringAddToPos_Params params {};
		params.AddToPos = AddToPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSFloatSpringSetVel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewVel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSFloatSpringState                         SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSFloatSpringSetVel(float NewVel, struct FDSFloatSpringState* SpringState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSFloatSpringSetVel");
		
		UDSPhysicsUtils_DSFloatSpringSetVel_Params params {};
		params.NewVel = NewVel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSFloatSpringSetPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewPos                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSFloatSpringState                         SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSFloatSpringSetPos(float NewPos, struct FDSFloatSpringState* SpringState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSFloatSpringSetPos");
		
		UDSPhysicsUtils_DSFloatSpringSetPos_Params params {};
		params.NewPos = NewPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSFloatSpringInterp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetPos                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSFloatSpringState                         SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              SpringConstant                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SpringDamping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSFloatSpringInterp(float TargetPos, struct FDSFloatSpringState* SpringState, float SpringConstant, float SpringDamping, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSFloatSpringInterp");
		
		UDSPhysicsUtils_DSFloatSpringInterp_Params params {};
		params.TargetPos = TargetPos;
		params.SpringConstant = SpringConstant;
		params.SpringDamping = SpringDamping;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSFloatSpringAddToVel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AddToVel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSFloatSpringState                         SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSFloatSpringAddToVel(float AddToVel, struct FDSFloatSpringState* SpringState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSFloatSpringAddToVel");
		
		UDSPhysicsUtils_DSFloatSpringAddToVel_Params params {};
		params.AddToVel = AddToVel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DSFloatSpringAddToPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AddToPos                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSFloatSpringState                         SpringState                                                (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDSPhysicsUtils::DSFloatSpringAddToPos(float AddToPos, struct FDSFloatSpringState* SpringState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DSFloatSpringAddToPos");
		
		UDSPhysicsUtils_DSFloatSpringAddToPos_Params params {};
		params.AddToPos = AddToPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpringState != nullptr)
			*SpringState = params.SpringState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.DirectionalExpLerpV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UDSPhysicsUtils::DirectionalExpLerpV(const struct FVector& X, const struct FVector& TargetX, float DeltaTime, float Rate, float MaxRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.DirectionalExpLerpV");
		
		UDSPhysicsUtils_DirectionalExpLerpV_Params params {};
		params.X = X;
		params.TargetX = TargetX;
		params.DeltaTime = DeltaTime;
		params.Rate = Rate;
		params.MaxRate = MaxRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.BoxSphereIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  BoxTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BoxExtents                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SpherePosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SphereRadius                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSPhysicsUtils::BoxSphereIntersection(const struct FTransform& BoxTransform, const struct FVector& BoxExtents, const struct FVector& SpherePosition, float SphereRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.BoxSphereIntersection");
		
		UDSPhysicsUtils_BoxSphereIntersection_Params params {};
		params.BoxTransform = BoxTransform;
		params.BoxExtents = BoxExtents;
		params.SpherePosition = SpherePosition;
		params.SphereRadius = SphereRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.BoxPlaneTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      Plane                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  BoxTranform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BoxExtents                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDSPhysicsUtils::BoxPlaneTest(const struct FPlane& Plane, const struct FTransform& BoxTranform, const struct FVector& BoxExtents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.BoxPlaneTest");
		
		UDSPhysicsUtils_BoxPlaneTest_Params params {};
		params.Plane = Plane;
		params.BoxTranform = BoxTranform;
		params.BoxExtents = BoxExtents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.BoxPlaneIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      Plane                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  BoxTranform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BoxExtents                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSPhysicsUtils::BoxPlaneIntersection(const struct FPlane& Plane, const struct FTransform& BoxTranform, const struct FVector& BoxExtents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.BoxPlaneIntersection");
		
		UDSPhysicsUtils_BoxPlaneIntersection_Params params {};
		params.Plane = Plane;
		params.BoxTranform = BoxTranform;
		params.BoxExtents = BoxExtents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.ApproxOneMinusExp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDSPhysicsUtils::ApproxOneMinusExp(float X)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.ApproxOneMinusExp");
		
		UDSPhysicsUtils_ApproxOneMinusExp_Params params {};
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.DSPhysicsUtils.ApproxExp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDSPhysicsUtils::ApproxExp(float X)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.DSPhysicsUtils.ApproxExp");
		
		UDSPhysicsUtils_ApproxExp_Params params {};
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSPhysicsUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSPhysicsUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSPhysicsUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSSignificanceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSSignificanceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSSignificanceManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSStaticMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSStatsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSStatsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSStatsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSTableAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSTableAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSTableAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSTextAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSTextAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSTextAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADSTreeShakeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADSTreeShakeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.DSTreeShakeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ExclusiveUser.HasExclusiveUser
	 * 		Flags  -> ()
	 */
	bool UExclusiveUser::HasExclusiveUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ExclusiveUser.HasExclusiveUser");
		
		UExclusiveUser_HasExclusiveUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ExclusiveUser.ClearExclusiveUser
	 * 		Flags  -> ()
	 */
	void UExclusiveUser::ClearExclusiveUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ExclusiveUser.ClearExclusiveUser");
		
		UExclusiveUser_ClearExclusiveUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ExclusiveUser.AcquireExclusiveUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UExclusiveUser::AcquireExclusiveUser(int32_t ControllerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ExclusiveUser.AcquireExclusiveUser");
		
		UExclusiveUser_AcquireExclusiveUser_Params params {};
		params.ControllerIndex = ControllerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExclusiveUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExclusiveUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ExclusiveUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.FadeableAttachmentInterface.SetFadeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FadeValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFadeableAttachmentInterface::SetFadeValue(float FadeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.FadeableAttachmentInterface.SetFadeValue");
		
		UFadeableAttachmentInterface_SetFadeValue_Params params {};
		params.FadeValue = FadeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFadeableAttachmentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFadeableAttachmentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.FadeableAttachmentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.FeatureAvailabilityManager.RemoveUnavailableReasonFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Feature                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFeatureAvailabilityManager::RemoveUnavailableReasonFor(const class FName& Feature, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.FeatureAvailabilityManager.RemoveUnavailableReasonFor");
		
		UFeatureAvailabilityManager_RemoveUnavailableReasonFor_Params params {};
		params.Feature = Feature;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.FeatureAvailabilityManager.IsFeatureAvailable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Feature                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFeatureAvailabilityManager::IsFeatureAvailable(const class FName& Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.FeatureAvailabilityManager.IsFeatureAvailable");
		
		UFeatureAvailabilityManager_IsFeatureAvailable_Params params {};
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.FeatureAvailabilityManager.AddUnavailableReasonFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Feature                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFeatureAvailabilityManager::AddUnavailableReasonFor(const class FName& Feature, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.FeatureAvailabilityManager.AddUnavailableReasonFor");
		
		UFeatureAvailabilityManager_AddUnavailableReasonFor_Params params {};
		params.Feature = Feature;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFeatureAvailabilityManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFeatureAvailabilityManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.FeatureAvailabilityManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFilterActorDemoFilterList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFilterActorDemoFilterList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.FilterActorDemoFilterList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoolFiniteOptionsProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoolFiniteOptionsProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.BoolFiniteOptionsProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntFiniteOptionsProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntFiniteOptionsProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.IntFiniteOptionsProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatFiniteOptionsProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatFiniteOptionsProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.FloatFiniteOptionsProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULanguagesFiniteOptionsProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULanguagesFiniteOptionsProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.LanguagesFiniteOptionsProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameAchievementsPersistentState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameAchievementsPersistentState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GameAchievementsPersistentState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxMultiKeyIcon.SetKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key1                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key2                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMultiKeyIcon::SetKeys(const struct FKey& Key1, const struct FKey& Key2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxMultiKeyIcon.SetKeys");
		
		UGFxMultiKeyIcon_SetKeys_Params params {};
		params.Key1 = Key1;
		params.Key2 = Key2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxMultiKeyIcon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxMultiKeyIcon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxMultiKeyIcon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxActionIcon.SetAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputMapperAction*                          Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanSendChangedEvent                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxActionIcon::SetAction(class UInputMapperAction* Action, bool bCanSendChangedEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxActionIcon.SetAction");
		
		UGFxActionIcon_SetAction_Params params {};
		params.Action = Action;
		params.bCanSendChangedEvent = bCanSendChangedEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxActionIcon.OnHoldProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputActionHoldEventType                          Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ProgressPct                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxActionIcon::OnHoldProgress(EInputActionHoldEventType Type, float ProgressPct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxActionIcon.OnHoldProgress");
		
		UGFxActionIcon_OnHoldProgress_Params params {};
		params.Type = Type;
		params.ProgressPct = ProgressPct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxActionIcon.OnActionOverrideConfigChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputMapperActionOverrideConfig*            Config                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxActionIcon::OnActionOverrideConfigChanged(class UInputMapperActionOverrideConfig* Config)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxActionIcon.OnActionOverrideConfigChanged");
		
		UGFxActionIcon_OnActionOverrideConfigChanged_Params params {};
		params.Config = Config;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxActionIcon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxActionIcon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxActionIcon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxArray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxArray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxArray");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxCompareIcon.ShowInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ShowValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BaseValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxCompareIcon::ShowInt(int32_t ShowValue, int32_t BaseValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxCompareIcon.ShowInt");
		
		UGFxCompareIcon_ShowInt_Params params {};
		params.ShowValue = ShowValue;
		params.BaseValue = BaseValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxCompareIcon.ShowFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ShowValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BaseValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxCompareIcon::ShowFloat(float ShowValue, float BaseValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxCompareIcon.ShowFloat");
		
		UGFxCompareIcon_ShowFloat_Params params {};
		params.ShowValue = ShowValue;
		params.BaseValue = BaseValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxCompareIcon.Hide
	 * 		Flags  -> ()
	 */
	void UGFxCompareIcon::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxCompareIcon.Hide");
		
		UGFxCompareIcon_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxCompareIcon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxCompareIcon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxCompareIcon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDeltaProgressBar.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDeltaProgressBar::Tick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDeltaProgressBar.Tick");
		
		UGFxDeltaProgressBar_Tick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDeltaProgressBar.ShortcutAnimation
	 * 		Flags  -> ()
	 */
	void UGFxDeltaProgressBar::ShortcutAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDeltaProgressBar.ShortcutAnimation");
		
		UGFxDeltaProgressBar_ShortcutAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDeltaProgressBar.SetUseAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInUseAnimation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDeltaProgressBar::SetUseAnimation(bool bInUseAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDeltaProgressBar.SetUseAnimation");
		
		UGFxDeltaProgressBar_SetUseAnimation_Params params {};
		params.bInUseAnimation = bInUseAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDeltaProgressBar.SetShowProgressValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CompareValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDeltaProgressBar::SetShowProgressValues(float BaseValue, float CompareValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDeltaProgressBar.SetShowProgressValues");
		
		UGFxDeltaProgressBar_SetShowProgressValues_Params params {};
		params.BaseValue = BaseValue;
		params.CompareValue = CompareValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDeltaProgressBar.SetShowProgressValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDeltaProgressBar::SetShowProgressValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDeltaProgressBar.SetShowProgressValue");
		
		UGFxDeltaProgressBar_SetShowProgressValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxDeltaProgressBar.SetPlayProgressValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxDeltaProgressBar::SetPlayProgressValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxDeltaProgressBar.SetPlayProgressValue");
		
		UGFxDeltaProgressBar_SetPlayProgressValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxDeltaProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxDeltaProgressBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxDeltaProgressBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxImageStreamer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxImageStreamer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxImageStreamer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxKeyIcon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxKeyIcon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxKeyIcon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxProgressBar.SetProgressValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxProgressBar::SetProgressValue(float NewValue, bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxProgressBar.SetProgressValue");
		
		UGFxProgressBar_SetProgressValue_Params params {};
		params.NewValue = NewValue;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxProgressBar.IsEmpty
	 * 		Flags  -> ()
	 */
	bool UGFxProgressBar::IsEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxProgressBar.IsEmpty");
		
		UGFxProgressBar_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxProgressBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxProgressBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxProgressBar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxTextfield.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxTextfield::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxTextfield.SetTextColor");
		
		UGFxTextfield_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxTextfield.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxTextfield::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxTextfield.SetText");
		
		UGFxTextfield_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxTextfield.GetTextWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutWidth                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxTextfield::GetTextWidth(float* OutWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxTextfield.GetTextWidth");
		
		UGFxTextfield_GetTextWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidth != nullptr)
			*OutWidth = params.OutWidth;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxTextfield.GetTextHTML
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutText                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxTextfield::GetTextHTML(class FString* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxTextfield.GetTextHTML");
		
		UGFxTextfield_GetTextHTML_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxTextfield.GetTextHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxTextfield::GetTextHeight(float* OutHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxTextfield.GetTextHeight");
		
		UGFxTextfield_GetTextHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHeight != nullptr)
			*OutHeight = params.OutHeight;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxTextfield.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutText                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxTextfield::GetText(class FString* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxTextfield.GetText");
		
		UGFxTextfield_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxTextfield.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxTextfield::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxTextfield");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxUIAligner.RefreshPositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUpdatePositionsImmediately                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxUIAligner::RefreshPositions(bool bUpdatePositionsImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxUIAligner.RefreshPositions");
		
		UGFxUIAligner_RefreshPositions_Params params {};
		params.bUpdatePositionsImmediately = bUpdatePositionsImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GFxUIAligner.RefreshElements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUpdatePositionsImmediately                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxUIAligner::RefreshElements(bool bUpdatePositionsImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GFxUIAligner.RefreshElements");
		
		UGFxUIAligner_RefreshElements_Params params {};
		params.bUpdatePositionsImmediately = bUpdatePositionsImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxUIAligner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxUIAligner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GFxUIAligner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GlobalFactsFunctionLibrary.IsLocalGameWorldObscured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContextActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGlobalFactsFunctionLibrary::IsLocalGameWorldObscured(class AActor* ContextActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GlobalFactsFunctionLibrary.IsLocalGameWorldObscured");
		
		UGlobalFactsFunctionLibrary_IsLocalGameWorldObscured_Params params {};
		params.ContextActor = ContextActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.GlobalFactsFunctionLibrary.IsGameWorldObscured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContextActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGlobalFactsFunctionLibrary::IsGameWorldObscured(class AActor* ContextActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.GlobalFactsFunctionLibrary.IsGameWorldObscured");
		
		UGlobalFactsFunctionLibrary_IsGameWorldObscured_Params params {};
		params.ContextActor = ContextActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalFactsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalFactsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GlobalFactsFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionHandlerProxy_GraphicsMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionHandlerProxy_GraphicsMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionHandlerProxy_GraphicsMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupPresetsFiniteOptionsProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupPresetsFiniteOptionsProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.GroupPresetsFiniteOptionsProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHideable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHideable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.Hideable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.InventoryCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PossessionListenerInterface.OnUnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDummyOutput                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessionListenerInterface::OnUnPossess(class APawn* Pawn, bool* bDummyOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PossessionListenerInterface.OnUnPossess");
		
		UPossessionListenerInterface_OnUnPossess_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDummyOutput != nullptr)
			*bDummyOutput = params.bDummyOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PossessionListenerInterface.OnPreUnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDummyOutput                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessionListenerInterface::OnPreUnPossess(class APawn* Pawn, bool* bDummyOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PossessionListenerInterface.OnPreUnPossess");
		
		UPossessionListenerInterface_OnPreUnPossess_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDummyOutput != nullptr)
			*bDummyOutput = params.bDummyOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PossessionListenerInterface.OnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDummyOutput                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPossessionListenerInterface::OnPossess(class APawn* Pawn, bool* bDummyOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PossessionListenerInterface.OnPossess");
		
		UPossessionListenerInterface_OnPossess_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDummyOutput != nullptr)
			*bDummyOutput = params.bDummyOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPossessionListenerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPossessionListenerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PossessionListenerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemAssignmentShortcutGroupConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemAssignmentShortcutGroupConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemAssignmentShortcutGroupConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.SwapItemShortcut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemActor*                                  Item1                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index1                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemActor*                                  Item2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index2                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UItemAssignmentShortcutGroupInstance::SwapItemShortcut(class AItemActor* Item1, int32_t Index1, class AItemActor* Item2, int32_t Index2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.SwapItemShortcut");
		
		UItemAssignmentShortcutGroupInstance_SwapItemShortcut_Params params {};
		params.Item1 = Item1;
		params.Index1 = Index1;
		params.Item2 = Item2;
		params.Index2 = Index2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.SetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ShortcutIndexIn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UItemAssignmentShortcutGroupInstance::SetSelectedItem(int32_t ShortcutIndexIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.SetSelectedItem");
		
		UItemAssignmentShortcutGroupInstance_SetSelectedItem_Params params {};
		params.ShortcutIndexIn = ShortcutIndexIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.ServerAssignShortcutGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquippableComponent*                        ShortcutItem                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ShortcutIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UItemAssignmentShortcutGroupInstance::ServerAssignShortcutGroup(class UEquippableComponent* ShortcutItem, int32_t ShortcutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.ServerAssignShortcutGroup");
		
		UItemAssignmentShortcutGroupInstance_ServerAssignShortcutGroup_Params params {};
		params.ShortcutItem = ShortcutItem;
		params.ShortcutIndex = ShortcutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.SelectPreviousItem
	 * 		Flags  -> ()
	 */
	void UItemAssignmentShortcutGroupInstance::SelectPreviousItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.SelectPreviousItem");
		
		UItemAssignmentShortcutGroupInstance_SelectPreviousItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.SelectNextItem
	 * 		Flags  -> ()
	 */
	void UItemAssignmentShortcutGroupInstance::SelectNextItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.SelectNextItem");
		
		UItemAssignmentShortcutGroupInstance_SelectNextItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.RemoveItemShortcut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquippableComponent*                        ItemToRemove                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UItemAssignmentShortcutGroupInstance::RemoveItemShortcut(class UEquippableComponent* ItemToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.RemoveItemShortcut");
		
		UItemAssignmentShortcutGroupInstance_RemoveItemShortcut_Params params {};
		params.ItemToRemove = ItemToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.GetLastSelectedItem
	 * 		Flags  -> ()
	 */
	class UEquippableComponent* UItemAssignmentShortcutGroupInstance::GetLastSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.GetLastSelectedItem");
		
		UItemAssignmentShortcutGroupInstance_GetLastSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.GetItemAtShortcutIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AItemActor* UItemAssignmentShortcutGroupInstance::GetItemAtShortcutIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.GetItemAtShortcutIndex");
		
		UItemAssignmentShortcutGroupInstance_GetItemAtShortcutIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.GetIndexForShortcutItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemActor*                                  QueryItem                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UItemAssignmentShortcutGroupInstance::GetIndexForShortcutItem(class AItemActor* QueryItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.GetIndexForShortcutItem");
		
		UItemAssignmentShortcutGroupInstance_GetIndexForShortcutItem_Params params {};
		params.QueryItem = QueryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.GetEquippableAtShortcutIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEquippableComponent* UItemAssignmentShortcutGroupInstance::GetEquippableAtShortcutIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.GetEquippableAtShortcutIndex");
		
		UItemAssignmentShortcutGroupInstance_GetEquippableAtShortcutIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.ClientInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGuid>                               InClientShortcutIds                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InSelectedShortcut                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UItemAssignmentShortcutGroupInstance::ClientInitialize(TArray<struct FGuid> InClientShortcutIds, int32_t InSelectedShortcut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.ClientInitialize");
		
		UItemAssignmentShortcutGroupInstance_ClientInitialize_Params params {};
		params.InClientShortcutIds = InClientShortcutIds;
		params.InSelectedShortcut = InSelectedShortcut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.CanEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquippableComponent*                        Equippable                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UItemAssignmentShortcutGroupInstance::CanEquip(class UEquippableComponent* Equippable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.CanEquip");
		
		UItemAssignmentShortcutGroupInstance_CanEquip_Params params {};
		params.Equippable = Equippable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemAssignmentShortcutGroupInstance.AssignItemShortcut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquippableComponent*                        Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UItemAssignmentShortcutGroupInstance::AssignItemShortcut(class UEquippableComponent* Item, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemAssignmentShortcutGroupInstance.AssignItemShortcut");
		
		UItemAssignmentShortcutGroupInstance_AssignItemShortcut_Params params {};
		params.Item = Item;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemAssignmentShortcutGroupInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemAssignmentShortcutGroupInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemAssignmentShortcutGroupInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemFactory.CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemCreationParams                         Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AItemActor* UItemFactory::CreateItem(const struct FItemCreationParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemFactory.CreateItem");
		
		UItemFactory_CreateItem_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemFactoryDefault.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemFactoryDefault::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemFactoryDefault");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemFactoryManager.FindOrCreateFactory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemArchetype*                              ItemArchetype                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AItemFactoryManager::FindOrCreateFactory(class UItemArchetype* ItemArchetype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemFactoryManager.FindOrCreateFactory");
		
		AItemFactoryManager_FindOrCreateFactory_Params params {};
		params.ItemArchetype = ItemArchetype;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AItemFactoryManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AItemFactoryManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemFactoryManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemFactoryNonInstanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemFactoryNonInstanced::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemFactoryNonInstanced");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemHelpers.CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItemArchetype*                              ItemArchetype                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItemInstanceData*                           InstanceData                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AItemActor* UItemHelpers::CreateItem(class UObject* Outer, class UItemArchetype* ItemArchetype, class UItemInstanceData* InstanceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemHelpers.CreateItem");
		
		UItemHelpers_CreateItem_Params params {};
		params.Outer = Outer;
		params.ItemArchetype = ItemArchetype;
		params.InstanceData = InstanceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemStatDisplayInfo.GetStatGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StatGroupIdentifier                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UItemStatDisplayInfo::GetStatGroup(const class FName& StatGroupIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemStatDisplayInfo.GetStatGroup");
		
		UItemStatDisplayInfo_GetStatGroup_Params params {};
		params.StatGroupIdentifier = StatGroupIdentifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemStatDisplayInfo.GetStatContibutors
	 * 		Flags  -> ()
	 */
	TArray<struct FItemStatContributorData> UItemStatDisplayInfo::GetStatContibutors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemStatDisplayInfo.GetStatContibutors");
		
		UItemStatDisplayInfo_GetStatContibutors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemStatDisplayInfo.GetStatContibutorInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ContributorIdentifier                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FItemStatContributorData UItemStatDisplayInfo::GetStatContibutorInfo(const class FName& ContributorIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemStatDisplayInfo.GetStatContibutorInfo");
		
		UItemStatDisplayInfo_GetStatContibutorInfo_Params params {};
		params.ContributorIdentifier = ContributorIdentifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.ItemStatDisplayInfo.GetDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StatType                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FItemStatDisplayRules UItemStatDisplayInfo::GetDisplayInfo(const class FName& StatType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.ItemStatDisplayInfo.GetDisplayInfo");
		
		UItemStatDisplayInfo_GetDisplayInfo_Params params {};
		params.StatType = StatType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemStatDisplayInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemStatDisplayInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemStatDisplayInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemRarityDatas.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemRarityDatas::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ItemRarityDatas");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.LookAtTargetCameraModifier.SetTargetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULookAtTargetCameraModifier::SetTargetPosition(const struct FVector& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.LookAtTargetCameraModifier.SetTargetPosition");
		
		ULookAtTargetCameraModifier_SetTargetPosition_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookAtTargetCameraModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtTargetCameraModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.LookAtTargetCameraModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionCompletionChallengeDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionCompletionChallengeDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.MissionCompletionChallengeDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.MissionCompletionChallengeRuntimeObject.OnMissionStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionInstance*                            MissionInstance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMissionState                                      NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMissionState                                      LeavingState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionCompletionChallengeRuntimeObject::OnMissionStateChanged(class UMissionInstance* MissionInstance, EMissionState NewState, EMissionState LeavingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.MissionCompletionChallengeRuntimeObject.OnMissionStateChanged");
		
		UMissionCompletionChallengeRuntimeObject_OnMissionStateChanged_Params params {};
		params.MissionInstance = MissionInstance;
		params.NewState = NewState;
		params.LeavingState = LeavingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionCompletionChallengeRuntimeObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionCompletionChallengeRuntimeObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.MissionCompletionChallengeRuntimeObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModularAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModularAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ModularAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMontageActionParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMontageActionParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.MontageActionParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMontageAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMontageAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.MontageAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveTargetParamsConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveTargetParamsConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.MoveTargetParamsConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryInteger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryInteger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryInteger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryBool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryBool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryBool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryMenuBool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryMenuBool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryMenuBool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryString");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryEnum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryEnum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryEnum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryMenuString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryMenuString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryMenuString");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryMenuInteger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryMenuInteger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryMenuInteger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryMenuFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryMenuFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryMenuFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryMenuEnum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryMenuEnum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryMenuEnum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryPresetGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryPresetGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryPresetGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsCollectionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsCollectionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsCollectionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionHandlerProxy_GroupPresets.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionHandlerProxy_GroupPresets::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionHandlerProxy_GroupPresets");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsEntryInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsEntryInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsEntryInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOption.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOption::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.Option");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsHierarchyPersistentState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsHierarchyPersistentState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsHierarchyPersistentState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.OptionsManager.GetPresentationProxy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       InHierarchyGuid                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InOptionPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPresentationProxy* UOptionsManager::GetPresentationProxy(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.OptionsManager.GetPresentationProxy");
		
		UOptionsManager_GetPresentationProxy_Params params {};
		params.InHierarchyGuid = InHierarchyGuid;
		params.InOptionPath = InOptionPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.OptionsManager.GetOptionStringValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       InHierarchyGuid                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InOptionPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutOptionValue                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptionsManager::GetOptionStringValue(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath, class FString* OutOptionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.OptionsManager.GetOptionStringValue");
		
		UOptionsManager_GetOptionStringValue_Params params {};
		params.InHierarchyGuid = InHierarchyGuid;
		params.InOptionPath = InOptionPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOptionValue != nullptr)
			*OutOptionValue = params.OutOptionValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.OptionsManager.GetOptionIntValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       InHierarchyGuid                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InOptionPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutOptionValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptionsManager::GetOptionIntValue(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath, int32_t* OutOptionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.OptionsManager.GetOptionIntValue");
		
		UOptionsManager_GetOptionIntValue_Params params {};
		params.InHierarchyGuid = InHierarchyGuid;
		params.InOptionPath = InOptionPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOptionValue != nullptr)
			*OutOptionValue = params.OutOptionValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.OptionsManager.GetOptionFloatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       InHierarchyGuid                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InOptionPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutOptionValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptionsManager::GetOptionFloatValue(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath, float* OutOptionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.OptionsManager.GetOptionFloatValue");
		
		UOptionsManager_GetOptionFloatValue_Params params {};
		params.InHierarchyGuid = InHierarchyGuid;
		params.InOptionPath = InOptionPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOptionValue != nullptr)
			*OutOptionValue = params.OutOptionValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.OptionsManager.GetOptionBoolValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       InHierarchyGuid                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InOptionPath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OutOptionValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptionsManager::GetOptionBoolValue(const struct FGuid& InHierarchyGuid, const class FString& InOptionPath, bool* OutOptionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.OptionsManager.GetOptionBoolValue");
		
		UOptionsManager_GetOptionBoolValue_Params params {};
		params.InHierarchyGuid = InHierarchyGuid;
		params.InOptionPath = InOptionPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOptionValue != nullptr)
			*OutOptionValue = params.OutOptionValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.OptionsManager.GetGuidForOptionsHierarchy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InOptionsHierarchyPath                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UOptionsManager::GetGuidForOptionsHierarchy(const class FString& InOptionsHierarchyPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.OptionsManager.GetGuidForOptionsHierarchy");
		
		UOptionsManager_GetGuidForOptionsHierarchy_Params params {};
		params.InOptionsHierarchyPath = InOptionsHierarchyPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionStorageBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionStorageBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionStorageBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionStorageFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionStorageFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionStorageFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionStorageFileGameUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionStorageFileGameUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionStorageFileGameUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.OptionStoragePersistentData.OnSetUserProfilePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUserProfilePath                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOptionStoragePersistentData::OnSetUserProfilePath(const class FString& InUserProfilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.OptionStoragePersistentData.OnSetUserProfilePath");
		
		UOptionStoragePersistentData_OnSetUserProfilePath_Params params {};
		params.InUserProfilePath = InUserProfilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionStoragePersistentData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionStoragePersistentData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.OptionStoragePersistentData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollSlot.ServerAssignItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquippableComponent*                        Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperDollSlot::ServerAssignItem(class UEquippableComponent* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollSlot.ServerAssignItem");
		
		UPaperDollSlot_ServerAssignItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollSlot.OnRep_AuthorityAssignedItem
	 * 		Flags  -> ()
	 */
	void UPaperDollSlot::OnRep_AuthorityAssignedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollSlot.OnRep_AuthorityAssignedItem");
		
		UPaperDollSlot_OnRep_AuthorityAssignedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollSlot.OnItemReadyForRemoval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEquippableComponent*                        EquippableItem                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPaperDollSlot::OnItemReadyForRemoval(class UEquippableComponent* EquippableItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollSlot.OnItemReadyForRemoval");
		
		UPaperDollSlot_OnItemReadyForRemoval_Params params {};
		params.EquippableItem = EquippableItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollSlot.GetUser
	 * 		Flags  -> ()
	 */
	class AActor* UPaperDollSlot::GetUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollSlot.GetUser");
		
		UPaperDollSlot_GetUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperDollSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperDollSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PaperDollSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollSlotGroup.K2_SelectedItemChanged
	 * 		Flags  -> ()
	 */
	void UPaperDollSlotGroup::K2_SelectedItemChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollSlotGroup.K2_SelectedItemChanged");
		
		UPaperDollSlotGroup_K2_SelectedItemChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperDollSlotGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperDollSlotGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PaperDollSlotGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PaperDollState.OnRep_PaperDollUser
	 * 		Flags  -> ()
	 */
	void APaperDollState::OnRep_PaperDollUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PaperDollState.OnRep_PaperDollUser");
		
		APaperDollState_OnRep_PaperDollUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APaperDollState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APaperDollState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PaperDollState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperDollSetup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaperDollSetup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PaperDollSetup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APauseManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APauseManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PauseManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsAssetCacheEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsAssetCacheEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PhysicsAssetCacheEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsAssetCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsAssetCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PhysicsAssetCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APhysicsAssetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APhysicsAssetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PhysicsAssetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsAssetManagerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsAssetManagerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PhysicsAssetManagerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PlayerUtils.BlueprintIsLocallyControlledPlayerFromPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlayerUtils::BlueprintIsLocallyControlledPlayerFromPawn(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PlayerUtils.BlueprintIsLocallyControlledPlayerFromPawn");
		
		UPlayerUtils_BlueprintIsLocallyControlledPlayerFromPawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PlayerUtils.BlueprintIsLocallyControlledPlayerFromController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlayerUtils::BlueprintIsLocallyControlledPlayerFromController(class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PlayerUtils.BlueprintIsLocallyControlledPlayerFromController");
		
		UPlayerUtils_BlueprintIsLocallyControlledPlayerFromController_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.PlayerUtils.BlueprintIsLocallyControlledPlayerFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlayerUtils::BlueprintIsLocallyControlledPlayerFromActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.PlayerUtils.BlueprintIsLocallyControlledPlayerFromActor");
		
		UPlayerUtils_BlueprintIsLocallyControlledPlayerFromActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PlayerUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPushTypePriorityConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPushTypePriorityConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.PushTypePriorityConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicatedGeneralAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicatedGeneralAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.ReplicatedGeneralAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionCallbackProxy.OnResolvedAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnResolvedParams            ResolvedParams                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionCallbackProxy::OnResolvedAction(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& ResolvedParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionCallbackProxy.OnResolvedAction");
		
		URequestCharacterActionCallbackProxy_OnResolvedAction_Params params {};
		params.RequestId = RequestId;
		params.ResolvedParams = ResolvedParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionCallbackProxy.OnEndAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnEndParams                 EndParams                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionCallbackProxy::OnEndAction(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& EndParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionCallbackProxy.OnEndAction");
		
		URequestCharacterActionCallbackProxy_OnEndAction_Params params {};
		params.RequestId = RequestId;
		params.EndParams = EndParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionCallbackProxy.OnCustomSignalReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnCustomSignalParams        CustomSignalParams                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionCallbackProxy::OnCustomSignalReceived(const struct FGuid& RequestId, const struct FCharacterActionOnCustomSignalParams& CustomSignalParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionCallbackProxy.OnCustomSignalReceived");
		
		URequestCharacterActionCallbackProxy_OnCustomSignalReceived_Params params {};
		params.RequestId = RequestId;
		params.CustomSignalParams = CustomSignalParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionCallbackProxy.OnCancelledAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnCancelledParams           CancelledParams                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionCallbackProxy::OnCancelledAction(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& CancelledParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionCallbackProxy.OnCancelledAction");
		
		URequestCharacterActionCallbackProxy_OnCancelledAction_Params params {};
		params.RequestId = RequestId;
		params.CancelledParams = CancelledParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionCallbackProxy.OnBeginAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnBeginParams               BeginParams                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionCallbackProxy::OnBeginAction(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& BeginParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionCallbackProxy.OnBeginAction");
		
		URequestCharacterActionCallbackProxy_OnBeginAction_Params params {};
		params.RequestId = RequestId;
		params.BeginParams = BeginParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionCallbackProxy.IsRequestValid
	 * 		Flags  -> ()
	 */
	bool URequestCharacterActionCallbackProxy::IsRequestValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionCallbackProxy.IsRequestValid");
		
		URequestCharacterActionCallbackProxy_IsRequestValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionCallbackProxy.EndAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterActionEndReason                          Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWaitForActionEnd                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionCallbackProxy::EndAction(ECharacterActionEndReason Reason, float DelayTime, bool bWaitForActionEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionCallbackProxy.EndAction");
		
		URequestCharacterActionCallbackProxy_EndAction_Params params {};
		params.Reason = Reason;
		params.DelayTime = DelayTime;
		params.bWaitForActionEnd = bWaitForActionEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionCallbackProxy.CreateProxyObjectForRequestCharacterAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterActionComponent*                   InCharacterActionComponent                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionRequestParams               RequestParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ECharacterActionHelperReferenceType                InReferenceType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       OutRequestId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URequestCharacterActionCallbackProxy* URequestCharacterActionCallbackProxy::CreateProxyObjectForRequestCharacterAction(class UCharacterActionComponent* InCharacterActionComponent, const struct FCharacterActionRequestParams& RequestParams, ECharacterActionHelperReferenceType InReferenceType, struct FGuid* OutRequestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionCallbackProxy.CreateProxyObjectForRequestCharacterAction");
		
		URequestCharacterActionCallbackProxy_CreateProxyObjectForRequestCharacterAction_Params params {};
		params.InCharacterActionComponent = InCharacterActionComponent;
		params.RequestParams = RequestParams;
		params.InReferenceType = InReferenceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRequestId != nullptr)
			*OutRequestId = params.OutRequestId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionCallbackProxy.Activate
	 * 		Flags  -> ()
	 */
	void URequestCharacterActionCallbackProxy::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionCallbackProxy.Activate");
		
		URequestCharacterActionCallbackProxy_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URequestCharacterActionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URequestCharacterActionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.RequestCharacterActionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnResolvedAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnResolvedParams            ResolvedParams                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionOnMultipleActorsCallbackProxy::OnResolvedAction(const struct FGuid& RequestId, const struct FCharacterActionOnResolvedParams& ResolvedParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnResolvedAction");
		
		URequestCharacterActionOnMultipleActorsCallbackProxy_OnResolvedAction_Params params {};
		params.RequestId = RequestId;
		params.ResolvedParams = ResolvedParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnEndAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnEndParams                 EndParams                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionOnMultipleActorsCallbackProxy::OnEndAction(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& EndParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnEndAction");
		
		URequestCharacterActionOnMultipleActorsCallbackProxy_OnEndAction_Params params {};
		params.RequestId = RequestId;
		params.EndParams = EndParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnCancelledAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnCancelledParams           CancelledParams                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionOnMultipleActorsCallbackProxy::OnCancelledAction(const struct FGuid& RequestId, const struct FCharacterActionOnCancelledParams& CancelledParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnCancelledAction");
		
		URequestCharacterActionOnMultipleActorsCallbackProxy_OnCancelledAction_Params params {};
		params.RequestId = RequestId;
		params.CancelledParams = CancelledParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnBeginAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       RequestId                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionOnBeginParams               BeginParams                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionOnMultipleActorsCallbackProxy::OnBeginAction(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& BeginParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.OnBeginAction");
		
		URequestCharacterActionOnMultipleActorsCallbackProxy_OnBeginAction_Params params {};
		params.RequestId = RequestId;
		params.BeginParams = BeginParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.EndAllActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterActionEndReason                          Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URequestCharacterActionOnMultipleActorsCallbackProxy::EndAllActions(ECharacterActionEndReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.EndAllActions");
		
		URequestCharacterActionOnMultipleActorsCallbackProxy_EndAllActions_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.CreateProxyObjectForRequestCharacterAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCharacterActionRequestParams               RequestParams                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ECharacterActionHelperReferenceType                InReferenceType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URequestCharacterActionOnMultipleActorsCallbackProxy* URequestCharacterActionOnMultipleActorsCallbackProxy::CreateProxyObjectForRequestCharacterAction(TArray<class AActor*> Actors, const struct FCharacterActionRequestParams& RequestParams, ECharacterActionHelperReferenceType InReferenceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy.CreateProxyObjectForRequestCharacterAction");
		
		URequestCharacterActionOnMultipleActorsCallbackProxy_CreateProxyObjectForRequestCharacterAction_Params params {};
		params.Actors = Actors;
		params.RequestParams = RequestParams;
		params.InReferenceType = InReferenceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URequestCharacterActionOnMultipleActorsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URequestCharacterActionOnMultipleActorsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.RequestCharacterActionOnMultipleActorsCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneContextComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneContextComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.SceneContextComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetKBFactAttachmentModule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetKBFactAttachmentModule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.SetKBFactAttachmentModule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.SlomoManager.RemoveBlockReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BlockReason                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASlomoManager::RemoveBlockReason(const class FName& BlockReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.SlomoManager.RemoveBlockReason");
		
		ASlomoManager_RemoveBlockReason_Params params {};
		params.BlockReason = BlockReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.SlomoManager.GetTimeDilation
	 * 		Flags  -> ()
	 */
	float ASlomoManager::GetTimeDilation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.SlomoManager.GetTimeDilation");
		
		ASlomoManager_GetTimeDilation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.SlomoManager.GetSlomoManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ASlomoManager* ASlomoManager::GetSlomoManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.SlomoManager.GetSlomoManager");
		
		ASlomoManager_GetSlomoManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.SlomoManager.EndSlomoRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlomoHandle                                Handle                                                     (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bBlendOut                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASlomoManager::EndSlomoRequest(const struct FSlomoHandle& Handle, bool bBlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.SlomoManager.EndSlomoRequest");
		
		ASlomoManager_EndSlomoRequest_Params params {};
		params.Handle = Handle;
		params.bBlendOut = bBlendOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.SlomoManager.DoesGroupExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASlomoManager::DoesGroupExist(const class FName& Group)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.SlomoManager.DoesGroupExist");
		
		ASlomoManager_DoesGroupExist_Params params {};
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.SlomoManager.AnySlomoActive
	 * 		Flags  -> ()
	 */
	bool ASlomoManager::AnySlomoActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.SlomoManager.AnySlomoActive");
		
		ASlomoManager_AnySlomoActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.SlomoManager.AddStateSlomoRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStateSlomoRequest                          Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSlomoHandle ASlomoManager::AddStateSlomoRequest(const struct FStateSlomoRequest& Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.SlomoManager.AddStateSlomoRequest");
		
		ASlomoManager_AddStateSlomoRequest_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.SlomoManager.AddSlomoRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlomoRequest                               Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSlomoHandle ASlomoManager::AddSlomoRequest(const struct FSlomoRequest& Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.SlomoManager.AddSlomoRequest");
		
		ASlomoManager_AddSlomoRequest_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.SlomoManager.AddBlockReason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BlockReason                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASlomoManager::AddBlockReason(const class FName& BlockReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.SlomoManager.AddBlockReason");
		
		ASlomoManager_AddBlockReason_Params params {};
		params.BlockReason = BlockReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASlomoManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASlomoManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.SlomoManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpatialTickComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatialTickComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.SpatialTickComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpatialTickManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpatialTickManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.SpatialTickManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatChallengeDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatChallengeDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.StatChallengeDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSFramework.StatChallengeRuntimeObject.IncrementCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatAndContexts                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EStatBindType                                      BindType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatChallengeRuntimeObject::IncrementCallback(int32_t Value, int32_t Delta, class FString* StatAndContexts, EStatBindType BindType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSFramework.StatChallengeRuntimeObject.IncrementCallback");
		
		UStatChallengeRuntimeObject_IncrementCallback_Params params {};
		params.Value = Value;
		params.Delta = Delta;
		params.BindType = BindType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatAndContexts != nullptr)
			*StatAndContexts = params.StatAndContexts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatChallengeRuntimeObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatChallengeRuntimeObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.StatChallengeRuntimeObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAreaDiscoveryType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAreaDiscoveryType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.AreaDiscoveryType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIKeyNamesData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIKeyNamesData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.UIKeyNamesData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisibilityBasedAnimTickOptionPriorityConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisibilityBasedAnimTickOptionPriorityConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSFramework.VisibilityBasedAnimTickOptionPriorityConfig");
		return ptr;
	}

}


