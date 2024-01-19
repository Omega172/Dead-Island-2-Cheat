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
	 * UserDefinedStruct SCharacterBodyPartHeightsWithOffset.SCharacterBodyPartHeightsWithOffset
	 * Size -> 0x0010
	 */
	struct FSCharacterBodyPartHeightsWithOffset
	{
	public:
		ECharacterBodyPartHeights                                  HeightOrigin_42_B19F9C844EE540FDD1239A92BFFA7DBF;        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TOL9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Offset_43_224ECB8E48B125E9D79A1BB8DD621EAF;              // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
