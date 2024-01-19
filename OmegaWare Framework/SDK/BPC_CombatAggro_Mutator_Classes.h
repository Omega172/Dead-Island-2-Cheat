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
	 * BlueprintGeneratedClass BPC_CombatAggro_Mutator.BPC_CombatAggro_Mutator_C
	 * Size -> 0x000C (FullSize[0x0400] - InheritedSize[0x03F4])
	 */
	class UBPC_CombatAggro_Mutator_C : public UBPC_Base_CombatAggro_C
	{
	public:
		unsigned char                                              UnknownData_ZQ0R[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_BPC_CombatAggro_Mutator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
