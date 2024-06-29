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
	 * BlueprintGeneratedClass BPC_BreathingAudio_AI.BPC_BreathingAudio_AI_C
	 * Size -> 0x0010 (FullSize[0x0558] - InheritedSize[0x0548])
	 */
	class UBPC_BreathingAudio_AI_C : public UBreathingAudioComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0548(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Base_AI_C*                                       BaseAI;                                                  // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void CombatStateChanged(ECosmeticCombatState NewState);
		void ExecuteUbergraph_BPC_BreathingAudio_AI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
