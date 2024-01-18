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
	 * BlueprintGeneratedClass BP_Weapon_LegendaryMachete.BP_Weapon_LegendaryMachete_C
	 * Size -> 0x001B (FullSize[0x126C] - InheritedSize[0x1251])
	 */
	class ABP_Weapon_LegendaryMachete_C : public ABP_Weapon_ZombieSword_C
	{
	public:
		unsigned char                                              UnknownData_M4LH[0x7];                                   // 0x1251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle;                                             // 0x1258(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FKnowledgeBaseFactKey                               VFXEnableExpression;                                     // 0x1260(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void VFXFinished();
		void HandleVFX(float VFXDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
