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
	 * BlueprintGeneratedClass BPC_Distraction_GroupCoordinator_Screamer_Electric.BPC_Distraction_GroupCoordinator_Screamer_Electric_C
	 * Size -> 0x0010 (FullSize[0x04E8] - InheritedSize[0x04D8])
	 */
	class UBPC_Distraction_GroupCoordinator_Screamer_Electric_C : public UBPC_Distraction_GroupCoordinator_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_AOE_StatusEffect_ArcFromScream_Screamer_Electric_C* ArcFromScreamComponent;                                  // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GlobalQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_Distraction_GroupCoordinator_Screamer_Electric(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
