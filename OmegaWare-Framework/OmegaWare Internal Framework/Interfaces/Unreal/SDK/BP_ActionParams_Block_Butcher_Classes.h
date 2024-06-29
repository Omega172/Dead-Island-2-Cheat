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
	 * BlueprintGeneratedClass BP_ActionParams_Block_Butcher.BP_ActionParams_Block_Butcher_C
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_Block_Butcher_C : public UCustomActionParamsBase
	{
	public:
		float                                                      MinDuration;                                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDuration;                                             // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            MaintainActionTargetCondition;                           // 0x0040(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		float                                                      StopActionsBuffer;                                       // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               IdentifierFact;                                          // 0x007C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		class UKnowledgeBaseComponent*                             CombatTargetKnowledgeBaseComponent;                      // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
