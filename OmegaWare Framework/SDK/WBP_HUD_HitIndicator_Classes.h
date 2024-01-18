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
	 * WidgetBlueprintGeneratedClass WBP_HUD_HitIndicator.WBP_HUD_HitIndicator_C
	 * Size -> 0x0058 (FullSize[0x02F0] - InheritedSize[0x0298])
	 */
	class UWBP_HUD_HitIndicator_C : public UDIUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_GraidentIndicatorElement_C*                     WBP_GraidentIndicatorElement_Modulate;                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_HitIndicatorElement_C*                          WBP_HitIndicatorElement_Lurch;                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_HitIndicatorElement_C*                          WBP_HitIndicatorElement_Omni;                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_HitIndicatorElement_C*                          WBP_HitIndicatorElement_Outside;                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_HitIndicatorElement_C*                          WBP_HitIndicatorElement_Translucent;                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImpactEventComponent*                               PlayerImpactEventComponent;                              // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIPlayerCharacter*                                  PlayerCharacter;                                         // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlayerController*                                   PlayerController;                                        // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          HitCosmeticEffect;                                       // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnImpactCosmeticEffect_Fire();
		void LocationPlayGradientEffect(class UWBP_GraidentIndicatorElement_C** Indicator, float* Angle, struct FVector2D* Translation, float PivotY);
		void GradientImpactAngleAndTranslation(class AActor** DamageCauser, struct FPointImpactEventResult* ImpactEvent, float* Angle, struct FVector2D* Translation, float* PivotY);
		void DirectionToClampedLocation(struct FVector* Direction, float Min, float Max, float* Angle, struct FVector2D* Translation, float* PivotY);
		bool CheckFact(struct FPointImpactEventResult* Impact, const struct FKnowledgeBaseFactKey& Fact);
		void DirectionToLocation(struct FVector* Direction, float* Angle, struct FVector2D* Translation, float* PivotY);
		void OutsideImpactAngleAndTranslation(class AActor** DamageCauser, struct FPointImpactEventResult* ImpactEvent, float* Angle, struct FVector2D* Translation, float* PivotY);
		void GetDamageCauser(struct FPointImpactEventResult* ImpactEvent, class AActor** DamageCauser);
		void InsideImpactAngleAndTranslation(class AActor** DamageCauser, struct FPointImpactEventResult* ImpactEvent, float* Angle, struct FVector2D* Translation);
		void LocationPlayHitEffect(class UWBP_HitIndicatorElement_C* Indicator, float* Angle, struct FVector2D* Translation, float PivotY);
		void OnImpactCosmeticEffect();
		void ShowHitIndicator(struct FPointImpactEventResult* ImpactEvent);
		void UpdatePlayerPawn(class APawn* PlayerPawn);
		void PreConstruct(bool IsDesignTime);
		void OnPawnUpdated(class APlayerController* Controller, class APawn* NewPawn, class APawn* OldPawn);
		void BindEventsOnCharacter(class ADIPlayerCharacter* PlayerCharacter);
		void UnbindEventsOnCharacter(class ADIPlayerCharacter* PlayerCharacter);
		void BlueprintInitializeWidget();
		void BlueprintDestroyWidget();
		void OnGeneralImpact(const struct FGeneralImpactEventResult& ImpactEvent);
		void OnRadialImpact(const struct FRadialImpactEventResult& ImpactEvent);
		void OnPointImpact(const struct FPointImpactEventResult& ImpactEvent);
		void ExecuteUbergraph_WBP_HUD_HitIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
