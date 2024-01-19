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
	 * BlueprintGeneratedClass BP_ActionParams_Distraction_AnimStateMachine_AI.BP_ActionParams_Distraction_AnimStateMachine_AI_C
	 * Size -> 0x001C (FullSize[0x010C] - InheritedSize[0x00F0])
	 */
	class UBP_ActionParams_Distraction_AnimStateMachine_AI_C : public UDistractionActionParams
	{
	public:
		class FName                                                MoveTargetName;                                          // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      DistractionWithinRequiredFacingAngle;                    // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistractionWithinRequiredFacingAngleForCrawlers;         // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSetActionParams*                                AnimSetParams;                                           // 0x0100(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      InvestigationDurationScalar;                             // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
