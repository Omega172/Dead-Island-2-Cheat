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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Factions.FactionAgentComponent
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UFactionAgentComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_AG58[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFaction*                                            Faction;                                                 // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAgentToFactionMapping>                      AgentFactionReactions;                                   // 0x0108(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAgentToAgentMapping>                        AgentAgentReactions;                                     // 0x0118(0x0010) Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetReactionToFaction(class UFaction* Faction, EFactionReaction Reaction);
		void SetReactionToAgent(class UFactionAgentComponent* Other, EFactionReaction Reaction, bool bBidirectional);
		void ResetReactionToFaction(class UFaction* Faction);
		void ResetReactionToAgent(class UFactionAgentComponent* Other, bool bBidirectional);
		void ResetAllReactionsToFactions();
		void ResetAllReactionsToAgents(bool bBidirectional);
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionManager
	 * Size -> 0x0038 (FullSize[0x02E8] - InheritedSize[0x02B0])
	 */
	class AFactionManager : public AInfo
	{
	public:
		class UFactionReactionMap*                                 FactionReactionData;                                     // 0x02B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TZOJ[0x10];                                  // 0x02B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFactionReaction>                            OverrideFactionMap;                                      // 0x02C8(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XEX8[0x10];                                  // 0x02D8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetReaction(const struct FMultidirectionalFactionReaction& Reaction);
		void ResetReactions();
		void ResetReaction(const struct FMultidirectionalFactionReaction& Reaction);
		EFactionReaction GetFactionReaction(class UFactionAgentComponent* FromAgent, class UFactionAgentComponent* ToAgent);
		EFactionReaction GetAgentToFactionReaction(class UFactionAgentComponent* FromAgent, class UFaction* ToFaction);
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.FactionReactionMap
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFactionReactionMap : public UDataAsset
	{
	public:
		TArray<struct FMultidirectionalFactionReaction>            Reactions;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Factions.Faction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFaction : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
