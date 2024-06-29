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
	 * UserDefinedStruct SLightSettings.SLightSettings
	 * Size -> 0x003D
	 */
	struct FSLightSettings
	{
	public:
		EStatefulLightActivationState                              ActivationState_39_DA44E34A46FE4C6D8E008283A58661D8;     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FMA4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TemperatureAdjustement_3_D74DCE8F4D15766DD3CC30AF421FEBC0; // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RandomTemperatureVariation_6_B157B1B4490B7C0503707FB50712F907; // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FilterColor_9_94D925EE44269DDDCE2CE98D243765F2;          // 0x000C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IntensitiyAdjustment_13_2C0A39674F4D14C3270A7DB0E6BC8D62; // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttenuationRadiusAdjustment_15_D8505129469A820B0759CB938EF2360B; // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightDrawDistance_17_C9ADF3344E1778BC34B3DAB4B45EA72D;   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         IntensityAnimationCurve_20_0566D5B34FF2184ABBEF5EB36B64B885; // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationPlaybackRate_23_A098CF8242AFF0C45A34648AF30D8D53; // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationDelayRange_25_85AA9D6A447A79F8C4104E82670E3B71; // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              MeshTint_31_C57976804C3EB6ECBF70379FD6A431DA;            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableParticles_34_C41A88B947B9AECDF8B760A973C4DB28;    // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
