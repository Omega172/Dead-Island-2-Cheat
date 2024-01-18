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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum InputMapper.EInputActionEventType
	 */
	enum class EInputActionEventType : uint8_t
	{
		Press   = 0,
		Release = 1,
		Hold    = 2,
		Always  = 3,
		Count   = 4,
		MAX     = 5
	};

	/**
	 * Enum InputMapper.EInputActionHoldEventType
	 */
	enum class EInputActionHoldEventType : uint8_t
	{
		Started   = 0,
		Update    = 1,
		Cancelled = 2,
		Triggered = 3,
		MAX       = 4
	};

	/**
	 * Enum InputMapper.EInputMapperActionFilterType
	 */
	enum class EInputMapperActionFilterType : uint8_t
	{
		AllowActions = 0,
		BlockActions = 1,
		MAX          = 2
	};

	/**
	 * Enum InputMapper.EInputMapperControllerType
	 */
	enum class EInputMapperControllerType : uint8_t
	{
		Generic   = 0,
		X360      = 1,
		XOne      = 2,
		XSX       = 3,
		PS4       = 4,
		PS5       = 5,
		Steam     = 6,
		Stadia    = 7,
		Switch    = 8,
		SwitchPro = 9,
		Max       = 10
	};

	/**
	 * Enum InputMapper.EInputMapperPreprocessControl
	 */
	enum class EInputMapperPreprocessControl : uint8_t
	{
		LeftThumbStick  = 0,
		RightThumbStick = 1,
		LeftTrigger     = 2,
		RightTrigger    = 3,
		Mouse           = 4,
		Max             = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InputMapper.InputMapperActionKeyProperties
	 * Size -> 0x00A8
	 */
	struct FInputMapperActionKeyProperties
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key2;                                                    // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PressWaitingTimeMultiKey;                                // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldTriggerDelay;                                        // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleasedWithinTime;                                      // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleasedAfterTime;                                       // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysNegative;                                         // 0x0040(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGD4[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EInputActionEventType, bool>                          EnabledEventTypes;                                       // 0x0048(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<bool>                                               EnabledEventTypesArray;                                  // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InputMapper.BlueprintInputMapperDelegateBinding
	 * Size -> 0x0018
	 */
	struct FBlueprintInputMapperDelegateBinding
	{
	public:
		bool                                                       bOverrideParentBinding : 1;                              // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDJN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMapperAction*                                  Action;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionNameToBind;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InputMapper.ActionGetKeysReply
	 * Size -> 0x0030
	 */
	struct FActionGetKeysReply
	{
	public:
		struct FKey                                                Key1;                                                    // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key2;                                                    // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
