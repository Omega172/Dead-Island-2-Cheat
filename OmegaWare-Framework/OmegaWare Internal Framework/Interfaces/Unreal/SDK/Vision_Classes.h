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
	 * Class Vision.ObservableComponent
	 * Size -> 0x0070 (FullSize[0x0300] - InheritedSize[0x0290])
	 */
	class UObservableComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_FM8G[0x68];                                  // 0x0290(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoRegisterWithManager;                                // 0x02F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9ZA[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (PADDING)

	public:
		void UnregisterFromVisionManager();
		void RegisterWithVisionManager();
		bool IsRegisteredWithVisionManager();
		bool CanBeSeenBy(class UObserverComponent* Observer);
		static UClass* StaticClass();
	};

	/**
	 * Class Vision.ObserverComponent
	 * Size -> 0x00E8 (FullSize[0x0378] - InheritedSize[0x0290])
	 */
	class UObserverComponent : public USceneComponent
	{
	public:
		float                                                      FieldOfViewDegrees;                                      // 0x0290(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightRange;                                              // 0x0294(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x0298(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70SB[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnowledgeBaseExpression                            SkipSubsequentFieldOfViewChecksExpression;               // 0x02A0(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKnowledgeBaseExpression                            SnapViewDirectionToActorExpression;                      // 0x02D8(0x0038) Edit, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5K1[0x68];                                  // 0x0310(0x0068) Fix size for supers

	public:
		bool SeenRecently(class UObservableComponent* Observable, float ThresholdTime);
		bool CanSee(class UObservableComponent* Observable);
		static UClass* StaticClass();
	};

	/**
	 * Class Vision.LineTracerPriorityData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULineTracerPriorityData : public UDataAsset
	{
	public:
		TArray<struct FLineTracerPrioritisation>                   PriorityData;                                            // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Vision.VisionManager
	 * Size -> 0x0228 (FullSize[0x04D8] - InheritedSize[0x02B0])
	 */
	class AVisionManager : public AInfo
	{
	public:
		class ULineTracerPriorityData*                             LineTracerPriorities;                                    // 0x02B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ3F[0x220];                                 // 0x02B8(0x0220) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
