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
	 * BlueprintGeneratedClass BP_UIEventDispatcher.BP_UIEventDispatcher_C
	 * Size -> 0x0020 (FullSize[0x0578] - InheritedSize[0x0558])
	 */
	class UBP_UIEventDispatcher_C : public UUIEventDispatcher
	{
	public:
		class FScriptMulticastDelegate                             BP_OnLocalCharacterKilled;                               // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpenVendorMenu;                                        // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnOpenVendorMenu__DelegateSignature(TArray<class AItemActor*>* VendorItems, class ABP_Base_DebugVendor_C* VendorActor);
		void BP_OnLocalCharacterKilled__DelegateSignature(class ADIPlayerCharacter* PlayerCharacter);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
