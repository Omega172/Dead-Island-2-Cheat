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
	 * BlueprintGeneratedClass BP_Action_Transformed_Mutator.BP_Action_Transformed_Mutator_C
	 * Size -> 0x00A8 (FullSize[0x01B0] - InheritedSize[0x0108])
	 */
	class UBP_Action_Transformed_Mutator_C : public UAIMutatorTransformedAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_Zombie_C*                                   Pawn;                                                    // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBodyProxyTreeAsset*                                 BodyProxyTreeOverride;                                   // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UCosmeticEffectsDefinition*>       PropagationCosmeticEffectOverrides;                      // 0x0120(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FKnowledgeBaseFactKey                               FeastingFact;                                            // 0x0170(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_39ON[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          ActivityDataTable;                                       // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Ak[0x28];                                                // 0x0188(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void RemoveAggressiveStatusEffect();
		void AddAggressiveStatusEffect();
		void RemoveWalkerActivityAbilities();
		void OverridePropagationData();
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void OnBlockLoopingGoreExpressionChanged(bool bResult);
		void DestroyLoopingGoreAudioIfValid();
		void CreateLoopingGoreAudio();
		void OnBegin(const struct FGuid& RequestId, const struct FCharacterActionOnBeginParams& Params);
		void ExecuteUbergraph_BP_Action_Transformed_Mutator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
