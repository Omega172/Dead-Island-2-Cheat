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
	 * BlueprintGeneratedClass BP_MenuInstance_InGamePauseMenu.BP_MenuInstance_InGamePauseMenu_C
	 * Size -> 0x0030 (FullSize[0x0368] - InheritedSize[0x0338])
	 */
	class UBP_MenuInstance_InGamePauseMenu_C : public UMenuInstanceInGame
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInputMapperActionFilterDefinition*                  InputMapperFilter;                                       // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                InputMapperFilterReason;                                 // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              HUDState;                                                // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               GameMenuAudioStateId;                                    // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintOpenMenu();
		void BlueprintCloseMenu();
		void OnLocalPlayerFailStateSet_Event(class UFailState* FailState);
		void ExecuteUbergraph_BP_MenuInstance_InGamePauseMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
