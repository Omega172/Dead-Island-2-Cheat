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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct STorsoTwistParams.STorsoTwistParams
	 * Size -> 0x0024
	 */
	struct FSTorsoTwistParams
	{
	public:
		struct FVector                                             ReachOriginHeight_130_7A8DDA00421FC65BF20DCFB3420780FE;  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoAim_133_D5DAD889429254E90B42B497F08354DF;            // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IH8D[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ManuallyAimedAdditionalOffset_131_51C68F524A78E4FF1442559F104580F2; // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetCapsuleTopScalar_137_FA2249C24D2CF8AB86EC219B4D70D4BD; // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetCapsuleBottomScalar_138_3DAE685B48FE909F1B7FC7A3B3670728; // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
