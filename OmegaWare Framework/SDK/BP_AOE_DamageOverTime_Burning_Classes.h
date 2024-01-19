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
	 * BlueprintGeneratedClass BP_AOE_DamageOverTime_Burning.BP_AOE_DamageOverTime_Burning_C
	 * Size -> 0x0000 (FullSize[0x03E5] - InheritedSize[0x03E5])
	 */
	class UBP_AOE_DamageOverTime_Burning_C : public UBP_Base_AOE_DamageOverTime_C
	{
	public:
		void CanAffectTarget(class AActor* TargetActor, bool* IsTrue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
