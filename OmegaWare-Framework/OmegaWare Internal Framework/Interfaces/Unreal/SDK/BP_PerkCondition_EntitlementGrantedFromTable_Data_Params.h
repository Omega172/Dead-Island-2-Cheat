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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_PerkCondition_EntitlementGrantedFromTable_Data.BP_PerkCondition_EntitlementGrantedFromTable_Data_C.EntitlementGrantedFromTable
	 */
	struct UBP_PerkCondition_EntitlementGrantedFromTable_Data_C_EntitlementGrantedFromTable_Params
	{
	public:
		struct FFixedDataTableEditableRowHandle                    HandleToEntitlementGranted;                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerkCondition_EntitlementGrantedFromTable_Data.BP_PerkCondition_EntitlementGrantedFromTable_Data_C.ExecuteUbergraph_BP_PerkCondition_EntitlementGrantedFromTable_Data
	 */
	struct UBP_PerkCondition_EntitlementGrantedFromTable_Data_C_ExecuteUbergraph_BP_PerkCondition_EntitlementGrantedFromTable_Data_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZMSY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
