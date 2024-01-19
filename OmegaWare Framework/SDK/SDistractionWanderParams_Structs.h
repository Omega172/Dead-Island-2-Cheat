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
	 * UserDefinedStruct SDistractionWanderParams.SDistractionWanderParams
	 * Size -> 0x00C4
	 */
	struct FSDistractionWanderParams
	{
	public:
		class FName                                                InterestName_152_2F304A0748B977B88C3689934A2E8B5A;       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStim                                               StimList_147_7A8DDA00421FC65BF20DCFB3420780FE;           // 0x0008(0x00B8) Edit, BlueprintVisible, ContainsInstancedReference
		float                                                      OverrideWanderRadius_154_3DAE685B48FE909F1B7FC7A3B3670728; // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
