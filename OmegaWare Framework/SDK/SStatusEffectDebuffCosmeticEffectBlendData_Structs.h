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
	 * UserDefinedStruct SStatusEffectDebuffCosmeticEffectBlendData.SStatusEffectDebuffCosmeticEffectBlendData
	 * Size -> 0x001C
	 */
	struct FSStatusEffectDebuffCosmeticEffectBlendData
	{
	public:
		float                                                      BlendInTime_2_2759B6FE4378296ACFACC2ABB0C94F32;          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendOutTime_11_04AD412440D7D773A1EFA2AEFF10EDE1;        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECosmeticEffectLerpType                                    LerpType_8_5C0649FA4B02612E513E9FA1F34CC6EC;             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_545U[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParameterName_14_082530834FFF6ABD387BBB93C7403CB6;       // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ParameterMaxValue_17_F2547AC14389DDAB8F4C62A1D6FE1424;   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartDelay_20_4DB27957457A634691FFC38268EFF553;          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
