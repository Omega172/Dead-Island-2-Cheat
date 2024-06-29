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
	 * Class Gateway.AirlockActor
	 * Size -> 0x00C0 (FullSize[0x0370] - InheritedSize[0x02B0])
	 */
	class AAirlockActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_SOO1[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FAirlockActorData>                NamedGatewayData;                                        // 0x02B8(0x0050) Edit, DisableEditOnTemplate, NativeAccessSpecifierPrivate
		class UGameEventState*                                     WhilstAirlockChangeInProgress;                           // 0x0308(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, class UGatewayComponent*>                ActiveGateways;                                          // 0x0310(0x0050) ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CKEW[0x10];                                  // 0x0360(0x0010) MISSED OFFSET (PADDING)

	public:
		void RequestGatewayOpen(const class FName& GatewayName);
		void OpenGateway();
		void GatherBlueprintLinks(TArray<class AActor*>* ActorsToPointTo);
		static UClass* StaticClass();
	};

	/**
	 * Class Gateway.GatewayComponent
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UGatewayComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XRU2[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Gateway.GatewayDataAsset
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UGatewayDataAsset : public UDataAsset
	{
	public:
		TMap<class UClass*, class UClass*>                         ActorClassToGatewayClass;                                // 0x0030(0x0050) Edit, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
