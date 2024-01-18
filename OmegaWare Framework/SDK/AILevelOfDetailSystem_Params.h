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
	 * Function AILevelOfDetailSystem.AILevelOfDetailComponent.UnlockLevel
	 */
	struct UAILevelOfDetailComponent_UnlockLevel_Params
	{
	public:
		class UAILevelOfDetailCategoryDefinition*                  CategoryDefinition;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AILevelOfDetailSystem.AILevelOfDetailComponent.LockToLevel
	 */
	struct UAILevelOfDetailComponent_LockToLevel_Params
	{
	public:
		class UAILevelOfDetailCategoryDefinition*                  CategoryDefinition;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AILevelOfDetailSystem.AILevelOfDetailComponent.LockLevel
	 */
	struct UAILevelOfDetailComponent_LockLevel_Params
	{
	public:
		class UAILevelOfDetailCategoryDefinition*                  CategoryDefinition;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AILevelOfDetailSystem.AILevelOfDetailComponent.GetController
	 */
	struct UAILevelOfDetailComponent_GetController_Params
	{
	public:
		class AController*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AILevelOfDetailSystem.AILevelOfDetailComponent.GetCharacter
	 */
	struct UAILevelOfDetailComponent_GetCharacter_Params
	{
	public:
		class ACharacter*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AILevelOfDetailSystem.AILevelOfDetailFeature_BP.InitializeComparisonName
	 */
	struct UAILevelOfDetailFeature_BP_InitializeComparisonName_Params
	{
	public:
		class FString                                              ResultComparisonName;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AILevelOfDetailSystem.AILevelOfDetailFeature_BP.EnableFor
	 */
	struct UAILevelOfDetailFeature_BP_EnableFor_Params
	{
	public:
		class UAILevelOfDetailComponent*                           Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAILevelOfDetailError                                      Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AILevelOfDetailSystem.AILevelOfDetailFeature_BP.DisableFor
	 */
	struct UAILevelOfDetailFeature_BP_DisableFor_Params
	{
	public:
		class UAILevelOfDetailComponent*                           Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAILevelOfDetailError                                      Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
