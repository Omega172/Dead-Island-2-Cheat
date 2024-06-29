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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct SCustomVoiceStimParams.SCustomVoiceStimParams
	 * Size -> 0x0010
	 */
	struct FSCustomVoiceStimParams
	{
	public:
		EVoiceStimTypes                                            VoiceStim_113_7A8DDA00421FC65BF20DCFB3420780FE;          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LJ8S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSStimOverrideParams                                OverrideParams_110_DE1F7BFB4EB659473DB291A579AE21A6;     // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		float                                                      Duration_104_51C68F524A78E4FF1442559F104580F2;           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
