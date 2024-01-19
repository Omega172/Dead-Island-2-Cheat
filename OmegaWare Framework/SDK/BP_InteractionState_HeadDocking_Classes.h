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
	 * BlueprintGeneratedClass BP_InteractionState_HeadDocking.BP_InteractionState_HeadDocking_C
	 * Size -> 0x0000 (FullSize[0x0158] - InheritedSize[0x0158])
	 */
	class UBP_InteractionState_HeadDocking_C : public UBP_InteractionState_Dockable_C
	{
	public:
		void CacheRequiredComponents(class AActor* Target);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
