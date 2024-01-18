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
	 * Class DSCore.ManagerCollection
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UManagerCollection : public UObject
	{
	public:
		TMap<class UScriptStruct*, class UObject*>                 Managers;                                                // 0x0028(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F507[0x50];                                  // 0x0078(0x0050) MISSED OFFSET (PADDING)

	public:
		class UObject* K2_GetManager(class UScriptStruct* Defintion);
		static UClass* StaticClass();
	};

	/**
	 * Class DSCore.ManagerController
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class UManagerController : public UObject
	{
	public:
		class UManagersDatabase*                                   Database;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, struct FPreCachedDataContainer>          PreCachedClasses;                                        // 0x0030(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L0AY[0x50];                                  // 0x0080(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FPreCachedDataContainer>          PreCachedData;                                           // 0x00D0(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8IYV[0x50];                                  // 0x0120(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSCore.ManagersDatabase
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UManagersDatabase : public UDataAsset
	{
	public:
		TMap<class UScriptStruct*, struct FManagerInformationArray> Managers;                                                // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DSCore.ManagerInitialisation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UManagerInitialisation : public UInterface
	{
	public:
		void Initialise(class UManagerCollection* Collection);
		static UClass* StaticClass();
	};

	/**
	 * Class DSCore.TimeSteppable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTimeSteppable : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
