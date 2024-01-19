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
	 * BlueprintGeneratedClass BP_Base_StatefulLight.BP_Base_StatefulLight_C
	 * Size -> 0x00C0 (FullSize[0x04B8] - InheritedSize[0x03F8])
	 */
	class ABP_Base_StatefulLight_C : public ABP_Base_Light_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Emissiveonly;                                            // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_13P1[0x3];                                   // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShowState;                                               // 0x0404(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSLightSettings>                             LightStates;                                             // 0x0408(0x0010) Edit, BlueprintVisible
		struct FKnowledgeBaseExpression                            KBExpression;                                            // 0x0418(0x0038) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		int32_t                                                    ActiveState;                                             // 0x0450(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewState;                                                // 0x0454(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		TMap<class ULightComponent*, float>                        Light_DefaultIntensity;                                  // 0x0458(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ULocalLightComponent*>                        LightsBulbs;                                             // 0x04A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void UpdateAudio();
		void EmissiveLights(class ULightComponent* LocalLightComponent);
		void SubsurfaceLights(class ULocalLightComponent* LocalLightComponent);
		void OptimiseLights();
		void RestoreDefaultIntensities();
		void GetDefaultIntensities();
		void OnRep_ActiveState();
		void OnRep_NewState();
		void EndState(int32_t EndState);
		void BeginState(int32_t BeginState);
		void UpdateLightProperties(const struct FSLightSettings& LightSettings);
		void SetState(int32_t State);
		void UserConstructionScript();
		void SetLightingScenarioState(EScenarioLightTime Time);
		void ReceiveBeginPlay();
		void ExpresionResult(float Result);
		void ExecuteUbergraph_BP_Base_StatefulLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
