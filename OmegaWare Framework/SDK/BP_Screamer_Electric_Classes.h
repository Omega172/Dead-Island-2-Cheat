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
	 * BlueprintGeneratedClass BP_Screamer_Electric.BP_Screamer_Electric_C
	 * Size -> 0x0010 (FullSize[0x10E0] - InheritedSize[0x10D0])
	 */
	class ABP_Screamer_Electric_C : public ABP_Base_Screamer_C
	{
	public:
		class UBPC_Distraction_GroupCoordinator_Screamer_Electric_C* BPC_Distraction_GroupCoordinator_Scremer_Electric;       // 0x10D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C* BPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric;    // 0x10D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
