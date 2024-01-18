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
	 * 		Name   -> Function Pros.ProsAccountService.RequestQRLink
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAccountService.GetStatus
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAccountService.GetLink
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAccountService.Get
	 * 		Flags  -> ()
	 */
	class UProsAccountService* UProsAccountService::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAccountService.Get");
		
		UProsAccountService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAccountService.ExpiredQrCode
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAccountService.Disconnect
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAccountService.Connect
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringRequest
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringGetConnectionState
	 * 		Flags  -> ()
	 */
	EProsServiceState UProsAuthorizationService::XboxXstoreCustomDevStringGetConnectionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringGetConnectionState");
		
		UProsAuthorizationService_XboxXstoreCustomDevStringGetConnectionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringDisconnect
	 * 		Flags  -> ()
	 */
	void UProsAuthorizationService::XboxXstoreCustomDevStringDisconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringDisconnect");
		
		UProsAuthorizationService_XboxXstoreCustomDevStringDisconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringCreateOnceFromConfig
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.XboxXstoreCustomDevStringCreateOnce
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.IsClientCreated
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.GetXSTSTokenConf
	 * 		Flags  -> ()
	 */
	struct FProsXSTSTokenConf UProsAuthorizationService::GetXSTSTokenConf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.GetXSTSTokenConf");
		
		UProsAuthorizationService_GetXSTSTokenConf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.GetLocalUserNum
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.GetAuthorizationIndex
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.Get
	 * 		Flags  -> ()
	 */
	class UProsAuthorizationService* UProsAuthorizationService::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsAuthorizationService.Get");
		
		UProsAuthorizationService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetProsUserId
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetPluginEndpoint
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetKernelSessionIdVisualAlias
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetKernelSessionIdString
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetDeveloperLogin
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetConnectionState
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientGetAuthorizationSize
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientDisconnect
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientCreatePrimaryToken
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientCreateFromConfig
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientCreate
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectXboxXstore
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectXbox
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectSteam
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectStadia
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectSecondary
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectPsnToken
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectPsnCode
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectOculus
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectNintendo
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectEpicOnlineServices
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsAuthorizationService.ClientConnectDeveloper
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsBannerService.GetBannersFromCache
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsBannerService.GetBanners
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsBannerService.Get
	 * 		Flags  -> ()
	 */
	class UProsBannerService* UProsBannerService::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsBannerService.Get");
		
		UProsBannerService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsCrossSaveService.Submit
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsCrossSaveService.SkipTransfer
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsCrossSaveService.GetTransferInfo
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsCrossSaveService.GetCooldownMs
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsCrossSaveService.Get
	 * 		Flags  -> ()
	 */
	class UProsCrossSaveService* UProsCrossSaveService::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsCrossSaveService.Get");
		
		UProsCrossSaveService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsCrossSaveService.CompleteTransfer
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsEntitlementsService.GetEntitlements
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsEntitlementsService.Get
	 * 		Flags  -> ()
	 */
	class UProsEntitlementsService* UProsEntitlementsService::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsEntitlementsService.Get");
		
		UProsEntitlementsService_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsEntitlementsService.ConsumeEntitlement
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.Update
	 * 		Flags  -> ()
	 */
	void UProsInterface::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.Update");
		
		UProsInterface_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.Terminate
	 * 		Flags  -> ()
	 */
	void UProsInterface::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.Terminate");
		
		UProsInterface_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.TelemetryEvent
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.TelemetryContextRemove
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.TelemetryContextAdd
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.StartQRFlow
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.StartGetEntitlement
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.RequestQR
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.RequestEntitlements
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.IsInitialized
	 * 		Flags  -> ()
	 */
	bool UProsInterface::IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.IsInitialized");
		
		UProsInterface_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.IsBackendTimeSynced
	 * 		Flags  -> ()
	 */
	bool UProsInterface::IsBackendTimeSynced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.IsBackendTimeSynced");
		
		UProsInterface_IsBackendTimeSynced_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.InitUsingConfig
	 * 		Flags  -> ()
	 */
	bool UProsInterface::InitUsingConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.InitUsingConfig");
		
		UProsInterface_InitUsingConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.Init
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.GetSdkVersion
	 * 		Flags  -> ()
	 */
	class FString UProsInterface::GetSdkVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetSdkVersion");
		
		UProsInterface_GetSdkVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.GetProsUserId
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.GetKernelSessionIdVisualAlias
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.GetKernelSessionIdString
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.GetErrorMessage
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.GetConnectionState
	 * 		Flags  -> ()
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
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.GetBackendTimeOffset
	 * 		Flags  -> ()
	 */
	struct FTimespan UProsInterface::GetBackendTimeOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetBackendTimeOffset");
		
		UProsInterface_GetBackendTimeOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.GetBackendTime
	 * 		Flags  -> ()
	 */
	struct FDateTime UProsInterface::GetBackendTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.GetBackendTime");
		
		UProsInterface_GetBackendTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.Get
	 * 		Flags  -> ()
	 */
	class UProsInterface* UProsInterface::Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.Get");
		
		UProsInterface_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pros.ProsInterface.Disconnect
	 * 		Flags  -> ()
	 */
	void UProsInterface::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pros.ProsInterface.Disconnect");
		
		UProsInterface_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
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


