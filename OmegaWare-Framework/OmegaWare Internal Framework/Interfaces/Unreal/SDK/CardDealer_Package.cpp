/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_Decorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_Decorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_Decorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function CardDealer.CardGenerator_BlueprintDecorator.OnUninitialise
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCardGenerator_BlueprintDecorator::OnUninitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardGenerator_BlueprintDecorator.OnUninitialise");
		
		UCardGenerator_BlueprintDecorator_OnUninitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function CardDealer.CardGenerator_BlueprintDecorator.OnInitialise
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCardGenerator_BlueprintDecorator::OnInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardGenerator_BlueprintDecorator.OnInitialise");
		
		UCardGenerator_BlueprintDecorator_OnInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function CardDealer.CardGenerator_BlueprintDecorator.OnCardNotDrawn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCardGenerator_BlueprintDecorator::OnCardNotDrawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardGenerator_BlueprintDecorator.OnCardNotDrawn");
		
		UCardGenerator_BlueprintDecorator_OnCardNotDrawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function CardDealer.CardGenerator_BlueprintDecorator.OnCardDrawn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResultReturnedCard                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCardGenerator_BlueprintDecorator::OnCardDrawn(bool bResultReturnedCard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardGenerator_BlueprintDecorator.OnCardDrawn");
		
		UCardGenerator_BlueprintDecorator_OnCardDrawn_Params params {};
		params.bResultReturnedCard = bResultReturnedCard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA140
	 * 		Name   -> Function CardDealer.CardGenerator_BlueprintDecorator.GetCardPlayerComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCardPlayerComponent* UCardGenerator_BlueprintDecorator::GetCardPlayerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardGenerator_BlueprintDecorator.GetCardPlayerComponent");
		
		UCardGenerator_BlueprintDecorator_GetCardPlayerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA100
	 * 		Name   -> Function CardDealer.CardGenerator_BlueprintDecorator.GetCardDealerComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCardDealerComponent* UCardGenerator_BlueprintDecorator::GetCardDealerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardGenerator_BlueprintDecorator.GetCardDealerComponent");
		
		UCardGenerator_BlueprintDecorator_GetCardDealerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA080
	 * 		Name   -> Function CardDealer.CardGenerator_BlueprintDecorator.GetBlueprintDescription
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class FString UCardGenerator_BlueprintDecorator::GetBlueprintDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardGenerator_BlueprintDecorator.GetBlueprintDescription");
		
		UCardGenerator_BlueprintDecorator_GetBlueprintDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_BlueprintDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_BlueprintDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_BlueprintDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_BlueprintLatentDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_BlueprintLatentDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_BlueprintLatentDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function CardDealer.CardGenerator_BlueprintPollingDecorator.ShouldReturnCard_BP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	bool UCardGenerator_BlueprintPollingDecorator::ShouldReturnCard_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardGenerator_BlueprintPollingDecorator.ShouldReturnCard_BP");
		
		UCardGenerator_BlueprintPollingDecorator_ShouldReturnCard_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_BlueprintPollingDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_BlueprintPollingDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_BlueprintPollingDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.Card");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA560
	 * 		Name   -> Function CardDealer.CardDealerComponent.SetDeck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDeck*                                       InDeck                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCardDealerComponent::SetDeck(const class FName& Context, class UDeck* InDeck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardDealerComponent.SetDeck");
		
		UCardDealerComponent_SetDeck_Params params {};
		params.Context = Context;
		params.InDeck = InDeck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA4E0
	 * 		Name   -> Function CardDealer.CardDealerComponent.SetContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCardDealerComponent::SetContext(const class FName& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardDealerComponent.SetContext");
		
		UCardDealerComponent_SetContext_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA4C0
	 * 		Name   -> Function CardDealer.CardDealerComponent.ResetContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCardDealerComponent::ResetContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardDealerComponent.ResetContext");
		
		UCardDealerComponent_ResetContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA490
	 * 		Name   -> Function CardDealer.CardDealerComponent.PeekCard_Blueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCard* UCardDealerComponent::PeekCard_Blueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardDealerComponent.PeekCard_Blueprint");
		
		UCardDealerComponent_PeekCard_Blueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA220
	 * 		Name   -> Function CardDealer.CardDealerComponent.ModifyCounters
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCardDealerCounterModification              Modification                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCardDealerComponent::ModifyCounters(const struct FCardDealerCounterModification& Modification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardDealerComponent.ModifyCounters");
		
		UCardDealerComponent_ModifyCounters_Params params {};
		params.Modification = Modification;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA200
	 * 		Name   -> Function CardDealer.CardDealerComponent.GetKnowledgeBaseComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UKnowledgeBaseComponent* UCardDealerComponent::GetKnowledgeBaseComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardDealerComponent.GetKnowledgeBaseComponent");
		
		UCardDealerComponent_GetKnowledgeBaseComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA170
	 * 		Name   -> Function CardDealer.CardDealerComponent.GetCounterValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCardDealerComponent::GetCounterValue(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardDealerComponent.GetCounterValue");
		
		UCardDealerComponent_GetCounterValue_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA120
	 * 		Name   -> Function CardDealer.CardDealerComponent.GetCardPlayerComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCardPlayerComponent* UCardDealerComponent::GetCardPlayerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardDealerComponent.GetCardPlayerComponent");
		
		UCardDealerComponent_GetCardPlayerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ECA050
	 * 		Name   -> Function CardDealer.CardDealerComponent.DrawCard
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UCard* UCardDealerComponent::DrawCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardDealer.CardDealerComponent.DrawCard");
		
		UCardDealerComponent_DrawCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardDealerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardDealerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardDealerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_Const.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_Const::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_Const");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_Always.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_Always::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_Always");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_ConsoleVariable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_ConsoleVariable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_ConsoleVariable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_CounterComparison.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_CounterComparison::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_CounterComparison");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_EveryNthDraw.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_EveryNthDraw::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_EveryNthDraw");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_SelectorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_SelectorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_SelectorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_IncludeDeck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_IncludeDeck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_IncludeDeck");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_KnowledgeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_KnowledgeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_KnowledgeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_Random.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_Random::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_Random");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_ScopedCounterFacts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_ScopedCounterFacts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_ScopedCounterFacts");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardGenerator_Selector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardGenerator_Selector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardGenerator_Selector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CardPlayerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomCardPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomCardPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.CustomCardPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CardDealer.Deck");
		return ptr;
	}

}


