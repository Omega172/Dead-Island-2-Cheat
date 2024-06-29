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
	 * Class Pipes.BasePipe
	 * Size -> 0x0068 (FullSize[0x0318] - InheritedSize[0x02B0])
	 */
	class ABasePipe : public AActor
	{
	public:
		class FScriptMulticastDelegate                             OnPipeFlowStartedDelegate;                               // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPipeFlowStoppedDelegate;                               // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class APipeOrigin*                                         PipeOrigin;                                              // 0x02D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ABasePipe*>                                   OutflowPipes;                                            // 0x02D8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RWPA[0x10];                                  // 0x02E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameEvent*                                          OnPipeFlowStartedEvent;                                  // 0x02F8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameEvent*                                          OnPipeFlowStoppedEvent;                                  // 0x0300(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsPipeEnd;                                              // 0x0308(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CO14[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULeakComponent*                                      LeakComponent;                                           // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetPipeAllowedToFlow(bool bActive);
		void SetOutflowActive(int32_t OutflowIndex);
		void OnPipeFlowChanged(float NewFlowingPercentage);
		void OnPipeConnected();
		bool IsFlowing();
		bool IsFillingUp();
		class APipeOrigin* GetPipeOrigin();
		int32_t GetLeakIndex();
		class UPipeOriginDataAsset* GetDataAsset();
		static UClass* StaticClass();
	};

	/**
	 * Class Pipes.PipeLinkComponent
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UPipeLinkComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pipes.PipeLinker
	 * Size -> 0x0010 (FullSize[0x0328] - InheritedSize[0x0318])
	 */
	class APipeLinker : public ABasePipe
	{
	public:
		TArray<class ABasePipe*>                                   LinkedOutflowPipes;                                      // 0x0318(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Pipes.PipeOrigin
	 * Size -> 0x0088 (FullSize[0x03A0] - InheritedSize[0x0318])
	 */
	class APipeOrigin : public ABasePipe
	{
	public:
		float                                                      FlowSpeed;                                               // 0x0318(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTPL[0x14];                                  // 0x031C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPipeOriginDataAsset*                                Data;                                                    // 0x0330(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FScopedKnowledgeBaseExpressionListener              ActiveExpression;                                        // 0x0338(0x0060) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bIsOriginAllowedToFlow;                                  // 0x0398(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RI9K[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsOriginAllowedToFlow();
		static UClass* StaticClass();
	};

	/**
	 * Class Pipes.PipeOriginDataAsset
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UPipeOriginDataAsset : public UValidatedDataAsset
	{
	public:
		class FText                                                FluidDisplayName;                                        // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FLeakInfo>                                   LeakInfos;                                               // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
