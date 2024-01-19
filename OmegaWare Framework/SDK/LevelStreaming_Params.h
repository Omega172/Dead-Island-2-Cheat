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
	 * DelegateFunction LevelStreaming.LevelStreamingComponent.StreamingSetEvent__DelegateSignature
	 */
	struct ULevelStreamingComponent_StreamingSetEvent__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelStreaming.LevelStreamingComponent.SetStreamingEnabled
	 */
	struct ULevelStreamingComponent_SetStreamingEnabled_Params
	{
	public:
		EEnabledState                                              State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelStreaming.LevelStreamingComponent.OnRep_LevelStreamingState
	 */
	struct ULevelStreamingComponent_OnRep_LevelStreamingState_Params
	{	};

	/**
	 * Function LevelStreaming.LevelStreamingComponent.AreAllLevelsUnloaded
	 */
	struct ULevelStreamingComponent_AreAllLevelsUnloaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelStreaming.LevelStreamingComponent.AreAllLevelsShown
	 */
	struct ULevelStreamingComponent_AreAllLevelsShown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelStreaming.LevelStreamingComponent.AreAllLevelsLoaded
	 */
	struct ULevelStreamingComponent_AreAllLevelsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LevelStreaming.LevelStreamingComponent.AllLevelsEvent__DelegateSignature
	 */
	struct ULevelStreamingComponent_AllLevelsEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LevelStreaming.LevelStreamingElement.NotifyLevelUnloaded
	 */
	struct ULevelStreamingElement_NotifyLevelUnloaded_Params
	{	};

	/**
	 * Function LevelStreaming.LevelStreamingElement.NotifyLevelShown
	 */
	struct ULevelStreamingElement_NotifyLevelShown_Params
	{	};

	/**
	 * Function LevelStreaming.LevelStreamingElement.NotifyLevelLoaded
	 */
	struct ULevelStreamingElement_NotifyLevelLoaded_Params
	{	};

	/**
	 * Function LevelStreaming.LevelStreamingElement.NotifyLevelHidden
	 */
	struct ULevelStreamingElement_NotifyLevelHidden_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
