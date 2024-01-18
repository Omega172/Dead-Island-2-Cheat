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
	 * Function InputMapper.InputMapperActionFilterDefinition.IsActionFiltered
	 */
	struct UInputMapperActionFilterDefinition_IsActionFiltered_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperActionFilterDefinition.GetFilterPriority
	 */
	struct UInputMapperActionFilterDefinition_GetFilterPriority_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperActionFilterInstance.IsEnabledWithReason
	 */
	struct UInputMapperActionFilterInstance_IsEnabledWithReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperActionFilterInstance.IsEnabled
	 */
	struct UInputMapperActionFilterInstance_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperActionFilterInstance.IsActive
	 */
	struct UInputMapperActionFilterInstance_IsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperActionFilterInstance.EnableFilter
	 */
	struct UInputMapperActionFilterInstance_EnableFilter_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperActionFilterInstance.DisableFilterAllReasons
	 */
	struct UInputMapperActionFilterInstance_DisableFilterAllReasons_Params
	{	};

	/**
	 * Function InputMapper.InputMapperActionFilterInstance.DisableFilter
	 */
	struct UInputMapperActionFilterInstance_DisableFilter_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperAction.GetFirstKeysForInputType
	 */
	struct UInputMapperAction_GetFirstKeysForInputType_Params
	{
	public:
		bool                                                       bGamePad;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OW2Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FActionGetKeysReply                                 ReturnValue;                                             // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperComponent.SwitchToActionOverrideConfig
	 */
	struct UInputMapperComponent_SwitchToActionOverrideConfig_Params
	{
	public:
		class UInputMapperActionOverrideConfig*                    Config;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperComponent.OnFilterChanged
	 */
	struct UInputMapperComponent_OnFilterChanged_Params
	{
	public:
		class UInputMapperActionFilterInstance*                    Filter;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperComponent.IsActionFiltered
	 */
	struct UInputMapperComponent_IsActionFiltered_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperComponent.GetKeysForAction
	 */
	struct UInputMapperComponent_GetKeysForAction_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGamePad;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6H2T[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FActionGetKeysReply                                 ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperComponent.GetAllKeysForAction
	 */
	struct UInputMapperComponent_GetAllKeysForAction_Params
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGamePad;                                                // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_45FX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FActionGetKeysReply>                         OutKeyReplies;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperComponent.GetActionInstance
	 */
	struct UInputMapperComponent_GetActionInstance_Params
	{
	public:
		class UInputMapperAction*                                  ActionData;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputMapperActionInstance*                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperComponent.GetActionFilter
	 */
	struct UInputMapperComponent_GetActionFilter_Params
	{
	public:
		class UInputMapperActionFilterDefinition*                  DataAsset;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputMapperActionFilterInstance*                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperComponent.EnableInputMapperForObject
	 */
	struct UInputMapperComponent_EnableInputMapperForObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputMapper.InputMapperComponent.DisableInputMapperForObject
	 */
	struct UInputMapperComponent_DisableInputMapperForObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
