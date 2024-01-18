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
	 * BlueprintGeneratedClass BP_InteractionState_Entitlement.BP_InteractionState_Entitlement_C
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	class UBP_InteractionState_Entitlement_C : public UBP_Base_InteractionState_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEntitlementComponent*                               EntitlementComponent;                                    // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentState(bool* bStateActive);
		void UnbindToStateDelegates();
		void UpdateText();
		void UpdateInteractionState(bool bIsBlocked);
		void OnEntitlementStateChanged(bool bHasAllRequiredEntitlements);
		void BindToStateDelegates();
		void CacheRequiredComponents(class AActor* Target);
		void OnEnterState();
		void ExecuteUbergraph_BP_InteractionState_Entitlement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
