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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DepthOfFieldRuntime.DepthOfFieldBlendable
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UDepthOfFieldBlendable : public UObject
	{
	public:
		unsigned char                                              UnknownData_BFZX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDepthOfFieldSettings                               Settings;                                                // 0x0030(0x004C) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BlendWeight;                                             // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
