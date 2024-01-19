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
	 * UserDefinedStruct SSkyPresets.SSkyPresets
	 * Size -> 0x00A0
	 */
	struct FSSkyPresets
	{
	public:
		bool                                                       SkydomeIsSphere_45_7384BE0948D282B18F09FA8A0C341D22;     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseDirectionalLight_7_B87EBE4A40F9F29900277993E61DD826;  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_41TE[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SkyTexture_58_5369C44646206AF3DC7C37B6F89D9453[0x28];    // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkyCubemap_59_8BF589EF458BB33CFFF9DDBB1D97CC44[0x28];    // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      SkyBrightness_15_7719C67C4CC0B8F5F66E019CC19E2AA5;       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SkyDomeScale_17_1D95A06742F87BE68BF6A282631EBE82;        // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseFog_57_925040364F18818F47ECFC9EFE234743;              // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4KN9[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FogDensity_23_2123CC054EC6F45E62F5119450FC4B6E;          // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogHeightFalloff_25_5612BA9D45DDC1DD841DDAB5D2BE5C06;    // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogStartDistance_55_D20D354448DD10AFA32E8FB4C04E0229;    // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VolFogScatteringDistribution_27_AEFFE5B043A4275151D7D0AF798D344F; // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VolFogViewDistance_29_5CF3961E4DA31D6E842441B0E2B1BA5E;  // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FarFogCubemapDirectionalityDistance_31_164D07D64F337D8BC49C1DB27EA4AAAD; // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunAngle_19_4D259C864D2F3C7F11771C867DB43ABB;            // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunElevation_21_0F6C68F746FE1CF88707D0ACD73505B0;        // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunSize_34_012A274543E9FB161DEF49B4F1F8BC88;             // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunIntensity_40_7C17A348463BB2E0F7161BB8C46E3121;        // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunTemperature_41_6192FB0A44E65563A93A2DA3CABD5464;      // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseSunAsMoon_43_DBB6BB954F3B2643C575B1843453DDEB;        // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZITC[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SecondFogDensity_74_B9D7793D4BBD9102471994B80F958718;    // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondFogHeightFalloff_76_B6B77CE7461B3AB1B3ABBCA88599C9DB; // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondFogHeightOffset_78_144551934D76B24F8DAD2A957E0C9F16; // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
