#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
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
	 * Class ScaleformUI.GFxMoviePlayer
	 * Size -> 0x01B0 (FullSize[0x01D8] - InheritedSize[0x0028])
	 */
	class UGFxMoviePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_6WRI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USwfMovie*                                           SwfAsset;                                                // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SwfAssetName;                                            // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGFxObject*                                          Root;                                                    // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayWithHudOff : 1;                                  // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableGammaCorrection : 1;                              // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysAdvanceWhenHidden : 1;                            // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysRenderCapture : 1;                                // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInput : 1;                                         // 0x0050(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowFocus : 1;                                         // 0x0050(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCloseOnLevelChange : 1;                                 // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyOwnerFocusable : 1;                                 // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDiscardNonOwnerInput : 1;                               // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptureKeyboardInput : 1;                               // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptureMouseInput : 1;                                  // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptureGamepadInput : 1;                                // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptureTouchInput : 1;                                  // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSplitscreenLayoutModified : 1;                        // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDefaultMouseCursor : 1;                             // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlurLesserMovies : 1;                                   // 0x0051(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideLesserMovies : 1;                                   // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPriorityBlurred : 1;                                  // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPriorityHidden : 1;                                   // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreVisibilityEffect : 1;                             // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreBlurEffect : 1;                                   // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRefreshed : 1;                                          // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSingleThreaded : 1;                                     // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPerformHitTest : 1;                                     // 0x0052(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YWW[0x1];                                   // 0x0053(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGFxHitTestType                                            HitTestType;                                             // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCUC[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RenderTexture;                                           // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ExternalInterface;                                       // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        CaptureKeys;                                             // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKey>                                        FocusIgnoreKeys;                                         // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FExternalTexture>                            ExternalTextures;                                        // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EGFxRenderTextureMode                                      RenderTextureMode;                                       // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Priority;                                                // 0x0099(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KORY[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGFxWidgetBinding>                           WidgetBindings;                                          // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SplitscreenLayoutYAdjust;                                // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KWP[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFsCommand;                                             // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartCommand;                                          // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCloseCommand;                                          // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTickCommand;                                           // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFocusGainedCommand;                                    // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFocusLostCommand;                                      // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7DF[0x68];                                  // 0x0118(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UGFxObject*>                     CachedMovieClips;                                        // 0x0180(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HYK2[0x8];                                   // 0x01D0(0x0008) MISSED OFFSET (PADDING)

	public:
		bool Start(bool bRefresh);
		void SetVisibility(const class FString& MovieClipName, bool bVisible);
		void SetViewScaleMode(EGFxScaleMode ScaleMode);
		void SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height);
		void SetView3D(const struct FTransform& ViewTransform);
		void SetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName, TArray<struct FASValue> Value);
		void SetVariableValue(const class FString& MovieClipName, const class FString& MemberName, const struct FASValue& Value);
		void SetTimingMode(EGFxTimingMode TimingMode);
		void SetScale(const class FString& MovieClipName, float XScale, float YScale);
		void SetRootVisibility(bool bVisible);
		void SetPosition(const class FString& MovieClipName, float X, float Y);
		void SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform);
		void SetPause(bool bPausePlayback);
		void SetMovieCanReceiveInput(bool bCanReceiveInput);
		void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
		void SetFocusIgnoreKeys(TArray<struct FKey> Keys);
		bool SetExternalTexture(const class FString& Resource, class UTexture* Texture);
		void SetDisplayTransform(const class FString& MovieClipName, const struct FTransform& DisplayTransform);
		void SetDisplayInfo(const class FString& MovieClipName, const struct FASDisplayInfo& Info);
		void SetColorTransform(const class FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform);
		void SetCaptureKeys(TArray<struct FKey> Keys);
		void SetAlignment(EGFxAlign Align);
		void ReceiveGFxCommand(const class FString& Command, const class FString& Arguments);
		class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
		void OnTick(float DeltaTime);
		void OnStart();
		void OnRenderViewportUpdated(int32_t Width, int32_t Height);
		void OnFocusLost(int32_t LocalPlayerIndex);
		void OnFocusGained(int32_t LocalPlayerIndex);
		void OnClose();
		struct FASValue Invoke(const class FString& MovieClipName, const class FString& FunctionName, TArray<struct FASValue> Params);
		void GotoAndStopI(const class FString& MovieClipName, int32_t Frame);
		void GotoAndStop(const class FString& MovieClipName, const class FString& Frame);
		void GotoAndPlayI(const class FString& MovieClipName, int32_t Frame);
		void GotoAndPlay(const class FString& MovieClipName, const class FString& Frame);
		bool GetVisibility(const class FString& MovieClipName);
		EGFxScaleMode GetViewScaleMode();
		void GetViewport(int32_t* X, int32_t* Y, int32_t* Width, int32_t* Height, float* AR);
		struct FTransform GetView3D();
		TArray<struct FASValue> GetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName);
		struct FASValue GetVariableValue(const class FString& MovieClipName, const class FString& MemberName);
		bool GetScale(const class FString& MovieClipName, float* XScale, float* YScale);
		bool GetRootVisibility();
		bool GetPosition(const class FString& MovieClipName, float* X, float* Y);
		struct FASPerspectiveTransform GetPerspective3D();
		class UGFxObject* GetMovieClip(const class FString& MovieClipName);
		struct FTransform GetDisplayTransform(const class FString& MovieClipName);
		struct FASDisplayInfo GetDisplayInfo(const class FString& MovieClipName);
		struct FASColorTransform GetColorTransform(const class FString& MovieClipName);
		EGFxAlign GetAlignment();
		void ForceAdvance(float DeltaTime);
		void Close(bool Unload);
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.GFxEngine
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGFxEngine : public UObject
	{
	public:
		TArray<struct FGCReference>                                GCReferences;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RefCount;                                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H567[0x2C];                                  // 0x003C(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.GFxObject
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGFxObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_R3H0[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetVisible(bool bVisible);
		void SetTextHTML(const class FString& HTMLText);
		void SetText(const class FString& Text);
		void SetScale(float XScale, float YScale);
		void SetPosition(float X, float Y);
		void SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName, TArray<struct FASValue> Input);
		void SetMemberValue(const class FString& MemberName, const struct FASValue& Input);
		void SetDisplayTransform(const struct FTransform& DisplayTransform);
		void SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo);
		void SetColorTransform(const struct FASColorTransform& UnrealColorTransform);
		void InvokeNoReturn(const class FString& FunctionName, TArray<struct FASValue> Params);
		bool HasMemberValue(const class FString& MemberName);
		void GotoAndStopI(int32_t FrameNumber);
		void GotoAndStop(const class FString& FrameString);
		void GotoAndPlayI(int32_t FrameNumber);
		void GotoAndPlay(const class FString& FrameString);
		bool GetVisible();
		bool GetTextHTML(class FString* HTMLText);
		bool GetText(class FString* Text);
		bool GetScale(float* XScale, float* YScale);
		bool GetPosition(float* X, float* Y);
		class UGFxObject* GetMemberVariable(const class FString& MemberName);
		TArray<struct FASValue> GetMemberValueArray(const class FString& MemberName);
		struct FASValue GetMemberValue(const class FString& MemberName);
		struct FTransform GetDisplayTransform();
		struct FASDisplayInfo GetDisplayInfo();
		struct FASColorTransform GetColorTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.ScaleformBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
		struct FASValue STATIC_InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName);
		struct FASValue STATIC_Invoke(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName, TArray<struct FASValue> Params);
		class UGFxObject* STATIC_GetVariable(class UGFxMoviePlayer* MoviePlayer, const class FString& VariablePath);
		class UGFxObject* STATIC_GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const class FString& MovieClipName);
		class UGFxObject* STATIC_GetMember(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName);
		void STATIC_CloseMovie(class UGFxMoviePlayer* MoviePlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class ScaleformUI.SwfMovie
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class USwfMovie : public UObject
	{
	public:
		bool                                                       bUseGFxExport : 1;                                       // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOptimizeForMobiles : 1;                                 // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetSRGBOnImportedTextures : 1;                          // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPackTextures : 1;                                       // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RY80[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PackTextureSize;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceSquarePacking : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKA9[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFlashTextureRescale                                       TextureRescale;                                          // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8W0[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TextureFormat;                                           // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceImages : 1;                                      // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP0B[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceFile;                                              // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      FontMappings;                                            // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class FText>                                        LocalizableStrings;                                      // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FString                                              SourceFileTimestamp;                                     // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ImportTimeStamp;                                         // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      RawData;                                                 // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      ReferencedAssetNames;                                    // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             ReferencedAssetStringNameRefs;                           // 0x00B8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     ReferencedAssets;                                        // 0x00C8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     References;                                              // 0x00D8(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     UserReferences;                                          // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
