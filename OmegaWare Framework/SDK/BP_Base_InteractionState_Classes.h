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
	 * BlueprintGeneratedClass BP_Base_InteractionState.BP_Base_InteractionState_C
	 * Size -> 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
	 */
	class UBP_Base_InteractionState_C : public UInteractionStateBlockable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetCurrentState(bool* bStateActive);
		void CacheRequiredComponents(class AActor* Target);
		void UpdateInteractionState(bool bIsBlocked);
		void UnbindToStateDelegates();
		void BindToStateDelegates();
		void Initialize(class UInteractiveComponent* InInteractiveComponent);
		void Uninitialize();
		void ExecuteUbergraph_BP_Base_InteractionState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
