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
	 * BlueprintGeneratedClass BP_Mutator_Transformed.BP_Mutator_Transformed_C
	 * Size -> 0x0008 (FullSize[0x10C0] - InheritedSize[0x10B8])
	 */
	class ABP_Mutator_Transformed_C : public ABP_Base_Mutator_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10B8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Mutator_Transformed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
