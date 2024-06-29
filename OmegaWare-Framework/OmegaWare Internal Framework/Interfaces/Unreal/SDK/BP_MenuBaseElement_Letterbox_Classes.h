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
	 * BlueprintGeneratedClass BP_MenuBaseElement_Letterbox.BP_MenuBaseElement_Letterbox_C
	 * Size -> 0x0009 (FullSize[0x00F9] - InheritedSize[0x00F0])
	 */
	class UBP_MenuBaseElement_Letterbox_C : public UMenuBaseElement
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ShouldPlayInitAnim;                                      // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void BlueprintOpen();
		void ExecuteUbergraph_BP_MenuBaseElement_Letterbox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
