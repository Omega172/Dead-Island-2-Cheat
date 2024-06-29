/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00E0FE30
	 * 		Name   -> Function Factions.FactionAgentComponent.SetReactionToFaction
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFaction*                                    Faction                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFactionReaction                                   Reaction                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFactionAgentComponent::SetReactionToFaction(class UFaction* Faction, EFactionReaction Reaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionAgentComponent.SetReactionToFaction");
		
		UFactionAgentComponent_SetReactionToFaction_Params params {};
		params.Faction = Faction;
		params.Reaction = Reaction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0FD20
	 * 		Name   -> Function Factions.FactionAgentComponent.SetReactionToAgent
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFactionAgentComponent*                      Other                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFactionReaction                                   Reaction                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBidirectional                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFactionAgentComponent::SetReactionToAgent(class UFactionAgentComponent* Other, EFactionReaction Reaction, bool bBidirectional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionAgentComponent.SetReactionToAgent");
		
		UFactionAgentComponent_SetReactionToAgent_Params params {};
		params.Other = Other;
		params.Reaction = Reaction;
		params.bBidirectional = bBidirectional;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0FBC0
	 * 		Name   -> Function Factions.FactionAgentComponent.ResetReactionToFaction
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFaction*                                    Faction                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFactionAgentComponent::ResetReactionToFaction(class UFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionAgentComponent.ResetReactionToFaction");
		
		UFactionAgentComponent_ResetReactionToFaction_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0FAF0
	 * 		Name   -> Function Factions.FactionAgentComponent.ResetReactionToAgent
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFactionAgentComponent*                      Other                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBidirectional                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFactionAgentComponent::ResetReactionToAgent(class UFactionAgentComponent* Other, bool bBidirectional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionAgentComponent.ResetReactionToAgent");
		
		UFactionAgentComponent_ResetReactionToAgent_Params params {};
		params.Other = Other;
		params.bBidirectional = bBidirectional;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0FA30
	 * 		Name   -> Function Factions.FactionAgentComponent.ResetAllReactionsToFactions
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UFactionAgentComponent::ResetAllReactionsToFactions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionAgentComponent.ResetAllReactionsToFactions");
		
		UFactionAgentComponent_ResetAllReactionsToFactions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0F9A0
	 * 		Name   -> Function Factions.FactionAgentComponent.ResetAllReactionsToAgents
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bBidirectional                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFactionAgentComponent::ResetAllReactionsToAgents(bool bBidirectional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionAgentComponent.ResetAllReactionsToAgents");
		
		UFactionAgentComponent_ResetAllReactionsToAgents_Params params {};
		params.bBidirectional = bBidirectional;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactionAgentComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionAgentComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionAgentComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0FC70
	 * 		Name   -> Function Factions.FactionManager.SetReaction
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMultidirectionalFactionReaction            Reaction                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AFactionManager::SetReaction(const struct FMultidirectionalFactionReaction& Reaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionManager.SetReaction");
		
		AFactionManager_SetReaction_Params params {};
		params.Reaction = Reaction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0FC40
	 * 		Name   -> Function Factions.FactionManager.ResetReactions
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AFactionManager::ResetReactions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionManager.ResetReactions");
		
		AFactionManager_ResetReactions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0FA50
	 * 		Name   -> Function Factions.FactionManager.ResetReaction
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMultidirectionalFactionReaction            Reaction                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AFactionManager::ResetReaction(const struct FMultidirectionalFactionReaction& Reaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionManager.ResetReaction");
		
		AFactionManager_ResetReaction_Params params {};
		params.Reaction = Reaction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0F8E0
	 * 		Name   -> Function Factions.FactionManager.GetFactionReaction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UFactionAgentComponent*                      FromAgent                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFactionAgentComponent*                      ToAgent                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EFactionReaction AFactionManager::GetFactionReaction(class UFactionAgentComponent* FromAgent, class UFactionAgentComponent* ToAgent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionManager.GetFactionReaction");
		
		AFactionManager_GetFactionReaction_Params params {};
		params.FromAgent = FromAgent;
		params.ToAgent = ToAgent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00E0F820
	 * 		Name   -> Function Factions.FactionManager.GetAgentToFactionReaction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UFactionAgentComponent*                      FromAgent                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFaction*                                    ToFaction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EFactionReaction AFactionManager::GetAgentToFactionReaction(class UFactionAgentComponent* FromAgent, class UFaction* ToFaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Factions.FactionManager.GetAgentToFactionReaction");
		
		AFactionManager_GetAgentToFactionReaction_Params params {};
		params.FromAgent = FromAgent;
		params.ToFaction = ToFaction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFactionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFactionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactionReactionMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionReactionMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.FactionReactionMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Factions.Faction");
		return ptr;
	}

}


