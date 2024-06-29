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
	 * BlueprintGeneratedClass BP_Action_AnimSet_CannotReachTarget_AI.BP_Action_AnimSet_CannotReachTarget_AI_C
	 * Size -> 0x009C (FullSize[0x028C] - InheritedSize[0x01F0])
	 */
	class UBP_Action_AnimSet_CannotReachTarget_AI_C : public UBP_Action_AnimSet_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCardDealerComponent*                                CardDealerComponent;                                     // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAIController*                                     Controller;                                              // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        PeekCardCheckTimer;                                      // 0x0208(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBP_ActionParams_AnimSet_CannotReachTarget_AI_C*     OutOfReachParams;                                        // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              CombatTarget;                                            // 0x0218(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSearchDistanceInFrontOfOwner;                         // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               NavigableDistanceInFrontOfOwnerFact;                     // 0x0224(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               VerticalAngleFromOwnerToTargetFact;                      // 0x0230(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2Q4V[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            CombatConditionsExpression;                              // 0x0240(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               HorizontalDistanceFromOwnerToTargetFact;                 // 0x0278(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      NavigableDistanceInFrontOfOwner;                         // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumAcceptableDistanceInFrontOwner;                   // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMinimumAcceptableDistanceInFrontOwner();
		bool OnBeginEarly();
		void DisablePeekCardCheck();
		void EnablePeekedCardCheck();
		void OnCombatStateExpressionChanged(bool bResult);
		void PostResolve();
		void EndActionOnCardNotPeeked();
		void InitialiseVariables();
		void PreResolve();
		void RemoveDistanceFacts();
		void AddDistanceFacts();
		void CacheDistanceInFrontOfCharacterToFact();
		void CacheVerticalAngleToTargetFact();
		void CacheHorizontalDistanceToTargetFact();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_AnimSet_CannotReachTarget_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
