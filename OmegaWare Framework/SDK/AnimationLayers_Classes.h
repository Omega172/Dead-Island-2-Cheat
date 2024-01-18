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
	 * Class AnimationLayers.AnimationLayer
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAnimationLayer : public UDataAsset
	{
	public:
		class FName                                                LayerName;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULayerWeightProvider*                                BaseLayerWeightProvider;                                 // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULinearBlendLayerWeightProvider*                     OverrideDefaultEnableLayerWeightProvider;                // 0x0040(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULinearBlendLayerWeightProvider*                     OverrideDefaultDisableLayerWeightProvider;               // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationLayers.AnimationLayerComponent
	 * Size -> 0x0238 (FullSize[0x0320] - InheritedSize[0x00E8])
	 */
	class UAnimationLayerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_EVI2[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNamedPriorityConfig*                                RequestPriorities;                                       // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UAnimationLayer*>                             LayerDefinitions;                                        // 0x0100(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class FName                                                BaselineRequestReason;                                   // 0x0110(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULinearBlendLayerWeightProvider*                     DefaultEnableLayerWeightProvider;                        // 0x0118(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULinearBlendLayerWeightProvider*                     DefaultDisableLayerWeightProvider;                       // 0x0120(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, class UAnimationLayer*>                  LayerNameMap;                                            // 0x0128(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class UAnimationLayer*, struct FLayerState>           LayerStates;                                             // 0x0178(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FGuid, class UAnimationLayer*>                 LayerRequests;                                           // 0x01C8(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FGuid, struct FLayerGroupRequest>              LayerGroupRequests;                                      // 0x0218(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              LayersToProcess[0x50];                                   // 0x0268(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_DTZZ[0x18];                                  // 0x02B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UAnimationLayer*, float>                        CachedLayerWeights;                                      // 0x02D0(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		void RemoveLayerRequest(const struct FGuid& RequestId);
		void RemoveLayerGroupRequest(const struct FGuid& RequestId);
		struct FGuid AddLayerProviderRequest(class UAnimationLayer* Layer, const class FName& Reason, class ULayerWeightProvider* Provider);
		struct FGuid AddLayerGroupProviderRequest(class UAnimationLayerGroup* LayerGroup, const class FName& Reason, class ULayerWeightProvider* Provider);
		struct FGuid AddLayerGroupEnableRequest(class UAnimationLayerGroup* LayerGroup, const class FName& Reason, float OverrideTransitionTime);
		struct FGuid AddLayerGroupDisableRequest(class UAnimationLayerGroup* LayerGroup, const class FName& Reason, float OverrideTransitionTime);
		struct FGuid AddLayerEnableRequest(class UAnimationLayer* Layer, const class FName& Reason, float OverrideTransitionTime);
		struct FGuid AddLayerDisableRequest(class UAnimationLayer* Layer, const class FName& Reason, float OverrideTransitionTime);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationLayers.AnimationLayerGroup
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAnimationLayerGroup : public UDataAsset
	{
	public:
		TArray<class UAnimationLayerGroup*>                        LayerGroups;                                             // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UAnimationLayer*>                             Layers;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationLayers.AnimNotifyState_AnimLayerBase
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_AnimLayerBase : public UAnimNotifyState
	{
	public:
		EAnimLayerRequestType                                      RequestType;                                             // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPGS[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationLayer*                                     Layer;                                                   // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RequestReason;                                           // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideTransitionTime;                                  // 0x0048(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7P4Q[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULayerWeightProvider*                                Provider;                                                // 0x0050(0x0008) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VX7I[0x50];                                  // 0x0058(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationLayers.AnimNotifyState_AnimLayerGroupBase
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_AnimLayerGroupBase : public UAnimNotifyState
	{
	public:
		EAnimLayerRequestType                                      RequestType;                                             // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBB8[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationLayerGroup*                                LayerGroup;                                              // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RequestReason;                                           // 0x0040(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideTransitionTime;                                  // 0x0048(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAAN[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULayerWeightProvider*                                Provider;                                                // 0x0050(0x0008) Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4OV[0x50];                                  // 0x0058(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationLayers.LayeredAnimInstanceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULayeredAnimInstanceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationLayers.LayerWeightProvider
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULayerWeightProvider : public UObject
	{
	public:
		unsigned char                                              UnknownData_4RUR[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationLayers.LinearBlendLayerWeightProvider
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULinearBlendLayerWeightProvider : public ULayerWeightProvider
	{
	public:
		float                                                      DesiredLayerWeight;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransitionTime;                                          // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InverseTransitionTime;                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W3QD[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetTransitionTime(float InTransitionTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
