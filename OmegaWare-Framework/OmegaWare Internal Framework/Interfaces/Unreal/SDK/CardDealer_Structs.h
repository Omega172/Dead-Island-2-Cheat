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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CardDealer.CardGeneratorWrapper
	 * Size -> 0x0018
	 */
	struct FCardGeneratorWrapper
	{
	public:
		class UCardGenerator*                                      Generator;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PNP5[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CardDealer.DeckState
	 * Size -> 0x00E0
	 */
	struct FDeckState
	{
	public:
		class UDeck*                                               Deck;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCardGeneratorWrapper>                       Generators;                                              // 0x0008(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1SZ[0xC8];                                  // 0x0018(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CardDealer.CardDealerCounterComparisonOperand
	 * Size -> 0x0018
	 */
	struct FCardDealerCounterComparisonOperand
	{
	public:
		class FName                                                CounterName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRandomNumberGenerator_Int                          RawValue;                                                // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CardDealer.CardDealerCounterModification
	 * Size -> 0x00A0
	 */
	struct FCardDealerCounterModification
	{
	public:
		TMap<class FName, struct FRandomNumberGenerator_Int>       CountersToModify;                                        // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, struct FRandomNumberGenerator_Int>       CountersToSet;                                           // 0x0050(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CardDealer.RandomCardGeneratorOption
	 * Size -> 0x0020
	 */
	struct FRandomCardGeneratorOption
	{
	public:
		struct FCardGeneratorWrapper                               Result;                                                  // 0x0000(0x0018) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    Frequency;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7BA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
