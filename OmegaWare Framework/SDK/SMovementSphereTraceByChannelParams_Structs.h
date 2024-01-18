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
	 * UserDefinedStruct SMovementSphereTraceByChannelParams.SMovementSphereTraceByChannelParams
	 * Size -> 0x0014
	 */
	struct FSMovementSphereTraceByChannelParams
	{
	public:
		bool                                                       EnableTraceTesting_134_EA1585884F182C0C5253698DA4A7E810; // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IQH3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceScore_145_D18E84F54BE7BFE1003A0E9A61089494;         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScoringEquation                                           ScoringEquation_139_4FA466FD4E79B207209431AA89892B11;    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoneBlockingHitGetMaxScore_146_6AFA11E04B11F94941898C87670AFFE0; // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FilterOutBlockingHit_149_0F3DD36D47C08EB5BB67BDBFEA878D7E; // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NWK5[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSSphereTraceByChannelParams                        SphereTraceParams_133_B75A0F0846F6CF267C04FC83986FD6DB;  // 0x000C(0x0008) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
