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
	 * 		RVA    -> 0x0081F620
	 * 		Name   -> Function DebugToolkit.DebugText.ShouldDrawDebug
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValueForNoComponent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDebugText::STATIC_ShouldDrawDebug(class AActor* Actor, bool bValueForNoComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.DebugText.ShouldDrawDebug");
		
		UDebugText_ShouldDrawDebug_Params params {};
		params.Actor = Actor;
		params.bValueForNoComponent = bValueForNoComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081F560
	 * 		Name   -> Function DebugToolkit.DebugText.Select
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExclusive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDebugText::STATIC_Select(class AActor* Actor, bool bExclusive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.DebugText.Select");
		
		UDebugText_Select_Params params {};
		params.Actor = Actor;
		params.bExclusive = bExclusive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081F330
	 * 		Name   -> Function DebugToolkit.DebugText.MakeSelectable
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Client                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDebugText::STATIC_MakeSelectable(class AActor* Actor, const class FName& Client)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.DebugText.MakeSelectable");
		
		UDebugText_MakeSelectable_Params params {};
		params.Actor = Actor;
		params.Client = Client;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081F2B0
	 * 		Name   -> Function DebugToolkit.DebugText.IsSelected
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDebugText::STATIC_IsSelected(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.DebugText.IsSelected");
		
		UDebugText_IsSelected_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081F1A0
	 * 		Name   -> Function DebugToolkit.DebugText.GetSelectedActors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Client                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> UDebugText::STATIC_GetSelectedActors(class UObject* WorldContextObject, const class FName& Client)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.DebugText.GetSelectedActors");
		
		UDebugText_GetSelectedActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Client = Client;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081F120
	 * 		Name   -> Function DebugToolkit.DebugText.GetPrimarySelectedActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UDebugText::STATIC_GetPrimarySelectedActor(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.DebugText.GetPrimarySelectedActor");
		
		UDebugText_GetPrimarySelectedActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081F060
	 * 		Name   -> Function DebugToolkit.DebugText.ClearSelectedActors
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Client                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDebugText::STATIC_ClearSelectedActors(class UObject* WorldContextObject, const class FName& Client)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.DebugText.ClearSelectedActors");
		
		UDebugText_ClearSelectedActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Client = Client;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081EF70
	 * 		Name   -> Function DebugToolkit.DebugText.AddDebugText
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDebugTextParams                            DebugText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDebugText::STATIC_AddDebugText(class AActor* Actor, const struct FDebugTextParams& DebugText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.DebugText.AddDebugText");
		
		UDebugText_AddDebugText_Params params {};
		params.Actor = Actor;
		params.DebugText = DebugText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081EE40
	 * 		Name   -> Function DebugToolkit.DebugText.AddColourMarkup
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDebugText::STATIC_AddColourMarkup(const class FString& Text, const struct FLinearColor& Colour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.DebugText.AddColourMarkup");
		
		UDebugText_AddColourMarkup_Params params {};
		params.Text = Text;
		params.Colour = Colour;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugToolkit.DebugText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTextComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTextComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugToolkit.DebugTextComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugTextManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugTextManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugToolkit.DebugTextManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTextRichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTextRichTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugToolkit.DebugTextRichTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextBlockColourDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextBlockColourDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugToolkit.RichTextBlockColourDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081F4C0
	 * 		Name   -> Function DebugToolkit.WebDebugger.OnTextMessageReceived
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWebDebugger::OnTextMessageReceived(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.WebDebugger.OnTextMessageReceived");
		
		AWebDebugger_OnTextMessageReceived_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081F4A0
	 * 		Name   -> Function DebugToolkit.WebDebugger.OnDisconnected
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AWebDebugger::OnDisconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.WebDebugger.OnDisconnected");
		
		AWebDebugger_OnDisconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0081F3F0
	 * 		Name   -> Function DebugToolkit.WebDebugger.OnBinaryMessageReceived
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<unsigned char>                              Message                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AWebDebugger::OnBinaryMessageReceived(TArray<unsigned char> Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugToolkit.WebDebugger.OnBinaryMessageReceived");
		
		AWebDebugger_OnBinaryMessageReceived_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWebDebugger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWebDebugger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugToolkit.WebDebugger");
		return ptr;
	}

}


