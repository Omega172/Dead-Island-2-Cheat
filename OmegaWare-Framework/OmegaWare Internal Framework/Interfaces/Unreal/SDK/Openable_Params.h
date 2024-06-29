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
	 * Function Openable.OpenableComponent.SetOverrideSpeedModifier
	 */
	struct UOpenableComponent_SetOverrideSpeedModifier_Params
	{
	public:
		float                                                      NewSpeedModifier;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.SetControlObject
	 */
	struct UOpenableComponent_SetControlObject_Params
	{
	public:
		class UOpenableControlObject*                              Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.SetAssetCollection
	 */
	struct UOpenableComponent_SetAssetCollection_Params
	{
	public:
		struct FOpenableDataAssetCollection                        InAssetCollection;                                       // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.RequestOpen
	 */
	struct UOpenableComponent_RequestOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.RequestClose
	 */
	struct UOpenableComponent_RequestClose_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.RemoveDisableOpenReason
	 */
	struct UOpenableComponent_RemoveDisableOpenReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.RemoveControlObject
	 */
	struct UOpenableComponent_RemoveControlObject_Params
	{
	public:
		class UOpenableControlObject*                              Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.OnEndAction
	 */
	struct UOpenableComponent_OnEndAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterActionEndedReason                                Reason;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.OnBlockMessageStateChanged
	 */
	struct UOpenableComponent_OnBlockMessageStateChanged_Params
	{
	public:
		bool                                                       bIsBlocked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.OnBeginAction
	 */
	struct UOpenableComponent_OnBeginAction_Params
	{
	public:
		struct FGuid                                               RequestId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ActionType;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.GetCurrentState
	 */
	struct UOpenableComponent_GetCurrentState_Params
	{
	public:
		EOpenableState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableComponent.AddDisableOpenReason
	 */
	struct UOpenableComponent_AddDisableOpenReason_Params
	{
	public:
		class FName                                                Reason;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableControlObject.RequestOpen
	 */
	struct UOpenableControlObject_RequestOpen_Params
	{	};

	/**
	 * Function Openable.OpenableControlObject.RequestClosed
	 */
	struct UOpenableControlObject_RequestClosed_Params
	{	};

	/**
	 * Function Openable.OpenableControlObject.OnOpenRequested
	 */
	struct UOpenableControlObject_OnOpenRequested_Params
	{	};

	/**
	 * Function Openable.OpenableControlObject.OnCloseRequested
	 */
	struct UOpenableControlObject_OnCloseRequested_Params
	{	};

	/**
	 * Function Openable.OpenableObject.StopMovement
	 */
	struct UOpenableObject_StopMovement_Params
	{	};

	/**
	 * Function Openable.OpenableObject.StartMovement
	 */
	struct UOpenableObject_StartMovement_Params
	{	};

	/**
	 * Function Openable.OpenableObject.Start
	 */
	struct UOpenableObject_Start_Params
	{
	public:
		class AActor*                                              InOwnerActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      InOpenableObjectCallback;                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.RequestInformWhenPercentageThroughMovement
	 */
	struct UOpenableObject_RequestInformWhenPercentageThroughMovement_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<float>                                              PercentagesThrough;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.RequestInformWhenPercentageRemainingMovement
	 */
	struct UOpenableObject_RequestInformWhenPercentageRemainingMovement_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<float>                                              PercentagesRemaining;                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.RemoveAllCallbacks
	 */
	struct UOpenableObject_RemoveAllCallbacks_Params
	{	};

	/**
	 * Function Openable.OpenableObject.OnRemoveAllCallbacks
	 */
	struct UOpenableObject_OnRemoveAllCallbacks_Params
	{	};

	/**
	 * Function Openable.OpenableObject.OnInformWhenPercentageThroughMovement
	 */
	struct UOpenableObject_OnInformWhenPercentageThroughMovement_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<float>                                              PercentagesThrough;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.OnInformWhenPercentageRemainingMovement
	 */
	struct UOpenableObject_OnInformWhenPercentageRemainingMovement_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<float>                                              PercentagesRemaining;                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.OnGetPercentageThroughMovement
	 */
	struct UOpenableObject_OnGetPercentageThroughMovement_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.OnGetPercentageRemainingMovement
	 */
	struct UOpenableObject_OnGetPercentageRemainingMovement_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.InformMovementFinished
	 */
	struct UOpenableObject_InformMovementFinished_Params
	{	};

	/**
	 * Function Openable.OpenableObject.GetPercentageThroughMovement
	 */
	struct UOpenableObject_GetPercentageThroughMovement_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.GetPercentageRemainingMovement
	 */
	struct UOpenableObject_GetPercentageRemainingMovement_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.GetOwningActor
	 */
	struct UOpenableObject_GetOwningActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObject.ForceStop
	 */
	struct UOpenableObject_ForceStop_Params
	{	};

	/**
	 * Function Openable.OpenableObjectAction.RequestInformWhenPercentageThroughMovement
	 */
	struct UOpenableObjectAction_RequestInformWhenPercentageThroughMovement_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<float>                                              PercentagesThrough;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObjectAction.RequestInformWhenPercentageRemainingMovement
	 */
	struct UOpenableObjectAction_RequestInformWhenPercentageRemainingMovement_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<float>                                              PercentagesRemaining;                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObjectAction.RemoveAllCallbacks
	 */
	struct UOpenableObjectAction_RemoveAllCallbacks_Params
	{	};

	/**
	 * Function Openable.OpenableObjectAction.OnOpenableObjectMovementComponent
	 */
	struct UOpenableObjectAction_OnOpenableObjectMovementComponent_Params
	{	};

	/**
	 * Function Openable.OpenableObjectAction.GetPercentageThroughMovement
	 */
	struct UOpenableObjectAction_GetPercentageThroughMovement_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Openable.OpenableObjectAction.GetPercentageRemainingMovement
	 */
	struct UOpenableObjectAction_GetPercentageRemainingMovement_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
