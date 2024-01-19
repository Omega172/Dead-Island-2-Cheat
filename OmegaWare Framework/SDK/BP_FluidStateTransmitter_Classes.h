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
	 * BlueprintGeneratedClass BP_FluidStateTransmitter.BP_FluidStateTransmitter_C
	 * Size -> 0x0008 (FullSize[0x0688] - InheritedSize[0x0680])
	 */
	class UBP_FluidStateTransmitter_C : public UFluidActorStateTransmitterComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0680(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnServerActivated(ETransmittableStatus StatusType, float Strength);
		void OnServerDeactivated(ETransmittableStatus StatusType);
		void ExecuteUbergraph_BP_FluidStateTransmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
