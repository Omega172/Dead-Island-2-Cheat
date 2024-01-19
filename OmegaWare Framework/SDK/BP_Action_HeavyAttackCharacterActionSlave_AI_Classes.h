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
	 * BlueprintGeneratedClass BP_Action_HeavyAttackCharacterActionSlave_AI.BP_Action_HeavyAttackCharacterActionSlave_AI_C
	 * Size -> 0x00D9 (FullSize[0x0211] - InheritedSize[0x0138])
	 */
	class UBP_Action_HeavyAttackCharacterActionSlave_AI_C : public UCoopSequenceCharacterAction_PairedHeavyAI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0138(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ADICharacter*                                        AICombatTarget;                                          // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             AIKnowledgeBaseComponent;                                // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       FactsToIncrement;                                        // 0x0150(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FKnowledgeBaseExpression>                    FactConditions;                                          // 0x0160(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<struct FKnowledgeBaseFactKey, struct FKnowledgeBaseExpression> LifeTimeFactsToIncrementWithConditions;                  // 0x0170(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FName                                                OwnName;                                                 // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIPlayerCharacter*                                  AtackingPlayer;                                          // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             AttackingPlayerKnowledgeBase;                            // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UKnowledgeBaseComponent*>                     KnowledgeBases;                                          // 0x01D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UDSLogChannelHandle*                                 Logger;                                                  // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DebugTagString;                                          // 0x01F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FKnowledgeBaseFactKey>                       LifetimeFacts;                                           // 0x0200(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UseLifetimeFacts;                                        // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool ExpressionEvaluationCheck();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_HeavyAttackCharacterActionSlave_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
