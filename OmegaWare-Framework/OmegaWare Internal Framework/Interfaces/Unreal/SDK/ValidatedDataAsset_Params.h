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
	 * Function ValidatedDataAsset.BaseValidatedDataAsset.IsValidInternal
	 */
	struct UBaseValidatedDataAsset_IsValidInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ValidatedDataAsset.BaseValidatedDataAsset.GetErrorsToOutput
	 */
	struct UBaseValidatedDataAsset_GetErrorsToOutput_Params
	{
	public:
		TArray<class FText>                                        Errors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
