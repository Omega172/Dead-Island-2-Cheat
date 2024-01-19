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
	 * UserDefinedStruct SGeneralPlayerParams.SGeneralPlayerParams
	 * Size -> 0x0020
	 */
	struct FSGeneralPlayerParams
	{
	public:
		float                                                      LowStaminaAmount_2_76225813452B13E0E39B3A8370F5F6A5;     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecoveredStaminaAmount_4_1EFE2A2140A5C711C675CF8A6F81646C; // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeExitingLowStaminaPose_6_B1E184CC41379D785C58039C845AF76C; // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecentlyAttackedCombatAnimSetResetLength_28_90320A794B4B9256D9952FAFBF07D6BA; // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendableActivationThreshold_22_FBF553C74AD5FEFCFBA73DAC53E37156; // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendableDeactivationThreshold_23_A6F556CB47BA323BD27784B21BAB9290; // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NotAttackingBlendableLimitation_20_6402F0824DD71801216AF6B8566CA443; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeavyAttackHoldTransitionTime_31_48B48E3340765EBFDC5C20B0FD0B3489; // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
