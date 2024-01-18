#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
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
	 * Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.SetBrushMaterial
	 */
	struct UWBP_GraidentIndicatorElement_C_SetBrushMaterial_Params
	{
	public:
		bool                                                       FuryEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.PlayHitEffect
	 */
	struct UWBP_GraidentIndicatorElement_C_PlayHitEffect_Params
	{
	public:
		bool                                                       FuryEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PB5T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.Construct
	 */
	struct UWBP_GraidentIndicatorElement_C_Construct_Params
	{	};

	/**
	 * Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.PreConstruct
	 */
	struct UWBP_GraidentIndicatorElement_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GraidentIndicatorElement.WBP_GraidentIndicatorElement_C.ExecuteUbergraph_WBP_GraidentIndicatorElement
	 */
	struct UWBP_GraidentIndicatorElement_C_ExecuteUbergraph_WBP_GraidentIndicatorElement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
