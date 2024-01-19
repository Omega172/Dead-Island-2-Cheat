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
	 * BlueprintGeneratedClass BP_Action_StatusEffect_Electrocute_Screamer_Electric.BP_Action_StatusEffect_Electrocute_Screamer_Electric_C
	 * Size -> 0x0060 (FullSize[0x0130] - InheritedSize[0x00D0])
	 */
	class UBP_Action_StatusEffect_Electrocute_Screamer_Electric_C : public UBP_CharacterAction_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             OwnerKnowledgeBase;                                      // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               ChainElectrocutionFact;                                  // 0x00E0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J1NF[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIAICharacter*                                      Owner;                                                   // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UPerkDefinition*>                             PerkDefinition;                                          // 0x00F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FGuid>                                       PerkGuid;                                                // 0x0108(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UPerksComponent*                                     PerkComponent;                                           // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C* ArcFromMinionComponent;                                  // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              NewVar_1;                                                // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DeactivateTransmittableStatus();
		void ActivateTransmittableStatus();
		void RemoveUniqueElectrocuteFact();
		void RemovePerks();
		void AddPerks();
		void AddUniqueElectrocuteFact();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_StatusEffect_Electrocute_Screamer_Electric(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
