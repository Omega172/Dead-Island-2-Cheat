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
	 * BlueprintGeneratedClass BP_Frontend_PlayerController.BP_Frontend_PlayerController_C
	 * Size -> 0x0010 (FullSize[0x0C20] - InheritedSize[0x0C10])
	 */
	class ABP_Frontend_PlayerController_C : public AFrontendPlayerController
	{
	public:
		class UKnowledgeBaseComponent*                             KnowledgeBase;                                           // 0x0C10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_BaseStatsComponent_C*                           BPC_BaseStatsComponent;                                  // 0x0C18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
