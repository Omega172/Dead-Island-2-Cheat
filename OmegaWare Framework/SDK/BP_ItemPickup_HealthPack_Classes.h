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
	 * BlueprintGeneratedClass BP_ItemPickup_HealthPack.BP_ItemPickup_HealthPack_C
	 * Size -> 0x0001 (FullSize[0x04F2] - InheritedSize[0x04F1])
	 */
	class ABP_ItemPickup_HealthPack_C : public ABP_Base_ItemPickup_C
	{
	public:
		bool                                                       IsUsedInCutscene;                                        // 0x04F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ToggleLootOutline(bool Enabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
