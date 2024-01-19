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
	 * Class GameArea.GameAreaData
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UGameAreaData : public UObject
	{
	public:
		struct FScopedKnowledgeBaseExpressionListener              EnableExpressionListener;                                // 0x0028(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDB5[0x20];                                  // 0x0088(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameArea.DiscoveryAreaData
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UDiscoveryAreaData : public UGameAreaData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameArea.GameAreaComponent
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UGameAreaComponent : public UActorComponent
	{
	public:
		TArray<class UGameAreaData*>                               Systems;                                                 // 0x00E8(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OT0O[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UShapeComponent*>                             Shapes;                                                  // 0x0100(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bShapesCached;                                           // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTestOnlyAreaShapes;                                     // 0x0111(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R4YA[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRepGameAreaTypeState>                       RepGameAreaStates;                                       // 0x0118(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate

	public:
		void SetEnabled(bool bIsEnabled);
		void OnRep_GameAreaState();
		static UClass* StaticClass();
	};

	/**
	 * Class GameArea.GameAreaManager
	 * Size -> 0x0098 (FullSize[0x0348] - InheritedSize[0x02B0])
	 */
	class AGameAreaManager : public AInfo
	{
	public:
		unsigned char                                              UnknownData_F27C[0x98];                                  // 0x02B0(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameArea.KnowledgeBaseAreaData
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UKnowledgeBaseAreaData : public UGameAreaData
	{
	public:
		TArray<struct FKnowledgeBaseValueSelector>                 InitialFacts;                                            // 0x00A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameArea.KnowledgeBaseAreaManager
	 * Size -> 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
	 */
	class AKnowledgeBaseAreaManager : public AGameAreaManager
	{
	public:
		unsigned char                                              UnknownData_PXHZ[0x20];                                  // 0x0348(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
