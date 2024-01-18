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
	 * Class TriggerSystem.TriggerAreaManager
	 * Size -> 0x01C0 (FullSize[0x0470] - InheritedSize[0x02B0])
	 */
	class ATriggerAreaManager : public AInfo
	{
	public:
		class FScriptMulticastDelegate                             OnInteractorEnteredArea;                                 // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInteractorLeftArea;                                    // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BBN[0x1A0];                                 // 0x02D0(0x01A0) MISSED OFFSET (PADDING)

	public:
		class ATriggerAreaManager* GetTriggerAreaManager(class UObject* WorldContextObject);
		TArray<class UTriggerInteractorComponent*> GetInteractorsInArea(class UTriggerShapeComponent* Area, class UClass* Class);
		int32_t GetInteractorCountInArea(class UTriggerShapeComponent* Area, class UClass* Class);
		TArray<class UTriggerShapeComponent*> GetAreasForInteractor(class UTriggerInteractorComponent* Interactor);
		int32_t GetAreaCountForInteractor(class UTriggerInteractorComponent* Interactor);
		void GetActorsInArea(class UTriggerShapeComponent* Area, class UClass* Class, TArray<class AActor*>* OutActors);
		int32_t GetActorCountInArea(class UTriggerShapeComponent* Area, class UClass* Class);
		static UClass* StaticClass();
	};

	/**
	 * Class TriggerSystem.TriggerInteractorComponent
	 * Size -> 0x0038 (FullSize[0x0560] - InheritedSize[0x0528])
	 */
	class UTriggerInteractorComponent : public UPrimitiveComponent
	{
	public:
		class FScriptMulticastDelegate                             OnEnteredTriggerArea;                                    // 0x0528(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeftTriggerArea;                                       // 0x0538(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      UpdateDelta;                                             // 0x0548(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTOM[0x14];                                  // 0x054C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TriggerSystem.TriggerShapeActor
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class ATriggerShapeActor : public AAreaShapeActor
	{
	public:
		class UTriggerShapeComponent*                              TriggerShapeComponent;                                   // 0x02B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UTriggerShapeComponent* GetTriggerShapeComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class TriggerSystem.TriggerShapeComponent
	 * Size -> 0x0078 (FullSize[0x0610] - InheritedSize[0x0598])
	 */
	class UTriggerShapeComponent : public UAreaShapeComponent
	{
	public:
		class FScriptMulticastDelegate                             OnInteractorEnteredArea;                                 // 0x0598(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInteractorLeftArea;                                    // 0x05A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              NotifyFilter;                                            // 0x05B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTriggerShapeNotifyConditionObject*                  NotifyCondition;                                         // 0x05C0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETriggerShapeNetworkingRule                                NetworkingRule;                                          // 0x05C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartActive;                                            // 0x05C9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeDisabled;                                          // 0x05CA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_918I[0x3D];                                  // 0x05CB(0x003D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsShapeActive;                                          // 0x0608(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SRKQ[0x7];                                   // 0x0609(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetTriggerActive(bool bActive);
		void OnRep_IsShapeActive();
		bool IsTriggerActive();
		int32_t GetNumberOfInteractorsInArea();
		void GetActorsInShape(TArray<class AActor*>* OutActors);
		static UClass* StaticClass();
	};

	/**
	 * Class TriggerSystem.TriggerShapeNotifyConditionObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTriggerShapeNotifyConditionObject : public UObject
	{
	public:
		bool PassesCondition(class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
