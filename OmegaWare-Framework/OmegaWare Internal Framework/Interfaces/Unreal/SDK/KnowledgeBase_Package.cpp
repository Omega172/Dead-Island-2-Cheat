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
	 * 		Name   -> PredefinedFunction UConditionalListQueryParameters.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalListQueryParameters::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.ConditionalListQueryParameters");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalDataList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalDataList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.ConditionalDataList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0213CEB0
	 * 		Name   -> Function KnowledgeBase.ConditionalListRequirement.ReceiveGetDebugDescription
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class FString UConditionalListRequirement::ReceiveGetDebugDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ConditionalListRequirement.ReceiveGetDebugDescription");
		
		UConditionalListRequirement_ReceiveGetDebugDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalListRequirement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalListRequirement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.ConditionalListRequirement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKBFactRequirement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKBFactRequirement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KBFactRequirement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKBExpressionRequirement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKBExpressionRequirement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KBExpressionRequirement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseFactListenerObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseFactListenerObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseFactListenerObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7F660
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.SetReplicateFacts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::SetReplicateFacts(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.SetReplicateFacts");
		
		UKnowledgeBaseComponent_SetReplicateFacts_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7F5A0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.ServerOwnerFactRemoved
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      FactName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::ServerOwnerFactRemoved(const class FString& FactName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.ServerOwnerFactRemoved");
		
		UKnowledgeBaseComponent_ServerOwnerFactRemoved_Params params {};
		params.FactName = FactName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7F4B0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.ServerOwnerFactChanged
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FKnowledgeBaseNetworkedData                 DataArray                                                  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::ServerOwnerFactChanged(const struct FKnowledgeBaseNetworkedData& DataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.ServerOwnerFactChanged");
		
		UKnowledgeBaseComponent_ServerOwnerFactChanged_Params params {};
		params.DataArray = DataArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7E9B0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BueprintGetFloatFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FactValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BueprintGetFloatFact(const struct FKnowledgeBaseFactKey& FactKey, float* FactValue, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BueprintGetFloatFact");
		
		UKnowledgeBaseComponent_BueprintGetFloatFact_Params params {};
		params.FactKey = FactKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7E870
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetVectorFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintSetVectorFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FVector& Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetVectorFact");
		
		UKnowledgeBaseComponent_BlueprintSetVectorFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7E730
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetStringFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintSetStringFact(const struct FKnowledgeBaseFactKey& FactKey, const class FString& Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetStringFact");
		
		UKnowledgeBaseComponent_BlueprintSetStringFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7E600
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetIntegerFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintSetIntegerFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetIntegerFact");
		
		UKnowledgeBaseComponent_BlueprintSetIntegerFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7E4D0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetFloatFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintSetFloatFact(const struct FKnowledgeBaseFactKey& FactKey, float Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetFloatFact");
		
		UKnowledgeBaseComponent_BlueprintSetFloatFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7E3A0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetDateTimeFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintSetDateTimeFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FDateTime& Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetDateTimeFact");
		
		UKnowledgeBaseComponent_BlueprintSetDateTimeFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7E270
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetBoolFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintSetBoolFact(const struct FKnowledgeBaseFactKey& FactKey, bool Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetBoolFact");
		
		UKnowledgeBaseComponent_BlueprintSetBoolFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7E140
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintRemoveFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintRemoveFact(const struct FKnowledgeBaseFactKey& FactKey, bool* Success, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintRemoveFact");
		
		UKnowledgeBaseComponent_BlueprintRemoveFact_Params params {};
		params.FactKey = FactKey;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7DFC0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyVectorFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintModifyVectorFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FVector& Delta, struct FVector* NewValue, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyVectorFact");
		
		UKnowledgeBaseComponent_BlueprintModifyVectorFact_Params params {};
		params.FactKey = FactKey;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewValue != nullptr)
			*NewValue = params.NewValue;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7DE30
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyIntegerFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintModifyIntegerFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t Delta, int32_t* NewValue, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyIntegerFact");
		
		UKnowledgeBaseComponent_BlueprintModifyIntegerFact_Params params {};
		params.FactKey = FactKey;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewValue != nullptr)
			*NewValue = params.NewValue;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7DCA0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyFloatFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintModifyFloatFact(const struct FKnowledgeBaseFactKey& FactKey, float Delta, float* NewValue, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyFloatFact");
		
		UKnowledgeBaseComponent_BlueprintModifyFloatFact_Params params {};
		params.FactKey = FactKey;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewValue != nullptr)
			*NewValue = params.NewValue;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7DB10
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintIncrementCounterFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InvokerObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InvokerName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintIncrementCounterFact(const struct FKnowledgeBaseFactKey& FactKey, bool* Success, class UObject* InvokerObject, const class FName& InvokerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintIncrementCounterFact");
		
		UKnowledgeBaseComponent_BlueprintIncrementCounterFact_Params params {};
		params.FactKey = FactKey;
		params.InvokerObject = InvokerObject;
		params.InvokerName = InvokerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7D9D0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetVectorFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     FactValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintGetVectorFact(const struct FKnowledgeBaseFactKey& FactKey, struct FVector* FactValue, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetVectorFact");
		
		UKnowledgeBaseComponent_BlueprintGetVectorFact_Params params {};
		params.FactKey = FactKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7D870
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetStringFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FactValue                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintGetStringFact(const struct FKnowledgeBaseFactKey& FactKey, class FString* FactValue, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetStringFact");
		
		UKnowledgeBaseComponent_BlueprintGetStringFact_Params params {};
		params.FactKey = FactKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7D740
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetIntegerFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FactValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintGetIntegerFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t* FactValue, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetIntegerFact");
		
		UKnowledgeBaseComponent_BlueprintGetIntegerFact_Params params {};
		params.FactKey = FactKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7D710
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetExpressionListener
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UKnowledgeBaseExpressionListener* UKnowledgeBaseComponent::BlueprintGetExpressionListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetExpressionListener");
		
		UKnowledgeBaseComponent_BlueprintGetExpressionListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7D5E0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetDateTimeFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   FactValue                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintGetDateTimeFact(const struct FKnowledgeBaseFactKey& FactKey, struct FDateTime* FactValue, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetDateTimeFact");
		
		UKnowledgeBaseComponent_BlueprintGetDateTimeFact_Params params {};
		params.FactKey = FactKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7D4B0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetCounterFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FactValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintGetCounterFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t* FactValue, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetCounterFact");
		
		UKnowledgeBaseComponent_BlueprintGetCounterFact_Params params {};
		params.FactKey = FactKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7D370
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetBoolFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FactValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintGetBoolFact(const struct FKnowledgeBaseFactKey& FactKey, bool* FactValue, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetBoolFact");
		
		UKnowledgeBaseComponent_BlueprintGetBoolFact_Params params {};
		params.FactKey = FactKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7D0E0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintEvaluateNumericExpression
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKnowledgeBaseComponent::BlueprintEvaluateNumericExpression(const struct FKnowledgeBaseExpression& Expression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintEvaluateNumericExpression");
		
		UKnowledgeBaseComponent_BlueprintEvaluateNumericExpression_Params params {};
		params.Expression = Expression;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7CE50
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintEvaluateExpression
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseComponent::BlueprintEvaluateExpression(const struct FKnowledgeBaseExpression& Expression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintEvaluateExpression");
		
		UKnowledgeBaseComponent_BlueprintEvaluateExpression_Params params {};
		params.Expression = Expression;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7CCA0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintDecrementCounterFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InvokerObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InvokerName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintDecrementCounterFact(const struct FKnowledgeBaseFactKey& FactKey, bool* Success, class UObject* InvokerObject, const class FName& InvokerName, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintDecrementCounterFact");
		
		UKnowledgeBaseComponent_BlueprintDecrementCounterFact_Params params {};
		params.FactKey = FactKey;
		params.InvokerObject = InvokerObject;
		params.InvokerName = InvokerName;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7CBB0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintCancelDeferredRemoval
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       Fact                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintCancelDeferredRemoval(const struct FKnowledgeBaseFactKey& Fact, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintCancelDeferredRemoval");
		
		UKnowledgeBaseComponent_BlueprintCancelDeferredRemoval_Params params {};
		params.Fact = Fact;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7CA80
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintCancelDeferredDecrement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       Fact                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DecrementerName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintCancelDeferredDecrement(const struct FKnowledgeBaseFactKey& Fact, const class FName& DecrementerName, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintCancelDeferredDecrement");
		
		UKnowledgeBaseComponent_BlueprintCancelDeferredDecrement_Params params {};
		params.Fact = Fact;
		params.DecrementerName = DecrementerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C940
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddVectorFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintAddVectorFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FVector& Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddVectorFact");
		
		UKnowledgeBaseComponent_BlueprintAddVectorFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C800
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddStringFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintAddStringFact(const struct FKnowledgeBaseFactKey& FactKey, const class FString& Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddStringFact");
		
		UKnowledgeBaseComponent_BlueprintAddStringFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C6D0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddIntegerFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintAddIntegerFact(const struct FKnowledgeBaseFactKey& FactKey, int32_t Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddIntegerFact");
		
		UKnowledgeBaseComponent_BlueprintAddIntegerFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C5A0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddFloatFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintAddFloatFact(const struct FKnowledgeBaseFactKey& FactKey, float Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddFloatFact");
		
		UKnowledgeBaseComponent_BlueprintAddFloatFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C470
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddDateTimeFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintAddDateTimeFact(const struct FKnowledgeBaseFactKey& FactKey, const struct FDateTime& Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddDateTimeFact");
		
		UKnowledgeBaseComponent_BlueprintAddDateTimeFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C340
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddBoolFact
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseComponent::BlueprintAddBoolFact(const struct FKnowledgeBaseFactKey& FactKey, bool Value, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddBoolFact");
		
		UKnowledgeBaseComponent_BlueprintAddBoolFact_Params params {};
		params.FactKey = FactKey;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionAliasDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionAliasDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionAliasDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilder_Default.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilder_Default::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionBuilder_Default");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilder_AllOf.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilder_AllOf::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionBuilder_AllOf");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilder_AnyOf.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilder_AnyOf::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionBuilder_AnyOf");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilder_Complex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilder_Complex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionBuilder_Complex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilder_NumberOf.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilder_NumberOf::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionBuilder_NumberOf");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilder_Total.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilder_Total::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionBuilder_Total");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilderObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilderObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionBuilderObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionBuilderObject_Expression.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionBuilderObject_Expression::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionBuilderObject_Expression");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7F6F0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionCache.UpdateTimeExpressions
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UKnowledgeBaseExpressionCache::UpdateTimeExpressions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionCache.UpdateTimeExpressions");
		
		UKnowledgeBaseExpressionCache_UpdateTimeExpressions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7F430
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveObjectForActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToRemove                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::RemoveObjectForActor(class AActor* ActorToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveObjectForActor");
		
		UKnowledgeBaseExpressionListener_RemoveObjectForActor_Params params {};
		params.ActorToRemove = ActorToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7F3B0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KBObject                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::RemoveObject(class UKnowledgeBaseComponent* KBObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveObject");
		
		UKnowledgeBaseExpressionListener_RemoveObject_Params params {};
		params.KBObject = KBObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7F2F0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveNamedObjectForActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToRemove                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::RemoveNamedObjectForActor(class AActor* ActorToRemove, const class FName& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveNamedObjectForActor");
		
		UKnowledgeBaseExpressionListener_RemoveNamedObjectForActor_Params params {};
		params.ActorToRemove = ActorToRemove;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7F230
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveNamedObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KBObject                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::RemoveNamedObject(class UKnowledgeBaseComponent* KBObject, const class FName& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveNamedObject");
		
		UKnowledgeBaseExpressionListener_RemoveNamedObject_Params params {};
		params.KBObject = KBObject;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7F150
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.OnGameplayEventFired
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayEvent                              GameplayEvent                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::OnGameplayEventFired(const struct FGameplayEvent& GameplayEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.OnGameplayEventFired");
		
		UKnowledgeBaseExpressionListener_OnGameplayEventFired_Params params {};
		params.GameplayEvent = GameplayEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7EE20
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.ListenToNumericExpressionByFunctionName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::ListenToNumericExpressionByFunctionName(const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.ListenToNumericExpressionByFunctionName");
		
		UKnowledgeBaseExpressionListener_ListenToNumericExpressionByFunctionName_Params params {};
		params.Expression = Expression;
		params.Object = Object;
		params.FunctionName = FunctionName;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7EAF0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.ListenToExpressionByFunctionName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::ListenToExpressionByFunctionName(const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.ListenToExpressionByFunctionName");
		
		UKnowledgeBaseExpressionListener_ListenToExpressionByFunctionName_Params params {};
		params.Expression = Expression;
		params.Object = Object;
		params.FunctionName = FunctionName;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C2C0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.AddObjectForActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::AddObjectForActor(class AActor* ActorToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.AddObjectForActor");
		
		UKnowledgeBaseExpressionListener_AddObjectForActor_Params params {};
		params.ActorToAdd = ActorToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C240
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.AddObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KBObject                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::AddObject(class UKnowledgeBaseComponent* KBObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.AddObject");
		
		UKnowledgeBaseExpressionListener_AddObject_Params params {};
		params.KBObject = KBObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C180
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.AddNamedObjectForActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::AddNamedObjectForActor(class AActor* ActorToAdd, const class FName& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.AddNamedObjectForActor");
		
		UKnowledgeBaseExpressionListener_AddNamedObjectForActor_Params params {};
		params.ActorToAdd = ActorToAdd;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A7C0C0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.AddNamedObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KBObject                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseExpressionListener::AddNamedObject(class UKnowledgeBaseComponent* KBObject, const class FName& ObjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionListener.AddNamedObject");
		
		UKnowledgeBaseExpressionListener_AddNamedObject_Params params {};
		params.KBObject = KBObject;
		params.ObjectName = ObjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseExpressionListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseExpressionListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseExpressionListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseFactRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseFactRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseFactRegistry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBasePersistentDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBasePersistentDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBasePersistentDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A87520
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveNumericExpressionListenerEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_RemoveNumericExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.RemoveNumericExpressionListenerEvent");
		
		UKnowledgeBaseNodes_RemoveNumericExpressionListenerEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.Expression = Expression;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A87210
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveNumericExpressionListener
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_RemoveNumericExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.RemoveNumericExpressionListener");
		
		UKnowledgeBaseNodes_RemoveNumericExpressionListener_Params params {};
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.Expression = Expression;
		params.Object = Object;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A87030
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveFactListenerEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_RemoveFactListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.RemoveFactListenerEvent");
		
		UKnowledgeBaseNodes_RemoveFactListenerEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.FactName = FactName;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A86EE0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveFactListener
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_RemoveFactListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, class UObject* Object, const class FName& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.RemoveFactListener");
		
		UKnowledgeBaseNodes_RemoveFactListener_Params params {};
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.FactName = FactName;
		params.Object = Object;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A86BB0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveExpressionListenerEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_RemoveExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.RemoveExpressionListenerEvent");
		
		UKnowledgeBaseNodes_RemoveExpressionListenerEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.Expression = Expression;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A868A0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveExpressionListener
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_RemoveExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.RemoveExpressionListener");
		
		UKnowledgeBaseNodes_RemoveExpressionListener_Params params {};
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.Expression = Expression;
		params.Object = Object;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A86650
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RegisterFactKey
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FactName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EKnowledgeBaseFactType                             Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EKnowledgeBaseFactReplication                      ReplicationType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_RegisterFactKey(class UObject* WorldContextObject, const class FName& FactName, EKnowledgeBaseFactType Type, struct FKnowledgeBaseFactKey* FactKey, EKnowledgeBaseFactReplication ReplicationType, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.RegisterFactKey");
		
		UKnowledgeBaseNodes_RegisterFactKey_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.FactName = FactName;
		params.Type = Type;
		params.ReplicationType = ReplicationType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactKey != nullptr)
			*FactKey = params.FactKey;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A86350
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.IsExpressionValidAndNotEmpty
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::STATIC_IsExpressionValidAndNotEmpty(const struct FKnowledgeBaseExpression& Expression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.IsExpressionValidAndNotEmpty");
		
		UKnowledgeBaseNodes_IsExpressionValidAndNotEmpty_Params params {};
		params.Expression = Expression;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84580
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.GetFactKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseFactKey UKnowledgeBaseNodes::STATIC_GetFactKey(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.GetFactKey");
		
		UKnowledgeBaseNodes_GetFactKey_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A85FA0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpressionForWorldPositionAndObjects
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UKnowledgeBaseComponent*>             AdditionalObjects                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	float UKnowledgeBaseNodes::STATIC_EvaluateNumericExpressionForWorldPositionAndObjects(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition, TArray<class UKnowledgeBaseComponent*> AdditionalObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpressionForWorldPositionAndObjects");
		
		UKnowledgeBaseNodes_EvaluateNumericExpressionForWorldPositionAndObjects_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.WorldPosition = WorldPosition;
		params.AdditionalObjects = AdditionalObjects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A85C90
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpressionForWorldPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKnowledgeBaseNodes::STATIC_EvaluateNumericExpressionForWorldPosition(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpressionForWorldPosition");
		
		UKnowledgeBaseNodes_EvaluateNumericExpressionForWorldPosition_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A85970
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpression
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UKnowledgeBaseComponent*>             Objects                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	float UKnowledgeBaseNodes::STATIC_EvaluateNumericExpression(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, TArray<class UKnowledgeBaseComponent*> Objects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpression");
		
		UKnowledgeBaseNodes_EvaluateNumericExpression_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.Objects = Objects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A855F0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpressionForWorldPositionAndObjects
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UKnowledgeBaseComponent*>             AdditionalObjects                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::STATIC_EvaluateExpressionForWorldPositionAndObjects(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition, TArray<class UKnowledgeBaseComponent*> AdditionalObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpressionForWorldPositionAndObjects");
		
		UKnowledgeBaseNodes_EvaluateExpressionForWorldPositionAndObjects_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.WorldPosition = WorldPosition;
		params.AdditionalObjects = AdditionalObjects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A852E0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpressionForWorldPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::STATIC_EvaluateExpressionForWorldPosition(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpressionForWorldPosition");
		
		UKnowledgeBaseNodes_EvaluateExpressionForWorldPosition_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84FC0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpression
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UKnowledgeBaseComponent*>             Objects                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::STATIC_EvaluateExpression(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, TArray<class UKnowledgeBaseComponent*> Objects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpression");
		
		UKnowledgeBaseNodes_EvaluateExpression_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.Objects = Objects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84ED0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EqualEqual_FactKeyFactKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::STATIC_EqualEqual_FactKeyFactKey(const struct FKnowledgeBaseFactKey& A, const struct FKnowledgeBaseFactKey& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EqualEqual_FactKeyFactKey");
		
		UKnowledgeBaseNodes_EqualEqual_FactKeyFactKey_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84720
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToFactKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseFactKey UKnowledgeBaseNodes::STATIC_Conv_StringToFactKey(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToFactKey");
		
		UKnowledgeBaseNodes_Conv_StringToFactKey_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84610
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToExpression
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseExpression UKnowledgeBaseNodes::STATIC_Conv_StringToExpression(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToExpression");
		
		UKnowledgeBaseNodes_Conv_StringToExpression_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84580
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToFactKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseFactKey UKnowledgeBaseNodes::STATIC_Conv_NameToFactKey(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToFactKey");
		
		UKnowledgeBaseNodes_Conv_NameToFactKey_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A844D0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToExpression
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseExpression UKnowledgeBaseNodes::STATIC_Conv_NameToExpression(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToExpression");
		
		UKnowledgeBaseNodes_Conv_NameToExpression_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A843F0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UKnowledgeBaseNodes::STATIC_Conv_FactKeyToString(const struct FKnowledgeBaseFactKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToString");
		
		UKnowledgeBaseNodes_Conv_FactKeyToString_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84350
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UKnowledgeBaseNodes::STATIC_Conv_FactKeyToName(const struct FKnowledgeBaseFactKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToName");
		
		UKnowledgeBaseNodes_Conv_FactKeyToName_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84090
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    InExpression                                               (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UKnowledgeBaseNodes::STATIC_Conv_ExpressionToString(const struct FKnowledgeBaseExpression& InExpression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToString");
		
		UKnowledgeBaseNodes_Conv_ExpressionToString_Params params {};
		params.InExpression = InExpression;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A83E10
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    InExpression                                               (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UKnowledgeBaseNodes::STATIC_Conv_ExpressionToName(const struct FKnowledgeBaseExpression& InExpression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToName");
		
		UKnowledgeBaseNodes_Conv_ExpressionToName_Params params {};
		params.InExpression = InExpression;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A83A90
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddNumericExpressionListenerEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_AddNumericExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.AddNumericExpressionListenerEvent");
		
		UKnowledgeBaseNodes_AddNumericExpressionListenerEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.Expression = Expression;
		params.Delegate = Delegate;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A83720
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddNumericExpressionListener
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_AddNumericExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.AddNumericExpressionListener");
		
		UKnowledgeBaseNodes_AddNumericExpressionListener_Params params {};
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.Expression = Expression;
		params.Object = Object;
		params.FunctionName = FunctionName;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A83500
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddFactListenerEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_AddFactListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, const class FScriptDelegate& Delegate, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.AddFactListenerEvent");
		
		UKnowledgeBaseNodes_AddFactListenerEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.FactName = FactName;
		params.Delegate = Delegate;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A83370
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddFactListener
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_AddFactListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.AddFactListener");
		
		UKnowledgeBaseNodes_AddFactListener_Params params {};
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.FactName = FactName;
		params.Object = Object;
		params.FunctionName = FunctionName;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A82FF0
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddExpressionListenerEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_AddExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.AddExpressionListenerEvent");
		
		UKnowledgeBaseNodes_AddExpressionListenerEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.Expression = Expression;
		params.Delegate = Delegate;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A82C80
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddExpressionListener
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::STATIC_AddExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.AddExpressionListener");
		
		UKnowledgeBaseNodes_AddExpressionListener_Params params {};
		params.KnowledgeBaseComponent = KnowledgeBaseComponent;
		params.Expression = Expression;
		params.Object = Object;
		params.FunctionName = FunctionName;
		params.bCallOnRegister = bCallOnRegister;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseNodes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseNodes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseNodes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFactsState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactsState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.FactsState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84C80
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateVec3FactValue
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::STATIC_CreateVec3FactValue(const class FName& Name, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateVec3FactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateVec3FactValue_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84B20
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateStringFactValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::STATIC_CreateStringFactValue(const class FName& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateStringFactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateStringFactValue_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84A20
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateIntFactValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::STATIC_CreateIntFactValue(const class FName& Name, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateIntFactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateIntFactValue_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84910
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateFloatFactValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::STATIC_CreateFloatFactValue(const class FName& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateFloatFactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateFloatFactValue_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84810
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateBoolFactValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::STATIC_CreateBoolFactValue(const class FName& Name, bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateBoolFactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateBoolFactValue_Params params {};
		params.Name = Name;
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKnowledgeBaseValueFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnowledgeBaseValueFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.KnowledgeBaseValueFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A87190
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.RemoveLocalDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScopedKnowledgeBaseExpressionActor::RemoveLocalDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.RemoveLocalDisableReason");
		
		AScopedKnowledgeBaseExpressionActor_RemoveLocalDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A86820
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.RemoveDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScopedKnowledgeBaseExpressionActor::RemoveDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.RemoveDisableReason");
		
		AScopedKnowledgeBaseExpressionActor_RemoveDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A86630
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnReset
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void AScopedKnowledgeBaseExpressionActor::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnReset");
		
		AScopedKnowledgeBaseExpressionActor_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A86610
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnRep_IsActorActiveOnServer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AScopedKnowledgeBaseExpressionActor::OnRep_IsActorActiveOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnRep_IsActorActiveOnServer");
		
		AScopedKnowledgeBaseExpressionActor_OnRep_IsActorActiveOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A865F0
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnEnabled
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void AScopedKnowledgeBaseExpressionActor::OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnEnabled");
		
		AScopedKnowledgeBaseExpressionActor_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A865D0
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnDisabled
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void AScopedKnowledgeBaseExpressionActor::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnDisabled");
		
		AScopedKnowledgeBaseExpressionActor_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A86320
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.IsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AScopedKnowledgeBaseExpressionActor::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.IsActive");
		
		AScopedKnowledgeBaseExpressionActor_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A84D90
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.EditorSetActiveExpression
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScopedKnowledgeBaseExpressionActor::EditorSetActiveExpression(const struct FKnowledgeBaseExpression& Expression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.EditorSetActiveExpression");
		
		AScopedKnowledgeBaseExpressionActor_EditorSetActiveExpression_Params params {};
		params.Expression = Expression;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A836A0
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.AddLocalDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScopedKnowledgeBaseExpressionActor::AddLocalDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.AddLocalDisableReason");
		
		AScopedKnowledgeBaseExpressionActor_AddLocalDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A82C00
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.AddDisableReason
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AScopedKnowledgeBaseExpressionActor::AddDisableReason(const class FName& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.AddDisableReason");
		
		AScopedKnowledgeBaseExpressionActor_AddDisableReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScopedKnowledgeBaseExpressionActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScopedKnowledgeBaseExpressionActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.ScopedKnowledgeBaseExpressionActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A87B80
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.ShutdownExpressionListener
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScopedKnowledgeBaseExpressionListener      Expression                                                 (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UScopedKnowledgeBaseExpressionListenerFunctionLibrary::STATIC_ShutdownExpressionListener(struct FScopedKnowledgeBaseExpressionListener* Expression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.ShutdownExpressionListener");
		
		UScopedKnowledgeBaseExpressionListenerFunctionLibrary_ShutdownExpressionListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Expression != nullptr)
			*Expression = params.Expression;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00A87A10
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.SetupExpressionListener
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScopedKnowledgeBaseExpressionListener      Expression                                                 (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScopedKnowledgeBaseExpressionListenerFunctionLibrary::STATIC_SetupExpressionListener(struct FScopedKnowledgeBaseExpressionListener* Expression, class AActor* Owner, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.SetupExpressionListener");
		
		UScopedKnowledgeBaseExpressionListenerFunctionLibrary_SetupExpressionListener_Params params {};
		params.Owner = Owner;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Expression != nullptr)
			*Expression = params.Expression;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScopedKnowledgeBaseExpressionListenerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScopedKnowledgeBaseExpressionListenerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary");
		return ptr;
	}

}


