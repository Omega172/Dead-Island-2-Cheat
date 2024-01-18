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
	 * BlueprintGeneratedClass BP_Action_StatusEffect_Frozen_AI.BP_Action_StatusEffect_Frozen_AI_C
	 * Size -> 0x0008 (FullSize[0x0160] - InheritedSize[0x0158])
	 */
	class UBP_Action_StatusEffect_Frozen_AI_C : public UBP_Action_StatusEffect_Stun_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0158(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnImpactReceived(class AActor* Actor, class UBaseImpactEventResultWrapper* ImpactEvent);
		void ExecuteUbergraph_BP_Action_StatusEffect_Frozen_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
