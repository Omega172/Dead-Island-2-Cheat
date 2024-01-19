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
	 * BlueprintGeneratedClass BP_MenuButtonElement_MainMenu.BP_MenuButtonElement_MainMenu_C
	 * Size -> 0x0008 (FullSize[0x01F8] - InheritedSize[0x01F0])
	 */
	class UBP_MenuButtonElement_MainMenu_C : public UMenuButtonElement
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01F0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BlueprintOpen();
		void ExecuteUbergraph_BP_MenuButtonElement_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
