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
	 * 		RVA    -> 0x00DFD330
	 * 		Name   -> Function Pros.ProsAccountService.RequestQRLink
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProsAccountService::RequestQRLink(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAccountService.RequestQRLink");
		
		UProsAccountService_RequestQRLink_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCFB0
	 * 		Name   -> Function Pros.ProsAccountService.GetStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FProsAccountServiceStatus UProsAccountService::GetStatus(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAccountService.GetStatus");
		
		UProsAccountService_GetStatus_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCE90
	 * 		Name   -> Function Pros.ProsAccountService.GetLink
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAccountService::GetLink(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAccountService.GetLink");
		
		UProsAccountService_GetLink_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCAB0
	 * 		Name   -> Function Pros.ProsAccountService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UProsAccountService* UProsAccountService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAccountService.Get");
		
		UProsAccountService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCA30
	 * 		Name   -> Function Pros.ProsAccountService.ExpiredQrCode
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProsAccountService::ExpiredQrCode(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAccountService.ExpiredQrCode");
		
		UProsAccountService_ExpiredQrCode_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC9B0
	 * 		Name   -> Function Pros.ProsAccountService.Disconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProsAccountService::Disconnect(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAccountService.Disconnect");
		
		UProsAccountService_Disconnect_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC930
	 * 		Name   -> Function Pros.ProsAccountService.Connect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProsAccountService::Connect(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAccountService.Connect");
		
		UProsAccountService_Connect_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProsAccountService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProsAccountService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pros.ProsAccountService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD880
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      XboxToken                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::XboxXstoreCustomDevStringRequest(const class FString& XboxToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringRequest");
		
		UProsAuthorizationService_XboxXstoreCustomDevStringRequest_Params params {};
		params.XboxToken = XboxToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD850
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringGetConnectionState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EProsServiceState UProsAuthorizationService::XboxXstoreCustomDevStringGetConnectionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringGetConnectionState");
		
		UProsAuthorizationService_XboxXstoreCustomDevStringGetConnectionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD830
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringDisconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UProsAuthorizationService::XboxXstoreCustomDevStringDisconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringDisconnect");
		
		UProsAuthorizationService_XboxXstoreCustomDevStringDisconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD7A0
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringCreateOnceFromConfig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::XboxXstoreCustomDevStringCreateOnceFromConfig(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringCreateOnceFromConfig");
		
		UProsAuthorizationService_XboxXstoreCustomDevStringCreateOnceFromConfig_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD6C0
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringCreateOnce
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TitleSecret                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::XboxXstoreCustomDevStringCreateOnce(int32_t LocalUserNum, const class FString& TitleSecret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringCreateOnce");
		
		UProsAuthorizationService_XboxXstoreCustomDevStringCreateOnce_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.TitleSecret = TitleSecret;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD2A0
	 * 		Name   -> Function Pros.ProsAuthorizationService.IsClientCreated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProsAuthorizationService::IsClientCreated(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.IsClientCreated");
		
		UProsAuthorizationService_IsClientCreated_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD1E0
	 * 		Name   -> Function Pros.ProsAuthorizationService.GetXSTSTokenConf
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FProsXSTSTokenConf UProsAuthorizationService::STATIC_GetXSTSTokenConf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.GetXSTSTokenConf");
		
		UProsAuthorizationService_GetXSTSTokenConf_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCF20
	 * 		Name   -> Function Pros.ProsAuthorizationService.GetLocalUserNum
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            AuthorizationIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UProsAuthorizationService::GetLocalUserNum(int32_t AuthorizationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.GetLocalUserNum");
		
		UProsAuthorizationService_GetLocalUserNum_Params params {};
		params.AuthorizationIndex = AuthorizationIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCB70
	 * 		Name   -> Function Pros.ProsAuthorizationService.GetAuthorizationIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UProsAuthorizationService::GetAuthorizationIndex(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.GetAuthorizationIndex");
		
		UProsAuthorizationService_GetAuthorizationIndex_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCAE0
	 * 		Name   -> Function Pros.ProsAuthorizationService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UProsAuthorizationService* UProsAuthorizationService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.Get");
		
		UProsAuthorizationService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC650
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetProsUserId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProsAuthorizationService::ClientGetProsUserId(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientGetProsUserId");
		
		UProsAuthorizationService_ClientGetProsUserId_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC520
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetPluginEndpoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PluginName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPluginEndpoint UProsAuthorizationService::ClientGetPluginEndpoint(int32_t LocalUserNum, const class FString& PluginName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientGetPluginEndpoint");
		
		UProsAuthorizationService_ClientGetPluginEndpoint_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.PluginName = PluginName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC450
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetKernelSessionIdVisualAlias
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProsAuthorizationService::ClientGetKernelSessionIdVisualAlias(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientGetKernelSessionIdVisualAlias");
		
		UProsAuthorizationService_ClientGetKernelSessionIdVisualAlias_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC380
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetKernelSessionIdString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProsAuthorizationService::ClientGetKernelSessionIdString(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientGetKernelSessionIdString");
		
		UProsAuthorizationService_ClientGetKernelSessionIdString_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC2B0
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetDeveloperLogin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProsAuthorizationService::ClientGetDeveloperLogin(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientGetDeveloperLogin");
		
		UProsAuthorizationService_ClientGetDeveloperLogin_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC220
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetConnectionState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsServiceState UProsAuthorizationService::ClientGetConnectionState(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientGetConnectionState");
		
		UProsAuthorizationService_ClientGetConnectionState_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC190
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetAuthorizationSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UProsAuthorizationService::ClientGetAuthorizationSize(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientGetAuthorizationSize");
		
		UProsAuthorizationService_ClientGetAuthorizationSize_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC110
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientDisconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProsAuthorizationService::ClientDisconnect(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientDisconnect");
		
		UProsAuthorizationService_ClientDisconnect_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC040
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientCreatePrimaryToken
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProsAuthorizationService::ClientCreatePrimaryToken(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientCreatePrimaryToken");
		
		UProsAuthorizationService_ClientCreatePrimaryToken_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFBFB0
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientCreateFromConfig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProsAuthorizationService::ClientCreateFromConfig(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientCreateFromConfig");
		
		UProsAuthorizationService_ClientCreateFromConfig_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFBE40
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientCreate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TitleSecret                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPluginVersioned>                    Plugins                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UProsAuthorizationService::ClientCreate(int32_t LocalUserNum, const class FString& TitleSecret, TArray<struct FPluginVersioned> Plugins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientCreate");
		
		UProsAuthorizationService_ClientCreate_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.TitleSecret = TitleSecret;
		params.Plugins = Plugins;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFBD00
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectXboxXstore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      XboxToken                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      XstoreLicenseToken                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectXboxXstore(int32_t LocalUserNum, const class FString& XboxToken, const class FString& XstoreLicenseToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectXboxXstore");
		
		UProsAuthorizationService_ClientConnectXboxXstore_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.XboxToken = XboxToken;
		params.XstoreLicenseToken = XstoreLicenseToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFBC20
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectXbox
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      XboxToken                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectXbox(int32_t LocalUserNum, const class FString& XboxToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectXbox");
		
		UProsAuthorizationService_ClientConnectXbox_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.XboxToken = XboxToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFBB40
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectSteam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamAuthSessionTicket                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectSteam(int32_t LocalUserNum, const class FString& SteamAuthSessionTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectSteam");
		
		UProsAuthorizationService_ClientConnectSteam_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.SteamAuthSessionTicket = SteamAuthSessionTicket;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFBA60
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectStadia
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerJwt                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectStadia(int32_t LocalUserNum, const class FString& PlayerJwt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectStadia");
		
		UProsAuthorizationService_ClientConnectStadia_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.PlayerJwt = PlayerJwt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFB980
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectSecondary
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PrimaryToken                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectSecondary(int32_t LocalUserNum, const class FString& PrimaryToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectSecondary");
		
		UProsAuthorizationService_ClientConnectSecondary_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.PrimaryToken = PrimaryToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFB8A0
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectPsnToken
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IdToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectPsnToken(int32_t LocalUserNum, const class FString& IdToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectPsnToken");
		
		UProsAuthorizationService_ClientConnectPsnToken_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.IdToken = IdToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFB790
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectPsnCode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuthCode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IssuerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectPsnCode(int32_t LocalUserNum, const class FString& AuthCode, int32_t IssuerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectPsnCode");
		
		UProsAuthorizationService_ClientConnectPsnCode_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.AuthCode = AuthCode;
		params.IssuerId = IssuerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFB680
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectOculus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Nonce                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            UserId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectOculus(int32_t LocalUserNum, const class FString& Nonce, int64_t UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectOculus");
		
		UProsAuthorizationService_ClientConnectOculus_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.Nonce = Nonce;
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFB5A0
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectNintendo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IdentityToken                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectNintendo(int32_t LocalUserNum, const class FString& IdentityToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectNintendo");
		
		UProsAuthorizationService_ClientConnectNintendo_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.IdentityToken = IdentityToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFB4C0
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectEpicOnlineServices
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuthAccessToken                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectEpicOnlineServices(int32_t LocalUserNum, const class FString& AuthAccessToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectEpicOnlineServices");
		
		UProsAuthorizationService_ClientConnectEpicOnlineServices_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.AuthAccessToken = AuthAccessToken;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFB3E0
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectDeveloper
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Login                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsAuthorizationService::ClientConnectDeveloper(int32_t LocalUserNum, const class FString& Login)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.ClientConnectDeveloper");
		
		UProsAuthorizationService_ClientConnectDeveloper_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.Login = Login;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProsAuthorizationService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProsAuthorizationService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pros.ProsAuthorizationService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCD70
	 * 		Name   -> Function Pros.ProsBannerService.GetBannersFromCache
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProsBannerService::GetBannersFromCache(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsBannerService.GetBannersFromCache");
		
		UProsBannerService_GetBannersFromCache_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCC00
	 * 		Name   -> Function Pros.ProsBannerService.GetBanners
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              EntitlementIds                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReferenceId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsBannerService::GetBanners(int32_t LocalUserNum, TArray<class FString> EntitlementIds, const class FString& ReferenceId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsBannerService.GetBanners");
		
		UProsBannerService_GetBanners_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.EntitlementIds = EntitlementIds;
		params.ReferenceId = ReferenceId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCB10
	 * 		Name   -> Function Pros.ProsBannerService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UProsBannerService* UProsBannerService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsBannerService.Get");
		
		UProsBannerService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProsBannerService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProsBannerService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pros.ProsBannerService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD500
	 * 		Name   -> Function Pros.ProsCrossSaveService.Submit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FProsCrossSaveSnapshot                      Snapshot                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsCrossSaveService::Submit(int32_t LocalUserNum, const struct FProsCrossSaveSnapshot& Snapshot, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsCrossSaveService.Submit");
		
		UProsCrossSaveService_Submit_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.Snapshot = Snapshot;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD3B0
	 * 		Name   -> Function Pros.ProsCrossSaveService.SkipTransfer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TransferId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsCrossSaveService::SkipTransfer(int32_t LocalUserNum, const class FString& TransferId, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsCrossSaveService.SkipTransfer");
		
		UProsCrossSaveService_SkipTransfer_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.TransferId = TransferId;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFD0E0
	 * 		Name   -> Function Pros.ProsCrossSaveService.GetTransferInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsCrossSaveService::GetTransferInfo(int32_t LocalUserNum, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsCrossSaveService.GetTransferInfo");
		
		UProsCrossSaveService_GetTransferInfo_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCE00
	 * 		Name   -> Function Pros.ProsCrossSaveService.GetCooldownMs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UProsCrossSaveService::GetCooldownMs(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsCrossSaveService.GetCooldownMs");
		
		UProsCrossSaveService_GetCooldownMs_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFCB40
	 * 		Name   -> Function Pros.ProsCrossSaveService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UProsCrossSaveService* UProsCrossSaveService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsCrossSaveService.Get");
		
		UProsCrossSaveService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFC720
	 * 		Name   -> Function Pros.ProsCrossSaveService.CompleteTransfer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TransferId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FProsCrossSaveSnapshot                      Snapshot                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsCrossSaveService::CompleteTransfer(int32_t LocalUserNum, const class FString& TransferId, const struct FProsCrossSaveSnapshot& Snapshot, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsCrossSaveService.CompleteTransfer");
		
		UProsCrossSaveService_CompleteTransfer_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.TransferId = TransferId;
		params.Snapshot = Snapshot;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProsCrossSaveService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProsCrossSaveService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pros.ProsCrossSaveService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFEE90
	 * 		Name   -> Function Pros.ProsEntitlementsService.GetEntitlements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsEntitlementsService::GetEntitlements(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsEntitlementsService.GetEntitlements");
		
		UProsEntitlementsService_GetEntitlements_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFED20
	 * 		Name   -> Function Pros.ProsEntitlementsService.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UProsEntitlementsService* UProsEntitlementsService::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsEntitlementsService.Get");
		
		UProsEntitlementsService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFEC20
	 * 		Name   -> Function Pros.ProsEntitlementsService.ConsumeEntitlement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsErrorCode UProsEntitlementsService::ConsumeEntitlement(int32_t LocalUserNum, const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsEntitlementsService.ConsumeEntitlement");
		
		UProsEntitlementsService_ConsumeEntitlement_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProsEntitlementsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProsEntitlementsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pros.ProsEntitlementsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFFA20
	 * 		Name   -> Function Pros.ProsInterface.Update
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UProsInterface::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.Update");
		
		UProsInterface_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFFA00
	 * 		Name   -> Function Pros.ProsInterface.Terminate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UProsInterface::STATIC_Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.Terminate");
		
		UProsInterface_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF8C0
	 * 		Name   -> Function Pros.ProsInterface.TelemetryEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventType                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EventTypeVersion                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventParams                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProsInterface::TelemetryEvent(const class FString& EventType, int32_t EventTypeVersion, const class FString& EventParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.TelemetryEvent");
		
		UProsInterface_TelemetryEvent_Params params {};
		params.EventType = EventType;
		params.EventTypeVersion = EventTypeVersion;
		params.EventParams = EventParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF810
	 * 		Name   -> Function Pros.ProsInterface.TelemetryContextRemove
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProsInterface::TelemetryContextRemove(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.TelemetryContextRemove");
		
		UProsInterface_TelemetryContextRemove_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF710
	 * 		Name   -> Function Pros.ProsInterface.TelemetryContextAdd
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProsInterface::TelemetryContextAdd(const class FString& Name, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.TelemetryContextAdd");
		
		UProsInterface_TelemetryContextAdd_Params params {};
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
	 * 		RVA    -> 0x00DFF680
	 * 		Name   -> Function Pros.ProsInterface.StartQRFlow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProsInterface::StartQRFlow(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.StartQRFlow");
		
		UProsInterface_StartQRFlow_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF5F0
	 * 		Name   -> Function Pros.ProsInterface.StartGetEntitlement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProsInterface::StartGetEntitlement(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.StartGetEntitlement");
		
		UProsInterface_StartGetEntitlement_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF570
	 * 		Name   -> Function Pros.ProsInterface.RequestQR
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProsInterface::RequestQR(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.RequestQR");
		
		UProsInterface_RequestQR_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF4F0
	 * 		Name   -> Function Pros.ProsInterface.RequestEntitlements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProsInterface::RequestEntitlements(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.RequestEntitlements");
		
		UProsInterface_RequestEntitlements_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF4C0
	 * 		Name   -> Function Pros.ProsInterface.IsInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UProsInterface::IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.IsInitialized");
		
		UProsInterface_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF490
	 * 		Name   -> Function Pros.ProsInterface.IsBackendTimeSynced
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UProsInterface::IsBackendTimeSynced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.IsBackendTimeSynced");
		
		UProsInterface_IsBackendTimeSynced_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF460
	 * 		Name   -> Function Pros.ProsInterface.InitUsingConfig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UProsInterface::InitUsingConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.InitUsingConfig");
		
		UProsInterface_InitUsingConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF2E0
	 * 		Name   -> Function Pros.ProsInterface.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      TitleName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TitleId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Version                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableVerboseLogging                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProsInterface::Init(const class FString& TitleName, const class FString& TitleId, const class FString& Version, bool bEnableVerboseLogging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.Init");
		
		UProsInterface_Init_Params params {};
		params.TitleName = TitleName;
		params.TitleId = TitleId;
		params.Version = Version;
		params.bEnableVerboseLogging = bEnableVerboseLogging;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF260
	 * 		Name   -> Function Pros.ProsInterface.GetSdkVersion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UProsInterface::GetSdkVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetSdkVersion");
		
		UProsInterface_GetSdkVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF190
	 * 		Name   -> Function Pros.ProsInterface.GetProsUserId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProsInterface::GetProsUserId(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetProsUserId");
		
		UProsInterface_GetProsUserId_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFF0C0
	 * 		Name   -> Function Pros.ProsInterface.GetKernelSessionIdVisualAlias
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProsInterface::GetKernelSessionIdVisualAlias(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetKernelSessionIdVisualAlias");
		
		UProsInterface_GetKernelSessionIdVisualAlias_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFEFF0
	 * 		Name   -> Function Pros.ProsInterface.GetKernelSessionIdString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProsInterface::GetKernelSessionIdString(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetKernelSessionIdString");
		
		UProsInterface_GetKernelSessionIdString_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFEF20
	 * 		Name   -> Function Pros.ProsInterface.GetErrorMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EProsErrorCode                                     ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProsInterface::GetErrorMessage(EProsErrorCode ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetErrorMessage");
		
		UProsInterface_GetErrorMessage_Params params {};
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFEE00
	 * 		Name   -> Function Pros.ProsInterface.GetConnectionState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EProsConnectionState UProsInterface::GetConnectionState(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetConnectionState");
		
		UProsInterface_GetConnectionState_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFEDC0
	 * 		Name   -> Function Pros.ProsInterface.GetBackendTimeOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FTimespan UProsInterface::GetBackendTimeOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetBackendTimeOffset");
		
		UProsInterface_GetBackendTimeOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFED80
	 * 		Name   -> Function Pros.ProsInterface.GetBackendTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FDateTime UProsInterface::GetBackendTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetBackendTime");
		
		UProsInterface_GetBackendTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFED50
	 * 		Name   -> Function Pros.ProsInterface.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UProsInterface* UProsInterface::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.Get");
		
		UProsInterface_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DFED00
	 * 		Name   -> Function Pros.ProsInterface.Disconnect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UProsInterface::STATIC_Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.Disconnect");
		
		UProsInterface_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pros.ProsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Pros.ProsSettings");
		return ptr;
	}

}


