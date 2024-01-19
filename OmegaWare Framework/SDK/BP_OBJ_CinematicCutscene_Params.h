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
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.CollectBlueprintLinks
	 */
	struct ABP_OBJ_CinematicCutscene_C_CollectBlueprintLinks_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.AllowInteraction
	 */
	struct ABP_OBJ_CinematicCutscene_C_AllowInteraction_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractiveComponent*                               InteractiveComponent;                                    // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.GetInteractIconClass
	 */
	struct ABP_OBJ_CinematicCutscene_C_GetInteractIconClass_Params
	{
	public:
		class UInteractiveComponent*                               InteractiveComponent;                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.EnableAutoTriggerCutsceneDoOnce
	 */
	struct ABP_OBJ_CinematicCutscene_C_EnableAutoTriggerCutsceneDoOnce_Params
	{
	public:
		class APawn*                                               Interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.EnableOverriddenInteractionWhileStreaming
	 */
	struct ABP_OBJ_CinematicCutscene_C_EnableOverriddenInteractionWhileStreaming_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.DisableOverriddenInteractionWhileStreaming
	 */
	struct ABP_OBJ_CinematicCutscene_C_DisableOverriddenInteractionWhileStreaming_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OverrideInteractionCheck
	 */
	struct ABP_OBJ_CinematicCutscene_C_OverrideInteractionCheck_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnGatherCancel
	 */
	struct ABP_OBJ_CinematicCutscene_C_OnGatherCancel_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.DiscardPreCutsceneFade
	 */
	struct ABP_OBJ_CinematicCutscene_C_DiscardPreCutsceneFade_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartPreCutsceneFade
	 */
	struct ABP_OBJ_CinematicCutscene_C_StartPreCutsceneFade_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.RemoveGatherInteractState
	 */
	struct ABP_OBJ_CinematicCutscene_C_RemoveGatherInteractState_Params
	{
	public:
		class UInteractiveComponent*                               Interact;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.AddGatherInteractState
	 */
	struct ABP_OBJ_CinematicCutscene_C_AddGatherInteractState_Params
	{
	public:
		class UInteractiveComponent*                               Interact;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.RestoreOverriddenInteractionCategory
	 */
	struct ABP_OBJ_CinematicCutscene_C_RestoreOverriddenInteractionCategory_Params
	{
	public:
		class UInteractiveComponent*                               InteractiveComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.SetOverriddenInteractionCategory
	 */
	struct ABP_OBJ_CinematicCutscene_C_SetOverriddenInteractionCategory_Params
	{
	public:
		class UInteractiveComponent*                               InteractiveComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.AddNewOverriddenInteraction
	 */
	struct ABP_OBJ_CinematicCutscene_C_AddNewOverriddenInteraction_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.SpawnGatherActor
	 */
	struct ABP_OBJ_CinematicCutscene_C_SpawnGatherActor_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnGatherStatusChanged
	 */
	struct ABP_OBJ_CinematicCutscene_C_OnGatherStatusChanged_Params
	{
	public:
		EGatherState                                               NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGatherState                                               PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.GatherComplete
	 */
	struct ABP_OBJ_CinematicCutscene_C_GatherComplete_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.UnprocessStatefulActivity
	 */
	struct ABP_OBJ_CinematicCutscene_C_UnprocessStatefulActivity_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ProcessStatefulActivity
	 */
	struct ABP_OBJ_CinematicCutscene_C_ProcessStatefulActivity_Params
	{
	public:
		class ABP_StatefulActivity_SingleParticipant_C*            StatefulActivityRef;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StatefulActivityParticipantReleased
	 */
	struct ABP_OBJ_CinematicCutscene_C_StatefulActivityParticipantReleased_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StatefulActivityParticipantReceived
	 */
	struct ABP_OBJ_CinematicCutscene_C_StatefulActivityParticipantReceived_Params
	{
	public:
		class UParticipantSlotComponent*                           Participant;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.Check Participant Is Received
	 */
	struct ABP_OBJ_CinematicCutscene_C_CheckParticipantIsReceived_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StreamingTimeout
	 */
	struct ABP_OBJ_CinematicCutscene_C_StreamingTimeout_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.CancelStreamingTimeoutTimer
	 */
	struct ABP_OBJ_CinematicCutscene_C_CancelStreamingTimeoutTimer_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartStreamingTimeoutTimer
	 */
	struct ABP_OBJ_CinematicCutscene_C_StartStreamingTimeoutTimer_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OverrideInteraction
	 */
	struct ABP_OBJ_CinematicCutscene_C_OverrideInteraction_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ReleaseOverriddenInteractions
	 */
	struct ABP_OBJ_CinematicCutscene_C_ReleaseOverriddenInteractions_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.Unprocess Cutscene Activity
	 */
	struct ABP_OBJ_CinematicCutscene_C_UnprocessCutsceneActivity_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ProcessCutsceneActivity
	 */
	struct ABP_OBJ_CinematicCutscene_C_ProcessCutsceneActivity_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartGather
	 */
	struct ABP_OBJ_CinematicCutscene_C_StartGather_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_50H7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFade__FinishedFunc
	 */
	struct ABP_OBJ_CinematicCutscene_C_OutlineFade__FinishedFunc_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFade__UpdateFunc
	 */
	struct ABP_OBJ_CinematicCutscene_C_OutlineFade__UpdateFunc_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnObjectiveStarted
	 */
	struct ABP_OBJ_CinematicCutscene_C_OnObjectiveStarted_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ReceiveBeginPlay
	 */
	struct ABP_OBJ_CinematicCutscene_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnObjectiveEnded
	 */
	struct ABP_OBJ_CinematicCutscene_C_OnObjectiveEnded_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnWaitingStarted
	 */
	struct ABP_OBJ_CinematicCutscene_C_OnWaitingStarted_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.StartCutscene
	 */
	struct ABP_OBJ_CinematicCutscene_C_StartCutscene_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.LevelStreamingCompleted
	 */
	struct ABP_OBJ_CinematicCutscene_C_LevelStreamingCompleted_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.InteractWithNPCComplete
	 */
	struct ABP_OBJ_CinematicCutscene_C_InteractWithNPCComplete_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2EXW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.InteractWithActorComplete
	 */
	struct ABP_OBJ_CinematicCutscene_C_InteractWithActorComplete_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HZSL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.BndEvt__Interactive_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature
	 */
	struct ABP_OBJ_CinematicCutscene_C_BndEvt__Interactive_K2Node_ComponentBoundEvent_0_InteractDelegate__DelegateSignature_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZGW0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.Override Interaction Components
	 */
	struct ABP_OBJ_CinematicCutscene_C_OverrideInteractionComponents_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnCutsceneStarted
	 */
	struct ABP_OBJ_CinematicCutscene_C_OnCutsceneStarted_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnCutsceneEnded
	 */
	struct ABP_OBJ_CinematicCutscene_C_OnCutsceneEnded_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFadeOut
	 */
	struct ABP_OBJ_CinematicCutscene_C_OutlineFadeOut_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OutlineFadeIn
	 */
	struct ABP_OBJ_CinematicCutscene_C_OutlineFadeIn_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.ExecuteUbergraph_BP_OBJ_CinematicCutscene
	 */
	struct ABP_OBJ_CinematicCutscene_C_ExecuteUbergraph_BP_OBJ_CinematicCutscene_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnFadeUpComplete__DelegateSignature
	 */
	struct ABP_OBJ_CinematicCutscene_C_OnFadeUpComplete__DelegateSignature_Params
	{	};

	/**
	 * Function BP_OBJ_CinematicCutscene.BP_OBJ_CinematicCutscene_C.OnFadeDownComplete__DelegateSignature
	 */
	struct ABP_OBJ_CinematicCutscene_C_OnFadeDownComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
