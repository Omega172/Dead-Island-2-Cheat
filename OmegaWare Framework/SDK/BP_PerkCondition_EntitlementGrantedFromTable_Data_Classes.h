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
	 * BlueprintGeneratedClass BP_PerkCondition_EntitlementGrantedFromTable_Data.BP_PerkCondition_EntitlementGrantedFromTable_Data_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UBP_PerkCondition_EntitlementGrantedFromTable_Data_C : public UConditionCustomDataBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void EntitlementGrantedFromTable(const struct FFixedDataTableEditableRowHandle& HandleToEntitlementGranted);
		void ExecuteUbergraph_BP_PerkCondition_EntitlementGrantedFromTable_Data(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
