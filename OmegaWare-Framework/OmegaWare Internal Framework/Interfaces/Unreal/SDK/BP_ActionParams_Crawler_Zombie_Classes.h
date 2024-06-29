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
	 * BlueprintGeneratedClass BP_ActionParams_Crawler_Zombie.BP_ActionParams_Crawler_Zombie_C
	 * Size -> 0x0002 (FullSize[0x003A] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_Crawler_Zombie_C : public UCustomActionParamsBase
	{
	public:
		bool                                                       TransitionRequired;                                      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       LeftLegDismembered;                                      // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
