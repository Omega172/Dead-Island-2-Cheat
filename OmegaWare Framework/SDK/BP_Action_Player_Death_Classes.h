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
	 * BlueprintGeneratedClass BP_Action_Player_Death.BP_Action_Player_Death_C
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	class UBP_Action_Player_Death_C : public UPlayerDeathCharacterAction
	{
	public:
		bool OnBeginEarly();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
