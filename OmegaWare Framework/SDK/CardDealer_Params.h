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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CardDealer.CardGenerator_BlueprintDecorator.OnUninitialise
	 */
	struct UCardGenerator_BlueprintDecorator_OnUninitialise_Params
	{	};

	/**
	 * Function CardDealer.CardGenerator_BlueprintDecorator.OnInitialise
	 */
	struct UCardGenerator_BlueprintDecorator_OnInitialise_Params
	{	};

	/**
	 * Function CardDealer.CardGenerator_BlueprintDecorator.OnCardNotDrawn
	 */
	struct UCardGenerator_BlueprintDecorator_OnCardNotDrawn_Params
	{	};

	/**
	 * Function CardDealer.CardGenerator_BlueprintDecorator.OnCardDrawn
	 */
	struct UCardGenerator_BlueprintDecorator_OnCardDrawn_Params
	{
	public:
		bool                                                       bResultReturnedCard;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardGenerator_BlueprintDecorator.GetCardPlayerComponent
	 */
	struct UCardGenerator_BlueprintDecorator_GetCardPlayerComponent_Params
	{
	public:
		class UCardPlayerComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardGenerator_BlueprintDecorator.GetCardDealerComponent
	 */
	struct UCardGenerator_BlueprintDecorator_GetCardDealerComponent_Params
	{
	public:
		class UCardDealerComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardGenerator_BlueprintDecorator.GetBlueprintDescription
	 */
	struct UCardGenerator_BlueprintDecorator_GetBlueprintDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardGenerator_BlueprintPollingDecorator.ShouldReturnCard_BP
	 */
	struct UCardGenerator_BlueprintPollingDecorator_ShouldReturnCard_BP_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardDealerComponent.SetDeck
	 */
	struct UCardDealerComponent_SetDeck_Params
	{
	public:
		class FName                                                Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDeck*                                               InDeck;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardDealerComponent.SetContext
	 */
	struct UCardDealerComponent_SetContext_Params
	{
	public:
		class FName                                                Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardDealerComponent.ResetContext
	 */
	struct UCardDealerComponent_ResetContext_Params
	{	};

	/**
	 * Function CardDealer.CardDealerComponent.PeekCard_Blueprint
	 */
	struct UCardDealerComponent_PeekCard_Blueprint_Params
	{
	public:
		class UCard*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardDealerComponent.ModifyCounters
	 */
	struct UCardDealerComponent_ModifyCounters_Params
	{
	public:
		struct FCardDealerCounterModification                      Modification;                                            // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardDealerComponent.GetKnowledgeBaseComponent
	 */
	struct UCardDealerComponent_GetKnowledgeBaseComponent_Params
	{
	public:
		class UKnowledgeBaseComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardDealerComponent.GetCounterValue
	 */
	struct UCardDealerComponent_GetCounterValue_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardDealerComponent.GetCardPlayerComponent
	 */
	struct UCardDealerComponent_GetCardPlayerComponent_Params
	{
	public:
		class UCardPlayerComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CardDealer.CardDealerComponent.DrawCard
	 */
	struct UCardDealerComponent_DrawCard_Params
	{
	public:
		class UCard*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
