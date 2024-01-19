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
	 * Function Tremor.TremorManager.StopTremor
	 */
	struct ATremorManager_StopTremor_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tremor.TremorManager.RequestTremor
	 */
	struct ATremorManager_RequestTremor_Params
	{
	public:
		class UTremorDataAsset*                                    DataAssetToUse;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Tremor.TremorManager.OnRep_ActiveTremorDataAsset
	 */
	struct ATremorManager_OnRep_ActiveTremorDataAsset_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
