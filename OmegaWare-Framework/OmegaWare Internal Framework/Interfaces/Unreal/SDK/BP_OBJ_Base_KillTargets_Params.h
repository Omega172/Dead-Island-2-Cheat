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
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.HideTargetUI
	 */
	struct ABP_OBJ_Base_KillTargets_C_HideTargetUI_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.GetIconActorFromTarget
	 */
	struct ABP_OBJ_Base_KillTargets_C_GetIconActorFromTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUIIconComponent*                                    UIIconComponent;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KVAR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.AddIconActorToParticipant
	 */
	struct ABP_OBJ_Base_KillTargets_C_AddIconActorToParticipant_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.UnregisterTargetIcons
	 */
	struct ABP_OBJ_Base_KillTargets_C_UnregisterTargetIcons_Params
	{	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.SetInitialIconVisibility
	 */
	struct ABP_OBJ_Base_KillTargets_C_SetInitialIconVisibility_Params
	{
	public:
		class UUIIconComponent*                                    IconComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.ChooseObjectiveProgressUIDataAsset
	 */
	struct ABP_OBJ_Base_KillTargets_C_ChooseObjectiveProgressUIDataAsset_Params
	{	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.GetCurrentKillCount
	 */
	struct ABP_OBJ_Base_KillTargets_C_GetCurrentKillCount_Params
	{
	public:
		int32_t                                                    Killcount;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.WillModifyLootTables
	 */
	struct ABP_OBJ_Base_KillTargets_C_WillModifyLootTables_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CK6B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Modify Loot Tables
	 */
	struct ABP_OBJ_Base_KillTargets_C_ModifyLootTables_Params
	{
	public:
		class ADIAICharacter*                                      AITarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Get Target Kill Count
	 */
	struct ABP_OBJ_Base_KillTargets_C_GetTargetKillCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Has KillCount Been Met
	 */
	struct ABP_OBJ_Base_KillTargets_C_HasKillCountBeenMet_Params
	{
	public:
		int32_t                                                    RequiredKillOffset;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T9VO[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.UpdateObjectiveProgressUI
	 */
	struct ABP_OBJ_Base_KillTargets_C_UpdateObjectiveProgressUI_Params
	{	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.SetObjectiveProgressUI
	 */
	struct ABP_OBJ_Base_KillTargets_C_SetObjectiveProgressUI_Params
	{	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Have Objective Requirements Been Met
	 */
	struct ABP_OBJ_Base_KillTargets_C_HaveObjectiveRequirementsBeenMet_Params
	{
	public:
		bool                                                       ObjectiveComplete;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.UserConstructionScript
	 */
	struct ABP_OBJ_Base_KillTargets_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.AddAgentToTargetList
	 */
	struct ABP_OBJ_Base_KillTargets_C_AddAgentToTargetList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Target Eliminated
	 */
	struct ABP_OBJ_Base_KillTargets_C_TargetEliminated_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.SequenceEnded
	 */
	struct ABP_OBJ_Base_KillTargets_C_SequenceEnded_Params
	{
	public:
		class UScriptedSequenceComponent*                          EndedSequence;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Target Despawned
	 */
	struct ABP_OBJ_Base_KillTargets_C_TargetDespawned_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.OnObjectiveStarted
	 */
	struct ABP_OBJ_Base_KillTargets_C_OnObjectiveStarted_Params
	{	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.AgentReceived
	 */
	struct ABP_OBJ_Base_KillTargets_C_AgentReceived_Params
	{
	public:
		class AActor*                                              Agent;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.OnObjectiveEnded
	 */
	struct ABP_OBJ_Base_KillTargets_C_OnObjectiveEnded_Params
	{	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.OnTargetWillBeKilled
	 */
	struct ABP_OBJ_Base_KillTargets_C_OnTargetWillBeKilled_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Killer;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FEventInstigator                                    Instigator;                                              // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.ReceiveBeginPlay
	 */
	struct ABP_OBJ_Base_KillTargets_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.ExecuteUbergraph_BP_OBJ_Base_KillTargets
	 */
	struct ABP_OBJ_Base_KillTargets_C_ExecuteUbergraph_BP_OBJ_Base_KillTargets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
