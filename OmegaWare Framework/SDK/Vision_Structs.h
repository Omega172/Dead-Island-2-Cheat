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
	 * Enum Vision.ELineTracePriority
	 */
	enum class ELineTracePriority : uint8_t
	{
		Low      = 0,
		Medium   = 1,
		High     = 2,
		VeryHigh = 3,
		Count    = 4,
		MAX      = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Vision.LineTracerPrioritisation
	 * Size -> 0x00B0
	 */
	struct FLineTracerPrioritisation
	{
	public:
		unsigned char                                              ObserverFactions[0x50];                                  // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		EFactionReaction                                           ReactionsToObservables;                                  // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TDE[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ObservableFactions[0x50];                                // 0x0058(0x0050) UNKNOWN PROPERTY: SetProperty
		EFactionReaction                                           ReactionsToObservers;                                    // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELineTracePriority                                         Priority;                                                // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTW7[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
