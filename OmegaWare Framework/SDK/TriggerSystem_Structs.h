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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum TriggerSystem.ETriggerShapeNetworkingRule
	 */
	enum class ETriggerShapeNetworkingRule : uint8_t
	{
		ServerActivated_ServerTriggered = 0,
		ServerActivated_LocalTriggered  = 1,
		LocalActivated_LocalTriggered   = 2,
		MAX                             = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
