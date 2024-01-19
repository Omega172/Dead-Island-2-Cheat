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
	 * BlueprintGeneratedClass BPC_Human_StimEmitter.BPC_Human_StimEmitter_C
	 * Size -> 0x0100 (FullSize[0x03E8] - InheritedSize[0x02E8])
	 */
	class UBPC_Human_StimEmitter_C : public UBPC_Base_StimEmitter_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKnowledgeBaseComponent*                             KnowledgeBase;                                           // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            ActivateSurvivorStimExpression;                          // 0x02F8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UStimTemplate*                                       SurvivorStimTemplate;                                    // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSStimOverrideParams                                SurvivorStimParams;                                      // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		struct FStimID                                             SurvivorStimID;                                          // 0x0340(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MAY5[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UStimTemplate*, struct FSStimOverrideParams>    PassiveStims;                                            // 0x0348(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UStimTemplate*, struct FStimID>                 ActivePassiveStimList;                                   // 0x0398(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void TogglePassiveStim(class UStimTemplate* StimTemplate, bool Enable);
		void DisablePassiveStims();
		void EnablePassiveStims();
		void UnbindListeners();
		void BindListeners();
		void OnSurvivorStimExpressionChanged(bool bResult);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPC_Human_StimEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
