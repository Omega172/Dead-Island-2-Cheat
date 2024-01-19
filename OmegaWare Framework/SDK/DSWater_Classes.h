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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DSWater.DSWaterBodyComponent
	 * Size -> 0x0808 (FullSize[0x0DF0] - InheritedSize[0x05E8])
	 */
	class UDSWaterBodyComponent : public UStaticMeshComponent
	{
	public:
		class UPhysicalMaterial*                                   WaterPhysicalMaterial;                                   // 0x05E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BuoyancyCollisionProfile;                                // 0x05F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterMaskContainer                                CollisionFilterMaskType;                                 // 0x05F8(0x0001) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFilterMaskContainer                                CollisionFilterMaskIgnore;                               // 0x05F9(0x0001) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableBuoyancy;                                         // 0x05FA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateSceneProxy;                                       // 0x05FB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RenderMeshAdditionalOffset;                              // 0x05FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostProcessAdditionalOffset;                             // 0x0600(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NS7X[0x4];                                   // 0x0604(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  UnderwaterPostProcessMaterial;                           // 0x0608(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDSUnderwaterPostProcessSettings                    UnderwaterPostProcessSettings;                           // 0x0610(0x07B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62C8[0x10];                                  // 0x0DC0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCollidableAreaShapeComponent*                       AreaComp;                                                // 0x0DD0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FVector2D>                                   VolumeTriangles;                                         // 0x0DD8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z2CF[0x8];                                   // 0x0DE8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetLinkedAreaComponent(class UAreaShapeComponent* CompIn);
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		class UAreaShapeComponent* GetLinkedAreaComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class DSWater.DSWaterBuoyancyComponent
	 * Size -> 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
	 */
	class UDSWaterBuoyancyComponent : public UActorComponent
	{
	public:
		bool                                                       bAutoAddRootPrimitive;                                   // 0x00E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyBuoyancyToMultipleComponents;                      // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HL04[0x2];                                   // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ManuallyTrackRadgollRoot;                                // 0x00EC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K51O[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDSBuoyancyData                                     BuoyancyData;                                            // 0x00F8(0x0030) Edit, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnteredWaterDelegate;                                  // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitedWaterDelegate;                                   // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 SimulatingComponent;                                     // 0x0148(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPrimitiveComponent*>                         AdditionalComponents;                                    // 0x0150(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AEAA[0x18];                                  // 0x0160(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSWaterBodyComponent*                               WaterBody;                                               // 0x0178(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ImmersedDepth;                                           // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1GY2[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSimulatingPrimitive(class UPrimitiveComponent* PrimComp);
		float GetImmersedDepth();
		static UClass* StaticClass();
	};

	/**
	 * Class DSWater.DSWaterBuoyancyManager
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class UDSWaterBuoyancyManager : public UObject
	{
	public:
		class UDSWaterSubsystem*                                   OwnerSubSystem;                                          // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRNN[0xB8];                                  // 0x0030(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicsSettings*                                    PhysicsSettings;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GC6A[0x90];                                  // 0x00F0(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSWater.DSWaterSubsystemSettings
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UDSWaterSubsystemSettings : public UDataAsset
	{
	public:
		struct FDSWaterBuoyancySettings                            Buoyancy;                                                // 0x0030(0x0058) Edit, NativeAccessSpecifierPublic
		int32_t                                                    SimTargetSize;                                           // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NormalsTargetSize;                                       // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoundsSize;                                              // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TravelSpeed;                                             // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Dampening;                                               // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecenterDistance;                                        // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulationFrameRate;                                     // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTieSimToFPS;                                            // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCenterOnPlayerPawn;                                     // 0x00A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECN7[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSWater.DSWaterSubsystem
	 * Size -> 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
	 */
	class UDSWaterSubsystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_8ILV[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCameraUnderwaterStateChanged;                          // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UDSWaterSubsystemSettings*                           SubSystemSettings;                                       // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIVB[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BoundsTopLeft;                                           // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextureRenderTarget2D*                              NormalsTarget;                                           // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IVVM[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            HeightSimInst;                                           // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            ManualSplatInst;                                         // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            VolumeApplyInst;                                         // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            ComputeNormalInst;                                       // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  ClearTargetInst;                                         // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDSWaterSimTarget>                           SimTargets;                                              // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UTextureRenderTarget2D*                              VolumeTarget;                                            // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture2D*                                          CircleGradientTex;                                       // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialParameterCollection*                        MaterialParams;                                          // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T4PL[0x60];                                  // 0x00C8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDSWaterBuoyancyManager*                             BuoyancyManager;                                         // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T9NO[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsUnderwaterPostProcessEnabled();
		float GetCameraUnderwaterDepth();
		void ApplyForceAtLocation(float Strength, float SizePercent, const struct FVector& HitLocation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
