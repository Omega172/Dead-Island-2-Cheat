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
	 * BlueprintGeneratedClass BP_MenusFunctionLibrary.BP_MenusFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_MenusFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void ShowUnavailableInDemoDialog(class UObject* __WorldContext);
		void OpenVendorMenu(class UVendorComponent* Vendor, class APlayerController* PlayerController, class UObject* __WorldContext);
		class UMenuInstance* OpenMenu(class UMenuType* Menu, const struct FMenuOpeningParams& OpeningParams, class UObject* __WorldContext);
		void OpenCloseInGameMenu(bool Opened, const class FName& ActionFilterReason, class UInputMapperActionFilterDefinition* ActionFilter, class UClass* HUDState, struct FGuid* GameMenuAudioStateId, class UObject* WorldContextObject, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
