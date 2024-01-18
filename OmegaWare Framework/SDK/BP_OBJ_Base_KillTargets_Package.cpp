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
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.HideTargetUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::HideTargetUI(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.HideTargetUI");
		
		ABP_OBJ_Base_KillTargets_C_HideTargetUI_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.GetIconActorFromTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUIIconComponent*                            UIIconComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OBJ_Base_KillTargets_C::GetIconActorFromTarget(class AActor* Target, class UUIIconComponent** UIIconComponent, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.GetIconActorFromTarget");
		
		ABP_OBJ_Base_KillTargets_C_GetIconActorFromTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UIIconComponent != nullptr)
			*UIIconComponent = params.UIIconComponent;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.AddIconActorToParticipant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::AddIconActorToParticipant(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.AddIconActorToParticipant");
		
		ABP_OBJ_Base_KillTargets_C_AddIconActorToParticipant_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.UnregisterTargetIcons
	 * 		Flags  -> ()
	 */
	void ABP_OBJ_Base_KillTargets_C::UnregisterTargetIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.UnregisterTargetIcons");
		
		ABP_OBJ_Base_KillTargets_C_UnregisterTargetIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.SetInitialIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUIIconComponent*                            IconComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::SetInitialIconVisibility(class UUIIconComponent* IconComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.SetInitialIconVisibility");
		
		ABP_OBJ_Base_KillTargets_C_SetInitialIconVisibility_Params params {};
		params.IconComponent = IconComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.ChooseObjectiveProgressUIDataAsset
	 * 		Flags  -> ()
	 */
	void ABP_OBJ_Base_KillTargets_C::ChooseObjectiveProgressUIDataAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.ChooseObjectiveProgressUIDataAsset");
		
		ABP_OBJ_Base_KillTargets_C_ChooseObjectiveProgressUIDataAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.GetCurrentKillCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Killcount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::GetCurrentKillCount(int32_t* Killcount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.GetCurrentKillCount");
		
		ABP_OBJ_Base_KillTargets_C_GetCurrentKillCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Killcount != nullptr)
			*Killcount = params.Killcount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.WillModifyLootTables
	 * 		Flags  -> ()
	 */
	bool ABP_OBJ_Base_KillTargets_C::WillModifyLootTables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.WillModifyLootTables");
		
		ABP_OBJ_Base_KillTargets_C_WillModifyLootTables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Modify Loot Tables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADIAICharacter*                              AITarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::ModifyLootTables(class ADIAICharacter* AITarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Modify Loot Tables");
		
		ABP_OBJ_Base_KillTargets_C_ModifyLootTables_Params params {};
		params.AITarget = AITarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Get Target Kill Count
	 * 		Flags  -> ()
	 */
	int32_t ABP_OBJ_Base_KillTargets_C::GetTargetKillCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Get Target Kill Count");
		
		ABP_OBJ_Base_KillTargets_C_GetTargetKillCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Has KillCount Been Met
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequiredKillOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_OBJ_Base_KillTargets_C::HasKillCountBeenMet(int32_t RequiredKillOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Has KillCount Been Met");
		
		ABP_OBJ_Base_KillTargets_C_HasKillCountBeenMet_Params params {};
		params.RequiredKillOffset = RequiredKillOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.UpdateObjectiveProgressUI
	 * 		Flags  -> ()
	 */
	void ABP_OBJ_Base_KillTargets_C::UpdateObjectiveProgressUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.UpdateObjectiveProgressUI");
		
		ABP_OBJ_Base_KillTargets_C_UpdateObjectiveProgressUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.SetObjectiveProgressUI
	 * 		Flags  -> ()
	 */
	void ABP_OBJ_Base_KillTargets_C::SetObjectiveProgressUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.SetObjectiveProgressUI");
		
		ABP_OBJ_Base_KillTargets_C_SetObjectiveProgressUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Have Objective Requirements Been Met
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ObjectiveComplete                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OBJ_Base_KillTargets_C::HaveObjectiveRequirementsBeenMet(bool* ObjectiveComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Have Objective Requirements Been Met");
		
		ABP_OBJ_Base_KillTargets_C_HaveObjectiveRequirementsBeenMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectiveComplete != nullptr)
			*ObjectiveComplete = params.ObjectiveComplete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_OBJ_Base_KillTargets_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.UserConstructionScript");
		
		ABP_OBJ_Base_KillTargets_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.AddAgentToTargetList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::AddAgentToTargetList(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.AddAgentToTargetList");
		
		ABP_OBJ_Base_KillTargets_C_AddAgentToTargetList_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Target Eliminated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::TargetEliminated(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Target Eliminated");
		
		ABP_OBJ_Base_KillTargets_C_TargetEliminated_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.SequenceEnded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UScriptedSequenceComponent*                  EndedSequence                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::SequenceEnded(class UScriptedSequenceComponent* EndedSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.SequenceEnded");
		
		ABP_OBJ_Base_KillTargets_C_SequenceEnded_Params params {};
		params.EndedSequence = EndedSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Target Despawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::TargetDespawned(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.Target Despawned");
		
		ABP_OBJ_Base_KillTargets_C_TargetDespawned_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.OnObjectiveStarted
	 * 		Flags  -> ()
	 */
	void ABP_OBJ_Base_KillTargets_C::OnObjectiveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.OnObjectiveStarted");
		
		ABP_OBJ_Base_KillTargets_C_OnObjectiveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.AgentReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::AgentReceived(class AActor* Agent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.AgentReceived");
		
		ABP_OBJ_Base_KillTargets_C_AgentReceived_Params params {};
		params.Agent = Agent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.OnObjectiveEnded
	 * 		Flags  -> ()
	 */
	void ABP_OBJ_Base_KillTargets_C::OnObjectiveEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.OnObjectiveEnded");
		
		ABP_OBJ_Base_KillTargets_C_OnObjectiveEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.OnTargetWillBeKilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_OBJ_Base_KillTargets_C::OnTargetWillBeKilled(class AActor* Target, class AActor* Killer, const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.OnTargetWillBeKilled");
		
		ABP_OBJ_Base_KillTargets_C_OnTargetWillBeKilled_Params params {};
		params.Target = Target;
		params.Killer = Killer;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_OBJ_Base_KillTargets_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.ReceiveBeginPlay");
		
		ABP_OBJ_Base_KillTargets_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.ExecuteUbergraph_BP_OBJ_Base_KillTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OBJ_Base_KillTargets_C::ExecuteUbergraph_BP_OBJ_Base_KillTargets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C.ExecuteUbergraph_BP_OBJ_Base_KillTargets");
		
		ABP_OBJ_Base_KillTargets_C_ExecuteUbergraph_BP_OBJ_Base_KillTargets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OBJ_Base_KillTargets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OBJ_Base_KillTargets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OBJ_Base_KillTargets.BP_OBJ_Base_KillTargets_C");
		return ptr;
	}

}


