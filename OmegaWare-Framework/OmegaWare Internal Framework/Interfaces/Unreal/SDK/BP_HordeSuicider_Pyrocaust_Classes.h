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
	 * BlueprintGeneratedClass BP_HordeSuicider_Pyrocaust.BP_HordeSuicider_Pyrocaust_C
	 * Size -> 0x000C (FullSize[0x11B0] - InheritedSize[0x11A4])
	 */
	class ABP_HordeSuicider_Pyrocaust_C : public ABP_Base_Suicider_C
	{
	public:
		unsigned char                                              UnknownData_86RZ[0x4];                                   // 0x11A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x11A8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_HordeSuicider_Pyrocaust(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
