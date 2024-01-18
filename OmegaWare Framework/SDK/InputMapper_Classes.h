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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class InputMapper.InputMapper
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UInputMapper : public UObject
	{
	public:
		TArray<class UInputMapperAction*>                          ActionBindings;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UInputMapperActionOverrideConfig*>            ActionOverrideConfigs;                                   // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UInputMapperActionOverrideConfigGroup*>       ActionOverrideConfigGroups;                              // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UInputMapperActionFilterDefinition*>          ActionFilterDefinitions;                                 // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UInputMapperAxisPreprocess*>                  InputPreprocess;                                         // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UInputMapperPreprocessProfile*>               InputPreprocessProfiles;                                 // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O7TA[0x68];                                  // 0x0088(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperActionFilterPriorityGroup
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UInputMapperActionFilterPriorityGroup : public UDataAsset
	{
	public:
		int32_t                                                    Priority;                                                // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6J3Z[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperActionGroup
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UInputMapperActionGroup : public UDataAsset
	{
	public:
		TArray<class UInputMapperAction*>                          Actions;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperActionFilterDefinition
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UInputMapperActionFilterDefinition : public UDataAsset
	{
	public:
		class FName                                                FilterName;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputMapperActionFilterType                               FilterType;                                              // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K40F[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputMapperAction*>                          Actions;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UInputMapperActionGroup*>                     ActionGroups;                                            // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWPY[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMapperActionFilterPriorityGroup*               FilterPriorityGroup;                                     // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCallReleaseAllActionsWhenFiltered;                      // 0x0078(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8TR[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsActionFiltered(class UInputMapperAction* Action);
		int32_t GetFilterPriority();
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperActionFilterInstance
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UInputMapperActionFilterInstance : public UObject
	{
	public:
		TWeakObjectPtr<class UInputMapperActionFilterDefinition>   FilterDefinition;                                        // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGVO[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (PADDING)

	public:
		bool IsEnabledWithReason(const class FName& Reason);
		bool IsEnabled();
		bool IsActive();
		void EnableFilter(const class FName& Reason);
		void DisableFilterAllReasons();
		void DisableFilter(const class FName& Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperActionInstance
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UInputMapperActionInstance : public UObject
	{
	public:
		class FScriptMulticastDelegate                             HoldEventUpdates;                                        // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ActionFiltered;                                          // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THEN[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     QueuedRemoveActionBindings;                              // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UInputMapperActionOverride*                          ActionOverride;                                          // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRFB[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperActionOverride
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UInputMapperActionOverride : public UDataAsset
	{
	public:
		class UInputMapperAction*                                  Action;                                                  // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FInputMapperActionKeyProperties>             Keys;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperActionOverrideConfig
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UInputMapperActionOverrideConfig : public UDataAsset
	{
	public:
		class FName                                                ConfigName;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UInputMapperActionOverride*>                  OverridingActions;                                       // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberMouseActionsOverride;                           // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberGamepadActionsOverride;                         // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperActionOverrideConfigGroup
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UInputMapperActionOverrideConfigGroup : public UDataAsset
	{
	public:
		class FName                                                GroupName;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UInputMapperActionOverrideConfig*>            Configs;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperAction
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UInputMapperAction : public UDataAsset
	{
	public:
		class FName                                                ActionName;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FInputMapperActionKeyProperties>             Keys;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bCallReleaseWhenFiltered;                                // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDebugOnly;                                            // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYKB[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)

	public:
		struct FActionGetKeysReply GetFirstKeysForInputType(bool bGamePad);
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperComponent
	 * Size -> 0x00C8 (FullSize[0x01B0] - InheritedSize[0x00E8])
	 */
	class UInputMapperComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             SwitchedActionOverrideConfig;                            // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreProccessingActions;                                 // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostProccessingActions;                                // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<class UInputMapperActionInstance*>                  Actions;                                                 // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UInputMapperActionFilterInstance*>            InputMapperFilters;                                      // 0x0128(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UInputMapperActionFilterInstance*>            ActiveInputMapperFilters;                                // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKR9[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputMapperActionInstance*>                  FrameModifiedActions;                                    // 0x0158(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UInputMapperActionInstance*>                  ActionsRequiringRelease;                                 // 0x0168(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UInputMapperActionOverrideConfig*                    SwitchToOverrideConfigNextFrame;                         // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CYYE[0x18];                                  // 0x0180(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMapperActionOverrideConfig*                    CurrentOverrideConfig;                                   // 0x0198(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V0RV[0x10];                                  // 0x01A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SwitchToActionOverrideConfig(class UInputMapperActionOverrideConfig* Config);
		void OnFilterChanged(class UInputMapperActionFilterInstance* Filter);
		bool IsActionFiltered(class UInputMapperAction* Action);
		struct FActionGetKeysReply GetKeysForAction(class UInputMapperAction* Action, bool bGamePad);
		bool GetAllKeysForAction(class UInputMapperAction* Action, bool bGamePad, TArray<struct FActionGetKeysReply>* OutKeyReplies);
		class UInputMapperActionInstance* GetActionInstance(class UInputMapperAction* ActionData);
		class UInputMapperActionFilterInstance* GetActionFilter(class UInputMapperActionFilterDefinition* DataAsset);
		void EnableInputMapperForObject(class UObject* Object);
		void DisableInputMapperForObject(class UObject* Object);
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputMapperDelegateBinding : public UDynamicBlueprintBinding
	{
	public:
		TArray<struct FBlueprintInputMapperDelegateBinding>        InputActionDelegateBindings;                             // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperAxisPreprocess
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UInputMapperAxisPreprocess : public UDataAsset
	{
	public:
		EInputMapperPreprocessControl                              InputID;                                                 // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HQ5[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InnerDeadZone;                                           // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterDeadZone;                                           // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PressThreshold;                                          // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         RemappingCurve;                                          // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularDeadZoneAngle;                                    // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemapAngularDeadZones;                                  // 0x004C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplySmoothing;                                         // 0x004D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WI0R[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingStrength;                                       // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5KP[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InputMapper.InputMapperPreprocessProfile
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UInputMapperPreprocessProfile : public UDataAsset
	{
	public:
		class FName                                                Context;                                                 // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputMapperControllerType                                 ControllerType;                                          // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NEW[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMapperAxisPreprocess*                          LeftThumbstickAxisPreprocess;                            // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputMapperAxisPreprocess*                          RightThumbStickAxisPreprocess;                           // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputMapperAxisPreprocess*                          LeftTriggerAxisPreprocess;                               // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputMapperAxisPreprocess*                          RightTriggerAxisPreprocess;                              // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
