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
	 * BlueprintGeneratedClass BP_ActorGroupFilter_KnowledgeBaseExpression.BP_ActorGroupFilter_KnowledgeBaseExpression_C
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UBP_ActorGroupFilter_KnowledgeBaseExpression_C : public UActorGroupFilter
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0038(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash

	public:
		bool CanBeAdded(class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
