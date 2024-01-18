#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
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
	 * BlueprintGeneratedClass BP_InteractionState_Gather.BP_InteractionState_Gather_C
	 * Size -> 0x0048 (FullSize[0x0158] - InheritedSize[0x0110])
	 */
	class UBP_InteractionState_Gather_C : public UBP_Base_InteractionState_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              Owner;                                                   // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseExpression                            KBExpression;                                            // 0x0120(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void UnbindToStateDelegates();
		void BindToStateDelegates();
		void OnGatherFactChanged(bool bResult);
		void CacheRequiredComponents(class AActor* Target);
		void Initialize(class UInteractiveComponent* InInteractiveComponent);
		void GatherFactChanged(bool bGatherState);
		void UpdateState();
		void ExecuteUbergraph_BP_InteractionState_Gather(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
