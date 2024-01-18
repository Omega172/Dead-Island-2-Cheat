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
	 * BlueprintGeneratedClass BP_Base_Player.BP_Base_Player_C
	 * Size -> 0x0300 (FullSize[0x1940] - InheritedSize[0x1640])
	 */
	class ABP_Base_Player_C : public ADIPlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1640(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImpalingComponent*                                  Impaling;                                                // 0x1648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScopedSpotlightComponent*                           ScopedSpotlight;                                         // 0x1650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm1;                                              // 0x1658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEmotionComponent*                                   Emotion;                                                 // 0x1660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFaceFXComponent*                                    FaceFX;                                                  // 0x1668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCapsuleComponent*                                   CollisionPelvis;                                         // 0x1670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    CollisionLeftFoot;                                       // 0x1678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    CollisionRightFoot;                                      // 0x1680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    CollisionLeftHand;                                       // 0x1688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USphereComponent*                                    CollisionRightHand;                                      // 0x1690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAutoAimSettingsComponent*                           AutoAimSettings;                                         // 0x1698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDiscoveryComponent*                                 DiscoveryComponent;                                      // 0x16A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_AnimationLayer_Player_C*                        BPC_AnimationLayer_Player;                               // 0x16A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProceduralAnimationReactionComponent*               ProceduralAnimationReaction;                             // 0x16B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UIconComponent*                                      PlayerIcon;                                              // 0x16B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_EvasionComponent_C*                             BPC_EvasionComponent;                                    // 0x16C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFastTravelUserComponent*                            FastTravelUser;                                          // 0x16C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCharacterAutoAlignComponent*                        CharacterAutoAlign;                                      // 0x16D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_ContextualNavigation_C*                         BPC_ContextualNavigation;                                // 0x16D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Player_WeaponProxy_C*                           BPC_Player_WeaponProxy;                                  // 0x16E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Player_ApplyDamage_C*                           BPC_Player_ApplyDamage;                                  // 0x16E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Player_Stamina_C*                               BPC_Player_Stamina;                                      // 0x16F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Player_SimpleHealth_C*                          BPC_Player_SimpleHealth;                                 // 0x16F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Player_AreaOfEffectResponder_C*                 BPC_Player_AreaOfEffectResponder;                        // 0x1700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Player_MeleeSweep_C*                            BPC_Player_MeleeSweep;                                   // 0x1708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Player_PaperDoll_C*                             BPC_Player_PaperDoll;                                    // 0x1710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_PlayerTargetGuidance_C*                         BPC_PlayerTargetGuidance;                                // 0x1718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_Action_Player_C*                                BPC_Player_CharacterAction;                              // 0x1720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTriggerInteractorComponent*                         TriggerInteractor;                                       // 0x1728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess;                                             // 0x1730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCapsuleComponent*                                   KickComponentEditorTool;                                 // 0x1738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_StimEmitter_Player_C*                           PlayerStimEmitterComponent;                              // 0x1740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAmbientLookTargetComponent*                         LookTarget;                                              // 0x1748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      Timeline_1_CrosshairScale_E59146E74BB1BE19583B08AD5450A7AF; // 0x1750(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_E59146E74BB1BE19583B08AD5450A7AF;  // 0x1754(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JDIF[0x3];                                   // 0x1755(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x1758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_BlendableStrength_834F12DE42D1917344A4BF86E6CD6F8A; // 0x1760(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_834F12DE42D1917344A4BF86E6CD6F8A;  // 0x1764(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X449[0x3];                                   // 0x1765(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x1768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickComponentRadius;                                     // 0x1770(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickComponentHalfHeight;                                 // 0x1774(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             KickComponentRelativeOffset;                             // 0x1778(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P7RG[0x4];                                   // 0x1784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Possessed;                                               // 0x1788(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             NewWeaponEquipped;                                       // 0x1798(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UCharacterActionRequestHelper*                       SlideRequestHelper;                                      // 0x17A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       HealRequestHelper;                                       // 0x17B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       JumpRequestHelper;                                       // 0x17B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       KnockbackRequestHelper;                                  // 0x17C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       LadderRequestHelper;                                     // 0x17C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ClassPressActionRequestHelper;                           // 0x17D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCosmeticEffectsDefinition*                          SlideCosmeticEffect;                                     // 0x17D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoStaminaAttack;                                         // 0x17E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JISI[0x3];                                   // 0x17E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendableActivationThreshold;                            // 0x17E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendableDeactivationThreshold;                          // 0x17E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NotAttackingBlendableLimitation;                         // 0x17EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsStaminaBlendableActive;                                // 0x17F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LEEA[0x7];                                   // 0x17F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   StaminaBlendable;                                        // 0x17F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Class;                                                   // 0x1800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Weapon_C*                                   OffhandWeaponRef;                                        // 0x1808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Base_Weapon_C*                                   MainhandWeaponRef;                                       // 0x1810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   HealthBlendable;                                         // 0x1818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInputMapperActionOverrideConfig*                    CurrentInputConfig;                                      // 0x1820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LowStaminaAmount;                                        // 0x1828(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LowStaminaBasePoseLimit;                                 // 0x182C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeExitingLowStamina;                             // 0x1830(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UVO5[0x4];                                   // 0x1834(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ExitLowStaminaTimerHandle;                               // 0x1838(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          GeneralPlayerParamsDataAsset;                            // 0x1840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeavyAttackHoldTransitionTime;                           // 0x1848(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ToggleSprint;                                            // 0x184C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MLSP[0x3];                                   // 0x184D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   HeavyAttackChargeBlendable;                              // 0x1850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         HeavyAttackChargeBlendableIntensityCurve;                // 0x1858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeavyAttackChargeFadeoutRate;                            // 0x1860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1I9A[0x4];                                   // 0x1864(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BlendableStrength;                                       // 0x1868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         StaminaBlendableIntensityCurve;                          // 0x1870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   HeavyAttackWhizzyBlendable;                              // 0x1878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         HeavyAttackWhizzyBlendableIntensityCurve;                // 0x1880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ToggleCrouch;                                            // 0x1888(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0DBJ[0x7];                                   // 0x1889(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        DebugMontage;                                            // 0x1890(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReticleScale;                                            // 0x1898(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZATY[0x4];                                   // 0x189C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMapperComponent*                               InputMapper;                                             // 0x18A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADIHUD*                                              MyHUD;                                                   // 0x18A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBeginPlay;                                             // 0x18B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              SpeakerName;                                             // 0x18C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       AimRequesterActionHelper;                                // 0x18D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       AimDownSightsRequesterActionHelper;                      // 0x18D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       HeavyAttackIntroRequestHelper;                           // 0x18E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       HeavyAttackRequesterAction;                              // 0x18E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendableHeavyPlaybackPosition;                          // 0x18F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FallDistanceKickThreshold;                               // 0x18F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       AimActionHelper;                                         // 0x18F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       ReleasedAttackButtonAction;                              // 0x1900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        NewVar_1;                                                // 0x1908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       InstantUsePickUpActionHelper;                            // 0x1910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       SpecialAttackActionHelper;                               // 0x1918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCharacterActionRequestHelper*                       FurySpecialAttackActionHelper;                           // 0x1920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInActiveCutscene;                                      // 0x1928(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZET9[0x7];                                   // 0x1929(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             AttackInputPressed;                                      // 0x1930(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetupFaceFX(class UFaceFXActor* FaceFXActor, const class FName& AttachPointName);
		void TryNotifyInsufficientStamina(bool HasEnoughStamina, bool ShouldNotify);
		void SetHeavyAttackRequester(class ABP_Base_MeleeWeaponItem_C** BaseMeleeWeaponItem);
		void TransformWorldPositionToMapPosition(struct FVector* WorldPosition, struct FVector* MapPosition);
		void GetItemOrEquippable(class UObject** ItemOrEquipable);
		void QuickThrow();
		void RequestLadderAction(class USplineComponent* SplineComponent, float TopRungHeight, float StepRungHeight, float BottomRungHeight, int32_t NumRungs);
		void InitGeneralPlayerParams();
		void SetLowStaminaFact(float CurrentStamina);
		void SetWeaponProxyClass(class UClass* WeaponClass, EWeaponHand Hand, class ABP_Base_MeleeWeapon_C** WeaponRef);
		void IsCurrentControlConfigGamepad(bool* IsGamepad);
		void IsCurrentControlConfigMouse(bool* IsMouse);
		void GetCurrentInputConfig(class UInputMapperActionOverrideConfig** Config);
		void GetControllerPitch(float* ReturnVlaue);
		void CreatePlayerNameSlates();
		void SelectWeapon(class UClass* WeaponClass, EHoldCategory IsDualWield);
		void CanAffordAction(float ActionCost, bool* CanTakeAction);
		void CollisionSlowDownonHit(class UPrimitiveComponent* PrimComp, const struct FVector& Impulse, struct FHitResult* Hit);
		void DoJump();
		void IsMeleeAimActionRequestValid(bool* Valid);
		void HandleNoStaminaAttackCondition();
		bool CanAffordActionStaminaCost_Native(float ActionStaminaCost, bool bIsAbsolute, bool bNotifyIfLackingStamina);
		void EndLowStaminaBasePose();
		void HandleStaminaScreenFX(float Stamina);
		void DoCrouch();
		void SetupActionRequestHelpers();
		void UserConstructionScript();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void InpMapActEvt_DebugPlayMontage_InputMapperActionEventNode_21(EInputActionEventType Type, float Value);
		void InpMapActEvt_DebugSwitchToThirdPerson_InputMapperActionEventNode_20(EInputActionEventType Type, float Value);
		void InpMapActEvt_DebugSwitchThirdPersonMesh_InputMapperActionEventNode_19(EInputActionEventType Type, float Value);
		void InpMapActEvt_Heal_InputMapperActionEventNode_18(EInputActionEventType Type, float Value);
		void InpMapActEvt_Crouch_InputMapperActionEventNode_17(EInputActionEventType Type, float Value);
		void InpMapActEvt_Sprint_InputMapperActionEventNode_16(EInputActionEventType Type, float Value);
		void InpMapActEvt_Jump_InputMapperActionEventNode_15(EInputActionEventType Type, float Value);
		void InpMapActEvt_Fury_InputMapperActionEventNode_14(EInputActionEventType Type, float Value);
		void InpMapActEvt_QuickThrow_InputMapperActionEventNode_13(EInputActionEventType Type, float Value);
		void InpMapActEvt_ClassExclusiveActionHold_InputMapperActionEventNode_12(EInputActionEventType Type, float Value);
		void InpMapActEvt_ClassExclusiveActionPress_InputMapperActionEventNode_11(EInputActionEventType Type, float Value);
		void InpMapActEvt_OriginalAimPose_InputMapperActionEventNode_10(EInputActionEventType Type, float Value);
		void InpMapActEvt_Attack_InputMapperActionEventNode_9(EInputActionEventType Type, float Value);
		void InpMapActEvt_DropCarryables_InputMapperActionEventNode_8(EInputActionEventType Type, float Value);
		void InpMapActEvt_Knockback_InputMapperActionEventNode_7(EInputActionEventType Type, float Value);
		void InpMapActEvt_SpecialAttack_InputMapperActionEventNode_6(EInputActionEventType Type, float Value);
		void InpMapActEvt_FurySpecialAttack_InputMapperActionEventNode_5(EInputActionEventType Type, float Value);
		void InpMapActEvt_ToggleFlashlightWheelOnly_InputMapperActionEventNode_4(EInputActionEventType Type, float Value);
		void InpMapActEvt_ToggleFlashlightAnywhere_InputMapperActionEventNode_3(EInputActionEventType Type, float Value);
		void InpMapActEvt_FurySpecialAttackHold_InputMapperActionEventNode_2(EInputActionEventType Type, float Value);
		void OnRequestFailed_6CAA099D4F39D898F5DFFCA68E9B1851();
		void OnCustomSignal_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnCustomSignalParams& CustomSignalParams);
		void OnEnd_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnEndParams& EndParams);
		void OnBegin_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnBeginParams& BeginParams);
		void OnCancelled_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnCancelledParams& CancelledParams);
		void OnResolved_6CAA099D4F39D898F5DFFCA68E9B1851(const struct FCharacterActionOnResolvedParams& ResolvedParams);
		void InpMapActEvt_VoicePTT_InputMapperActionEventNode_1(EInputActionEventType Type, float Value);
		void ToggleCharacterVisibility(bool IsVisible);
		void OnSetPlayerState(class APlayerState* NewPlayerState);
		void BndEvt__BPC_Player_Stamina_K2Node_ComponentBoundEvent_1_StaminaUpdatedDelegate__DelegateSignature(class AActor* Actor, float PreviousStamina, float Stamina);
		void SetPlayerInCutscene(bool CutsceneActive, const struct FTransform& TeleportTransform);
		void ReceiveBeginPlay();
		void ReceivePostInitializeComponents();
		void ReceiveUnpossessed(class AController* OldController);
		void ScaleCrosshair();
		void ConfigChanged(class UInputMapperActionOverrideConfig* NewConfig);
		void AssumingDirectControl(class AController* Controller);
		void NoStaminaAttackBlendableFade();
		void ReceivePossessed(class AController* NewController);
		void TutorialSampleFunction();
		void WeaponHit(class AActor* Attacker, class AActor* Defender, class ABP_Base_MeleeWeapon_C* Weapon);
		void HeavyAttackWhizzyBlendableFade();
		void BlendableFadingFromCurve(class UMaterialInstance* Blendable, class UCurveFloat* IntensityCurve, float OverrideCurvePlayRate, float ReverseFromPosition, float AdditionalStrength);
		void HeavyAttackChargeBlendableFadeIn(float ChargeUpLength);
		void HeavyAttackChargeBlendableFadeOut(float ChargeUpLength);
		void ResetNoStaminaAttackState();
		void AssignedWeaponChanged(class UEquippableComponent* PreviousItem, class UEquippableComponent* NewItem);
		void ResetHeavyAttackSettings(class UEquippableComponent* Current);
		void BndEvt__CollisionPelvis_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__CollisionLeftFoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__CollisionRightFoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__CollisionLeftHand_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__CollisionRightHand_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void InitializeFaceFX(const struct FFaceFXParams& FaceFXParams);
		void BndEvt__BPC_Player_WeaponProxy_K2Node_ComponentBoundEvent_6_OnChildActorSet__DelegateSignature(class AActor* NewActor, EPerspective Perspective);
		void ExecuteUbergraph_BP_Base_Player(int32_t EntryPoint);
		void AttackInputPressed__DelegateSignature();
		void OnBeginPlay__DelegateSignature();
		void NewWeaponEquipped__DelegateSignature();
		void Possessed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
