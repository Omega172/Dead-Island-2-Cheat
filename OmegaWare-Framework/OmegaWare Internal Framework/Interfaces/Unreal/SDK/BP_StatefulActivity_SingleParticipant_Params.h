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
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CollectBlueprintLinks
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_CollectBlueprintLinks_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.Prepare Wrapper Action Params
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_PrepareWrapperActionParams_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessBoundActors
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ProcessBoundActors_Params
	{
	public:
		TArray<class AActor*>                                      Values;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckConsecutiveInvalidStates
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_CheckConsecutiveInvalidStates_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckStateRequirements
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_CheckStateRequirements_Params
	{
	public:
		struct FStatefulActivityAnimation                          State;                                                   // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		bool                                                       RequirementsMet;                                         // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DNM5[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.FindFirstLevelSequence
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_FindFirstLevelSequence_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.SetParticipantTravelToLocation
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_SetParticipantTravelToLocation_Params
	{
	public:
		class ULevelSequence*                                      LevelSequence;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UParticipantSlotComponent*                           Participant;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RemoveParticipantOptions
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_RemoveParticipantOptions_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ApplyParticipantOptions
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ApplyParticipantOptions_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UnprocessParticipantData
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_UnprocessParticipantData_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessPrimaryParticipantData
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ProcessPrimaryParticipantData_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UnbindParticipantSlots
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_UnbindParticipantSlots_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessParticipantSlots
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ProcessParticipantSlots_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ConstructQDState
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ConstructQDState_Params
	{
	public:
		class UEmotion*                                            StateEmotion;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSQuestDeliveryParams                               QDParams;                                                // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStatefulActivityAnimation                          StatefulActivityAnimation;                               // 0x0028(0x00C8)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ConstructQDParams
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ConstructQDParams_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSQuestDeliveryParams                               QDParams;                                                // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UEmotion*                                            StateEmotion;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.PrepareNewQuestDelivery
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_PrepareNewQuestDelivery_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CancelAllActivityActions
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_CancelAllActivityActions_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckAnimSetIsValid
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_CheckAnimSetIsValid_Params
	{
	public:
		struct FStatefulActivityAnimation                          State;                                                   // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		class FName                                                StateName;                                               // 0x00C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsStateValid;                                            // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EYAB[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessAnimationStateData
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ProcessAnimationStateData_Params
	{
	public:
		class FName                                                NextStateName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsStateValid;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQA1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessGenericStateData
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ProcessGenericStateData_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.SetupActivityLogger
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_SetupActivityLogger_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.GetValidActivityStateNames
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_GetValidActivityStateNames_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessAnimationStateExitParams
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ProcessAnimationStateExitParams_Params
	{
	public:
		struct FStatefulActivityAnimation                          State;                                                   // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		class FName                                                NextStateName;                                           // 0x00C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ProcessParticipantData
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ProcessParticipantData_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UpdateParticipantState
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_UpdateParticipantState_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.CheckAllParticipantsReceived
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_CheckAllParticipantsReceived_Params
	{
	public:
		bool                                                       AllParticipantsReceived;                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RWHD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.UserConstructionScript
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnRequestFailed_F97C15244645008957D815956A379B5C
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnRequestFailed_F97C15244645008957D815956A379B5C_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnCustomSignal_F97C15244645008957D815956A379B5C
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnCustomSignal_F97C15244645008957D815956A379B5C_Params
	{
	public:
		struct FCharacterActionOnCustomSignalParams                CustomSignalParams;                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnEnd_F97C15244645008957D815956A379B5C
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnEnd_F97C15244645008957D815956A379B5C_Params
	{
	public:
		struct FCharacterActionOnEndParams                         EndParams;                                               // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnBegin_F97C15244645008957D815956A379B5C
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnBegin_F97C15244645008957D815956A379B5C_Params
	{
	public:
		struct FCharacterActionOnBeginParams                       BeginParams;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnCancelled_F97C15244645008957D815956A379B5C
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnCancelled_F97C15244645008957D815956A379B5C_Params
	{
	public:
		struct FCharacterActionOnCancelledParams                   CancelledParams;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnResolved_F97C15244645008957D815956A379B5C
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnResolved_F97C15244645008957D815956A379B5C_Params
	{
	public:
		struct FCharacterActionOnResolvedParams                    ResolvedParams;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnActionsFailed_34CDD7D84E5752605A2C109F9BDC0C87
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnActionsFailed_34CDD7D84E5752605A2C109F9BDC0C87_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnAllActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnAllActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnNoActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnNoActionsStarted_34CDD7D84E5752605A2C109F9BDC0C87_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.StartNewActivityState
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_StartNewActivityState_Params
	{
	public:
		bool                                                       IsQuestDelivery;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnActivityStarted
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnActivityStarted_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ChangeActivityState
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ChangeActivityState_Params
	{
	public:
		class FName                                                NewActivityState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.LogActivityStateChange
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_LogActivityStateChange_Params
	{
	public:
		class FName                                                NewStateName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.LogActivityStateSequenceChange
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_LogActivityStateSequenceChange_Params
	{
	public:
		class FName                                                NewSequenceName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RequestActivityEnd
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_RequestActivityEnd_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RequestQuestDeliveryState
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_RequestQuestDeliveryState_Params
	{
	public:
		class FName                                                NewActivityState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSQuestDeliveryParams                               QuestDeliveryParams;                                     // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UEmotion*                                            StateEmotion;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnActivityEnded
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnActivityEnded_Params
	{
	public:
		class AActivityActor*                                      Activity;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivityEndedReason                                       EndReason;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.LogActivityStateRequest
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_LogActivityStateRequest_Params
	{
	public:
		class FName                                                RequestedState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsStatePermitted;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.QuestDeliveryFinished
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_QuestDeliveryFinished_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.DecideNextState
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_DecideNextState_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantReceived
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ParticipantReceived_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantReleased
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ParticipantReleased_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantInterrupted
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ParticipantInterrupted_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ParticipantOnTheWay
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ParticipantOnTheWay_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.PrepareForFirstState
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_PrepareForFirstState_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.RequestFinalState
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_RequestFinalState_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnStateFailed
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnStateFailed_Params
	{	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ExecuteUbergraph_BP_StatefulActivity_SingleParticipant
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ExecuteUbergraph_BP_StatefulActivity_SingleParticipant_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ActivityActionEnd__DelegateSignature
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ActivityActionEnd__DelegateSignature_Params
	{
	public:
		struct FCharacterActionOnEndParams                         EndParams;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class FName                                                CurrentState;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.ActivityActionChanged__DelegateSignature
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_ActivityActionChanged__DelegateSignature_Params
	{
	public:
		struct FCharacterActionOnBeginParams                       BeginParams;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_StatefulActivity_SingleParticipant.BP_StatefulActivity_SingleParticipant_C.OnParticipantsRecieved__DelegateSignature
	 */
	struct ABP_StatefulActivity_SingleParticipant_C_OnParticipantsRecieved__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
