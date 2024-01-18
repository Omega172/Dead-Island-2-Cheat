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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPC_AIMovement_AI.BPC_AIMovement_AI_C
	 * Size -> 0x00B0 (FullSize[0x0510] - InheritedSize[0x0460])
	 */
	class UBPC_AIMovement_AI_C : public UAIMovementComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FVector>                                     DryRunQueryResults;                                      // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsInMovementAction;                                      // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3ORC[0x7];                                   // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSCachedMovementData                                CachedMovementData;                                      // 0x0480(0x0030) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       AddFactWhenAgainstWall;                                  // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1I7T[0x7];                                   // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            DisableAgainstWallFactExpression;                        // 0x04C0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               AgainstWallFact;                                         // 0x04F8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_535C[0x4];                                   // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Base_AIController_C*                             Controller;                                              // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnCharacterPossessed(class APawn* NewPawn);
		void RemoveAgainstWallFactDisableListener();
		void OnDisableAgainstWallFactExpressionChanged(bool bResult);
		void AddAgainstWallFactDisableListener();
		void TryGetCachedMovementData(const class FName& MovementDataName, bool* Success, struct FSCachedMovementData* CachedMovementData);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPC_AIMovement_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
