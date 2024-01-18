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
	 * 		Name   -> Function MissionSystem.CampaignData.HasCustomTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTag                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCampaignData::HasCustomTag(const class FName& InTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.CampaignData.HasCustomTag");
		
		UCampaignData_HasCustomTag_Params params {};
		params.InTag = InTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.CampaignData.CreateInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Parent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCampaignInstance* UCampaignData::CreateInstance(class AActor* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.CampaignData.CreateInstance");
		
		UCampaignData_CreateInstance_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCampaignData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCampaignData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.CampaignData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.CampaignInstance.GetDisplayName
	 * 		Flags  -> ()
	 */
	class FString UCampaignInstance::GetDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.CampaignInstance.GetDisplayName");
		
		UCampaignInstance_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.CampaignInstance.FindObjectiveInstanceOrNull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjectiveData*                              ObjectiveData                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObjectiveInstance* UCampaignInstance::FindObjectiveInstanceOrNull(class UObjectiveData* ObjectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.CampaignInstance.FindObjectiveInstanceOrNull");
		
		UCampaignInstance_FindObjectiveInstanceOrNull_Params params {};
		params.ObjectiveData = ObjectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.CampaignInstance.FindMissionInstanceOrNull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMissionInstance* UCampaignInstance::FindMissionInstanceOrNull(class UMissionData* MissionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.CampaignInstance.FindMissionInstanceOrNull");
		
		UCampaignInstance_FindMissionInstanceOrNull_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCampaignInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCampaignInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.CampaignInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugSkipPathShortcut.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugSkipPathShortcut::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.DebugSkipPathShortcut");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionData.HasCustomTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTag                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMissionData::HasCustomTag(const class FName& InTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionData.HasCustomTag");
		
		UMissionData_HasCustomTag_Params params {};
		params.InTag = InTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionData.GetUniqueMissionInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMissionInstance* UMissionData::GetUniqueMissionInstance(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionData.GetUniqueMissionInstance");
		
		UMissionData_GetUniqueMissionInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionData.GetAllObjectives
	 * 		Flags  -> ()
	 */
	TArray<class UObjectiveData*> UMissionData::GetAllObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionData.GetAllObjectives");
		
		UMissionData_GetAllObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionData.ContainsObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjectiveData*                              ObjectiveData                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMissionData::ContainsObjective(class UObjectiveData* ObjectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionData.ContainsObjective");
		
		UMissionData_ContainsObjective_Params params {};
		params.ObjectiveData = ObjectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFlow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFlow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionFlow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFlowNodeInstanceDataCollectionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFlowNodeInstanceDataCollectionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionFlowNodeInstanceDataCollectionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFlowNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFlowNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionFlowNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFlowNode_AnyInstanceDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFlowNode_AnyInstanceDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionFlowNode_AnyInstanceDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFlowNode_Any.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFlowNode_Any::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionFlowNode_Any");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFlowNode_MissionInstanceDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFlowNode_MissionInstanceDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionFlowNode_MissionInstanceDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionFlowNode_Mission.RepeatMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaignInstance*                           CampainInstance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFlowNode_Mission::RepeatMission(class UCampaignInstance* CampainInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionFlowNode_Mission.RepeatMission");
		
		UMissionFlowNode_Mission_RepeatMission_Params params {};
		params.CampainInstance = CampainInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionFlowNode_Mission.OnMissionStateChangedInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionInstance*                            InMissionInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMissionState                                      NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMissionState                                      LeavingState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionFlowNode_Mission::OnMissionStateChangedInternal(class UMissionInstance* InMissionInstance, EMissionState NewState, EMissionState LeavingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionFlowNode_Mission.OnMissionStateChangedInternal");
		
		UMissionFlowNode_Mission_OnMissionStateChangedInternal_Params params {};
		params.InMissionInstance = InMissionInstance;
		params.NewState = NewState;
		params.LeavingState = LeavingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFlowNode_Mission.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFlowNode_Mission::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionFlowNode_Mission");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFlowNode_PrerequisitesInstanceDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFlowNode_PrerequisitesInstanceDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionFlowNode_PrerequisitesInstanceDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionFlowNode_Prerequisites.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionFlowNode_Prerequisites::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionFlowNode_Prerequisites");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionDataPersistentDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionDataPersistentDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionDataPersistentDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionCheckpointPersistentDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionCheckpointPersistentDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionCheckpointPersistentDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionInstance.GetState
	 * 		Flags  -> ()
	 */
	EMissionState UMissionInstance::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionInstance.GetState");
		
		UMissionInstance_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionInstance.GetMissionType
	 * 		Flags  -> ()
	 */
	class UMissionType* UMissionInstance::GetMissionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionInstance.GetMissionType");
		
		UMissionInstance_GetMissionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionInstance.GetDisplayName
	 * 		Flags  -> ()
	 */
	class FText UMissionInstance::GetDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionInstance.GetDisplayName");
		
		UMissionInstance_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionInstance.GetAllObjectives
	 * 		Flags  -> ()
	 */
	TArray<class UObjectiveInstance*> UMissionInstance::GetAllObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionInstance.GetAllObjectives");
		
		UMissionInstance_GetAllObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.StartExternallyTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionInstance*                            MissionInstance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMissionSystemManager::StartExternallyTriggered(class UMissionInstance* MissionInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.StartExternallyTriggered");
		
		UMissionSystemManager_StartExternallyTriggered_Params params {};
		params.MissionInstance = MissionInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.StartCampaignInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaignInstance*                           CampaignInstance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionSystemManager::StartCampaignInstance(class UCampaignInstance* CampaignInstance, class AActor* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.StartCampaignInstance");
		
		UMissionSystemManager_StartCampaignInstance_Params params {};
		params.CampaignInstance = CampaignInstance;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.OnObjectiveStateChangedInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjectiveInstance*                          ObjectiveInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EObjectiveState                                    NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EObjectiveState                                    LeavingState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionSystemManager::OnObjectiveStateChangedInternal(class UObjectiveInstance* ObjectiveInstance, EObjectiveState NewState, EObjectiveState LeavingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.OnObjectiveStateChangedInternal");
		
		UMissionSystemManager_OnObjectiveStateChangedInternal_Params params {};
		params.ObjectiveInstance = ObjectiveInstance;
		params.NewState = NewState;
		params.LeavingState = LeavingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.OnMissionStateChangedInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionInstance*                            MissionInstance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMissionState                                      NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMissionState                                      LeavingState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionSystemManager::OnMissionStateChangedInternal(class UMissionInstance* MissionInstance, EMissionState NewState, EMissionState LeavingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.OnMissionStateChangedInternal");
		
		UMissionSystemManager_OnMissionStateChangedInternal_Params params {};
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
	 * 		Name   -> Function MissionSystem.MissionSystemManager.OnMissionCheckpointReached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionInstance*                            InMissionInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionSystemManager::OnMissionCheckpointReached(class UMissionInstance* InMissionInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.OnMissionCheckpointReached");
		
		UMissionSystemManager_OnMissionCheckpointReached_Params params {};
		params.InMissionInstance = InMissionInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.GetObjectiveActorFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjectiveData*                              ObjectiveData                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AObjectiveActor* UMissionSystemManager::GetObjectiveActorFor(class UObjectiveData* ObjectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.GetObjectiveActorFor");
		
		UMissionSystemManager_GetObjectiveActorFor_Params params {};
		params.ObjectiveData = ObjectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.GetAllMissions
	 * 		Flags  -> ()
	 */
	TArray<class UMissionInstance*> UMissionSystemManager::GetAllMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.GetAllMissions");
		
		UMissionSystemManager_GetAllMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.GetActiveMissions
	 * 		Flags  -> ()
	 */
	TArray<class UMissionInstance*> UMissionSystemManager::GetActiveMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.GetActiveMissions");
		
		UMissionSystemManager_GetActiveMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.Get
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMissionSystemManager* UMissionSystemManager::Get(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.Get");
		
		UMissionSystemManager_Get_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.EndCampaignInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCampaignInstance*                           CampaignInstance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionSystemManager::EndCampaignInstance(class UCampaignInstance* CampaignInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.EndCampaignInstance");
		
		UMissionSystemManager_EndCampaignInstance_Params params {};
		params.CampaignInstance = CampaignInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.MissionSystemManager.BufferedHasUnsavedProgressCheck
	 * 		Flags  -> ()
	 */
	void UMissionSystemManager::BufferedHasUnsavedProgressCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.MissionSystemManager.BufferedHasUnsavedProgressCheck");
		
		UMissionSystemManager_BufferedHasUnsavedProgressCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionSystemManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionSystemManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionSystemManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.MissionType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.OnWaitingStarted
	 * 		Flags  -> ()
	 */
	void AObjectiveActor::OnWaitingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.OnWaitingStarted");
		
		AObjectiveActor_OnWaitingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.OnWaitingEnded
	 * 		Flags  -> ()
	 */
	void AObjectiveActor::OnWaitingEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.OnWaitingEnded");
		
		AObjectiveActor_OnWaitingEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.OnObjectiveStarted
	 * 		Flags  -> ()
	 */
	void AObjectiveActor::OnObjectiveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.OnObjectiveStarted");
		
		AObjectiveActor_OnObjectiveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.OnObjectiveEnded
	 * 		Flags  -> ()
	 */
	void AObjectiveActor::OnObjectiveEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.OnObjectiveEnded");
		
		AObjectiveActor_OnObjectiveEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.OnGameplayStartedWhileObjectiveStarted
	 * 		Flags  -> ()
	 */
	void AObjectiveActor::OnGameplayStartedWhileObjectiveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.OnGameplayStartedWhileObjectiveStarted");
		
		AObjectiveActor_OnGameplayStartedWhileObjectiveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.OnFinishedStarted
	 * 		Flags  -> ()
	 */
	void AObjectiveActor::OnFinishedStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.OnFinishedStarted");
		
		AObjectiveActor_OnFinishedStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.OnFinishedEnded
	 * 		Flags  -> ()
	 */
	void AObjectiveActor::OnFinishedEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.OnFinishedEnded");
		
		AObjectiveActor_OnFinishedEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.ObjectiveFailed
	 * 		Flags  -> ()
	 */
	void AObjectiveActor::ObjectiveFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.ObjectiveFailed");
		
		AObjectiveActor_ObjectiveFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.ObjectiveComplete
	 * 		Flags  -> ()
	 */
	void AObjectiveActor::ObjectiveComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.ObjectiveComplete");
		
		AObjectiveActor_ObjectiveComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.InitialiseWithObjectiveInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjectiveInstance*                          InObjectiveInstance                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AObjectiveActor::InitialiseWithObjectiveInstance(class UObjectiveInstance* InObjectiveInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.InitialiseWithObjectiveInstance");
		
		AObjectiveActor_InitialiseWithObjectiveInstance_Params params {};
		params.InObjectiveInstance = InObjectiveInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.HasObjectiveStarted
	 * 		Flags  -> ()
	 */
	bool AObjectiveActor::HasObjectiveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.HasObjectiveStarted");
		
		AObjectiveActor_HasObjectiveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveActor.HasObjectiveFinished
	 * 		Flags  -> ()
	 */
	bool AObjectiveActor::HasObjectiveFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveActor.HasObjectiveFinished");
		
		AObjectiveActor_HasObjectiveFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AObjectiveActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AObjectiveActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveData.HasCustomTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTag                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UObjectiveData::HasCustomTag(const class FName& InTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveData.HasCustomTag");
		
		UObjectiveData_HasCustomTag_Params params {};
		params.InTag = InTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveData.GetUniqueObjectiveInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObjectiveInstance* UObjectiveData::GetUniqueObjectiveInstance(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveData.GetUniqueObjectiveInstance");
		
		UObjectiveData_GetUniqueObjectiveInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveData.GetPersistentPosition
	 * 		Flags  -> ()
	 */
	struct FVector UObjectiveData::GetPersistentPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveData.GetPersistentPosition");
		
		UObjectiveData_GetPersistentPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveData.GetDisplayName
	 * 		Flags  -> ()
	 */
	class FText UObjectiveData::GetDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveData.GetDisplayName");
		
		UObjectiveData_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlowNodeInstanceDataCollectionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlowNodeInstanceDataCollectionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlowNodeInstanceDataCollectionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlowNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlowNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlowNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlowNode_End.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlowNode_End::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlowNode_End");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlowNode_EndOptionalObjectives.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlowNode_EndOptionalObjectives::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlowNode_EndOptionalObjectives");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlowNode_Logic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlowNode_Logic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlowNode_Logic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlowNode_ObjectiveInstanceDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlowNode_ObjectiveInstanceDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlowNode_ObjectiveInstanceDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlowNode_Objective.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlowNode_Objective::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlowNode_Objective");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlowNode_Reroute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlowNode_Reroute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlowNode_Reroute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveFlowNode_Start.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveFlowNode_Start::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveFlowNode_Start");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectivePersistentDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectivePersistentDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectivePersistentDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveInstance.GetState
	 * 		Flags  -> ()
	 */
	EObjectiveState UObjectiveInstance::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveInstance.GetState");
		
		UObjectiveInstance_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveInstance.GetMission
	 * 		Flags  -> ()
	 */
	class UMissionInstance* UObjectiveInstance::GetMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveInstance.GetMission");
		
		UObjectiveInstance_GetMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MissionSystem.ObjectiveInstance.GetDisplayName
	 * 		Flags  -> ()
	 */
	class FText UObjectiveInstance::GetDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionSystem.ObjectiveInstance.GetDisplayName");
		
		UObjectiveInstance_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MissionSystem.ObjectiveInstance");
		return ptr;
	}

}


