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
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.EndStimOverride
	 */
	struct UBPC_Distraction_GroupCoordinator_C_EndStimOverride_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.BeginStimOverride
	 */
	struct UBPC_Distraction_GroupCoordinator_C_BeginStimOverride_Params
	{
	public:
		struct FSStimOverrideParams                                StimOverride;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddDSLog
	 */
	struct UBPC_Distraction_GroupCoordinator_C_AddDSLog_Params
	{
	public:
		class FString                                              DebugText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            Verbosity;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.SetupDistractionLogger
	 */
	struct UBPC_Distraction_GroupCoordinator_C_SetupDistractionLogger_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GlobalQueryParams
	 */
	struct UBPC_Distraction_GroupCoordinator_C_GlobalQueryParams_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   ActiveQuery;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetStimCooldownTimeStamp
	 */
	struct UBPC_Distraction_GroupCoordinator_C_GetStimCooldownTimeStamp_Params
	{
	public:
		struct FStimID                                             StimID;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddStimToCooldownList
	 */
	struct UBPC_Distraction_GroupCoordinator_C_AddStimToCooldownList_Params
	{
	public:
		struct FStimID                                             StimID;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		float                                                      Timestamp;                                               // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetStimSettings
	 */
	struct UBPC_Distraction_GroupCoordinator_C_GetStimSettings_Params
	{
	public:
		class AActor*                                              OverrideInstigator;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JNYM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     AnchorComponent;                                         // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Insigator;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OverrideStimRadius
	 */
	struct UBPC_Distraction_GroupCoordinator_C_OverrideStimRadius_Params
	{
	public:
		struct FStim                                               StimSettings;                                            // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		struct FStim                                               ReturnValue;                                             // 0x00B8(0x00B8)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddAllPendingParticipantToActiveParticipantRegister
	 */
	struct UBPC_Distraction_GroupCoordinator_C_AddAllPendingParticipantToActiveParticipantRegister_Params
	{
	public:
		TArray<struct FSGroupDistractionParticipantData>           PendingParticipantsDataList;                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.IsPendingParticipantsRemaining
	 */
	struct UBPC_Distraction_GroupCoordinator_C_IsPendingParticipantsRemaining_Params
	{
	public:
		TArray<class ADIAICharacter*>                              PendingParticipantsList;                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RemovePendingParticipant
	 */
	struct UBPC_Distraction_GroupCoordinator_C_RemovePendingParticipant_Params
	{
	public:
		TArray<class ADIAICharacter*>                              PendingParticipantsList;                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSGroupDistractionParticipantData>           PendingParticipantsDataList;                             // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetClosestPendingParticipantIndex
	 */
	struct UBPC_Distraction_GroupCoordinator_C_GetClosestPendingParticipantIndex_Params
	{
	public:
		TArray<struct FSGroupDistractionParticipantData>           PendingParticipantsDataList;                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddPendingParticipantToActiveParticipantRegister
	 */
	struct UBPC_Distraction_GroupCoordinator_C_AddPendingParticipantToActiveParticipantRegister_Params
	{
	public:
		TArray<class ADIAICharacter*>                              PendingParticipantsList;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSGroupDistractionParticipantData>           PendingParticipantsDataList;                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.IsCharacterAssignedToActivity
	 */
	struct UBPC_Distraction_GroupCoordinator_C_IsCharacterAssignedToActivity_Params
	{
	public:
		class AActor*                                              ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActivityActor*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.SelectInstigator
	 */
	struct UBPC_Distraction_GroupCoordinator_C_SelectInstigator_Params
	{
	public:
		class AActor*                                              DefaultInstigator;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OverrideInstigator;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SelectedInstigator;                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.SetNewLifespan
	 */
	struct UBPC_Distraction_GroupCoordinator_C_SetNewLifespan_Params
	{
	public:
		float                                                      NewLifespan;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RemoveStim
	 */
	struct UBPC_Distraction_GroupCoordinator_C_RemoveStim_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RequestStim
	 */
	struct UBPC_Distraction_GroupCoordinator_C_RequestStim_Params
	{
	public:
		class UStimTemplate*                                       StimTemplate;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OverrideInstigator;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetRemainingLifespan
	 */
	struct UBPC_Distraction_GroupCoordinator_C_GetRemainingLifespan_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AssignCharacterToActivity
	 */
	struct UBPC_Distraction_GroupCoordinator_C_AssignCharacterToActivity_Params
	{
	public:
		class AActivityActor*                                      ActivityActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Character;                                               // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetActiveParticipantDestination
	 */
	struct UBPC_Distraction_GroupCoordinator_C_GetActiveParticipantDestination_Params
	{
	public:
		TMap<class AActor*, struct FVector>                        AILocations;                                             // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.UnregisterParticipant
	 */
	struct UBPC_Distraction_GroupCoordinator_C_UnregisterParticipant_Params
	{
	public:
		class ADICharacter*                                        Character;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.UpdateActiveParticipantDestination
	 */
	struct UBPC_Distraction_GroupCoordinator_C_UpdateActiveParticipantDestination_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OPAC[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddToActiveParticipantsRegister
	 */
	struct UBPC_Distraction_GroupCoordinator_C_AddToActiveParticipantsRegister_Params
	{
	public:
		TArray<struct FSGroupDistractionParticipantData>           PendingParticipantsDataList;                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ProjectPathEndLocation
	 */
	struct UBPC_Distraction_GroupCoordinator_C_ProjectPathEndLocation_Params
	{
	public:
		class AAIController*                                       Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_13LT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetPendingParticipantsData
	 */
	struct UBPC_Distraction_GroupCoordinator_C_GetPendingParticipantsData_Params
	{
	public:
		TArray<struct FSGroupDistractionParticipantData>           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ProcessPendingParticipants
	 */
	struct UBPC_Distraction_GroupCoordinator_C_ProcessPendingParticipants_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ClearAssignedActivity
	 */
	struct UBPC_Distraction_GroupCoordinator_C_ClearAssignedActivity_Params
	{
	public:
		class AActivityActor*                                      ActorActivity;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetAvailableActivity
	 */
	struct UBPC_Distraction_GroupCoordinator_C_GetAvailableActivity_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F2MI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActivityActor*                                      Activity;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.DestroyActivityOnceItsEnded
	 */
	struct UBPC_Distraction_GroupCoordinator_C_DestroyActivityOnceItsEnded_Params
	{
	public:
		class AActivityActor*                                      ActivityActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnLifespanExpired
	 */
	struct UBPC_Distraction_GroupCoordinator_C_OnLifespanExpired_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.GetActivityLocation
	 */
	struct UBPC_Distraction_GroupCoordinator_C_GetActivityLocation_Params
	{
	public:
		struct FVector                                             LocationOffset;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotationOffset;                                          // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_14VR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.CancelActiveQuery
	 */
	struct UBPC_Distraction_GroupCoordinator_C_CancelActiveQuery_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnQueryFinished
	 */
	struct UBPC_Distraction_GroupCoordinator_C_OnQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HKJA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RunQuery
	 */
	struct UBPC_Distraction_GroupCoordinator_C_RunQuery_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AssignNextParticipant
	 */
	struct UBPC_Distraction_GroupCoordinator_C_AssignNextParticipant_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.EndParticipantMovement
	 */
	struct UBPC_Distraction_GroupCoordinator_C_EndParticipantMovement_Params
	{
	public:
		class ADIAICharacter*                                      ParticipantToRemove;                                     // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.BeginParticipantMovement
	 */
	struct UBPC_Distraction_GroupCoordinator_C_BeginParticipantMovement_Params
	{
	public:
		class ADIAICharacter*                                      AddParticipantForProcessing;                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RemoveParticipantFromMovement
	 */
	struct UBPC_Distraction_GroupCoordinator_C_RemoveParticipantFromMovement_Params
	{
	public:
		class ADIAICharacter*                                      Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AddParticipantToMovement
	 */
	struct UBPC_Distraction_GroupCoordinator_C_AddParticipantToMovement_Params
	{
	public:
		class ADIAICharacter*                                      Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RegisterParticipant
	 */
	struct UBPC_Distraction_GroupCoordinator_C_RegisterParticipant_Params
	{
	public:
		class ADIAICharacter*                                      Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ReceiveEndPlay
	 */
	struct UBPC_Distraction_GroupCoordinator_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ReceiveBeginPlay
	 */
	struct UBPC_Distraction_GroupCoordinator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnAddMovementRequest
	 */
	struct UBPC_Distraction_GroupCoordinator_C_OnAddMovementRequest_Params
	{
	public:
		class ADIAICharacter*                                      Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnRemoveMovementRequest
	 */
	struct UBPC_Distraction_GroupCoordinator_C_OnRemoveMovementRequest_Params
	{
	public:
		class ADIAICharacter*                                      Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnRemoveParticipant
	 */
	struct UBPC_Distraction_GroupCoordinator_C_OnRemoveParticipant_Params
	{
	public:
		class ADIAICharacter*                                      Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnTryAddParticipant
	 */
	struct UBPC_Distraction_GroupCoordinator_C_OnTryAddParticipant_Params
	{
	public:
		class ADIAICharacter*                                      Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.ExecuteUbergraph_BPC_Distraction_GroupCoordinator
	 */
	struct UBPC_Distraction_GroupCoordinator_C_ExecuteUbergraph_BPC_Distraction_GroupCoordinator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.AllParticipantsUnregistered__DelegateSignature
	 */
	struct UBPC_Distraction_GroupCoordinator_C_AllParticipantsUnregistered__DelegateSignature_Params
	{	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.RequestParticipationResult__DelegateSignature
	 */
	struct UBPC_Distraction_GroupCoordinator_C_RequestParticipationResult__DelegateSignature_Params
	{
	public:
		bool                                                       CanParticipate;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C.OnLifespanExpiredDelegate__DelegateSignature
	 */
	struct UBPC_Distraction_GroupCoordinator_C_OnLifespanExpiredDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
