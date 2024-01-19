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
	 * BlueprintGeneratedClass BPC_CarryableImpactOnCollisionDetection.BPC_CarryableImpactOnCollisionDetection_C
	 * Size -> 0x0010 (FullSize[0x0628] - InheritedSize[0x0618])
	 */
	class UBPC_CarryableImpactOnCollisionDetection_C : public UCarryableImpactOnCollisionDetectionComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0618(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                RowNameToFind;                                           // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupImpactData(ESizeCategory Size);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_CarryableImpactOnCollisionDetection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
