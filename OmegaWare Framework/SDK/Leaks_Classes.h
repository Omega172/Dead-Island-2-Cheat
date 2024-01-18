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
	 * Class Leaks.BaseLeakObject
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UBaseLeakObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_3OO7[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnLeakStopped();
		void OnLeakStarted();
		struct FLeakRequestParams GetRequestParams();
		static UClass* StaticClass();
	};

	/**
	 * Class Leaks.LeakComponent
	 * Size -> 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
	 */
	class ULeakComponent : public USceneComponent
	{
	public:
		struct FLeakInfo                                           LeakInfo;                                                // 0x0290(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NHT5[0x10];                                  // 0x02A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void StopLeak();
		void RequestLeak();
		void EditorOverrideLeakInfo(const struct FLeakInfo& InLeakInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Leaks.LeakDataAsset
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class ULeakDataAsset : public UValidatedDataAsset
	{
	public:
		class UClass*                                              LeakType;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Leaks.LeakFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULeakFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void StopLeak(class UObject* WorldContextObject, int32_t* ID);
		int32_t RequestLeak(class UObject* WorldContextObject, const struct FLeakRequestParams& LeakRequest);
		static UClass* StaticClass();
	};

	/**
	 * Class Leaks.LeakObject
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class ULeakObject : public UBaseLeakObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Leaks.LeaksManager
	 * Size -> 0x0078 (FullSize[0x0328] - InheritedSize[0x02B0])
	 */
	class ALeaksManager : public AInfo
	{
	public:
		TArray<class ULeakObject*>                                 RegisteredLeaks;                                         // 0x02B0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class USceneComponent*, class ULeakObject*>           ComponentsToLeaks;                                       // 0x02C0(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O85V[0x18];                                  // 0x0310(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Leaks.RemoveLeakMaxCountEnforcementHandler
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class URemoveLeakMaxCountEnforcementHandler : public UMaxCountEnforcementHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Leaks.StartLeakMaxCountEnforcementHandler
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStartLeakMaxCountEnforcementHandler : public UMaxCountEnforcementHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Leaks.StopLeakMaxCountEnforcementHandler
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStopLeakMaxCountEnforcementHandler : public UMaxCountEnforcementHandler
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
