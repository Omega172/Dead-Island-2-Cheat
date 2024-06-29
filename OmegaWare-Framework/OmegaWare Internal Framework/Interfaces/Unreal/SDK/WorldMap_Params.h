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
	 * Function WorldMap.WorldMapActor.RevealMeshesWithID
	 */
	struct AWorldMapActor_RevealMeshesWithID_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRevealedByLocalPlayer;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorldMap.WorldMapActor.IsMapVisible
	 */
	struct AWorldMapActor_IsMapVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorldMap.WorldMapActor.GetWorldMapActor
	 */
	struct AWorldMapActor_GetWorldMapActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AWorldMapActor*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorldMap.WorldMapActor.GetCameraFocusComponent
	 */
	struct AWorldMapActor_GetCameraFocusComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorldMap.WorldMapActor.GetCameraFocusBounds
	 */
	struct AWorldMapActor_GetCameraFocusBounds_Params
	{
	public:
		struct FBox                                                ReturnValue;                                             // 0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorldMap.WorldMapActor.GetCameraComponent
	 */
	struct AWorldMapActor_GetCameraComponent_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorldMap.WorldMapActor.ExitWorldMap
	 */
	struct AWorldMapActor_ExitWorldMap_Params
	{	};

	/**
	 * Function WorldMap.WorldMapActor.EnterWorldMap
	 */
	struct AWorldMapActor_EnterWorldMap_Params
	{	};

	/**
	 * Function WorldMap.WorldMapActor.CreateWorldMap
	 */
	struct AWorldMapActor_CreateWorldMap_Params
	{	};

	/**
	 * Function WorldMap.WorldMapActor.CleanWorldMap
	 */
	struct AWorldMapActor_CleanWorldMap_Params
	{	};

	/**
	 * Function WorldMap.WorldMapActor.BeginDestroyMap
	 */
	struct AWorldMapActor_BeginDestroyMap_Params
	{	};

	/**
	 * Function WorldMap.WorldMapActor.BeginCreatedMap
	 */
	struct AWorldMapActor_BeginCreatedMap_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
