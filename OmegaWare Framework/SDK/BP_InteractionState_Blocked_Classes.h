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
	 * BlueprintGeneratedClass BP_InteractionState_Blocked.BP_InteractionState_Blocked_C
	 * Size -> 0x0060 (FullSize[0x0170] - InheritedSize[0x0110])
	 */
	class UBP_InteractionState_Blocked_C : public UBP_Base_InteractionState_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBarricadeComponent*                                 BarricadeComponent;                                      // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EInteractionMode, class UInteractionCategory*>        Cachedinteractioncategories;                             // 0x0120(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetCurrentState(bool* bStateActive);
		void UnbindToStateDelegates();
		void CacheRequiredComponents(class AActor* Target);
		void BindToStateDelegates();
		void OnEnterState();
		void OnLeaveState();
		void ExecuteUbergraph_BP_InteractionState_Blocked(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
