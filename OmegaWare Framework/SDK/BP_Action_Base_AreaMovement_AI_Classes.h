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
	 * BlueprintGeneratedClass BP_Action_Base_AreaMovement_AI.BP_Action_Base_AreaMovement_AI_C
	 * Size -> 0x0008 (FullSize[0x0340] - InheritedSize[0x0338])
	 */
	class UBP_Action_Base_AreaMovement_AI_C : public UBP_Action_WaitMovingEQS_AI_C
	{
	public:
		class UBP_ActionParams_Base_AreaMovement_AI_C*             AreaParams;                                              // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CastAndStoreParams(class UCustomActionParamsBase* BaseParams);
		void GetParamData(float* GridSize, float* SpaceBetweenPoints, float* MinimumPathDistance);
		void CalculateParamsForGridArea(float AreaRadius, float GridSize, float SpaceBetweenPoints, float MinimumPathDistance, float* CalculatedHalfGridSize, float* CalculatedSpaceBetweenPoints, float* CalculatedMinimumPathDistance);
		float GetAreaRadius();
		void SetDryRunQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		void SetQueryParams(class UEnvQueryInstanceBlueprintWrapper* ActiveQuery);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
