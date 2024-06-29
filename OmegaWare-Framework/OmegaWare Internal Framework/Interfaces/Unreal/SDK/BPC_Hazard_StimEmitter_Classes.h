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
	 * BlueprintGeneratedClass BPC_Hazard_StimEmitter.BPC_Hazard_StimEmitter_C
	 * Size -> 0x0050 (FullSize[0x0338] - InheritedSize[0x02E8])
	 */
	class UBPC_Hazard_StimEmitter_C : public UBPC_Base_StimEmitter_C
	{
	public:
		TMap<EHazardStimTypes, class UStimTemplate*>               HazardStimTemplateList;                                  // 0x02E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CreateAndBeginStim(const struct FSCustomHazardStimParams& StimParams, struct FStimID* StimID);
		void EndHazardStim(const struct FStimID& StimID);
		void BeginHazardStim(const struct FSCustomHazardStimParams& StimParams, struct FStimID* StimID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
