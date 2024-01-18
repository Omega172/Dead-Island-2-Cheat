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
	 * Function ActorGrouping.ActorGroupFeederObject_Spatial.OnEndOverlap
	 */
	struct UActorGroupFeederObject_Spatial_OnEndOverlap_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupFeederObject_Spatial.OnBeginOverlap
	 */
	struct UActorGroupFeederObject_Spatial_OnBeginOverlap_Params
	{
	public:
		class UTriggerInteractorComponent*                         Interactor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupFilter.CanBeAdded
	 */
	struct UActorGroupFilter_CanBeAdded_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupOwnerComponent.RemoveListener
	 */
	struct UActorGroupOwnerComponent_RemoveListener_Params
	{
	public:
		class FScriptDelegate                                      ActorGroupCallback;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EActorGroupCallbackType                                    ActorGroupCallbackType;                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupOwnerComponent.RemoveAllListenersOfCallbackType
	 */
	struct UActorGroupOwnerComponent_RemoveAllListenersOfCallbackType_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EActorGroupCallbackType                                    ActorGroupCallbackType;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupOwnerComponent.RemoveAllListeners
	 */
	struct UActorGroupOwnerComponent_RemoveAllListeners_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupOwnerComponent.IsActorInGroup
	 */
	struct UActorGroupOwnerComponent_IsActorInGroup_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupOwnerComponent.GetNumberOfMembers
	 */
	struct UActorGroupOwnerComponent_GetNumberOfMembers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupOwnerComponent.DisbandGroup
	 */
	struct UActorGroupOwnerComponent_DisbandGroup_Params
	{	};

	/**
	 * Function ActorGrouping.ActorGroupOwnerComponent.ApplyToAllMembersDelegate
	 */
	struct UActorGroupOwnerComponent_ApplyToAllMembersDelegate_Params
	{
	public:
		class FScriptDelegate                                      ForEachMemberCallback;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupOwnerComponent.AddListener
	 */
	struct UActorGroupOwnerComponent_AddListener_Params
	{
	public:
		class FScriptDelegate                                      ActorGroupCallback;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EActorGroupCallbackType                                    ActorGroupCallbackType;                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorGroupOwnerComponent.AddGameEventStateResponse
	 */
	struct UActorGroupOwnerComponent_AddGameEventStateResponse_Params
	{
	public:
		class UGameEventStateResponse*                             StateResponse;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ActorGrouping.ActorSpatialGroupOwnerComponent.SetTriggerComponent
	 */
	struct UActorSpatialGroupOwnerComponent_SetTriggerComponent_Params
	{
	public:
		class UTriggerShapeComponent*                              InTriggerComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
