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
	 * UserDefinedStruct SEnemyGenericBalancingData.SEnemyGenericBalancingData
	 * Size -> 0x0018
	 */
	struct FSEnemyGenericBalancingData
	{
	public:
		float                                                      HitEffectLowDamageThreshold_4_34C186E74FF3670A5D2388AC9DD29AB1; // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitEffectLowDamageHeavyThreshold_7_D777C6204AE509584FDFF3AC74020B2A; // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitEffectLowDamageCriticalThreshold_9_FE4BEED542E5E9CF0261E7A1B28FD74B; // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitReactStabilityCTILarge_19_8F3EC20F42304BB678F3C2A627847FB2; // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitReactStabilityCTIMedium_21_1D5658DC449DFEE4557E2D86019D2ECB; // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitReactStabilityCTISmall_25_25D793E94AE3EC67C245B5A9241C2CC3; // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
