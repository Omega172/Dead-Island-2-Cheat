#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MissionSystem.CampaignData.HasCustomTag
	 */
	struct UCampaignData_HasCustomTag_Params
	{
	public:
		class FName                                                InTag;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.CampaignData.CreateInstance
	 */
	struct UCampaignData_CreateInstance_Params
	{
	public:
		class AActor*                                              Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCampaignInstance*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.CampaignInstance.GetDisplayName
	 */
	struct UCampaignInstance_GetDisplayName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.CampaignInstance.FindObjectiveInstanceOrNull
	 */
	struct UCampaignInstance_FindObjectiveInstanceOrNull_Params
	{
	public:
		class UObjectiveData*                                      ObjectiveData;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObjectiveInstance*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.CampaignInstance.FindMissionInstanceOrNull
	 */
	struct UCampaignInstance_FindMissionInstanceOrNull_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionInstance*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionData.HasCustomTag
	 */
	struct UMissionData_HasCustomTag_Params
	{
	public:
		class FName                                                InTag;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionData.GetUniqueMissionInstance
	 */
	struct UMissionData_GetUniqueMissionInstance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionInstance*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionData.GetAllObjectives
	 */
	struct UMissionData_GetAllObjectives_Params
	{
	public:
		TArray<class UObjectiveData*>                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionData.ContainsObjective
	 */
	struct UMissionData_ContainsObjective_Params
	{
	public:
		class UObjectiveData*                                      ObjectiveData;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionFlowNode_Mission.RepeatMission
	 */
	struct UMissionFlowNode_Mission_RepeatMission_Params
	{
	public:
		class UCampaignInstance*                                   CampainInstance;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionFlowNode_Mission.OnMissionStateChangedInternal
	 */
	struct UMissionFlowNode_Mission_OnMissionStateChangedInternal_Params
	{
	public:
		class UMissionInstance*                                    InMissionInstance;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionState                                              NewState;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionState                                              LeavingState;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionInstance.GetState
	 */
	struct UMissionInstance_GetState_Params
	{
	public:
		EMissionState                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionInstance.GetMissionType
	 */
	struct UMissionInstance_GetMissionType_Params
	{
	public:
		class UMissionType*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionInstance.GetDisplayName
	 */
	struct UMissionInstance_GetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionInstance.GetAllObjectives
	 */
	struct UMissionInstance_GetAllObjectives_Params
	{
	public:
		TArray<class UObjectiveInstance*>                          ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.StartExternallyTriggered
	 */
	struct UMissionSystemManager_StartExternallyTriggered_Params
	{
	public:
		class UMissionInstance*                                    MissionInstance;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.StartCampaignInstance
	 */
	struct UMissionSystemManager_StartCampaignInstance_Params
	{
	public:
		class UCampaignInstance*                                   CampaignInstance;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              WorldContextObject;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.OnObjectiveStateChangedInternal
	 */
	struct UMissionSystemManager_OnObjectiveStateChangedInternal_Params
	{
	public:
		class UObjectiveInstance*                                  ObjectiveInstance;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EObjectiveState                                            NewState;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EObjectiveState                                            LeavingState;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.OnMissionStateChangedInternal
	 */
	struct UMissionSystemManager_OnMissionStateChangedInternal_Params
	{
	public:
		class UMissionInstance*                                    MissionInstance;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionState                                              NewState;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionState                                              LeavingState;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.OnMissionCheckpointReached
	 */
	struct UMissionSystemManager_OnMissionCheckpointReached_Params
	{
	public:
		class UMissionInstance*                                    InMissionInstance;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.GetObjectiveActorFor
	 */
	struct UMissionSystemManager_GetObjectiveActorFor_Params
	{
	public:
		class UObjectiveData*                                      ObjectiveData;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AObjectiveActor*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.GetAllMissions
	 */
	struct UMissionSystemManager_GetAllMissions_Params
	{
	public:
		TArray<class UMissionInstance*>                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.GetActiveMissions
	 */
	struct UMissionSystemManager_GetActiveMissions_Params
	{
	public:
		TArray<class UMissionInstance*>                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.Get
	 */
	struct UMissionSystemManager_Get_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionSystemManager*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.EndCampaignInstance
	 */
	struct UMissionSystemManager_EndCampaignInstance_Params
	{
	public:
		class UCampaignInstance*                                   CampaignInstance;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.MissionSystemManager.BufferedHasUnsavedProgressCheck
	 */
	struct UMissionSystemManager_BufferedHasUnsavedProgressCheck_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.OnWaitingStarted
	 */
	struct AObjectiveActor_OnWaitingStarted_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.OnWaitingEnded
	 */
	struct AObjectiveActor_OnWaitingEnded_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.OnObjectiveStarted
	 */
	struct AObjectiveActor_OnObjectiveStarted_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.OnObjectiveEnded
	 */
	struct AObjectiveActor_OnObjectiveEnded_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.OnGameplayStartedWhileObjectiveStarted
	 */
	struct AObjectiveActor_OnGameplayStartedWhileObjectiveStarted_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.OnFinishedStarted
	 */
	struct AObjectiveActor_OnFinishedStarted_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.OnFinishedEnded
	 */
	struct AObjectiveActor_OnFinishedEnded_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.ObjectiveFailed
	 */
	struct AObjectiveActor_ObjectiveFailed_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.ObjectiveComplete
	 */
	struct AObjectiveActor_ObjectiveComplete_Params
	{	};

	/**
	 * Function MissionSystem.ObjectiveActor.InitialiseWithObjectiveInstance
	 */
	struct AObjectiveActor_InitialiseWithObjectiveInstance_Params
	{
	public:
		class UObjectiveInstance*                                  InObjectiveInstance;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.ObjectiveActor.HasObjectiveStarted
	 */
	struct AObjectiveActor_HasObjectiveStarted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.ObjectiveActor.HasObjectiveFinished
	 */
	struct AObjectiveActor_HasObjectiveFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.ObjectiveData.HasCustomTag
	 */
	struct UObjectiveData_HasCustomTag_Params
	{
	public:
		class FName                                                InTag;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.ObjectiveData.GetUniqueObjectiveInstance
	 */
	struct UObjectiveData_GetUniqueObjectiveInstance_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObjectiveInstance*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.ObjectiveData.GetPersistentPosition
	 */
	struct UObjectiveData_GetPersistentPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.ObjectiveData.GetDisplayName
	 */
	struct UObjectiveData_GetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.ObjectiveInstance.GetState
	 */
	struct UObjectiveInstance_GetState_Params
	{
	public:
		EObjectiveState                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.ObjectiveInstance.GetMission
	 */
	struct UObjectiveInstance_GetMission_Params
	{
	public:
		class UMissionInstance*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MissionSystem.ObjectiveInstance.GetDisplayName
	 */
	struct UObjectiveInstance_GetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
