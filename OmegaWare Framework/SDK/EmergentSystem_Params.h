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
	 * Function EmergentSystem.ActivityActor.RequestAllAgentsToLeave
	 */
	struct AActivityActor_RequestAllAgentsToLeave_Params
	{	};

	/**
	 * Function EmergentSystem.ActivityActor.RemoveDisableReason
	 */
	struct AActivityActor_RemoveDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivityActor.ReleaseAgent
	 */
	struct AActivityActor_ReleaseAgent_Params
	{
	public:
		class UAgentComponent*                                     AgentComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAgentReleasedReason                                       ReleaseReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivityActor.OnNewComponentAdded
	 */
	struct AActivityActor_OnNewComponentAdded_Params
	{
	public:
		class UActorComponent*                                     ActorComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivityActor.OnActivityUnregistered
	 */
	struct AActivityActor_OnActivityUnregistered_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivityActor.OnActivityStarted
	 */
	struct AActivityActor_OnActivityStarted_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivityActor.OnActivityEnded
	 */
	struct AActivityActor_OnActivityEnded_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EActivityEndedReason                                       EndReason;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivityActor.IsRunning
	 */
	struct AActivityActor_IsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivityActor.ExitActivity
	 */
	struct AActivityActor_ExitActivity_Params
	{
	public:
		EActivityEndedReason                                       ActivityEndedReason;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivityActor.AddDisableReason
	 */
	struct AActivityActor_AddDisableReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivityRegistrationComponent.UpdateDisableReason
	 */
	struct UActivityRegistrationComponent_UpdateDisableReason_Params
	{
	public:
		bool                                                       bActivityActive;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_52GY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Reason;                                                  // 0x0004(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivitySuppressionAreaManager.IsActivityTypeSuppressed
	 */
	struct AActivitySuppressionAreaManager_IsActivityTypeSuppressed_Params
	{
	public:
		EActivityType                                              ActivityType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivitySuppressionAreaManager.GloballyEnableActivityType
	 */
	struct AActivitySuppressionAreaManager_GloballyEnableActivityType_Params
	{
	public:
		EActivityType                                              ActivityType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DB03[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DebugCallerInformation;                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivitySuppressionAreaManager.GloballyDisableActivityType
	 */
	struct AActivitySuppressionAreaManager_GloballyDisableActivityType_Params
	{
	public:
		EActivityType                                              ActivityType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YS5T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DebugCallerInformation;                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ActivitySuppressionAreaManager.Get
	 */
	struct AActivitySuppressionAreaManager_Get_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActivitySuppressionAreaManager*                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.UnhideAgent
	 */
	struct UAgentComponent_UnhideAgent_Params
	{
	public:
		bool                                                       bWithFade;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.RemoveReasonCannotMarkForRemoval
	 */
	struct UAgentComponent_RemoveReasonCannotMarkForRemoval_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.RemoveReasonCannotBeInterrupted
	 */
	struct UAgentComponent_RemoveReasonCannotBeInterrupted_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.RemoveReasonCannotBeDirected
	 */
	struct UAgentComponent_RemoveReasonCannotBeDirected_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.RemoveAgentPriority
	 */
	struct UAgentComponent_RemoveAgentPriority_Params
	{
	public:
		class FName                                                PriorityName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DelayTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.OptOutOfSpatialManagement
	 */
	struct UAgentComponent_OptOutOfSpatialManagement_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.OptInToSpatialManagement
	 */
	struct UAgentComponent_OptInToSpatialManagement_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.HideAgent
	 */
	struct UAgentComponent_HideAgent_Params
	{
	public:
		bool                                                       bWithFade;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.GetCurrentAgentActivity
	 */
	struct UAgentComponent_GetCurrentAgentActivity_Params
	{
	public:
		class AActivityActor*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.DespawnAgent
	 */
	struct UAgentComponent_DespawnAgent_Params
	{	};

	/**
	 * Function EmergentSystem.AgentComponent.AddReasonCannotMarkForRemoval
	 */
	struct UAgentComponent_AddReasonCannotMarkForRemoval_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.AddReasonCannotBeInterrupted
	 */
	struct UAgentComponent_AddReasonCannotBeInterrupted_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.AddReasonCannotBeDirected
	 */
	struct UAgentComponent_AddReasonCannotBeDirected_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentComponent.AddAgentPriority
	 */
	struct UAgentComponent_AddAgentPriority_Params
	{
	public:
		class FName                                                PriorityName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EParticipantPriority                                       Priority;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AgentFunctionLibrary.FindAgentInWorld
	 */
	struct UAgentFunctionLibrary_FindAgentInWorld_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ClassToFind;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OutActor;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AmbientActivityRegistrationComponent.UseTriggerActivation
	 */
	struct UAmbientActivityRegistrationComponent_UseTriggerActivation_Params
	{
	public:
		class UTriggerShapeComponent*                              ShapeComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AmbientActivityRegistrationComponent.OnInteractorLeftArea
	 */
	struct UAmbientActivityRegistrationComponent_OnInteractorLeftArea_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.AmbientActivityRegistrationComponent.OnInteractorEnteredArea
	 */
	struct UAmbientActivityRegistrationComponent_OnInteractorEnteredArea_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ExistingAgentSource.CheckAdvertising
	 */
	struct UExistingAgentSource_CheckAdvertising_Params
	{	};

	/**
	 * Function EmergentSystem.EmergentActivitiesLibrary.LaunchActivityWithSingleParticipant
	 */
	struct UEmergentActivitiesLibrary_LaunchActivityWithSingleParticipant_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAgentComponent*                                     Participant;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FParticipantLaunchParameters                        OverrideParticipantLaunchParameters;                     // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.EmergentActivitiesLibrary.LaunchActivityWithParticipants
	 */
	struct UEmergentActivitiesLibrary_LaunchActivityWithParticipants_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UAgentComponent*>                             Participants;                                            // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.EmergentActivitiesLibrary.LaunchActivity
	 */
	struct UEmergentActivitiesLibrary_LaunchActivity_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpawnConstraints                                   SpawnConstraints;                                        // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bForceInstantSpawn;                                      // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceDespawnNonVitalAgentsIfNeeded;                     // 0x0059(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAgentRequestInterruptionReasons                           InterruptionReasonsToIgnore;                             // 0x005A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x005B(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.EmergentSpatialLibrary.RemoveCustomActivePosition
	 */
	struct UEmergentSpatialLibrary_RemoveCustomActivePosition_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Position;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.EmergentSpatialLibrary.IsLocationSpatiallyActive
	 */
	struct UEmergentSpatialLibrary_IsLocationSpatiallyActive_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.EmergentSpatialLibrary.EnableDefaultActivePositions
	 */
	struct UEmergentSpatialLibrary_EnableDefaultActivePositions_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DCQ7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Reason;                                                  // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.EmergentSpatialLibrary.AddCustomActivePosition
	 */
	struct UEmergentSpatialLibrary_AddCustomActivePosition_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Position;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Size;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.SpawnableGroupsLibrary.PickSpawnableFromSet
	 */
	struct USpawnableGroupsLibrary_PickSpawnableFromSet_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpawnableGroupHandle                               SpawnableGroup;                                          // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.SpawnableGroupsLibrary.GetGroupSetFromName
	 */
	struct USpawnableGroupsLibrary_GetGroupSetFromName_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                GroupName;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpawnableGroupHandle                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.SpawnableGroupsLibrary.GetGroupSetFromAsset
	 */
	struct USpawnableGroupsLibrary_GetGroupSetFromAsset_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEmergentSpawnableGroupObject*                       GroupAsset;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpawnableGroupHandle                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.EntryActivityRegistrationComponent.OnActivityStarted
	 */
	struct UEntryActivityRegistrationComponent_OnActivityStarted_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.EntryActivityRegistrationComponent.OnActivityEnded
	 */
	struct UEntryActivityRegistrationComponent_OnActivityEnded_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EActivityEndedReason                                       EndReason;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.ShouldSkipIntro
	 */
	struct UParticipantSlotComponent_ShouldSkipIntro_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.SetTravelToLocation
	 */
	struct UParticipantSlotComponent_SetTravelToLocation_Params
	{
	public:
		struct FParticipantMoveToLocation                          Location;                                                // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.SetSpawnHidden
	 */
	struct UParticipantSlotComponent_SetSpawnHidden_Params
	{
	public:
		bool                                                       bSpawnHidden;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.SetParticipantSpawnableGroup
	 */
	struct UParticipantSlotComponent_SetParticipantSpawnableGroup_Params
	{
	public:
		class UEmergentSpawnableGroupObject*                       InSpawnableGroup;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.SetParticipantPriority
	 */
	struct UParticipantSlotComponent_SetParticipantPriority_Params
	{
	public:
		EParticipantPriority                                       InPriority;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.SetLaunchParameters
	 */
	struct UParticipantSlotComponent_SetLaunchParameters_Params
	{
	public:
		struct FParticipantLaunchParameters                        Params;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.OptOutOf
	 */
	struct UParticipantSlotComponent_OptOutOf_Params
	{
	public:
		ESpawnConstraintTypes                                      Flag;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.GetTravelToLocation
	 */
	struct UParticipantSlotComponent_GetTravelToLocation_Params
	{
	public:
		struct FParticipantMoveToLocation                          ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.GetParticipantState
	 */
	struct UParticipantSlotComponent_GetParticipantState_Params
	{
	public:
		EParticipantState                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.GetParticipantSpawnedGameEvent
	 */
	struct UParticipantSlotComponent_GetParticipantSpawnedGameEvent_Params
	{
	public:
		class UGameEvent*                                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.GetParticipantSpawnableGroup
	 */
	struct UParticipantSlotComponent_GetParticipantSpawnableGroup_Params
	{
	public:
		class UEmergentSpawnableGroupObject*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.GetParticipantGameEvent
	 */
	struct UParticipantSlotComponent_GetParticipantGameEvent_Params
	{
	public:
		EParticipantEvent                                          Event;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_05ER[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGameEvent*                                          ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.ParticipantSlotComponent.EditorShouldCheckForValidAgentSelection
	 */
	struct UParticipantSlotComponent_EditorShouldCheckForValidAgentSelection_Params
	{
	public:
		bool                                                       bShouldCheck;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.PopulationArea.SetEnabled
	 */
	struct APopulationArea_SetEnabled_Params
	{
	public:
		bool                                                       bInValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.PopulationArea.ResetAllConstraints
	 */
	struct APopulationArea_ResetAllConstraints_Params
	{	};

	/**
	 * Function EmergentSystem.PopulationArea.OnPopulationStateChanged
	 */
	struct APopulationArea_OnPopulationStateChanged_Params
	{
	public:
		bool                                                       bPopulationAreaEnabled;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.RequestSpawnActorTask.SpawnActor
	 */
	struct URequestSpawnActorTask_SpawnActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpawnParams                                        SpawnHandlerParams;                                      // 0x0008(0x0030)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URequestSpawnActorTask*                              ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.RequestSpawnActorTask.FinishSpawningActor
	 */
	struct URequestSpawnActorTask_FinishSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.RequestSpawnActorTask.BeginSpawningActor
	 */
	struct URequestSpawnActorTask_BeginSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnedActor;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EmergentSystem.VisibleToPlayersTracker.UpdateVisibility
	 */
	struct UVisibleToPlayersTracker_UpdateVisibility_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
