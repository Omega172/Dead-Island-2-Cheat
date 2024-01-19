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
	 * BlueprintGeneratedClass BP_Action_Player_Dead.BP_Action_Player_Dead_C
	 * Size -> 0x0094 (FullSize[0x01B4] - InheritedSize[0x0120])
	 */
	class UBP_Action_Player_Dead_C : public UPlayerDeadCharacterAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsSinglePlayer;                                          // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M7ZX[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADIPlayerCharacter*                                  Character;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            SinglePlayerDeathPosedExpression;                        // 0x0138(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            CoopDeathPosedExpression;                                // 0x0170(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               CannotPushFact;                                          // 0x01A8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnFeastingMeatpile();
		void GetAllActorToIgnoreForLineTrace(TArray<class AActor*>* ActorsToIgnore);
		void DeathPosedExpressionChanged(bool bResult);
		struct FKnowledgeBaseExpression GetDeathPosedExpression();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Player_Dead(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
