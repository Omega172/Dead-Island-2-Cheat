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
	 * BlueprintGeneratedClass BP_AnimNotify_ClampedModifyIntFact.BP_AnimNotify_ClampedModifyIntFact_C
	 * Size -> 0x00B9 (FullSize[0x00F1] - InheritedSize[0x0038])
	 */
	class UBP_AnimNotify_ClampedModifyIntFact_C : public UAnimNotify
	{
	public:
		struct FKnowledgeBaseFactKey                               FactToIncrement;                                         // 0x0038(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		bool                                                       ClampValue;                                              // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q6W1[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            IncrementAmountExpression;                               // 0x0048(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            MinClampExpression;                                      // 0x0080(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            MaxClampExpression;                                      // 0x00B8(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       RequiresAuthorityCheck;                                  // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ClampedFactIncrement(class UKnowledgeBaseComponent* KnowledgeBaseComponent, int32_t IncrementAmount);
		class FString GetNotifyName();
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
