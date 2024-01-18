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
	 * BlueprintGeneratedClass BP_StatusEffectTypeState_Slowed_Screamer.BP_StatusEffectTypeState_Slowed_Screamer_C
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UBP_StatusEffectTypeState_Slowed_Screamer_C : public UBP_StatusEffectTypeState_ApplyDebuff_C
	{
	public:
		struct FCosmeticEffectsID                                  ScreenShakeID;                                           // 0x0108(0x0004) Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BEBU[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      Aggressors;                                              // 0x0110(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
