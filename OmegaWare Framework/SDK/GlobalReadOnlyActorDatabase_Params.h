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
	 * Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetGlobalReadOnlyActorDatabaseManager
	 */
	struct AGlobalReadOnlyActorDatabaseRuntimeManager_GetGlobalReadOnlyActorDatabaseManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGlobalReadOnlyActorDatabaseRuntimeManager*          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetAllActorDataInLevel_BP
	 */
	struct AGlobalReadOnlyActorDatabaseRuntimeManager_GetAllActorDataInLevel_BP_Params
	{
	public:
		class FString                                              InMapPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<struct FSoftObjectPath, class UGlobalActorDatabaseDataContainer*> OutActorData;                                            // 0x0010(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetActorDataOfTypeInLevel_BP
	 */
	struct AGlobalReadOnlyActorDatabaseRuntimeManager_GetActorDataOfTypeInLevel_BP_Params
	{
	public:
		class FString                                              InMapURL;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              InClass;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<struct FSoftObjectPath, class UGlobalActorDatabaseData*> OutActorData;                                            // 0x0018(0x0050)  (ConstParm, Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetActorDataOfType_BP
	 */
	struct AGlobalReadOnlyActorDatabaseRuntimeManager_GetActorDataOfType_BP_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<struct FSoftObjectPath, class UGlobalActorDatabaseData*> OutActorData;                                            // 0x0008(0x0050)  (ConstParm, Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GlobalReadOnlyActorDatabase.GlobalReadOnlyActorDatabaseRuntimeManager.GetActorData_BP
	 */
	struct AGlobalReadOnlyActorDatabaseRuntimeManager_GetActorData_BP_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F9OT[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGlobalActorDatabaseDataContainer*                   ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
