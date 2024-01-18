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
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.CollectBlueprintLinks
	 */
	struct ABP_OBJ_InteractWith_C_CollectBlueprintLinks_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.AddInteractiveAndBindEvents
	 */
	struct ABP_OBJ_InteractWith_C_AddInteractiveAndBindEvents_Params
	{
	public:
		class UInteractiveComponent*                               InteractiveComponentToAdd;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.RemoveGatherInteractState
	 */
	struct ABP_OBJ_InteractWith_C_RemoveGatherInteractState_Params
	{
	public:
		class UInteractiveComponent*                               Interact;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.AddGatherInteractState
	 */
	struct ABP_OBJ_InteractWith_C_AddGatherInteractState_Params
	{
	public:
		class UInteractiveComponent*                               Interact;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.Choose Objective Progress UIData Asset
	 */
	struct ABP_OBJ_InteractWith_C_ChooseObjectiveProgressUIDataAsset_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.GatherComplete
	 */
	struct ABP_OBJ_InteractWith_C_GatherComplete_Params
	{
	public:
		EGatherState                                               NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGatherState                                               PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.StartGather
	 */
	struct ABP_OBJ_InteractWith_C_StartGather_Params
	{
	public:
		class APawn*                                               InUser;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.DisableInteractionAfterCompletion
	 */
	struct ABP_OBJ_InteractWith_C_DisableInteractionAfterCompletion_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.BindToInteractionTargets
	 */
	struct ABP_OBJ_InteractWith_C_BindToInteractionTargets_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.ProcessInteractionTargets
	 */
	struct ABP_OBJ_InteractWith_C_ProcessInteractionTargets_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.EnableInteractionOnStart
	 */
	struct ABP_OBJ_InteractWith_C_EnableInteractionOnStart_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.CheckInteractiveComponentIsValid
	 */
	struct ABP_OBJ_InteractWith_C_CheckInteractiveComponentIsValid_Params
	{
	public:
		class UInteractiveComponent*                               InteractiveComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1OML[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.UpdateIconActor
	 */
	struct ABP_OBJ_InteractWith_C_UpdateIconActor_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.RemoveDynamicActor
	 */
	struct ABP_OBJ_InteractWith_C_RemoveDynamicActor_Params
	{
	public:
		class AActor*                                              InteractionTarget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.AddNewDynamicActor
	 */
	struct ABP_OBJ_InteractWith_C_AddNewDynamicActor_Params
	{
	public:
		class AActor*                                              InteractionTarget;                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.UpdateObjectiveProgressUI
	 */
	struct ABP_OBJ_InteractWith_C_UpdateObjectiveProgressUI_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.DisableInteractionBeforeStart
	 */
	struct ABP_OBJ_InteractWith_C_DisableInteractionBeforeStart_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.SetupCompletionMode
	 */
	struct ABP_OBJ_InteractWith_C_SetupCompletionMode_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.UnbindInteractionEvents
	 */
	struct ABP_OBJ_InteractWith_C_UnbindInteractionEvents_Params
	{
	public:
		class UInteractiveComponent*                               InteractiveComp;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.BindInteractionEvents
	 */
	struct ABP_OBJ_InteractWith_C_BindInteractionEvents_Params
	{
	public:
		class UInteractiveComponent*                               InteractiveComp;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.SetupObjectiveProgressUI
	 */
	struct ABP_OBJ_InteractWith_C_SetupObjectiveProgressUI_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.OnInteraction
	 */
	struct ABP_OBJ_InteractWith_C_OnInteraction_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.UserConstructionScript
	 */
	struct ABP_OBJ_InteractWith_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.OnObjectiveStarted
	 */
	struct ABP_OBJ_InteractWith_C_OnObjectiveStarted_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.InteractionComplete
	 */
	struct ABP_OBJ_InteractWith_C_InteractionComplete_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R7W0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.ReceiveBeginPlay
	 */
	struct ABP_OBJ_InteractWith_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.OnWaitingStarted
	 */
	struct ABP_OBJ_InteractWith_C_OnWaitingStarted_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.OnObjectiveEnded
	 */
	struct ABP_OBJ_InteractWith_C_OnObjectiveEnded_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.InteractionCompleteWithState
	 */
	struct ABP_OBJ_InteractWith_C_InteractionCompleteWithState_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_173B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                State;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.OnInteractiveExclusive
	 */
	struct ABP_OBJ_InteractWith_C_OnInteractiveExclusive_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LWQG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.OnInteractiveExclusiveWithState
	 */
	struct ABP_OBJ_InteractWith_C_OnInteractiveExclusiveWithState_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractionMode                                           Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O3EA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCustomInteractionActionParams*                      CustomParams;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                State;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.GatherCleanUp
	 */
	struct ABP_OBJ_InteractWith_C_GatherCleanUp_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.InteractionStateChanged
	 */
	struct ABP_OBJ_InteractWith_C_InteractionStateChanged_Params
	{
	public:
		class FName                                                NewState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                LastState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.PickUpConsumed
	 */
	struct ABP_OBJ_InteractWith_C_PickUpConsumed_Params
	{
	public:
		struct FSpentObject                                        SpentObject;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.DynamicActorEndPlay
	 */
	struct ABP_OBJ_InteractWith_C_DynamicActorEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.OnWaitingEnded
	 */
	struct ABP_OBJ_InteractWith_C_OnWaitingEnded_Params
	{	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.ExecuteUbergraph_BP_OBJ_InteractWith
	 */
	struct ABP_OBJ_InteractWith_C_ExecuteUbergraph_BP_OBJ_InteractWith_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VVSP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OBJ_InteractWith.BP_OBJ_InteractWith_C.ObjectiveCompletedSuccessfully__DelegateSignature
	 */
	struct ABP_OBJ_InteractWith_C_ObjectiveCompletedSuccessfully__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
