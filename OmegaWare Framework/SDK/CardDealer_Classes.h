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
	 * Class CardDealer.CardGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCardGenerator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_Decorator
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UCardGenerator_Decorator : public UCardGenerator
	{
	public:
		struct FCardGeneratorWrapper                               Result;                                                  // 0x0028(0x0018) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_BlueprintDecorator
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UCardGenerator_BlueprintDecorator : public UCardGenerator_Decorator
	{
	public:
		unsigned char                                              UnknownData_SVJ3[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnUninitialise();
		void OnInitialise();
		void OnCardNotDrawn();
		void OnCardDrawn(bool bResultReturnedCard);
		class UCardPlayerComponent* GetCardPlayerComponent();
		class UCardDealerComponent* GetCardDealerComponent();
		class FString GetBlueprintDescription();
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_BlueprintLatentDecorator
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UCardGenerator_BlueprintLatentDecorator : public UCardGenerator_BlueprintDecorator
	{
	public:
		bool                                                       bShouldReturnCard;                                       // 0x0048(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WX83[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_BlueprintPollingDecorator
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UCardGenerator_BlueprintPollingDecorator : public UCardGenerator_BlueprintDecorator
	{
	public:
		bool ShouldReturnCard_BP();
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.Card
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UCard : public UDataAsset
	{
	public:
		class FName                                                Name;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardDealerComponent
	 * Size -> 0x0150 (FullSize[0x0238] - InheritedSize[0x00E8])
	 */
	class UCardDealerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XFDQ[0x48];                                  // 0x00E8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UDeck*>                            Contexts;                                                // 0x0130(0x0050) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IRUM[0x8];                                   // 0x0180(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FDeckState>                       Decks;                                                   // 0x0188(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1640[0x60];                                  // 0x01D8(0x0060) MISSED OFFSET (PADDING)

	public:
		void SetDeck(const class FName& Context, class UDeck* InDeck);
		void SetContext(const class FName& Context);
		void ResetContext();
		class UCard* PeekCard_Blueprint();
		void ModifyCounters(const struct FCardDealerCounterModification& Modification);
		class UKnowledgeBaseComponent* GetKnowledgeBaseComponent();
		int32_t GetCounterValue(const class FName& Name);
		class UCardPlayerComponent* GetCardPlayerComponent();
		class UCard* DrawCard();
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_Const
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCardGenerator_Const : public UCardGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_Always
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCardGenerator_Always : public UCardGenerator_Const
	{
	public:
		class UCard*                                               Card;                                                    // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_ConsoleVariable
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UCardGenerator_ConsoleVariable : public UCardGenerator_Decorator
	{
	public:
		class FString                                              CVar;                                                    // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInverse;                                              // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8MF[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_CounterComparison
	 * Size -> 0x00D8 (FullSize[0x0118] - InheritedSize[0x0040])
	 */
	class UCardGenerator_CounterComparison : public UCardGenerator_Decorator
	{
	public:
		struct FCardDealerCounterComparisonOperand                 Left;                                                    // 0x0040(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		EComparisonOperator                                        Operator;                                                // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIRU[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCardDealerCounterComparisonOperand                 Right;                                                   // 0x005C(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD06[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCardDealerCounterModification                      OnDrewCard;                                              // 0x0078(0x00A0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_EveryNthDraw
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UCardGenerator_EveryNthDraw : public UCardGenerator_Decorator
	{
	public:
		int32_t                                                    DrawIntervalMin;                                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DrawIntervalMax;                                         // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetCounterOnNullDraw;                                 // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TLP[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_SelectorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCardGenerator_SelectorBase : public UCardGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_IncludeDeck
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UCardGenerator_IncludeDeck : public UCardGenerator_SelectorBase
	{
	public:
		class FName                                                DeckContextToInclude;                                    // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDeck*                                               DeckToInclude;                                           // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCardGeneratorWrapper>                       Options;                                                 // 0x0038(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FS1V[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_KnowledgeBase
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UCardGenerator_KnowledgeBase : public UCardGenerator_Decorator
	{
	public:
		struct FKnowledgeBaseExpression                            Expression;                                              // 0x0040(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_Random
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UCardGenerator_Random : public UCardGenerator
	{
	public:
		TArray<struct FRandomCardGeneratorOption>                  Options;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYQE[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_ScopedCounterFacts
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UCardGenerator_ScopedCounterFacts : public UCardGenerator_Decorator
	{
	public:
		TArray<struct FKnowledgeBaseFactKey>                       Facts;                                                   // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUM8[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardGenerator_Selector
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCardGenerator_Selector : public UCardGenerator_SelectorBase
	{
	public:
		TArray<struct FCardGeneratorWrapper>                       Options;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardPlayer
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UCardPlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_267K[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CardPlayerComponent
	 * Size -> 0x00C8 (FullSize[0x01B0] - InheritedSize[0x00E8])
	 */
	class UCardPlayerComponent : public UActorComponent
	{
	public:
		TArray<class UCardPlayer*>                                 CardPlayers;                                             // 0x00E8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FKnowledgeBaseExpression                            AllowedToDrawExpression;                                 // 0x00F8(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9AF[0x80];                                  // 0x0130(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.CustomCardPlayer
	 * Size -> 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
	 */
	class UCustomCardPlayer : public UCardPlayer
	{
	public:
		struct FKnowledgeBaseExpression                            BehaviourRunningExpression;                              // 0x0050(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27IT[0x18];                                  // 0x0088(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CardDealer.Deck
	 * Size -> 0x0100 (FullSize[0x0130] - InheritedSize[0x0030])
	 */
	class UDeck : public UDataAsset
	{
	public:
		TMap<class UCard*, struct FKnowledgeBaseExpression>        AllowedToDraw;                                           // 0x0030(0x0050) Edit, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FCardDealerCounterModification                      CounterModificationOnDraw;                               // 0x0080(0x00A0) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FCardGeneratorWrapper>                       Generators;                                              // 0x0120(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
