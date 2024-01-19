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
	 * Function TriggerSystem.TriggerAreaManager.GetTriggerAreaManager
	 */
	struct ATriggerAreaManager_GetTriggerAreaManager_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATriggerAreaManager*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerAreaManager.GetInteractorsInArea
	 */
	struct ATriggerAreaManager_GetInteractorsInArea_Params
	{
	public:
		class UTriggerShapeComponent*                              Area;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UTriggerInteractorComponent*>                 ReturnValue;                                             // 0x0010(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerAreaManager.GetInteractorCountInArea
	 */
	struct ATriggerAreaManager_GetInteractorCountInArea_Params
	{
	public:
		class UTriggerShapeComponent*                              Area;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerAreaManager.GetAreasForInteractor
	 */
	struct ATriggerAreaManager_GetAreasForInteractor_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UTriggerShapeComponent*>                      ReturnValue;                                             // 0x0008(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerAreaManager.GetAreaCountForInteractor
	 */
	struct ATriggerAreaManager_GetAreaCountForInteractor_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerAreaManager.GetActorsInArea
	 */
	struct ATriggerAreaManager_GetActorsInArea_Params
	{
	public:
		class UTriggerShapeComponent*                              Area;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      OutActors;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerAreaManager.GetActorCountInArea
	 */
	struct ATriggerAreaManager_GetActorCountInArea_Params
	{
	public:
		class UTriggerShapeComponent*                              Area;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerShapeActor.GetTriggerShapeComponent
	 */
	struct ATriggerShapeActor_GetTriggerShapeComponent_Params
	{
	public:
		class UTriggerShapeComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerShapeComponent.SetTriggerActive
	 */
	struct UTriggerShapeComponent_SetTriggerActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerShapeComponent.OnRep_IsShapeActive
	 */
	struct UTriggerShapeComponent_OnRep_IsShapeActive_Params
	{	};

	/**
	 * Function TriggerSystem.TriggerShapeComponent.IsTriggerActive
	 */
	struct UTriggerShapeComponent_IsTriggerActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerShapeComponent.GetNumberOfInteractorsInArea
	 */
	struct UTriggerShapeComponent_GetNumberOfInteractorsInArea_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerShapeComponent.GetActorsInShape
	 */
	struct UTriggerShapeComponent_GetActorsInShape_Params
	{
	public:
		TArray<class AActor*>                                      OutActors;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TriggerSystem.TriggerShapeNotifyConditionObject.PassesCondition
	 */
	struct UTriggerShapeNotifyConditionObject_PassesCondition_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
