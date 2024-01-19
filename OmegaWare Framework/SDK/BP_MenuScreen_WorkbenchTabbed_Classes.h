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
	 * BlueprintGeneratedClass BP_MenuScreen_WorkbenchTabbed.BP_MenuScreen_WorkbenchTabbed_C
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	class UBP_MenuScreen_WorkbenchTabbed_C : public UMenuScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BlueprintLeaveScreen();
		void ExecuteUbergraph_BP_MenuScreen_WorkbenchTabbed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
