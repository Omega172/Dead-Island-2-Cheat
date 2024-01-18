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
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRefresh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::Start(bool bRefresh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.Start");
		
		UGFxMoviePlayer_Start_Params params {};
		params.bRefresh = bRefresh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetVisibility(const class FString& MovieClipName, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVisibility");
		
		UGFxMoviePlayer_SetVisibility_Params params {};
		params.MovieClipName = MovieClipName;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGFxScaleMode                                      ScaleMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetViewScaleMode(EGFxScaleMode ScaleMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode");
		
		UGFxMoviePlayer_SetViewScaleMode_Params params {};
		params.ScaleMode = ScaleMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetViewport");
		
		UGFxMoviePlayer_SetViewport_Params params {};
		params.X = X;
		params.Y = Y;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetView3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  ViewTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetView3D(const struct FTransform& ViewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetView3D");
		
		UGFxMoviePlayer_SetView3D_Params params {};
		params.ViewTransform = ViewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName, TArray<struct FASValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray");
		
		UGFxMoviePlayer_SetVariableValueArray_Params params {};
		params.MovieClipName = MovieClipName;
		params.MemberName = MemberName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetVariableValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FASValue                                    Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetVariableValue(const class FString& MovieClipName, const class FString& MemberName, const struct FASValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVariableValue");
		
		UGFxMoviePlayer_SetVariableValue_Params params {};
		params.MovieClipName = MovieClipName;
		params.MemberName = MemberName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetTimingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGFxTimingMode                                     TimingMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetTimingMode(EGFxTimingMode TimingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetTimingMode");
		
		UGFxMoviePlayer_SetTimingMode_Params params {};
		params.TimingMode = TimingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              XScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetScale(const class FString& MovieClipName, float XScale, float YScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetScale");
		
		UGFxMoviePlayer_SetScale_Params params {};
		params.MovieClipName = MovieClipName;
		params.XScale = XScale;
		params.YScale = YScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetRootVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetRootVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetRootVisibility");
		
		UGFxMoviePlayer_SetRootVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetPosition(const class FString& MovieClipName, float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetPosition");
		
		UGFxMoviePlayer_SetPosition_Params params {};
		params.MovieClipName = MovieClipName;
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FASPerspectiveTransform                     PerspectiveTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetPerspective3D");
		
		UGFxMoviePlayer_SetPerspective3D_Params params {};
		params.PerspectiveTransform = PerspectiveTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetPause
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPausePlayback                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetPause(bool bPausePlayback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetPause");
		
		UGFxMoviePlayer_SetPause_Params params {};
		params.bPausePlayback = bPausePlayback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanReceiveInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput");
		
		UGFxMoviePlayer_SetMovieCanReceiveInput_Params params {};
		params.bCanReceiveInput = bCanReceiveInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanReceiveFocus                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus");
		
		UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params {};
		params.bCanReceiveFocus = bCanReceiveFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetFocusIgnoreKeys(TArray<struct FKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys");
		
		UGFxMoviePlayer_SetFocusIgnoreKeys_Params params {};
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Resource                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::SetExternalTexture(const class FString& Resource, class UTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetExternalTexture");
		
		UGFxMoviePlayer_SetExternalTexture_Params params {};
		params.Resource = Resource;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  DisplayTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetDisplayTransform(const class FString& MovieClipName, const struct FTransform& DisplayTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform");
		
		UGFxMoviePlayer_SetDisplayTransform_Params params {};
		params.MovieClipName = MovieClipName;
		params.DisplayTransform = DisplayTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FASDisplayInfo                              Info                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetDisplayInfo(const class FString& MovieClipName, const struct FASDisplayInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo");
		
		UGFxMoviePlayer_SetDisplayInfo_Params params {};
		params.MovieClipName = MovieClipName;
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetColorTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FASColorTransform                           UnrealColorTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetColorTransform(const class FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetColorTransform");
		
		UGFxMoviePlayer_SetColorTransform_Params params {};
		params.MovieClipName = MovieClipName;
		params.UnrealColorTransform = UnrealColorTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetCaptureKeys(TArray<struct FKey> Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys");
		
		UGFxMoviePlayer_SetCaptureKeys_Params params {};
		params.Keys = Keys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.SetAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGFxAlign                                          Align                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::SetAlignment(EGFxAlign Align)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetAlignment");
		
		UGFxMoviePlayer_SetAlignment_Params params {};
		params.Align = Align;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Arguments                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::ReceiveGFxCommand(const class FString& Command, const class FString& Arguments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand");
		
		UGFxMoviePlayer_ReceiveGFxCommand_Params params {};
		params.Command = Command;
		params.Arguments = Arguments;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OpenMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USwfMovie*                                   SwfMovie                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ExternalScriptInterface                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      RenderToTexture                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DisplayWithHudOff                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               StartPaused                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxMoviePlayer* UGFxMoviePlayer::OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OpenMovie");
		
		UGFxMoviePlayer_OpenMovie_Params params {};
		params.SwfMovie = SwfMovie;
		params.ExternalScriptInterface = ExternalScriptInterface;
		params.RenderToTexture = RenderToTexture;
		params.MoviePlayer = MoviePlayer;
		params.DisplayWithHudOff = DisplayWithHudOff;
		params.StartPaused = StartPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::OnTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnTick");
		
		UGFxMoviePlayer_OnTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnStart
	 * 		Flags  -> ()
	 */
	void UGFxMoviePlayer::OnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnStart");
		
		UGFxMoviePlayer_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnRenderViewportUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::OnRenderViewportUpdated(int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnRenderViewportUpdated");
		
		UGFxMoviePlayer_OnRenderViewportUpdated_Params params {};
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnFocusLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::OnFocusLost(int32_t LocalPlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnFocusLost");
		
		UGFxMoviePlayer_OnFocusLost_Params params {};
		params.LocalPlayerIndex = LocalPlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnFocusGained
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::OnFocusGained(int32_t LocalPlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnFocusGained");
		
		UGFxMoviePlayer_OnFocusGained_Params params {};
		params.LocalPlayerIndex = LocalPlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.OnClose
	 * 		Flags  -> ()
	 */
	void UGFxMoviePlayer::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnClose");
		
		UGFxMoviePlayer_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.Invoke
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FASValue UGFxMoviePlayer::Invoke(const class FString& MovieClipName, const class FString& FunctionName, TArray<struct FASValue> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.Invoke");
		
		UGFxMoviePlayer_Invoke_Params params {};
		params.MovieClipName = MovieClipName;
		params.FunctionName = FunctionName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::GotoAndStopI(const class FString& MovieClipName, int32_t Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndStopI");
		
		UGFxMoviePlayer_GotoAndStopI_Params params {};
		params.MovieClipName = MovieClipName;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::GotoAndStop(const class FString& MovieClipName, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndStop");
		
		UGFxMoviePlayer_GotoAndStop_Params params {};
		params.MovieClipName = MovieClipName;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::GotoAndPlayI(const class FString& MovieClipName, int32_t Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI");
		
		UGFxMoviePlayer_GotoAndPlayI_Params params {};
		params.MovieClipName = MovieClipName;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::GotoAndPlay(const class FString& MovieClipName, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndPlay");
		
		UGFxMoviePlayer_GotoAndPlay_Params params {};
		params.MovieClipName = MovieClipName;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::GetVisibility(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetVisibility");
		
		UGFxMoviePlayer_GetVisibility_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetViewScaleMode
	 * 		Flags  -> ()
	 */
	EGFxScaleMode UGFxMoviePlayer::GetViewScaleMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetViewScaleMode");
		
		UGFxMoviePlayer_GetViewScaleMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AR                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::GetViewport(int32_t* X, int32_t* Y, int32_t* Width, int32_t* Height, float* AR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetViewport");
		
		UGFxMoviePlayer_GetViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		if (AR != nullptr)
			*AR = params.AR;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetView3D
	 * 		Flags  -> ()
	 */
	struct FTransform UGFxMoviePlayer::GetView3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetView3D");
		
		UGFxMoviePlayer_GetView3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FASValue> UGFxMoviePlayer::GetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray");
		
		UGFxMoviePlayer_GetVariableValueArray_Params params {};
		params.MovieClipName = MovieClipName;
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetVariableValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASValue UGFxMoviePlayer::GetVariableValue(const class FString& MovieClipName, const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetVariableValue");
		
		UGFxMoviePlayer_GetVariableValue_Params params {};
		params.MovieClipName = MovieClipName;
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              XScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::GetScale(const class FString& MovieClipName, float* XScale, float* YScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetScale");
		
		UGFxMoviePlayer_GetScale_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XScale != nullptr)
			*XScale = params.XScale;
		if (YScale != nullptr)
			*YScale = params.YScale;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetRootVisibility
	 * 		Flags  -> ()
	 */
	bool UGFxMoviePlayer::GetRootVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetRootVisibility");
		
		UGFxMoviePlayer_GetRootVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxMoviePlayer::GetPosition(const class FString& MovieClipName, float* X, float* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetPosition");
		
		UGFxMoviePlayer_GetPosition_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
	 * 		Flags  -> ()
	 */
	struct FASPerspectiveTransform UGFxMoviePlayer::GetPerspective3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetPerspective3D");
		
		UGFxMoviePlayer_GetPerspective3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetMovieClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UGFxMoviePlayer::GetMovieClip(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetMovieClip");
		
		UGFxMoviePlayer_GetMovieClip_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UGFxMoviePlayer::GetDisplayTransform(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform");
		
		UGFxMoviePlayer_GetDisplayTransform_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASDisplayInfo UGFxMoviePlayer::GetDisplayInfo(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo");
		
		UGFxMoviePlayer_GetDisplayInfo_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetColorTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASColorTransform UGFxMoviePlayer::GetColorTransform(const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetColorTransform");
		
		UGFxMoviePlayer_GetColorTransform_Params params {};
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.GetAlignment
	 * 		Flags  -> ()
	 */
	EGFxAlign UGFxMoviePlayer::GetAlignment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetAlignment");
		
		UGFxMoviePlayer_GetAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.ForceAdvance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::ForceAdvance(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.ForceAdvance");
		
		UGFxMoviePlayer_ForceAdvance_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxMoviePlayer.Close
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Unload                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxMoviePlayer::Close(bool Unload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.Close");
		
		UGFxMoviePlayer_Close_Params params {};
		params.Unload = Unload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxMoviePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxMoviePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScaleformUI.GFxMoviePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScaleformUI.GFxEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetVisible");
		
		UGFxObject_SetVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetTextHTML
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HTMLText                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetTextHTML(const class FString& HTMLText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetTextHTML");
		
		UGFxObject_SetTextHTML_Params params {};
		params.HTMLText = HTMLText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetText(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetText");
		
		UGFxObject_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              XScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetScale(float XScale, float YScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetScale");
		
		UGFxObject_SetScale_Params params {};
		params.XScale = XScale;
		params.YScale = YScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetPosition(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetPosition");
		
		UGFxObject_SetPosition_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetMemberValueArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Input                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName, TArray<struct FASValue> Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetMemberValueArray");
		
		UGFxObject_SetMemberValueArray_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.MemberName = MemberName;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetMemberValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FASValue                                    Input                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetMemberValue(const class FString& MemberName, const struct FASValue& Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetMemberValue");
		
		UGFxObject_SetMemberValue_Params params {};
		params.MemberName = MemberName;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetDisplayTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  DisplayTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetDisplayTransform(const struct FTransform& DisplayTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetDisplayTransform");
		
		UGFxObject_SetDisplayTransform_Params params {};
		params.DisplayTransform = DisplayTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetDisplayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FASDisplayInfo                              UnrealDisplayInfo                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetDisplayInfo");
		
		UGFxObject_SetDisplayInfo_Params params {};
		params.UnrealDisplayInfo = UnrealDisplayInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.SetColorTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FASColorTransform                           UnrealColorTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::SetColorTransform(const struct FASColorTransform& UnrealColorTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetColorTransform");
		
		UGFxObject_SetColorTransform_Params params {};
		params.UnrealColorTransform = UnrealColorTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.InvokeNoReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::InvokeNoReturn(const class FString& FunctionName, TArray<struct FASValue> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.InvokeNoReturn");
		
		UGFxObject_InvokeNoReturn_Params params {};
		params.FunctionName = FunctionName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.HasMemberValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxObject::HasMemberValue(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.HasMemberValue");
		
		UGFxObject_HasMemberValue_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GotoAndStopI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::GotoAndStopI(int32_t FrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndStopI");
		
		UGFxObject_GotoAndStopI_Params params {};
		params.FrameNumber = FrameNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GotoAndStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FrameString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::GotoAndStop(const class FString& FrameString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndStop");
		
		UGFxObject_GotoAndStop_Params params {};
		params.FrameString = FrameString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GotoAndPlayI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::GotoAndPlayI(int32_t FrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndPlayI");
		
		UGFxObject_GotoAndPlayI_Params params {};
		params.FrameNumber = FrameNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GotoAndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FrameString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGFxObject::GotoAndPlay(const class FString& FrameString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndPlay");
		
		UGFxObject_GotoAndPlay_Params params {};
		params.FrameString = FrameString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetVisible
	 * 		Flags  -> ()
	 */
	bool UGFxObject::GetVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetVisible");
		
		UGFxObject_GetVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetTextHTML
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      HTMLText                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxObject::GetTextHTML(class FString* HTMLText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetTextHTML");
		
		UGFxObject_GetTextHTML_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HTMLText != nullptr)
			*HTMLText = params.HTMLText;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxObject::GetText(class FString* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetText");
		
		UGFxObject_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              XScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxObject::GetScale(float* XScale, float* YScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetScale");
		
		UGFxObject_GetScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XScale != nullptr)
			*XScale = params.XScale;
		if (YScale != nullptr)
			*YScale = params.YScale;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGFxObject::GetPosition(float* X, float* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetPosition");
		
		UGFxObject_GetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetMemberVariable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UGFxObject::GetMemberVariable(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetMemberVariable");
		
		UGFxObject_GetMemberVariable_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetMemberValueArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FASValue> UGFxObject::GetMemberValueArray(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetMemberValueArray");
		
		UGFxObject_GetMemberValueArray_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetMemberValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASValue UGFxObject::GetMemberValue(const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetMemberValue");
		
		UGFxObject_GetMemberValue_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetDisplayTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UGFxObject::GetDisplayTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetDisplayTransform");
		
		UGFxObject_GetDisplayTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetDisplayInfo
	 * 		Flags  -> ()
	 */
	struct FASDisplayInfo UGFxObject::GetDisplayInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetDisplayInfo");
		
		UGFxObject_GetDisplayInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.GFxObject.GetColorTransform
	 * 		Flags  -> ()
	 */
	struct FASColorTransform UGFxObject::GetColorTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetColorTransform");
		
		UGFxObject_GetColorTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGFxObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGFxObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScaleformUI.GFxObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USwfMovie*                                   Movie                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ExternalInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      RenderTexture                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DisplayWithHudOff                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               StartPaused                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxMoviePlayer* UScaleformBlueprintLibrary::OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie");
		
		UScaleformBlueprintLibrary_OpenMovie_Params params {};
		params.Movie = Movie;
		params.ExternalInterface = ExternalInterface;
		params.RenderTexture = RenderTexture;
		params.MoviePlayer = MoviePlayer;
		params.DisplayWithHudOff = DisplayWithHudOff;
		params.StartPaused = StartPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FASValue UScaleformBlueprintLibrary::InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams");
		
		UScaleformBlueprintLibrary_InvokeNoParams_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.Invoke
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FASValue UScaleformBlueprintLibrary::Invoke(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName, TArray<struct FASValue> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.Invoke");
		
		UScaleformBlueprintLibrary_Invoke_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.FunctionName = FunctionName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariablePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UScaleformBlueprintLibrary::GetVariable(class UGFxMoviePlayer* MoviePlayer, const class FString& VariablePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable");
		
		UScaleformBlueprintLibrary_GetVariable_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.VariablePath = VariablePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UScaleformBlueprintLibrary::GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const class FString& MovieClipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip");
		
		UScaleformBlueprintLibrary_GetMovieClip_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.MovieClipName = MovieClipName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.GetMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGFxObject* UScaleformBlueprintLibrary::GetMember(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetMember");
		
		UScaleformBlueprintLibrary_GetMember_Params params {};
		params.MoviePlayer = MoviePlayer;
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UScaleformBlueprintLibrary::CloseMovie(class UGFxMoviePlayer* MoviePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie");
		
		UScaleformBlueprintLibrary_CloseMovie_Params params {};
		params.MoviePlayer = MoviePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScaleformBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScaleformBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScaleformUI.ScaleformBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USwfMovie.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USwfMovie::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ScaleformUI.SwfMovie");
		return ptr;
	}

}


