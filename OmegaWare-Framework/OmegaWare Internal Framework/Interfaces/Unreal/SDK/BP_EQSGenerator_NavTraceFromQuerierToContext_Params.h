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
	 * Function BP_EQSGenerator_NavTraceFromQuerierToContext.BP_EQSGenerator_NavTraceFromQuerierToContext_C.ProjectPoint
	 */
	struct UBP_EQSGenerator_NavTraceFromQuerierToContext_C_ProjectPoint_Params
	{
	public:
		struct FVector                                             PointToProject;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ULQI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADIAIController*                                     Controller;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4WWC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ProjectedLocation;                                       // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EQSGenerator_NavTraceFromQuerierToContext.BP_EQSGenerator_NavTraceFromQuerierToContext_C.DoItemGeneration
	 */
	struct UBP_EQSGenerator_NavTraceFromQuerierToContext_C_DoItemGeneration_Params
	{
	public:
		TArray<struct FVector>                                     ContextLocations;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
