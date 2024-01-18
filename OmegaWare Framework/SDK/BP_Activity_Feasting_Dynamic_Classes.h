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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Activity_Feasting_Dynamic.BP_Activity_Feasting_Dynamic_C
	 * Size -> 0x0000 (FullSize[0x0891] - InheritedSize[0x0891])
	 */
	class ABP_Activity_Feasting_Dynamic_C : public ABP_Activity_Feasting_C
	{
	public:
		void OnActivityFinishedDestroySelf(class AActivityActor* Activity, EActivityEndedReason EndReason);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
