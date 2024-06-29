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
	 * 		RVA    -> 0x00847000
	 * 		Name   -> Function DSUtils.DSActorBlueprintFunctionLibrary.CreateActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorProvidingTransform                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UDSActorBlueprintFunctionLibrary::STATIC_CreateActor(class AActor* ActorProvidingTransform, class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSActorBlueprintFunctionLibrary.CreateActor");
		
		UDSActorBlueprintFunctionLibrary_CreateActor_Params params {};
		params.ActorProvidingTransform = ActorProvidingTransform;
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x00848550
	 * 		Name   -> Function DSUtils.ActorPickerRecurringObject.OnOwningActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848490
	 * 		Name   -> Function DSUtils.ActorPickerRecurringObject.OnObjectLinkActorAdded
	 * 		Flags  -> (Final, Native, Private)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848290
	 * 		Name   -> Function DSUtils.ActorPickerRecurringObject.OnActorSupplied
	 * 		Flags  -> (Final, Native, Private)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847FD0
	 * 		Name   -> Function DSUtils.ActorPickerRecurringObject.OnAcquiredActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x00848C60
	 * 		Name   -> Function DSUtils.DSActorPickerFunctionLibrary.TryToGetActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSActorPicker                              ActorPicker                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AActor* UDSActorPickerFunctionLibrary::STATIC_TryToGetActor(class UObject* WorldContextObject, struct FDSActorPicker* ActorPicker, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSActorPickerFunctionLibrary.TryToGetActor");
		
		UDSActorPickerFunctionLibrary_TryToGetActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorPicker != nullptr)
			*ActorPicker = params.ActorPicker;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848BB0
	 * 		Name   -> Function DSUtils.DSActorPickerFunctionLibrary.ShutdownRecurringActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDSActorPicker                              ActorPicker                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UDSActorPickerFunctionLibrary::STATIC_ShutdownRecurringActor(struct FDSActorPicker* ActorPicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSActorPickerFunctionLibrary.ShutdownRecurringActor");
		
		UDSActorPickerFunctionLibrary_ShutdownRecurringActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorPicker != nullptr)
			*ActorPicker = params.ActorPicker;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847630
	 * 		Name   -> Function DSUtils.DSActorPickerFunctionLibrary.GetActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDSActorPicker                              ActorPicker                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class AActor* UDSActorPickerFunctionLibrary::STATIC_GetActor(class UObject* WorldContextObject, const struct FDSActorPicker& ActorPicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.DSActorPickerFunctionLibrary.GetActor");
		
		UDSActorPickerFunctionLibrary_GetActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorPicker = ActorPicker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x00848900
	 * 		Name   -> Function DSUtils.DSLogBlueprintFunctionLibrary.SetupLogger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
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
	class UDSLogChannelHandle* UDSLogBlueprintFunctionLibrary::STATIC_SetupLogger(class UObject* WorldContextObject, EDSLogDepartmentChannel DepartmentChannel, const class FString& AdditionalChannelSpecifier, EDSLogUploadBugsSetting UploadBugs, bool NoTelemetry, bool ShowOnce, bool ShowOnlyInPIE, bool ShowOncePerPIEInstance)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847270
	 * 		Name   -> Function DSUtils.DSLogBlueprintFunctionLibrary.DSLog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LogText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDSLogChannelHandle*                         LoggerHandle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDSLogVerbosity                                    Verbosity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDSLogBlueprintFunctionLibrary::STATIC_DSLog(class UObject* WorldContextObject, const class FString& LogText, class UDSLogChannelHandle* LoggerHandle, EDSLogVerbosity Verbosity, bool Condition)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x00847F00
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.MakeWeakEventInstigator
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWeakEventInstigator UEventInstigatorUtilities::STATIC_MakeWeakEventInstigator(class AController* Controller, class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.MakeWeakEventInstigator");
		
		UEventInstigatorUtilities_MakeWeakEventInstigator_Params params {};
		params.Controller = Controller;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847E30
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.MakeEventInstigator
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEventInstigator UEventInstigatorUtilities::STATIC_MakeEventInstigator(class AController* Controller, class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.MakeEventInstigator");
		
		UEventInstigatorUtilities_MakeEventInstigator_Params params {};
		params.Controller = Controller;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847D90
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.IsWeakInstigatorValid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEventInstigatorUtilities::STATIC_IsWeakInstigatorValid(const struct FWeakEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.IsWeakInstigatorValid");
		
		UEventInstigatorUtilities_IsWeakInstigatorValid_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847CF0
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.IsInstigatorValid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEventInstigatorUtilities::STATIC_IsInstigatorValid(const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.IsInstigatorValid");
		
		UEventInstigatorUtilities_IsInstigatorValid_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847B80
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.GetWeakInstigatorPawn
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class APawn* UEventInstigatorUtilities::STATIC_GetWeakInstigatorPawn(const struct FWeakEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.GetWeakInstigatorPawn");
		
		UEventInstigatorUtilities_GetWeakInstigatorPawn_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847AE0
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.GetWeakInstigatorController
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AController* UEventInstigatorUtilities::STATIC_GetWeakInstigatorController(const struct FWeakEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.GetWeakInstigatorController");
		
		UEventInstigatorUtilities_GetWeakInstigatorController_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008477E0
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.GetInstigatorPawn
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class APawn* UEventInstigatorUtilities::STATIC_GetInstigatorPawn(const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.GetInstigatorPawn");
		
		UEventInstigatorUtilities_GetInstigatorPawn_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847740
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.GetInstigatorController
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AController* UEventInstigatorUtilities::STATIC_GetInstigatorController(const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.GetInstigatorController");
		
		UEventInstigatorUtilities_GetInstigatorController_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008474E0
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.EventInstigator_WeakToRaw
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEventInstigator UEventInstigatorUtilities::STATIC_EventInstigator_WeakToRaw(const struct FWeakEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.EventInstigator_WeakToRaw");
		
		UEventInstigatorUtilities_EventInstigator_WeakToRaw_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847440
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.EventInstigator_RawToWeak
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FWeakEventInstigator UEventInstigatorUtilities::STATIC_EventInstigator_RawToWeak(const struct FEventInstigator& Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.EventInstigator_RawToWeak");
		
		UEventInstigatorUtilities_EventInstigator_RawToWeak_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846EB0
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.BreakWeakEventInstigator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWeakEventInstigator                        Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEventInstigatorUtilities::STATIC_BreakWeakEventInstigator(const struct FWeakEventInstigator& Instigator, class AController** Controller, class APawn** Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.BreakWeakEventInstigator");
		
		UEventInstigatorUtilities_BreakWeakEventInstigator_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
		if (Pawn != nullptr)
			*Pawn = params.Pawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846D80
	 * 		Name   -> Function DSUtils.EventInstigatorUtilities.BreakEventInstigator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FEventInstigator                            Instigator                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Pawn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEventInstigatorUtilities::STATIC_BreakEventInstigator(const struct FEventInstigator& Instigator, class AController** Controller, class APawn** Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.EventInstigatorUtilities.BreakEventInstigator");
		
		UEventInstigatorUtilities_BreakEventInstigator_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x00847A50
	 * 		Name   -> Function DSUtils.NetworkUtils.GetServerWorldTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UNetworkUtils::STATIC_GetServerWorldTime(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.NetworkUtils.GetServerWorldTime");
		
		UNetworkUtils_GetServerWorldTime_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x00848E80
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.UnregisterLinkedActorsFromBP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UObjectLinkComponent::UnregisterLinkedActorsFromBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.ObjectLinkComponent.UnregisterLinkedActorsFromBP");
		
		UObjectLinkComponent_UnregisterLinkedActorsFromBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848DE0
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.UnregisterLink
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848700
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.RegisterComponentLink
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848630
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.RegisterActorLink
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008483D0
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnComponentRemovedFromGlobalList
	 * 		Flags  -> (Final, Native, Private)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848310
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnComponentAddedToGlobalList
	 * 		Flags  -> (Final, Native, Private)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008481D0
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnActorRemovedFromGlobalList
	 * 		Flags  -> (Final, Native, Private)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848150
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848090
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.OnActorAddedToGlobalList
	 * 		Flags  -> (Final, Native, Private)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008479A0
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.GetLinkedObjects
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLinkedObjects != nullptr)
			*OutLinkedObjects = params.OutLinkedObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847910
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.GetLinkedComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847880
	 * 		Name   -> Function DSUtils.ObjectLinkComponent.GetLinkedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		RVA    -> 0x00848870
	 * 		Name   -> Function DSUtils.RequirementsContainer.RemoveByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008487D0
	 * 		Name   -> Function DSUtils.RequirementsContainer.RemoveById
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00848610
	 * 		Name   -> Function DSUtils.RequirementsContainer.OnRep_HasRequirements
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URequirementsContainer::OnRep_HasRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.OnRep_HasRequirements");
		
		URequirementsContainer_OnRep_HasRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847CC0
	 * 		Name   -> Function DSUtils.RequirementsContainer.HasRequirements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool URequirementsContainer::HasRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.HasRequirements");
		
		URequirementsContainer_HasRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847C20
	 * 		Name   -> Function DSUtils.RequirementsContainer.HasRequirement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00847580
	 * 		Name   -> Function DSUtils.RequirementsContainer.FindIDByName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008471B0
	 * 		Name   -> Function DSUtils.RequirementsContainer.CreateRequirementsContainer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URequirementsContainer* URequirementsContainer::STATIC_CreateRequirementsContainer(class UObject* WorldContextObject, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.CreateRequirementsContainer");
		
		URequirementsContainer_CreateRequirementsContainer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846FE0
	 * 		Name   -> Function DSUtils.RequirementsContainer.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URequirementsContainer::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSUtils.RequirementsContainer.Clear");
		
		URequirementsContainer_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846C30
	 * 		Name   -> Function DSUtils.RequirementsContainer.AddTemporary
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00846B40
	 * 		Name   -> Function DSUtils.RequirementsContainer.Add
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
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
	 * 		Name   -> PredefinedFunction USparseCustomParamsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USparseCustomParamsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSUtils.SparseCustomParamsBase");
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


