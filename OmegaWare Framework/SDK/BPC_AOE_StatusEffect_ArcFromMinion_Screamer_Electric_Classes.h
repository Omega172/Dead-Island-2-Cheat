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
	 * BlueprintGeneratedClass BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric.BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C
	 * Size -> 0x0040 (FullSize[0x07B0] - InheritedSize[0x0770])
	 */
	class UBPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric_C : public UBPC_Base_AOE_StatusEffect_ArcFromSource_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0770(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FKnowledgeBaseExpression                            CanTargetBeArcShockedExpression;                         // 0x0778(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		bool MeetsDirectArcConditions(class AActor* AffectedActor);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_AOE_StatusEffect_ArcFromMinion_Screamer_Electric(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
