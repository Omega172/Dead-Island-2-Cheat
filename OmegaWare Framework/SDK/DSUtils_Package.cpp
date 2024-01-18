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
	 * 		Name   -> PredefinedFunction UCustomParamsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomParamsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.CustomParamsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.DSActorBlueprintFunctionLibrary.CreateActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorProvidingTransform                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UDSActorBlueprintFunctionLibrary::CreateActor(class AActor* ActorProvidingTransform, class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSActorBlueprintFunctionLibrary.CreateActor");
		
		UDSActorBlueprintFunctionLibrary_CreateActor_Params params {};
		params.ActorProvidingTransform = ActorProvidingTransform;
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSActorBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSActorBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.DSActorBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ActorPickerRecurringObject.OnOwningActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorPickerRecurringObject::OnOwningActorDestroyed(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ActorPickerRecurringObject.OnOwningActorDestroyed");
		
		UActorPickerRecurringObject_OnOwningActorDestroyed_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ActorPickerRecurringObject.OnObjectLinkActorAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorPickerRecurringObject::OnObjectLinkActorAdded(const class FName& Name, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ActorPickerRecurringObject.OnObjectLinkActorAdded");
		
		UActorPickerRecurringObject_OnObjectLinkActorAdded_Params params {};
		params.Name = Name;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ActorPickerRecurringObject.OnActorSupplied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorPickerRecurringObject::OnActorSupplied(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ActorPickerRecurringObject.OnActorSupplied");
		
		UActorPickerRecurringObject_OnActorSupplied_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ActorPickerRecurringObject.OnAcquiredActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActorPickerRecurringObject::OnAcquiredActorDestroyed(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ActorPickerRecurringObject.OnAcquiredActorDestroyed");
		
		UActorPickerRecurringObject_OnAcquiredActorDestroyed_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorPickerRecurringObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorPickerRecurringObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.ActorPickerRecurringObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.DSActorPickerFunctionLibrary.TryToGetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSActorPicker                              ActorPicker                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AActor* UDSActorPickerFunctionLibrary::TryToGetActor(class UObject* WorldContextObject, struct FDSActorPicker* ActorPicker, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSActorPickerFunctionLibrary.TryToGetActor");
		
		UDSActorPickerFunctionLibrary_TryToGetActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorPicker != nullptr)
			*ActorPicker = params.ActorPicker;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.DSActorPickerFunctionLibrary.ShutdownRecurringActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDSActorPicker                              ActorPicker                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDSActorPickerFunctionLibrary::ShutdownRecurringActor(struct FDSActorPicker* ActorPicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSActorPickerFunctionLibrary.ShutdownRecurringActor");
		
		UDSActorPickerFunctionLibrary_ShutdownRecurringActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorPicker != nullptr)
			*ActorPicker = params.ActorPicker;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.DSActorPickerFunctionLibrary.GetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSActorPicker                              ActorPicker                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class AActor* UDSActorPickerFunctionLibrary::GetActor(class UObject* WorldContextObject, const struct FDSActorPicker& ActorPicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSActorPickerFunctionLibrary.GetActor");
		
		UDSActorPickerFunctionLibrary_GetActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorPicker = ActorPicker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSActorPickerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSActorPickerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.DSActorPickerFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSLogChannelHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSLogChannelHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.DSLogChannelHandle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.DSLogBlueprintFunctionLibrary.SetupLogger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDSLogDepartmentChannel                            DepartmentChannel                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AdditionalChannelSpecifier                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDSLogUploadBugsSetting                            UploadBugs                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NoTelemetry                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShowOnce                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShowOnlyInPIE                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShowOncePerPIEInstance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDSLogChannelHandle* UDSLogBlueprintFunctionLibrary::SetupLogger(class UObject* WorldContextObject, EDSLogDepartmentChannel DepartmentChannel, const class FString& AdditionalChannelSpecifier, EDSLogUploadBugsSetting UploadBugs, bool NoTelemetry, bool ShowOnce, bool ShowOnlyInPIE, bool ShowOncePerPIEInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSLogBlueprintFunctionLibrary.SetupLogger");
		
		UDSLogBlueprintFunctionLibrary_SetupLogger_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DepartmentChannel = DepartmentChannel;
		params.AdditionalChannelSpecifier = AdditionalChannelSpecifier;
		params.UploadBugs = UploadBugs;
		params.NoTelemetry = NoTelemetry;
		params.ShowOnce = ShowOnce;
		params.ShowOnlyInPIE = ShowOnlyInPIE;
		params.ShowOncePerPIEInstance = ShowOncePerPIEInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.DSLogBlueprintFunctionLibrary.DSLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LogText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDSLogChannelHandle*                         LoggerHandle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDSLogVerbosity                                    Verbosity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSLogBlueprintFunctionLibrary::DSLog(class UObject* WorldContextObject, const class FString& LogText, class UDSLogChannelHandle* LoggerHandle, EDSLogVerbosity Verbosity, bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSLogBlueprintFunctionLibrary.DSLog");
		
		UDSLogBlueprintFunctionLibrary_DSLog_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LogText = LogText;
		params.LoggerHandle = LoggerHandle;
		params.Verbosity = Verbosity;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSLogBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSLogBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.DSLogBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.MakeWeakEventInstigator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWeakEventInstigator UEventInstigatorUtilities::MakeWeakEventInstigator(class AController* Controller, class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.MakeWeakEventInstigator");
		
		UEventInstigatorUtilities_MakeWeakEventInstigator_Params params {};
		params.Controller = Controller;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.MakeEventInstigator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventInstigator UEventInstigatorUtilities::MakeEventInstigator(class AController* Controller, class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.MakeEventInstigator");
		
		UEventInstigatorUtilities_MakeEventInstigator_Params params {};
		params.Controller = Controller;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.IsWeakInstigatorValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEventInstigatorUtilities::IsWeakInstigatorValid(const struct FWeakEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.IsWeakInstigatorValid");
		
		UEventInstigatorUtilities_IsWeakInstigatorValid_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.IsInstigatorValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEventInstigatorUtilities::IsInstigatorValid(const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.IsInstigatorValid");
		
		UEventInstigatorUtilities_IsInstigatorValid_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.GetWeakInstigatorPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class APawn* UEventInstigatorUtilities::GetWeakInstigatorPawn(const struct FWeakEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.GetWeakInstigatorPawn");
		
		UEventInstigatorUtilities_GetWeakInstigatorPawn_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.GetWeakInstigatorController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AController* UEventInstigatorUtilities::GetWeakInstigatorController(const struct FWeakEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.GetWeakInstigatorController");
		
		UEventInstigatorUtilities_GetWeakInstigatorController_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.GetInstigatorPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class APawn* UEventInstigatorUtilities::GetInstigatorPawn(const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.GetInstigatorPawn");
		
		UEventInstigatorUtilities_GetInstigatorPawn_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.GetInstigatorController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AController* UEventInstigatorUtilities::GetInstigatorController(const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.GetInstigatorController");
		
		UEventInstigatorUtilities_GetInstigatorController_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.EventInstigator_WeakToRaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEventInstigator UEventInstigatorUtilities::EventInstigator_WeakToRaw(const struct FWeakEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.EventInstigator_WeakToRaw");
		
		UEventInstigatorUtilities_EventInstigator_WeakToRaw_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.EventInstigator_RawToWeak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FWeakEventInstigator UEventInstigatorUtilities::EventInstigator_RawToWeak(const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.EventInstigator_RawToWeak");
		
		UEventInstigatorUtilities_EventInstigator_RawToWeak_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.BreakWeakEventInstigator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEventInstigatorUtilities::BreakWeakEventInstigator(const struct FWeakEventInstigator& Instigator, class AController** Controller, class APawn** Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.BreakWeakEventInstigator");
		
		UEventInstigatorUtilities_BreakWeakEventInstigator_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
		if (Pawn != nullptr)
			*Pawn = params.Pawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.BreakEventInstigator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEventInstigatorUtilities::BreakEventInstigator(const struct FEventInstigator& Instigator, class AController** Controller, class APawn** Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.BreakEventInstigator");
		
		UEventInstigatorUtilities_BreakEventInstigator_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
		if (Pawn != nullptr)
			*Pawn = params.Pawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventInstigatorUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventInstigatorUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.EventInstigatorUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActorSupplier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorSupplier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.ActorSupplier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPredictiveMoveableActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPredictiveMoveableActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.PredictiveMoveableActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNamedPriorityConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNamedPriorityConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.NamedPriorityConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.NetworkUtils.GetServerWorldTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UNetworkUtils::GetServerWorldTime(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.NetworkUtils.GetServerWorldTime");
		
		UNetworkUtils_GetServerWorldTime_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.NetworkUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.UnregisterLinkedActorsFromBP
	 * 		Flags  -> ()
	 */
	void UObjectLinkComponent::UnregisterLinkedActorsFromBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.UnregisterLinkedActorsFromBP");
		
		UObjectLinkComponent_UnregisterLinkedActorsFromBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.UnregisterLink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectLinkComponent::UnregisterLink(struct FGuid* ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.UnregisterLink");
		
		UObjectLinkComponent_UnregisterLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.RegisterComponentLink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UObjectLinkComponent::RegisterComponentLink(const class FName& Name, class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.RegisterComponentLink");
		
		UObjectLinkComponent_RegisterComponentLink_Params params {};
		params.Name = Name;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.RegisterActorLink
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UObjectLinkComponent::RegisterActorLink(const class FName& Name, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.RegisterActorLink");
		
		UObjectLinkComponent_RegisterActorLink_Params params {};
		params.Name = Name;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnComponentRemovedFromGlobalList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectLinkComponent::OnComponentRemovedFromGlobalList(const class FName& Name, class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.OnComponentRemovedFromGlobalList");
		
		UObjectLinkComponent_OnComponentRemovedFromGlobalList_Params params {};
		params.Name = Name;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnComponentAddedToGlobalList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectLinkComponent::OnComponentAddedToGlobalList(const class FName& Name, class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.OnComponentAddedToGlobalList");
		
		UObjectLinkComponent_OnComponentAddedToGlobalList_Params params {};
		params.Name = Name;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnActorRemovedFromGlobalList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectLinkComponent::OnActorRemovedFromGlobalList(const class FName& Name, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.OnActorRemovedFromGlobalList");
		
		UObjectLinkComponent_OnActorRemovedFromGlobalList_Params params {};
		params.Name = Name;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectLinkComponent::OnActorDestroyed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.OnActorDestroyed");
		
		UObjectLinkComponent_OnActorDestroyed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnActorAddedToGlobalList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectLinkComponent::OnActorAddedToGlobalList(const class FName& Name, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.OnActorAddedToGlobalList");
		
		UObjectLinkComponent_OnActorAddedToGlobalList_Params params {};
		params.Name = Name;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.GetLinkedObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FObjectLinkPair>                     OutLinkedObjects                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UObjectLinkComponent::GetLinkedObjects(TArray<struct FObjectLinkPair>* OutLinkedObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.GetLinkedObjects");
		
		UObjectLinkComponent_GetLinkedObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLinkedObjects != nullptr)
			*OutLinkedObjects = params.OutLinkedObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.GetLinkedComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UActorComponent* UObjectLinkComponent::GetLinkedComponent(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.GetLinkedComponent");
		
		UObjectLinkComponent_GetLinkedComponent_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.GetLinkedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UObjectLinkComponent::GetLinkedActor(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.GetLinkedActor");
		
		UObjectLinkComponent_GetLinkedActor_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectLinkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectLinkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.ObjectLinkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AObjectLinkManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AObjectLinkManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.ObjectLinkManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.RemoveByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Requirement                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URequirementsContainer::RemoveByName(const class FName& Requirement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.RemoveByName");
		
		URequirementsContainer_RemoveByName_Params params {};
		params.Requirement = Requirement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.RemoveById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URequirementsContainer::RemoveById(const struct FGuid& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.RemoveById");
		
		URequirementsContainer_RemoveById_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.OnRep_HasRequirements
	 * 		Flags  -> ()
	 */
	void URequirementsContainer::OnRep_HasRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.OnRep_HasRequirements");
		
		URequirementsContainer_OnRep_HasRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.HasRequirements
	 * 		Flags  -> ()
	 */
	bool URequirementsContainer::HasRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.HasRequirements");
		
		URequirementsContainer_HasRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.HasRequirement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Requirement                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URequirementsContainer::HasRequirement(const class FName& Requirement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.HasRequirement");
		
		URequirementsContainer_HasRequirement_Params params {};
		params.Requirement = Requirement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.FindIDByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Requirement                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid URequirementsContainer::FindIDByName(const class FName& Requirement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.FindIDByName");
		
		URequirementsContainer_FindIDByName_Params params {};
		params.Requirement = Requirement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.CreateRequirementsContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URequirementsContainer* URequirementsContainer::CreateRequirementsContainer(class UObject* WorldContextObject, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.CreateRequirementsContainer");
		
		URequirementsContainer_CreateRequirementsContainer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.Clear
	 * 		Flags  -> ()
	 */
	void URequirementsContainer::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.Clear");
		
		URequirementsContainer_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.AddTemporary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Requirement                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUnique                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid URequirementsContainer::AddTemporary(const class FName& Requirement, bool bUnique, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.AddTemporary");
		
		URequirementsContainer_AddTemporary_Params params {};
		params.Requirement = Requirement;
		params.bUnique = bUnique;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DSUtils.RequirementsContainer.Add
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Requirement                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUnique                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid URequirementsContainer::Add(const class FName& Requirement, bool bUnique)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.Add");
		
		URequirementsContainer_Add_Params params {};
		params.Requirement = Requirement;
		params.bUnique = bUnique;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URequirementsContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URequirementsContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.RequirementsContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTable2DElement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTable2DElement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.Table2DElement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTable2DRowColInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTable2DRowColInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.Table2DRowColInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTable2DBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTable2DBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.Table2DBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTable2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTable2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.Table2D");
		return ptr;
	}

}


