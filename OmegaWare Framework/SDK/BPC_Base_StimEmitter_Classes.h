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
	 * BlueprintGeneratedClass BPC_Base_StimEmitter.BPC_Base_StimEmitter_C
	 * Size -> 0x0058 (FullSize[0x02E8] - InheritedSize[0x0290])
	 */
	class UBPC_Base_StimEmitter_C : public USceneComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              ActiveStimList[0x50];                                    // 0x0298(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void BeginAndEndStim(class UStimTemplate* StimTemplate, const struct FSStimOverrideParams& StimParams, float Duration, struct FStimID* StimID);
		void EndStim(const struct FStimID& StimID);
		void BeginStim(class UStimTemplate* StimTemplate, const struct FSStimOverrideParams& StimParams, struct FStimID* StimID);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPC_Base_StimEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
