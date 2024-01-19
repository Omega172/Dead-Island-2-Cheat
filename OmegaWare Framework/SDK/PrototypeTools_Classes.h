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
	 * Class PrototypeTools.PrototypeAreaActor
	 * Size -> 0x0040 (FullSize[0x0388] - InheritedSize[0x0348])
	 */
	class APrototypeAreaActor : public AScopedKnowledgeBaseExpressionActor
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPrototypeComponent*                                 PrototypeComponent;                                      // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTriggerShapeComponent*                              PrototypeAreaShapeComponent;                             // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlueprintLinks*                                     BlueprintLinks;                                          // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R20U[0x10];                                  // 0x0368(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrototypeAreaUIWidget*                              AreaWidget;                                              // 0x0378(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              AreaWidgetClass;                                         // 0x0380(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnEndOverlap(class UTriggerInteractorComponent* Interactor);
		void OnBeginOverlap(class UTriggerInteractorComponent* Interactor);
		static UClass* StaticClass();
	};

	/**
	 * Class PrototypeTools.PrototypeAreaUIWidget
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UPrototypeAreaUIWidget : public UUserWidget
	{
	public:
		class UTextBlock*                                          AreaText;                                                // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrototypeTools.PrototypeComponent
	 * Size -> 0x0098 (FullSize[0x0680] - InheritedSize[0x05E8])
	 */
	class UPrototypeComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_E3FU[0x8];                                   // 0x05E8(0x0008) Fix Super Size
		bool                                                       bVisualAutoScaling;                                      // 0x05F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseDefaultVisuals;                                      // 0x05F1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GWK1[0x6];                                   // 0x05F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PrototypeClassInfo;                                      // 0x05F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              PrototypeInstanceInfo;                                   // 0x0608(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FPrototypeComponent_ReferencedActorInfo>     ActorsPartOfSetup;                                       // 0x0618(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BFB7[0x58];                                  // 0x0628(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrototypeTools.PrototypeObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrototypeObject : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PrototypeTools.PrototypeToolsManager
	 * Size -> 0x0078 (FullSize[0x0328] - InheritedSize[0x02B0])
	 */
	class APrototypeToolsManager : public AInfo
	{
	public:
		TArray<class UPrototypeComponent*>                         RegisteredPrototypeComponents;                           // 0x02B0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UClass*, uint32_t>                              NumComponentsPerClass;                                   // 0x02C0(0x0050) Transient, NativeAccessSpecifierPrivate
		uint32_t                                                   PrototypeInstanceNumWarningThreshold;                    // 0x0310(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VGWX[0x14];                                  // 0x0314(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
