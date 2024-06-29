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
	 * BlueprintGeneratedClass BP_Action_StandUp_AI.BP_Action_StandUp_AI_C
	 * Size -> 0x0028 (FullSize[0x0140] - InheritedSize[0x0118])
	 */
	class UBP_Action_StandUp_AI_C : public UStandUpCharacterAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseFactKey                               StandingUpFact;                                          // 0x0120(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YE6B[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKnowledgeBaseComponent*                             KnowledgeBase;                                           // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIAICharacter*                                      OwnerCharacter;                                          // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void OnConstruct(class UCustomActionParamsBase* InitParams);
		void ExecuteUbergraph_BP_Action_StandUp_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
