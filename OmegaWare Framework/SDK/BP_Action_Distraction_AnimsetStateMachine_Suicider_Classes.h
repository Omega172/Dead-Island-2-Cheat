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
	 * BlueprintGeneratedClass BP_Action_Distraction_AnimsetStateMachine_Suicider.BP_Action_Distraction_AnimsetStateMachine_Suicider_C
	 * Size -> 0x0060 (FullSize[0x0261] - InheritedSize[0x0201])
	 */
	class UBP_Action_Distraction_AnimsetStateMachine_Suicider_C : public UBP_Action_Distraction_AnimStateMachine_AI_C
	{
	public:
		unsigned char                                              UnknownData_WBXE[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0208(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseExpression                            ForceSuiciderExplosionExpression;                        // 0x0210(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       SuiciderExplosionActionHelper;                           // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               SuiciderExplosionActionID;                               // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SuiciderDetonationActionBound;                           // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UnbindSuiciderDetonationActionListeners();
		void OnSuiciderDetonationActionEnded(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		bool TryBeginSuiciderDetonationAction();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Distraction_AnimsetStateMachine_Suicider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
