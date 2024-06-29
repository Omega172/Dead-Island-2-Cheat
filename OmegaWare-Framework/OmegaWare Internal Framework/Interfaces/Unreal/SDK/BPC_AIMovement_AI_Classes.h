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
	 * BlueprintGeneratedClass BPC_AIMovement_AI.BPC_AIMovement_AI_C
	 * Size -> 0x00B0 (FullSize[0x0530] - InheritedSize[0x0480])
	 */
	class UBPC_AIMovement_AI_C : public UAIMovementComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FVector>                                     DryRunQueryResults;                                      // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsInMovementAction;                                      // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J49I[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSCachedMovementData                                CachedMovementData;                                      // 0x04A0(0x0030) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       AddFactWhenAgainstWall;                                  // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NS7C[0x7];                                   // 0x04D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseComponent*                             KnowledgeBaseComponent;                                  // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            DisableAgainstWallFactExpression;                        // 0x04E0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               AgainstWallFact;                                         // 0x0518(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E5AV[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Base_AIController_C*                             Controller;                                              // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
