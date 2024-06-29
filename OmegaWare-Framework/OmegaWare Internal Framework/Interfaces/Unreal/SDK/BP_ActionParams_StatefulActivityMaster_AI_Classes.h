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
	 * BlueprintGeneratedClass BP_ActionParams_StatefulActivityMaster_AI.BP_ActionParams_StatefulActivityMaster_AI_C
	 * Size -> 0x0169 (FullSize[0x01A1] - InheritedSize[0x0038])
	 */
	class UBP_ActionParams_StatefulActivityMaster_AI_C : public UCustomActionParamsBase
	{
	public:
		class USceneComponent*                                     ActivitySceneRoot;                                       // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                StateName;                                               // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FStatefulActivityAnimation                          NewState;                                                // 0x0048(0x00C8) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		TMap<class FName, class AActor*>                           Participants;                                            // 0x0110(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FBoundActor>                                 BoundProps;                                              // 0x0160(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       EndActivityOnStateFinished;                              // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_2QR3[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSQuestDeliveryParams                               QDParams;                                                // 0x0178(0x0020) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ABP_StatefulActivity_SingleParticipant_C*            StatefulActivity;                                        // 0x0198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bBool;                                                   // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
