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
	 * 		RVA    -> 0x00F68F80
	 * 		Name   -> Function EmergentSystem.ActivityActor.RequestAllAgentsToLeave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AActivityActor::RequestAllAgentsToLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.RequestAllAgentsToLeave");
		
		AActivityActor_RequestAllAgentsToLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68D70
	 * 		Name   -> Function EmergentSystem.ActivityActor.RemoveDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivityActor::RemoveDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.RemoveDisableReason");
		
		AActivityActor_RemoveDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68BE0
	 * 		Name   -> Function EmergentSystem.ActivityActor.ReleaseAgent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UAgentComponent*                             AgentComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAgentReleasedReason                               ReleaseReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivityActor::ReleaseAgent(class UAgentComponent* AgentComponent, EAgentReleasedReason ReleaseReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.ReleaseAgent");
		
		AActivityActor_ReleaseAgent_Params params {};
		params.AgentComponent = AgentComponent;
		params.ReleaseReason = ReleaseReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68A60
	 * 		Name   -> Function EmergentSystem.ActivityActor.OnNewComponentAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UActorComponent*                             ActorComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivityActor::OnNewComponentAdded(class UActorComponent* ActorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.OnNewComponentAdded");
		
		AActivityActor_OnNewComponentAdded_Params params {};
		params.ActorComponent = ActorComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function EmergentSystem.ActivityActor.OnActivityUnregistered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivityActor::OnActivityUnregistered(class AActivityActor* Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.OnActivityUnregistered");
		
		AActivityActor_OnActivityUnregistered_Params params {};
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F688D0
	 * 		Name   -> Function EmergentSystem.ActivityActor.OnActivityStarted
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivityActor::OnActivityStarted(class AActivityActor* Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.OnActivityStarted");
		
		AActivityActor_OnActivityStarted_Params params {};
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68800
	 * 		Name   -> Function EmergentSystem.ActivityActor.OnActivityEnded
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EActivityEndedReason                               EndReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivityActor::OnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.OnActivityEnded");
		
		AActivityActor_OnActivityEnded_Params params {};
		params.Activity = Activity;
		params.EndReason = EndReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68310
	 * 		Name   -> Function EmergentSystem.ActivityActor.IsRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AActivityActor::IsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.IsRunning");
		
		AActivityActor_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F67E00
	 * 		Name   -> Function EmergentSystem.ActivityActor.ExitActivity
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EActivityEndedReason                               ActivityEndedReason                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivityActor::ExitActivity(EActivityEndedReason ActivityEndedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.ExitActivity");
		
		AActivityActor_ExitActivity_Params params {};
		params.ActivityEndedReason = ActivityEndedReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F67BA0
	 * 		Name   -> Function EmergentSystem.ActivityActor.AddDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivityActor::AddDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityActor.AddDisableReason");
		
		AActivityActor_AddDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActivityActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActivityActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ActivityActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivityConstraints.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivityConstraints::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ActivityConstraints");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivityManagerSuppressionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivityManagerSuppressionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ActivityManagerSuppressionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F69030
	 * 		Name   -> Function EmergentSystem.ActivityRegistrationComponent.UpdateDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bActivityActive                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivityRegistrationComponent::UpdateDisableReason(bool bActivityActive, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivityRegistrationComponent.UpdateDisableReason");
		
		UActivityRegistrationComponent_UpdateDisableReason_Params params {};
		params.bActivityActive = bActivityActive;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivityRegistrationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivityRegistrationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ActivityRegistrationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivitySuppressionAreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivitySuppressionAreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ActivitySuppressionAreaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68280
	 * 		Name   -> Function EmergentSystem.ActivitySuppressionAreaManager.IsActivityTypeSuppressed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EActivityType                                      ActivityType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AActivitySuppressionAreaManager::IsActivityTypeSuppressed(EActivityType ActivityType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivitySuppressionAreaManager.IsActivityTypeSuppressed");
		
		AActivitySuppressionAreaManager_IsActivityTypeSuppressed_Params params {};
		params.ActivityType = ActivityType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68110
	 * 		Name   -> Function EmergentSystem.ActivitySuppressionAreaManager.GloballyEnableActivityType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EActivityType                                      ActivityType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DebugCallerInformation                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivitySuppressionAreaManager::GloballyEnableActivityType(EActivityType ActivityType, const class FString& DebugCallerInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivitySuppressionAreaManager.GloballyEnableActivityType");
		
		AActivitySuppressionAreaManager_GloballyEnableActivityType_Params params {};
		params.ActivityType = ActivityType;
		params.DebugCallerInformation = DebugCallerInformation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68030
	 * 		Name   -> Function EmergentSystem.ActivitySuppressionAreaManager.GloballyDisableActivityType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EActivityType                                      ActivityType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DebugCallerInformation                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AActivitySuppressionAreaManager::GloballyDisableActivityType(EActivityType ActivityType, const class FString& DebugCallerInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivitySuppressionAreaManager.GloballyDisableActivityType");
		
		AActivitySuppressionAreaManager_GloballyDisableActivityType_Params params {};
		params.ActivityType = ActivityType;
		params.DebugCallerInformation = DebugCallerInformation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F67F80
	 * 		Name   -> Function EmergentSystem.ActivitySuppressionAreaManager.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActivitySuppressionAreaManager* AActivitySuppressionAreaManager::STATIC_Get(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ActivitySuppressionAreaManager.Get");
		
		AActivitySuppressionAreaManager_Get_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AActivitySuppressionAreaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActivitySuppressionAreaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ActivitySuppressionAreaManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgentBehaviourDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgentBehaviourDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AgentBehaviourDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68FA0
	 * 		Name   -> Function EmergentSystem.AgentComponent.UnhideAgent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bWithFade                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentComponent::UnhideAgent(bool bWithFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.UnhideAgent");
		
		UAgentComponent_UnhideAgent_Params params {};
		params.bWithFade = bWithFade;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68EF0
	 * 		Name   -> Function EmergentSystem.AgentComponent.RemoveReasonCannotMarkForRemoval
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentComponent::RemoveReasonCannotMarkForRemoval(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.RemoveReasonCannotMarkForRemoval");
		
		UAgentComponent_RemoveReasonCannotMarkForRemoval_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68E70
	 * 		Name   -> Function EmergentSystem.AgentComponent.RemoveReasonCannotBeInterrupted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentComponent::RemoveReasonCannotBeInterrupted(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.RemoveReasonCannotBeInterrupted");
		
		UAgentComponent_RemoveReasonCannotBeInterrupted_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68DF0
	 * 		Name   -> Function EmergentSystem.AgentComponent.RemoveReasonCannotBeDirected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentComponent::RemoveReasonCannotBeDirected(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.RemoveReasonCannotBeDirected");
		
		UAgentComponent_RemoveReasonCannotBeDirected_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68CA0
	 * 		Name   -> Function EmergentSystem.AgentComponent.RemoveAgentPriority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        PriorityName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DelayTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentComponent::RemoveAgentPriority(const class FName& PriorityName, float DelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.RemoveAgentPriority");
		
		UAgentComponent_RemoveAgentPriority_Params params {};
		params.PriorityName = PriorityName;
		params.DelayTime = DelayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68B60
	 * 		Name   -> Function EmergentSystem.AgentComponent.OptOutOfSpatialManagement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentComponent::OptOutOfSpatialManagement(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.OptOutOfSpatialManagement");
		
		UAgentComponent_OptOutOfSpatialManagement_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68AE0
	 * 		Name   -> Function EmergentSystem.AgentComponent.OptInToSpatialManagement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentComponent::OptInToSpatialManagement(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.OptInToSpatialManagement");
		
		UAgentComponent_OptInToSpatialManagement_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F681F0
	 * 		Name   -> Function EmergentSystem.AgentComponent.HideAgent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bWithFade                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentComponent::HideAgent(bool bWithFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.HideAgent");
		
		UAgentComponent_HideAgent_Params params {};
		params.bWithFade = bWithFade;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68000
	 * 		Name   -> Function EmergentSystem.AgentComponent.GetCurrentAgentActivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class AActivityActor* UAgentComponent::GetCurrentAgentActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.GetCurrentAgentActivity");
		
		UAgentComponent_GetCurrentAgentActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F67DE0
	 * 		Name   -> Function EmergentSystem.AgentComponent.DespawnAgent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UAgentComponent::DespawnAgent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.DespawnAgent");
		
		UAgentComponent_DespawnAgent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F67D40
	 * 		Name   -> Function EmergentSystem.AgentComponent.AddReasonCannotMarkForRemoval
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAgentComponent::AddReasonCannotMarkForRemoval(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.AddReasonCannotMarkForRemoval");
		
		UAgentComponent_AddReasonCannotMarkForRemoval_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F67CB0
	 * 		Name   -> Function EmergentSystem.AgentComponent.AddReasonCannotBeInterrupted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAgentComponent::AddReasonCannotBeInterrupted(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.AddReasonCannotBeInterrupted");
		
		UAgentComponent_AddReasonCannotBeInterrupted_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F67C20
	 * 		Name   -> Function EmergentSystem.AgentComponent.AddReasonCannotBeDirected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAgentComponent::AddReasonCannotBeDirected(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.AddReasonCannotBeDirected");
		
		UAgentComponent_AddReasonCannotBeDirected_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F67AE0
	 * 		Name   -> Function EmergentSystem.AgentComponent.AddAgentPriority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        PriorityName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EParticipantPriority                               Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentComponent::AddAgentPriority(const class FName& PriorityName, EParticipantPriority Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentComponent.AddAgentPriority");
		
		UAgentComponent_AddAgentPriority_Params params {};
		params.PriorityName = PriorityName;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgentComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgentComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AgentComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgentCoordinatorLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgentCoordinatorLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AgentCoordinatorLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgentExpressionAssetUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgentExpressionAssetUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AgentExpressionAssetUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F67E80
	 * 		Name   -> Function EmergentSystem.AgentFunctionLibrary.FindAgentInWorld
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ClassToFind                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OutActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAgentFunctionLibrary::STATIC_FindAgentInWorld(class UObject* WorldContextObject, class UClass* ClassToFind, class AActor** OutActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AgentFunctionLibrary.FindAgentInWorld");
		
		UAgentFunctionLibrary_FindAgentInWorld_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ClassToFind = ClassToFind;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActor != nullptr)
			*OutActor = params.OutActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgentFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgentFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AgentFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgentPostspawnData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgentPostspawnData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AgentPostspawnData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgentPrespawnData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgentPrespawnData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AgentPrespawnData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgentRemovalHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgentRemovalHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AgentRemovalHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F690F0
	 * 		Name   -> Function EmergentSystem.AmbientActivityRegistrationComponent.UseTriggerActivation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTriggerShapeComponent*                      ShapeComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAmbientActivityRegistrationComponent::UseTriggerActivation(class UTriggerShapeComponent* ShapeComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AmbientActivityRegistrationComponent.UseTriggerActivation");
		
		UAmbientActivityRegistrationComponent_UseTriggerActivation_Params params {};
		params.ShapeComponent = ShapeComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F689E0
	 * 		Name   -> Function EmergentSystem.AmbientActivityRegistrationComponent.OnInteractorLeftArea
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAmbientActivityRegistrationComponent::OnInteractorLeftArea(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AmbientActivityRegistrationComponent.OnInteractorLeftArea");
		
		UAmbientActivityRegistrationComponent_OnInteractorLeftArea_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68960
	 * 		Name   -> Function EmergentSystem.AmbientActivityRegistrationComponent.OnInteractorEnteredArea
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UTriggerInteractorComponent*                 Interactor                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAmbientActivityRegistrationComponent::OnInteractorEnteredArea(class UTriggerInteractorComponent* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.AmbientActivityRegistrationComponent.OnInteractorEnteredArea");
		
		UAmbientActivityRegistrationComponent_OnInteractorEnteredArea_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAmbientActivityRegistrationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbientActivityRegistrationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AmbientActivityRegistrationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.BaseAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseEntryAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseEntryAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.BaseEntryAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAreaShapeEntryAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAreaShapeEntryAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AreaShapeEntryAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasicSpawnable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicSpawnable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.BasicSpawnable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DA90
	 * 		Name   -> Function EmergentSystem.ExistingAgentSource.CheckAdvertising
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UExistingAgentSource::CheckAdvertising()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ExistingAgentSource.CheckAdvertising");
		
		UExistingAgentSource_CheckAdvertising_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExistingAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExistingAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ExistingAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCastCharacterAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCastCharacterAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.CastCharacterAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompoundAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompoundAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.CompoundAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCooldownSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCooldownSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.CooldownSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.DefaultAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistanceCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistanceCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.DistanceCooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F686E0
	 * 		Name   -> Function EmergentSystem.EmergentActivitiesLibrary.LaunchActivityWithSingleParticipant
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAgentComponent*                             Participant                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FParticipantLaunchParameters                OverrideParticipantLaunchParameters                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEmergentActivitiesLibrary::STATIC_LaunchActivityWithSingleParticipant(class AActivityActor* Activity, class UAgentComponent* Participant, const struct FParticipantLaunchParameters& OverrideParticipantLaunchParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.EmergentActivitiesLibrary.LaunchActivityWithSingleParticipant");
		
		UEmergentActivitiesLibrary_LaunchActivityWithSingleParticipant_Params params {};
		params.Activity = Activity;
		params.Participant = Participant;
		params.OverrideParticipantLaunchParameters = OverrideParticipantLaunchParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F685F0
	 * 		Name   -> Function EmergentSystem.EmergentActivitiesLibrary.LaunchActivityWithParticipants
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UAgentComponent*>                     Participants                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UEmergentActivitiesLibrary::STATIC_LaunchActivityWithParticipants(class AActivityActor* Activity, TArray<class UAgentComponent*> Participants)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.EmergentActivitiesLibrary.LaunchActivityWithParticipants");
		
		UEmergentActivitiesLibrary_LaunchActivityWithParticipants_Params params {};
		params.Activity = Activity;
		params.Participants = Participants;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F68340
	 * 		Name   -> Function EmergentSystem.EmergentActivitiesLibrary.LaunchActivity
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnConstraints                           SpawnConstraints                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceInstantSpawn                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceDespawnNonVitalAgentsIfNeeded                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAgentRequestInterruptionReasons                   InterruptionReasonsToIgnore                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEmergentActivitiesLibrary::STATIC_LaunchActivity(class AActivityActor* Activity, const struct FSpawnConstraints& SpawnConstraints, bool bForceInstantSpawn, bool bForceDespawnNonVitalAgentsIfNeeded, EAgentRequestInterruptionReasons InterruptionReasonsToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.EmergentActivitiesLibrary.LaunchActivity");
		
		UEmergentActivitiesLibrary_LaunchActivity_Params params {};
		params.Activity = Activity;
		params.SpawnConstraints = SpawnConstraints;
		params.bForceInstantSpawn = bForceInstantSpawn;
		params.bForceDespawnNonVitalAgentsIfNeeded = bForceDespawnNonVitalAgentsIfNeeded;
		params.InterruptionReasonsToIgnore = InterruptionReasonsToIgnore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmergentActivitiesLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmergentActivitiesLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.EmergentActivitiesLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEmergentDirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEmergentDirector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.EmergentDirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmergentGroupObjectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmergentGroupObjectBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.EmergentGroupObjectBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E290
	 * 		Name   -> Function EmergentSystem.EmergentSpatialLibrary.RemoveCustomActivePosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEmergentSpatialLibrary::STATIC_RemoveCustomActivePosition(class UObject* WorldContext, const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.EmergentSpatialLibrary.RemoveCustomActivePosition");
		
		UEmergentSpatialLibrary_RemoveCustomActivePosition_Params params {};
		params.WorldContext = WorldContext;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DF10
	 * 		Name   -> Function EmergentSystem.EmergentSpatialLibrary.IsLocationSpatiallyActive
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEmergentSpatialLibrary::STATIC_IsLocationSpatiallyActive(class UObject* WorldContext, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.EmergentSpatialLibrary.IsLocationSpatiallyActive");
		
		UEmergentSpatialLibrary_IsLocationSpatiallyActive_Params params {};
		params.WorldContext = WorldContext;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DB40
	 * 		Name   -> Function EmergentSystem.EmergentSpatialLibrary.EnableDefaultActivePositions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEmergentSpatialLibrary::STATIC_EnableDefaultActivePositions(class UObject* WorldContext, bool bEnable, const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.EmergentSpatialLibrary.EnableDefaultActivePositions");
		
		UEmergentSpatialLibrary_EnableDefaultActivePositions_Params params {};
		params.WorldContext = WorldContext;
		params.bEnable = bEnable;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6D980
	 * 		Name   -> Function EmergentSystem.EmergentSpatialLibrary.AddCustomActivePosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEmergentSpatialLibrary::STATIC_AddCustomActivePosition(class UObject* WorldContext, const struct FVector& Position, float Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.EmergentSpatialLibrary.AddCustomActivePosition");
		
		UEmergentSpatialLibrary_AddCustomActivePosition_Params params {};
		params.WorldContext = WorldContext;
		params.Position = Position;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmergentSpatialLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmergentSpatialLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.EmergentSpatialLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmergentSpawnableGroupObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmergentSpawnableGroupObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.EmergentSpawnableGroupObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E1B0
	 * 		Name   -> Function EmergentSystem.SpawnableGroupsLibrary.PickSpawnableFromSet
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnableGroupHandle                       SpawnableGroup                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USpawnableGroupsLibrary::STATIC_PickSpawnableFromSet(class UObject* WorldContext, const struct FSpawnableGroupHandle& SpawnableGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.SpawnableGroupsLibrary.PickSpawnableFromSet");
		
		USpawnableGroupsLibrary_PickSpawnableFromSet_Params params {};
		params.WorldContext = WorldContext;
		params.SpawnableGroup = SpawnableGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DD00
	 * 		Name   -> Function EmergentSystem.SpawnableGroupsLibrary.GetGroupSetFromName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        GroupName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSpawnableGroupHandle USpawnableGroupsLibrary::STATIC_GetGroupSetFromName(class UObject* WorldContext, const class FName& GroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.SpawnableGroupsLibrary.GetGroupSetFromName");
		
		USpawnableGroupsLibrary_GetGroupSetFromName_Params params {};
		params.WorldContext = WorldContext;
		params.GroupName = GroupName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DC40
	 * 		Name   -> Function EmergentSystem.SpawnableGroupsLibrary.GetGroupSetFromAsset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEmergentSpawnableGroupObject*               GroupAsset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSpawnableGroupHandle USpawnableGroupsLibrary::STATIC_GetGroupSetFromAsset(class UObject* WorldContext, class UEmergentSpawnableGroupObject* GroupAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.SpawnableGroupsLibrary.GetGroupSetFromAsset");
		
		USpawnableGroupsLibrary_GetGroupSetFromAsset_Params params {};
		params.WorldContext = WorldContext;
		params.GroupAsset = GroupAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnableGroupsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnableGroupsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.SpawnableGroupsLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E0A0
	 * 		Name   -> Function EmergentSystem.EntryActivityRegistrationComponent.OnActivityStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEntryActivityRegistrationComponent::OnActivityStarted(class AActivityActor* Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.EntryActivityRegistrationComponent.OnActivityStarted");
		
		UEntryActivityRegistrationComponent_OnActivityStarted_Params params {};
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DFE0
	 * 		Name   -> Function EmergentSystem.EntryActivityRegistrationComponent.OnActivityEnded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EActivityEndedReason                               EndReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEntryActivityRegistrationComponent::OnActivityEnded(class AActivityActor* Activity, EActivityEndedReason EndReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.EntryActivityRegistrationComponent.OnActivityEnded");
		
		UEntryActivityRegistrationComponent_OnActivityEnded_Params params {};
		params.Activity = Activity;
		params.EndReason = EndReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEntryActivityRegistrationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEntryActivityRegistrationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.EntryActivityRegistrationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExitActivityRegistrationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExitActivityRegistrationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ExitActivityRegistrationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCooldownInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCooldownInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.CooldownInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULifetimePopulationConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULifetimePopulationConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.LifetimePopulationConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULifetimePopulationConstraint_SlotBasedCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULifetimePopulationConstraint_SlotBasedCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.LifetimePopulationConstraint_SlotBasedCooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocationDirectionCollator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocationDirectionCollator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.LocationDirectionCollator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModelOverrideSpawnable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModelOverrideSpawnable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ModelOverrideSpawnable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnceOnlyCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnceOnlyCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.OnceOnlyCooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E600
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.ShouldSkipIntro
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UParticipantSlotComponent::ShouldSkipIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.ShouldSkipIntro");
		
		UParticipantSlotComponent_ShouldSkipIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E580
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.SetTravelToLocation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FParticipantMoveToLocation                  Location                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UParticipantSlotComponent::SetTravelToLocation(const struct FParticipantMoveToLocation& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.SetTravelToLocation");
		
		UParticipantSlotComponent_SetTravelToLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E4F0
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.SetSpawnHidden
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSpawnHidden                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticipantSlotComponent::SetSpawnHidden(bool bSpawnHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.SetSpawnHidden");
		
		UParticipantSlotComponent_SetSpawnHidden_Params params {};
		params.bSpawnHidden = bSpawnHidden;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E470
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.SetParticipantSpawnableGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UEmergentSpawnableGroupObject*               InSpawnableGroup                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticipantSlotComponent::SetParticipantSpawnableGroup(class UEmergentSpawnableGroupObject* InSpawnableGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.SetParticipantSpawnableGroup");
		
		UParticipantSlotComponent_SetParticipantSpawnableGroup_Params params {};
		params.InSpawnableGroup = InSpawnableGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E3F0
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.SetParticipantPriority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EParticipantPriority                               InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticipantSlotComponent::SetParticipantPriority(EParticipantPriority InPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.SetParticipantPriority");
		
		UParticipantSlotComponent_SetParticipantPriority_Params params {};
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E350
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.SetLaunchParameters
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FParticipantLaunchParameters                Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UParticipantSlotComponent::SetLaunchParameters(const struct FParticipantLaunchParameters& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.SetLaunchParameters");
		
		UParticipantSlotComponent_SetLaunchParameters_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6E120
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.OptOutOf
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESpawnConstraintTypes                              Flag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticipantSlotComponent::OptOutOf(ESpawnConstraintTypes Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.OptOutOf");
		
		UParticipantSlotComponent_OptOutOf_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DEE0
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.GetTravelToLocation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FParticipantMoveToLocation UParticipantSlotComponent::GetTravelToLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.GetTravelToLocation");
		
		UParticipantSlotComponent_GetTravelToLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DEB0
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.GetParticipantState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EParticipantState UParticipantSlotComponent::GetParticipantState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.GetParticipantState");
		
		UParticipantSlotComponent_GetParticipantState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DE80
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.GetParticipantSpawnedGameEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UGameEvent* UParticipantSlotComponent::GetParticipantSpawnedGameEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.GetParticipantSpawnedGameEvent");
		
		UParticipantSlotComponent_GetParticipantSpawnedGameEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DE60
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.GetParticipantSpawnableGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UEmergentSpawnableGroupObject* UParticipantSlotComponent::GetParticipantSpawnableGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.GetParticipantSpawnableGroup");
		
		UParticipantSlotComponent_GetParticipantSpawnableGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DDD0
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.GetParticipantGameEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EParticipantEvent                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameEvent* UParticipantSlotComponent::GetParticipantGameEvent(EParticipantEvent Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.GetParticipantGameEvent");
		
		UParticipantSlotComponent_GetParticipantGameEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F6DAB0
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.EditorShouldCheckForValidAgentSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldCheck                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticipantSlotComponent::EditorShouldCheckForValidAgentSelection(bool bShouldCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.EditorShouldCheckForValidAgentSelection");
		
		UParticipantSlotComponent_EditorShouldCheckForValidAgentSelection_Params params {};
		params.bShouldCheck = bShouldCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB73B0
	 * 		Name   -> Function EmergentSystem.ParticipantSlotComponent.EditorForceAlignNavPositionWithGround
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UParticipantSlotComponent::EditorForceAlignNavPositionWithGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.ParticipantSlotComponent.EditorForceAlignNavPositionWithGround");
		
		UParticipantSlotComponent_EditorForceAlignNavPositionWithGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticipantSlotComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticipantSlotComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ParticipantSlotComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F71E30
	 * 		Name   -> Function EmergentSystem.PopulationArea.SetEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APopulationArea::SetEnabled(bool bInValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.PopulationArea.SetEnabled");
		
		APopulationArea_SetEnabled_Params params {};
		params.bInValue = bInValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F71E10
	 * 		Name   -> Function EmergentSystem.PopulationArea.ResetAllConstraints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void APopulationArea::ResetAllConstraints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.PopulationArea.ResetAllConstraints");
		
		APopulationArea_ResetAllConstraints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F71D80
	 * 		Name   -> Function EmergentSystem.PopulationArea.OnPopulationStateChanged
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPopulationAreaEnabled                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APopulationArea::OnPopulationStateChanged(bool bPopulationAreaEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.PopulationArea.OnPopulationStateChanged");
		
		APopulationArea_OnPopulationStateChanged_Params params {};
		params.bPopulationAreaEnabled = bPopulationAreaEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APopulationArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APopulationArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.PopulationArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopulationAreaLinkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopulationAreaLinkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.PopulationAreaLinkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopulationCountController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopulationCountController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.PopulationCountController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDensityPopCountController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDensityPopCountController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.DensityPopCountController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbsolutePopCountController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbsolutePopCountController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AbsolutePopCountController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomaticPopCountController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomaticPopCountController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.AutomaticPopCountController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmergentPopulationDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmergentPopulationDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.EmergentPopulationDefinition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalPopulationStateListQueryParameters.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalPopulationStateListQueryParameters::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ConditionalPopulationStateListQueryParameters");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreviousParticipantAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreviousParticipantAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.PreviousParticipantAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialEntryAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialEntryAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.RadialEntryAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F71EE0
	 * 		Name   -> Function EmergentSystem.RequestSpawnActorTask.SpawnActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnParams                                SpawnHandlerParams                                         (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URequestSpawnActorTask* URequestSpawnActorTask::STATIC_SpawnActor(class UObject* WorldContextObject, const struct FSpawnParams& SpawnHandlerParams, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.RequestSpawnActorTask.SpawnActor");
		
		URequestSpawnActorTask_SpawnActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SpawnHandlerParams = SpawnHandlerParams;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F71CB0
	 * 		Name   -> Function EmergentSystem.RequestSpawnActorTask.FinishSpawningActor
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URequestSpawnActorTask::FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.RequestSpawnActorTask.FinishSpawningActor");
		
		URequestSpawnActorTask_FinishSpawningActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F71BD0
	 * 		Name   -> Function EmergentSystem.RequestSpawnActorTask.BeginSpawningActor
	 * 		Flags  -> (Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URequestSpawnActorTask::BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.RequestSpawnActorTask.BeginSpawningActor");
		
		URequestSpawnActorTask_BeginSpawningActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedActor != nullptr)
			*SpawnedActor = params.SpawnedActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URequestSpawnActorTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URequestSpawnActorTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.RequestSpawnActorTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReuseAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReuseAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ReuseAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URuntimeSpawnable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URuntimeSpawnable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.RuntimeSpawnable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptTriggeredActivityRegistrationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptTriggeredActivityRegistrationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.ScriptTriggeredActivityRegistrationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleAgentRemovalHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleAgentRemovalHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.SimpleAgentRemovalHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASimpleDirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASimpleDirector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.SimpleDirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleActivityAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleActivityAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.SingleActivityAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpatialActivationAreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatialActivationAreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.SpatialActivationAreaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpatialActivationAreaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpatialActivationAreaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.SpatialActivationAreaManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnInPlaceAgentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnInPlaceAgentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.SpawnInPlaceAgentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmergentTestGroupObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmergentTestGroupObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.EmergentTestGroupObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.TimeCooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F720A0
	 * 		Name   -> Function EmergentSystem.VisibleToPlayersTracker.UpdateVisibility
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UVisibleToPlayersTracker::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmergentSystem.VisibleToPlayersTracker.UpdateVisibility");
		
		UVisibleToPlayersTracker_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisibleToPlayersTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisibleToPlayersTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EmergentSystem.VisibleToPlayersTracker");
		return ptr;
	}

}


