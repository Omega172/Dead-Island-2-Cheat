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
	 * BlueprintGeneratedClass BP_ActionParams_StatefulActivitySequence_AI.BP_ActionParams_StatefulActivitySequence_AI_C
	 * Size -> 0x00A4 (FullSize[0x00DC] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_StatefulActivitySequence_AI_C : public UCustomActionParamsBase
	{
	public:
		unsigned char                                              UnknownData_Y4LB[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameSequenceParams                                 GameSequenceParams;                                      // 0x0040(0x0090) Edit, BlueprintVisible, ExposeOnSpawn
		class ABP_StatefulActivity_SingleParticipant_C*            StatefulActivity;                                        // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      SequenceOverlapTime;                                     // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
