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
	 * BlueprintGeneratedClass BP_Action_Grapple_Master_AI.BP_Action_Grapple_Master_AI_C
	 * Size -> 0x00A8 (FullSize[0x01C8] - InheritedSize[0x0120])
	 */
	class UBP_Action_Grapple_Master_AI_C : public UCoopSequenceCharacterActionSlave
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FCardDealerCounterModification                      CountersToModifyOnActionEnd;                             // 0x0128(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ModifyCounters();
		void OnEnd(const struct FGuid& RequestId, const struct FCharacterActionOnEndParams& Params);
		void ExecuteUbergraph_BP_Action_Grapple_Master_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
