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
	 * Function GameEvent.BaseGameEvent.Setup
	 */
	struct UBaseGameEvent_Setup_Params
	{
	public:
		class AActor*                                              InOwningActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.BaseGameEvent.GatherBlueprintLinks
	 */
	struct UBaseGameEvent_GatherBlueprintLinks_Params
	{
	public:
		TArray<class AActor*>                                      ActorsToPointTo;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.BaseGameEventResponse.GetOwningActor
	 */
	struct UBaseGameEventResponse_GetOwningActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.BaseGameEventResponse.GetLinkedActors
	 */
	struct UBaseGameEventResponse_GetLinkedActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.BaseGameEventResponse.GetDebugText
	 */
	struct UBaseGameEventResponse_GetDebugText_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEvent.RemoveResponse
	 */
	struct UGameEvent_RemoveResponse_Params
	{
	public:
		class UGameEventResponse*                                  GameEventResponse;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEvent.Execute
	 */
	struct UGameEvent_Execute_Params
	{
	public:
		class AActor*                                              ContextualActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEvent.AddResponse
	 */
	struct UGameEvent_AddResponse_Params
	{
	public:
		class UGameEventResponse*                                  GameEventResponse;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventFunctionLibrary.HasTag
	 */
	struct UGameEventFunctionLibrary_HasTag_Params
	{
	public:
		class UBaseGameEventResponse*                              Response;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameEventTags                                             Tag;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventFunctionLibrary.AddGameEventStateResponse
	 */
	struct UGameEventFunctionLibrary_AddGameEventStateResponse_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OwningActor;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameEventState*                                     GameEventState;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameEventStateResponse*                             Response;                                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventFunctionLibrary.AddGameEventResponse
	 */
	struct UGameEventFunctionLibrary_AddGameEventResponse_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OwningActor;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameEvent*                                          GameEvent;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameEventResponse*                                  Response;                                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventResponse.Execute
	 */
	struct UGameEventResponse_Execute_Params
	{
	public:
		class AActor*                                              ContextualActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventState.StateEnd
	 */
	struct UGameEventState_StateEnd_Params
	{	};

	/**
	 * Function GameEvent.GameEventState.StateBegin
	 */
	struct UGameEventState_StateBegin_Params
	{
	public:
		class AActor*                                              ContextualActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventState.RemoveStateResponse
	 */
	struct UGameEventState_RemoveStateResponse_Params
	{
	public:
		class UGameEventStateResponse*                             GameEventStateResponse;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventState.OnEndPlay
	 */
	struct UGameEventState_OnEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventState.AddStateResponse
	 */
	struct UGameEventState_AddStateResponse_Params
	{
	public:
		class UGameEventStateResponse*                             GameEventStateResponse;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventStateResponse.StateEnd
	 */
	struct UGameEventStateResponse_StateEnd_Params
	{
	public:
		class AActor*                                              ContextualActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.GameEventStateResponse.StateBegin
	 */
	struct UGameEventStateResponse_StateBegin_Params
	{
	public:
		class AActor*                                              ContextualActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.MultiActorGameEventStateHandler.StateEnd
	 */
	struct UMultiActorGameEventStateHandler_StateEnd_Params
	{
	public:
		class AActor*                                              ContextualActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.MultiActorGameEventStateHandler.StateBegin
	 */
	struct UMultiActorGameEventStateHandler_StateBegin_Params
	{
	public:
		class AActor*                                              ContextualActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.MultiActorGameEventStateHandler.Setup
	 */
	struct UMultiActorGameEventStateHandler_Setup_Params
	{
	public:
		class UGameEventState*                                     State;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Owner;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameEvent.MultiActorGameEventStateHandler.EndAllStates
	 */
	struct UMultiActorGameEventStateHandler_EndAllStates_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
