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
	 * Class DebugToolkit.DebugText
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugText : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_ShouldDrawDebug(class AActor* Actor, bool bValueForNoComponent);
		bool STATIC_Select(class AActor* Actor, bool bExclusive);
		void STATIC_MakeSelectable(class AActor* Actor, const class FName& Client);
		bool STATIC_IsSelected(class AActor* Actor);
		TArray<class AActor*> STATIC_GetSelectedActors(class UObject* WorldContextObject, const class FName& Client);
		class AActor* STATIC_GetPrimarySelectedActor(class UObject* WorldContextObject);
		void STATIC_ClearSelectedActors(class UObject* WorldContextObject, const class FName& Client);
		void STATIC_AddDebugText(class AActor* Actor, const struct FDebugTextParams& DebugText);
		class FString STATIC_AddColourMarkup(const class FString& Text, const struct FLinearColor& Colour);
		static UClass* StaticClass();
	};

	/**
	 * Class DebugToolkit.DebugTextComponent
	 * Size -> 0x00A8 (FullSize[0x0190] - InheritedSize[0x00E8])
	 */
	class UDebugTextComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BIUF[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AuthorityText;                                           // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              LocalText;                                               // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDebugTextRichTextBlock*                             RichTextBlock;                                           // 0x0110(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4YRP[0x78];                                  // 0x0118(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugToolkit.DebugTextManager
	 * Size -> 0x0158 (FullSize[0x0408] - InheritedSize[0x02B0])
	 */
	class ADebugTextManager : public AInfo
	{
	public:
		struct FDebugTextAuthorityDataArray                        AuthorityData;                                           // 0x02B0(0x0118) Net, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0NYL[0x40];                                  // 0x03C8(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugToolkit.DebugTextRichTextBlock
	 * Size -> 0x0000 (FullSize[0x0668] - InheritedSize[0x0668])
	 */
	class UDebugTextRichTextBlock : public URichTextBlock
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugToolkit.RichTextBlockColourDecorator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URichTextBlockColourDecorator : public URichTextBlockDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugToolkit.WebDebugger
	 * Size -> 0x0128 (FullSize[0x03D8] - InheritedSize[0x02B0])
	 */
	class AWebDebugger : public AInfo
	{
	public:
		unsigned char                                              UnknownData_EAO1[0x128];                                 // 0x02B0(0x0128) MISSED OFFSET (PADDING)

	public:
		void OnTextMessageReceived(const class FString& Message);
		void OnDisconnected();
		void OnBinaryMessageReceived(TArray<unsigned char> Message);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
