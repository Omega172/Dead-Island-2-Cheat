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
	 * Enum GameplayEvents.EGameplayEventInstigator
	 */
	enum class EGameplayEventInstigator : uint8_t
	{
		Authority = 0,
		NetOwner  = 1,
		MAX       = 2
	};

	/**
	 * Enum GameplayEvents.EGameplayEventDispatchType
	 */
	enum class EGameplayEventDispatchType : uint8_t
	{
		LocalOnly                = 0,
		NetOwnerOnly             = 1,
		AuthorityOnly            = 2,
		AuthorityToNetOwner      = 3,
		NetOwnerAndAuthorityOnly = 4,
		NetMulticast             = 5,
		MAX                      = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayEvents.GameplayEvent
	 * Size -> 0x0020
	 */
	struct FGameplayEvent
	{
	public:
		unsigned char                                              UnknownData_3YE3[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayEvents.GameplayEventData
	 * Size -> 0x0008
	 */
	struct FGameplayEventData
	{
	public:
		unsigned char                                              UnknownData_1WSE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayEvents.GameplayEventData_OnBeginWorldTearDown
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FGameplayEventData_OnBeginWorldTearDown : public FGameplayEventData
	{
	public:
		unsigned char                                              UnknownData_GCCO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
