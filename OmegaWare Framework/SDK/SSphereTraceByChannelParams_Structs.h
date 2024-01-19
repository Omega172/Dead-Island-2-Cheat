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
	 * UserDefinedStruct SSphereTraceByChannelParams.SSphereTraceByChannelParams
	 * Size -> 0x0007
	 */
	struct FSSphereTraceByChannelParams
	{
	public:
		float                                                      Radius_120_0D3D9EC540D7468508835394890880C4;             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETraceTypeQuery                                            TraceChannel_123_787A3D1845859D48E45C5BB6AD9AB9A7;       // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TraceComplex_126_EA1585884F182C0C5253698DA4A7E810;       // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IgnoreSelf_128_D18E84F54BE7BFE1003A0E9A61089494;         // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
