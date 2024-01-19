#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
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
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.RemoveCrossAnimActionCannotPushLifetimeFact
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_RemoveCrossAnimActionCannotPushLifetimeFact_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.AddCrossAnimActionCannotPushLifetimeFact
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_AddCrossAnimActionCannotPushLifetimeFact_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Log Debug Message For Action
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_LogDebugMessageForAction_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDSLogVerbosity                                            LogVerbosity;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9GHV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.GetDataTableRowForAnimName
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_GetDataTableRowForAnimName_Params
	{
	public:
		class ABP_Base_Zombie_C*                                   TableSource;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActivityTable;                                           // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SequenceName;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RowFound;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_POBZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSActivityData                                      DataTableRow;                                            // 0x0020(0x0060)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Play Current Level Sequence
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_PlayCurrentLevelSequence_Params
	{
	public:
		class UParticipantSlotComponent*                           Paticipant;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.GetLevelSequenceForActivity
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_GetLevelSequenceForActivity_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SequenceName;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ELevelSequenceState                                        SequenceState;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseDefaultTable;                                         // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZZG3[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelSequence*                                      LevelSequence;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Set Participant Position For Level Sequence
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_SetParticipantPositionForLevelSequence_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBP_ActionParams_BasePlayLevelSequence_C*            Params;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Add Level Sequence Params for Anim State
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_AddLevelSequenceParamsforAnimState_Params
	{
	public:
		ELevelSequenceState                                        AnimState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_99DC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_ActionParams_BasePlayLevelSequence_C*            LevelSequenceParams;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Create Default Entry Actor Binding
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_CreateDefaultEntryActorBinding_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBoundActor                                         BoundActor;                                              // 0x0008(0x0160)  (Parm, OutParm)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Prep Next Level Sequence Action
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_PrepNextLevelSequenceAction_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Start Level Sequence Action
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_StartLevelSequenceAction_Params
	{
	public:
		class UBP_ActionParams_BasePlayLevelSequence_C*            Params;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticipantSlotComponent*                           Participant;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActionDefinition*                                   Definition;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FKnowledgeBaseFactKey>                       LifetimeFactsWithDelayedRemoval;                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Start Interruptable Level Sequence
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_StartInterruptableLevelSequence_Params
	{
	public:
		class UBP_ActionParams_BasePlayLevelSequence_C*            Params;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticipantSlotComponent*                           Participant;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.ReceiveBeginPlay
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.OnActionEnd
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_OnActionEnd_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnEndParams                         Params;                                                  // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Perform Component Activity
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_PerformComponentActivity_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Clean Component State
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_CleanComponentState_Params
	{
	public:
		class UParticipantSlotComponent*                           ParticipantSlot;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.Setup component Activity Data
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_SetupcomponentActivityData_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.OnActionResolved
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_OnActionResolved_Params
	{
	public:
		struct FGuid                                               RequestID;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterActionOnResolvedParams                    Params;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_EntryComponent_RequestLevelSequence.BPC_EntryComponent_RequestLevelSequence_C.ExecuteUbergraph_BPC_EntryComponent_RequestLevelSequence
	 */
	struct UBPC_EntryComponent_RequestLevelSequence_C_ExecuteUbergraph_BPC_EntryComponent_RequestLevelSequence_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9A6T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
