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
	 * Function Autoplay.AutoplayBeginCrouchEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayBeginCrouchEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayEndCrouchEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayEndCrouchEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayIdleEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayIdleEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      IdleTime;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayIncludeScriptEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayIncludeScriptEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class FString                                              ScriptToInclude;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayInteractPressedEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayInteractPressedEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InteractActor;                                           // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InteractLoc;                                             // 0x0010(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InputActionName;                                         // 0x001C(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayJumpEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayJumpEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayKickEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayKickEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayLedgeGrabbedEvent.ConstructAndSubmitWithJumpData_FromBlueprint
	 */
	struct UAutoplayLedgeGrabbedEvent_ConstructAndSubmitWithJumpData_FromBlueprint_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LedgeAnchorLoc;                                          // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             JumpLocation;                                            // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ViewRotation;                                            // 0x0020(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayLedgeGrabbedEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayLedgeGrabbedEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LedgeAnchorLoc;                                          // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayManager.Get
	 */
	struct UAutoplayManager_Get_Params
	{
	public:
		class UAutoplayManager*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayNavWaypointDroppedEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayNavWaypointDroppedEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayWaitForClientDisconnectEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayWaitForClientDisconnectEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		float                                                      Timeout;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayWaitForPlayersEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayWaitForPlayersEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		int32_t                                                    RequiredNumberOfPlayers;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.AutoplayWaypointDroppedEvent.ConstructAndSubmit_FromBlueprint
	 */
	struct UAutoplayWaypointDroppedEvent_ConstructAndSubmit_FromBlueprint_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Autoplay.TransitionWaitForLoadGoal.OnReadyToEnterWorld
	 */
	struct UTransitionWaitForLoadGoal_OnReadyToEnterWorld_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
