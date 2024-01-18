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
	 * Class PersistentData.PersistentDataCollectionBase
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UPersistentDataCollectionBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_BS7D[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PersistentData.DummyPersistentDataCollection
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UDummyPersistentDataCollection : public UPersistentDataCollectionBase
	{
	public:
		unsigned char                                              UnknownData_2LVX[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PersistentData.CategoryTreeNode
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UCategoryTreeNode : public UObject
	{
	public:
		unsigned char                                              UnknownData_2PXM[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FPersistentStoringParams, class UPersistentDataCollectionBase*> PersistentData;                                          // 0x0030(0x0050) NativeAccessSpecifierPublic
		TArray<unsigned char>                                      SerializedData;                                          // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UCategoryTreeNode*>                           Children;                                                // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J5WQ[0x28];                                  // 0x00A0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PersistentData.PersistenceManager
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPersistenceManager : public UObject
	{
	public:
		class UCategoryTreeNode*                                   PermanentData;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCategoryTreeNode*                                   TemporaryData;                                           // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CAFY[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
