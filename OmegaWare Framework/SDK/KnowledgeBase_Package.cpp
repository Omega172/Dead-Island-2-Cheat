/**
 * Name: Dead_Island_2
 * Version: Cracked
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ConditionalListRequirement.ReceiveGetDebugDescription
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.SetReplicateFacts
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.ServerOwnerFactRemoved
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.ServerOwnerFactChanged
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BueprintGetFloatFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetVectorFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetStringFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetIntegerFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetFloatFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetDateTimeFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintSetBoolFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintRemoveFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyVectorFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewValue != nullptr)
			*NewValue = params.NewValue;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyIntegerFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewValue != nullptr)
			*NewValue = params.NewValue;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintModifyFloatFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewValue != nullptr)
			*NewValue = params.NewValue;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintIncrementCounterFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetVectorFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetStringFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetIntegerFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetExpressionListener
	 * 		Flags  -> ()
	 */
	class UKnowledgeBaseExpressionListener* UKnowledgeBaseComponent::BlueprintGetExpressionListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetExpressionListener");
		
		UKnowledgeBaseComponent_BlueprintGetExpressionListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetDateTimeFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetCounterFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintGetBoolFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactValue != nullptr)
			*FactValue = params.FactValue;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintEvaluateNumericExpression
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintEvaluateExpression
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintDecrementCounterFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintCancelDeferredRemoval
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintCancelDeferredDecrement
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddVectorFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddStringFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddIntegerFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddFloatFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddDateTimeFact
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseComponent.BlueprintAddBoolFact
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionCache.UpdateTimeExpressions
	 * 		Flags  -> ()
	 */
	void UKnowledgeBaseExpressionCache::UpdateTimeExpressions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseExpressionCache.UpdateTimeExpressions");
		
		UKnowledgeBaseExpressionCache_UpdateTimeExpressions_Params params {};
		
		auto flags = fn->FunctionFlags;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveObjectForActor
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveObject
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveNamedObjectForActor
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.RemoveNamedObject
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.OnGameplayEventFired
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.ListenToNumericExpressionByFunctionName
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.ListenToExpressionByFunctionName
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.AddObjectForActor
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.AddObject
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.AddNamedObjectForActor
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseExpressionListener.AddNamedObject
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveNumericExpressionListenerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::RemoveNumericExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveNumericExpressionListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::RemoveNumericExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveFactListenerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::RemoveFactListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, const class FScriptDelegate& Delegate)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveFactListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::RemoveFactListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, class UObject* Object, const class FName& FunctionName)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveExpressionListenerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::RemoveExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RemoveExpressionListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::RemoveExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.RegisterFactKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FactName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EKnowledgeBaseFactType                             Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactKey                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EKnowledgeBaseFactReplication                      ReplicationType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::RegisterFactKey(class UObject* WorldContextObject, const class FName& FactName, EKnowledgeBaseFactType Type, struct FKnowledgeBaseFactKey* FactKey, EKnowledgeBaseFactReplication ReplicationType, bool* bSuccess)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactKey != nullptr)
			*FactKey = params.FactKey;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.IsExpressionValidAndNotEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::IsExpressionValidAndNotEmpty(const struct FKnowledgeBaseExpression& Expression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.IsExpressionValidAndNotEmpty");
		
		UKnowledgeBaseNodes_IsExpressionValidAndNotEmpty_Params params {};
		params.Expression = Expression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.GetFactKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseFactKey UKnowledgeBaseNodes::GetFactKey(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.GetFactKey");
		
		UKnowledgeBaseNodes_GetFactKey_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpressionForWorldPositionAndObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UKnowledgeBaseComponent*>             AdditionalObjects                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	float UKnowledgeBaseNodes::EvaluateNumericExpressionForWorldPositionAndObjects(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition, TArray<class UKnowledgeBaseComponent*> AdditionalObjects)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpressionForWorldPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKnowledgeBaseNodes::EvaluateNumericExpressionForWorldPosition(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpressionForWorldPosition");
		
		UKnowledgeBaseNodes_EvaluateNumericExpressionForWorldPosition_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UKnowledgeBaseComponent*>             Objects                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	float UKnowledgeBaseNodes::EvaluateNumericExpression(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, TArray<class UKnowledgeBaseComponent*> Objects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateNumericExpression");
		
		UKnowledgeBaseNodes_EvaluateNumericExpression_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.Objects = Objects;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpressionForWorldPositionAndObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UKnowledgeBaseComponent*>             AdditionalObjects                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::EvaluateExpressionForWorldPositionAndObjects(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition, TArray<class UKnowledgeBaseComponent*> AdditionalObjects)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpressionForWorldPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::EvaluateExpressionForWorldPosition(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpressionForWorldPosition");
		
		UKnowledgeBaseNodes_EvaluateExpressionForWorldPosition_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UKnowledgeBaseComponent*>             Objects                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::EvaluateExpression(class UObject* WorldContextObject, const struct FKnowledgeBaseExpression& Expression, TArray<class UKnowledgeBaseComponent*> Objects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EvaluateExpression");
		
		UKnowledgeBaseNodes_EvaluateExpression_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Expression = Expression;
		params.Objects = Objects;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.EqualEqual_FactKeyFactKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UKnowledgeBaseNodes::EqualEqual_FactKeyFactKey(const struct FKnowledgeBaseFactKey& A, const struct FKnowledgeBaseFactKey& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.EqualEqual_FactKeyFactKey");
		
		UKnowledgeBaseNodes_EqualEqual_FactKeyFactKey_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToFactKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseFactKey UKnowledgeBaseNodes::Conv_StringToFactKey(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToFactKey");
		
		UKnowledgeBaseNodes_Conv_StringToFactKey_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToExpression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseExpression UKnowledgeBaseNodes::Conv_StringToExpression(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_StringToExpression");
		
		UKnowledgeBaseNodes_Conv_StringToExpression_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToFactKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseFactKey UKnowledgeBaseNodes::Conv_NameToFactKey(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToFactKey");
		
		UKnowledgeBaseNodes_Conv_NameToFactKey_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToExpression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseExpression UKnowledgeBaseNodes::Conv_NameToExpression(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_NameToExpression");
		
		UKnowledgeBaseNodes_Conv_NameToExpression_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UKnowledgeBaseNodes::Conv_FactKeyToString(const struct FKnowledgeBaseFactKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToString");
		
		UKnowledgeBaseNodes_Conv_FactKeyToString_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseFactKey                       InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UKnowledgeBaseNodes::Conv_FactKeyToName(const struct FKnowledgeBaseFactKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_FactKeyToName");
		
		UKnowledgeBaseNodes_Conv_FactKeyToName_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    InExpression                                               (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UKnowledgeBaseNodes::Conv_ExpressionToString(const struct FKnowledgeBaseExpression& InExpression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToString");
		
		UKnowledgeBaseNodes_Conv_ExpressionToString_Params params {};
		params.InExpression = InExpression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKnowledgeBaseExpression                    InExpression                                               (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UKnowledgeBaseNodes::Conv_ExpressionToName(const struct FKnowledgeBaseExpression& InExpression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseNodes.Conv_ExpressionToName");
		
		UKnowledgeBaseNodes_Conv_ExpressionToName_Params params {};
		params.InExpression = InExpression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddNumericExpressionListenerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::AddNumericExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate, bool bCallOnRegister)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddNumericExpressionListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::AddNumericExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddFactListenerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::AddFactListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, const class FScriptDelegate& Delegate, bool bCallOnRegister)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddFactListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseFactKey                       FactName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::AddFactListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseFactKey& FactName, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddExpressionListenerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::AddExpressionListenerEvent(class UObject* WorldContextObject, class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, const class FScriptDelegate& Delegate, bool bCallOnRegister)
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseNodes.AddExpressionListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UKnowledgeBaseComponent*                     KnowledgeBaseComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKnowledgeBaseExpression                    Expression                                                 (Parm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallOnRegister                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKnowledgeBaseNodes::AddExpressionListener(class UKnowledgeBaseComponent* KnowledgeBaseComponent, const struct FKnowledgeBaseExpression& Expression, class UObject* Object, const class FName& FunctionName, bool bCallOnRegister)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateVec3FactValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::CreateVec3FactValue(const class FName& Name, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateVec3FactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateVec3FactValue_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateStringFactValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::CreateStringFactValue(const class FName& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateStringFactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateStringFactValue_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateIntFactValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::CreateIntFactValue(const class FName& Name, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateIntFactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateIntFactValue_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateFloatFactValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::CreateFloatFactValue(const class FName& Name, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateFloatFactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateFloatFactValue_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateBoolFactValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKnowledgeBaseValueSelector UKnowledgeBaseValueFunctionLibrary::CreateBoolFactValue(const class FName& Name, bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.KnowledgeBaseValueFunctionLibrary.CreateBoolFactValue");
		
		UKnowledgeBaseValueFunctionLibrary_CreateBoolFactValue_Params params {};
		params.Name = Name;
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.RemoveLocalDisableReason
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.RemoveDisableReason
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnReset
	 * 		Flags  -> ()
	 */
	void AScopedKnowledgeBaseExpressionActor::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnReset");
		
		AScopedKnowledgeBaseExpressionActor_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnRep_IsActorActiveOnServer
	 * 		Flags  -> ()
	 */
	void AScopedKnowledgeBaseExpressionActor::OnRep_IsActorActiveOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnRep_IsActorActiveOnServer");
		
		AScopedKnowledgeBaseExpressionActor_OnRep_IsActorActiveOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnEnabled
	 * 		Flags  -> ()
	 */
	void AScopedKnowledgeBaseExpressionActor::OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnEnabled");
		
		AScopedKnowledgeBaseExpressionActor_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnDisabled
	 * 		Flags  -> ()
	 */
	void AScopedKnowledgeBaseExpressionActor::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.OnDisabled");
		
		AScopedKnowledgeBaseExpressionActor_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.IsActive
	 * 		Flags  -> ()
	 */
	bool AScopedKnowledgeBaseExpressionActor::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.IsActive");
		
		AScopedKnowledgeBaseExpressionActor_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.EditorSetActiveExpression
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.AddLocalDisableReason
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionActor.AddDisableReason
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.ShutdownExpressionListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScopedKnowledgeBaseExpressionListener      Expression                                                 (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UScopedKnowledgeBaseExpressionListenerFunctionLibrary::ShutdownExpressionListener(struct FScopedKnowledgeBaseExpressionListener* Expression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.ShutdownExpressionListener");
		
		UScopedKnowledgeBaseExpressionListenerFunctionLibrary_ShutdownExpressionListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Expression != nullptr)
			*Expression = params.Expression;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.SetupExpressionListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScopedKnowledgeBaseExpressionListener      Expression                                                 (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UScopedKnowledgeBaseExpressionListenerFunctionLibrary::SetupExpressionListener(struct FScopedKnowledgeBaseExpressionListener* Expression, class AActor* Owner, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnowledgeBase.ScopedKnowledgeBaseExpressionListenerFunctionLibrary.SetupExpressionListener");
		
		UScopedKnowledgeBaseExpressionListenerFunctionLibrary_SetupExpressionListener_Params params {};
		params.Owner = Owner;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
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


