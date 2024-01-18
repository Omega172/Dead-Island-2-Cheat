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
	 * BlueprintGeneratedClass BP_Activity_BangOnSurface_CannotReachTarget.BP_Activity_BangOnSurface_CannotReachTarget_C
	 * Size -> 0x0000 (FullSize[0x0848] - InheritedSize[0x0848])
	 */
	class ABP_Activity_BangOnSurface_CannotReachTarget_C : public ABP_SpawnActivity_BangOnSurface_C
	{
	public:
		void OnActivityFinishedDestroySelf(class AActivityActor* Activity, EActivityEndedReason EndReason);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
