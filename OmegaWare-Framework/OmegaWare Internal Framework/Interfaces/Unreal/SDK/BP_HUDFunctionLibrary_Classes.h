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
	 * BlueprintGeneratedClass BP_HUDFunctionLibrary.BP_HUDFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_HUDFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetRarityData(EItemRarity Rarity, class UObject* __WorldContext, struct FLinearColor* Color);
		void STATIC_SetTextShadowOpacityToTextOpacity(class UTextBlock* TextWidget, class UObject* __WorldContext);
		void STATIC_OpenInGameMenu(bool Opened, const class FName& ActionFilterReason, class UInputMapperActionFilterDefinition* ActionFilter, class UObject* WorldContextObject, class UObject* __WorldContext);
		void STATIC_GetDIHUD(class UObject* __WorldContext, class ADIHUD** HUD);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
