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
	 * Function Factions.FactionAgentComponent.SetReactionToFaction
	 */
	struct UFactionAgentComponent_SetReactionToFaction_Params
	{
	public:
		class UFaction*                                            Faction;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFactionReaction                                           Reaction;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Factions.FactionAgentComponent.SetReactionToAgent
	 */
	struct UFactionAgentComponent_SetReactionToAgent_Params
	{
	public:
		class UFactionAgentComponent*                              Other;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFactionReaction                                           Reaction;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBidirectional;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Factions.FactionAgentComponent.ResetReactionToFaction
	 */
	struct UFactionAgentComponent_ResetReactionToFaction_Params
	{
	public:
		class UFaction*                                            Faction;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Factions.FactionAgentComponent.ResetReactionToAgent
	 */
	struct UFactionAgentComponent_ResetReactionToAgent_Params
	{
	public:
		class UFactionAgentComponent*                              Other;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBidirectional;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Factions.FactionAgentComponent.ResetAllReactionsToFactions
	 */
	struct UFactionAgentComponent_ResetAllReactionsToFactions_Params
	{	};

	/**
	 * Function Factions.FactionAgentComponent.ResetAllReactionsToAgents
	 */
	struct UFactionAgentComponent_ResetAllReactionsToAgents_Params
	{
	public:
		bool                                                       bBidirectional;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Factions.FactionManager.SetReaction
	 */
	struct AFactionManager_SetReaction_Params
	{
	public:
		struct FMultidirectionalFactionReaction                    Reaction;                                                // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Factions.FactionManager.ResetReactions
	 */
	struct AFactionManager_ResetReactions_Params
	{	};

	/**
	 * Function Factions.FactionManager.ResetReaction
	 */
	struct AFactionManager_ResetReaction_Params
	{
	public:
		struct FMultidirectionalFactionReaction                    Reaction;                                                // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Factions.FactionManager.GetFactionReaction
	 */
	struct AFactionManager_GetFactionReaction_Params
	{
	public:
		class UFactionAgentComponent*                              FromAgent;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFactionAgentComponent*                              ToAgent;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFactionReaction                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Factions.FactionManager.GetAgentToFactionReaction
	 */
	struct AFactionManager_GetAgentToFactionReaction_Params
	{
	public:
		class UFactionAgentComponent*                              FromAgent;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFaction*                                            ToFaction;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFactionReaction                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
