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
	 * BlueprintGeneratedClass BPC_Stability_Special_Large.BPC_Stability_Special_Large_C
	 * Size -> 0x0009 (FullSize[0x0321] - InheritedSize[0x0318])
	 */
	class UBPC_Stability_Special_Large_C : public UBPC_Base_Stability_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ShouldRequestKnockdownStunOutsideOfImpactSystem;         // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void OnStabilityFullyDepleted(bool bResult);
		void ExecuteUbergraph_BPC_Stability_Special_Large(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
