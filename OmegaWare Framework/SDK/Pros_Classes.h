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
	 * Class Pros.ProsAccountService
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UProsAccountService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnAccountStateChanged;                                   // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAccountStatusUpdated;                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnQrReceived;                                            // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FN3[0xC8];                                  // 0x0058(0x00C8) MISSED OFFSET (PADDING)

	public:
		void RequestQRLink(int32_t LocalUserNum);
		struct FProsAccountServiceStatus GetStatus(int32_t LocalUserNum);
		EProsErrorCode GetLink(int32_t LocalUserNum);
		class UProsAccountService* Get();
		void ExpiredQrCode(int32_t LocalUserNum);
		void Disconnect(int32_t LocalUserNum);
		void Connect(int32_t LocalUserNum);
		static UClass* StaticClass();
	};

	/**
	 * Class Pros.ProsAuthorizationService
	 * Size -> 0x0188 (FullSize[0x01B0] - InheritedSize[0x0028])
	 */
	class UProsAuthorizationService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnProsClientServiceStateChanged;                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZKE[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnProsServiceStateChanged;                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProsXboxXstoreCustomDevString;                         // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZZR[0x140];                                 // 0x0070(0x0140) MISSED OFFSET (PADDING)

	public:
		EProsErrorCode XboxXstoreCustomDevStringRequest(const class FString& XboxToken);
		EProsServiceState XboxXstoreCustomDevStringGetConnectionState();
		void XboxXstoreCustomDevStringDisconnect();
		EProsErrorCode XboxXstoreCustomDevStringCreateOnceFromConfig(int32_t LocalUserNum);
		EProsErrorCode XboxXstoreCustomDevStringCreateOnce(int32_t LocalUserNum, const class FString& TitleSecret);
		bool IsClientCreated(int32_t LocalUserNum);
		struct FProsXSTSTokenConf GetXSTSTokenConf();
		int32_t GetLocalUserNum(int32_t AuthorizationIndex);
		int32_t GetAuthorizationIndex(int32_t LocalUserNum);
		class UProsAuthorizationService* Get();
		class FString ClientGetProsUserId(int32_t LocalUserNum);
		struct FPluginEndpoint ClientGetPluginEndpoint(int32_t LocalUserNum, const class FString& PluginName);
		class FString ClientGetKernelSessionIdVisualAlias(int32_t LocalUserNum);
		class FString ClientGetKernelSessionIdString(int32_t LocalUserNum);
		class FString ClientGetDeveloperLogin(int32_t LocalUserNum);
		EProsServiceState ClientGetConnectionState(int32_t LocalUserNum);
		int32_t ClientGetAuthorizationSize(int32_t LocalUserNum);
		void ClientDisconnect(int32_t LocalUserNum);
		class FString ClientCreatePrimaryToken(int32_t LocalUserNum);
		bool ClientCreateFromConfig(int32_t LocalUserNum);
		bool ClientCreate(int32_t LocalUserNum, const class FString& TitleSecret, TArray<struct FPluginVersioned> Plugins);
		EProsErrorCode ClientConnectXboxXstore(int32_t LocalUserNum, const class FString& XboxToken, const class FString& XstoreLicenseToken);
		EProsErrorCode ClientConnectXbox(int32_t LocalUserNum, const class FString& XboxToken);
		EProsErrorCode ClientConnectSteam(int32_t LocalUserNum, const class FString& SteamAuthSessionTicket);
		EProsErrorCode ClientConnectStadia(int32_t LocalUserNum, const class FString& PlayerJwt);
		EProsErrorCode ClientConnectSecondary(int32_t LocalUserNum, const class FString& PrimaryToken);
		EProsErrorCode ClientConnectPsnToken(int32_t LocalUserNum, const class FString& IdToken);
		EProsErrorCode ClientConnectPsnCode(int32_t LocalUserNum, const class FString& AuthCode, int32_t IssuerId);
		EProsErrorCode ClientConnectOculus(int32_t LocalUserNum, const class FString& Nonce, int64_t UserId);
		EProsErrorCode ClientConnectNintendo(int32_t LocalUserNum, const class FString& IdentityToken);
		EProsErrorCode ClientConnectEpicOnlineServices(int32_t LocalUserNum, const class FString& AuthAccessToken);
		EProsErrorCode ClientConnectDeveloper(int32_t LocalUserNum, const class FString& Login);
		static UClass* StaticClass();
	};

	/**
	 * Class Pros.ProsBannerService
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UProsBannerService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnGetBanners;                                            // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YBO[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGetBannersFromCache;                                   // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2J3Q[0x30];                                  // 0x0060(0x0030) MISSED OFFSET (PADDING)

	public:
		bool GetBannersFromCache(int32_t LocalUserNum);
		EProsErrorCode GetBanners(int32_t LocalUserNum, TArray<class FString> EntitlementIds, const class FString& ReferenceId);
		class UProsBannerService* Get();
		static UClass* StaticClass();
	};

	/**
	 * Class Pros.ProsCrossSaveService
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UProsCrossSaveService : public UObject
	{
	public:
		EProsErrorCode Submit(int32_t LocalUserNum, const struct FProsCrossSaveSnapshot& Snapshot, const class FScriptDelegate& Delegate);
		EProsErrorCode SkipTransfer(int32_t LocalUserNum, const class FString& TransferId, const class FScriptDelegate& Delegate);
		EProsErrorCode GetTransferInfo(int32_t LocalUserNum, const class FScriptDelegate& Delegate);
		int64_t GetCooldownMs(int32_t LocalUserNum);
		class UProsCrossSaveService* Get();
		EProsErrorCode CompleteTransfer(int32_t LocalUserNum, const class FString& TransferId, const struct FProsCrossSaveSnapshot& Snapshot, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class Pros.ProsEntitlementsService
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UProsEntitlementsService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnGetEntitlements;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConsumeEntitlement;                                    // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKO4[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		EProsErrorCode GetEntitlements(int32_t LocalUserNum);
		class UProsEntitlementsService* Get();
		EProsErrorCode ConsumeEntitlement(int32_t LocalUserNum, const class FString& ID);
		static UClass* StaticClass();
	};

	/**
	 * Class Pros.ProsInterface
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UProsInterface : public UObject
	{
	public:
		unsigned char                                              UnknownData_0S5S[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnProsLog;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56JQ[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStartQRFlow;                                           // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTTO[0x18];                                  // 0x0070(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGetEntitlements;                                       // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1TR[0x68];                                  // 0x0098(0x0068) MISSED OFFSET (PADDING)

	public:
		void Update();
		void Terminate();
		bool TelemetryEvent(const class FString& EventType, int32_t EventTypeVersion, const class FString& EventParams);
		bool TelemetryContextRemove(const class FString& Name);
		bool TelemetryContextAdd(const class FString& Name, const class FString& Value);
		bool StartQRFlow(int32_t LocalUserNum);
		bool StartGetEntitlement(int32_t LocalUserNum);
		void RequestQR(int32_t LocalUserNum);
		void RequestEntitlements(int32_t LocalUserNum);
		bool IsInitialized();
		bool IsBackendTimeSynced();
		bool InitUsingConfig();
		bool Init(const class FString& TitleName, const class FString& TitleId, const class FString& Version, bool bEnableVerboseLogging);
		class FString GetSdkVersion();
		class FString GetProsUserId(int32_t LocalUserNum);
		class FString GetKernelSessionIdVisualAlias(int32_t LocalUserNum);
		class FString GetKernelSessionIdString(int32_t LocalUserNum);
		class FString GetErrorMessage(EProsErrorCode ErrorCode);
		EProsConnectionState GetConnectionState(int32_t LocalUserNum);
		struct FTimespan GetBackendTimeOffset();
		struct FDateTime GetBackendTime();
		class UProsInterface* Get();
		void Disconnect();
		static UClass* StaticClass();
	};

	/**
	 * Class Pros.ProsSettings
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UProsSettings : public UObject
	{
	public:
		float                                                      SessionUpdateInterval;                                   // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJKX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TitleName;                                               // 0x0030(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleId;                                                 // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleSecret;                                             // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubmissiveOSSName;                                       // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubmissiveOSSEnabledAutoLoginInEditor;                  // 0x0080(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3OY[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserLogin;                                               // 0x0088(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPluginVersioned>                            Plugins;                                                 // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       bEnableVerboseLogging;                                   // 0x00A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0M5U[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
