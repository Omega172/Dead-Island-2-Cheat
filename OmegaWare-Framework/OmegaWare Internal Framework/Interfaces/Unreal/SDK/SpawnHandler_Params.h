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
	 * Function SpawnHandler.SpawnHandlerLibrary.RequestSpawn
	 */
	struct USpawnHandlerLibrary_RequestSpawn_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GZQT[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSpawnParams                                        SpawnParams;                                             // 0x0018(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SpawnCallback;                                           // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SpawnHandler.SpawnHandlerLibrary.RequestBatchSpawn
	 */
	struct USpawnHandlerLibrary_RequestBatchSpawn_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FBatchSpawnRequestItem>                      SpawnsAndParams;                                         // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SpawnCallback;                                           // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
