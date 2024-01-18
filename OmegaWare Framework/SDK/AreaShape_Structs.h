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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AreaShape.EAreaShapeType
	 */
	enum class EAreaShapeType : uint8_t
	{
		Box      = 0,
		Cylinder = 1,
		Shape    = 2,
		Sphere   = 3,
		MAX      = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
