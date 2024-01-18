/**
 * Name: Dead_Island_2
 * Version: Cracked
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.AddErrorDebugForUnsupportedSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlotComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::AddErrorDebugForUnsupportedSpawn(class UParticipantSlotComponent* ParticipantSlotComponent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.AddErrorDebugForUnsupportedSpawn");
		
		UBPFL_Activities_C_AddErrorDebugForUnsupportedSpawn_Params params {};
		params.ParticipantSlotComponent = ParticipantSlotComponent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.GetTableEntryForArchetype
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Base_Zombie_C*                           Zombie                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseDefaultTable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSActivityData                              TableRow                                                   (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFL_Activities_C::GetTableEntryForArchetype(class ABP_Base_Zombie_C* Zombie, const class FName& SequenceName, bool UseDefaultTable, class UObject* __WorldContext, struct FSActivityData* TableRow, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.GetTableEntryForArchetype");
		
		UBPFL_Activities_C_GetTableEntryForArchetype_Params params {};
		params.Zombie = Zombie;
		params.SequenceName = SequenceName;
		params.UseDefaultTable = UseDefaultTable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TableRow != nullptr)
			*TableRow = params.TableRow;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.ToggleCinematicActivityFact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsApplied                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ADIAICharacter*                              Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InvokerName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::ToggleCinematicActivityFact(bool IsApplied, class ADIAICharacter* Character, const class FName& InvokerName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.ToggleCinematicActivityFact");
		
		UBPFL_Activities_C_ToggleCinematicActivityFact_Params params {};
		params.IsApplied = IsApplied;
		params.Character = Character;
		params.InvokerName = InvokerName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.ToggleAIHUDVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ADIAICharacter*                              Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InvokerName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::ToggleAIHUDVisibility(bool IsVisible, class ADIAICharacter* Character, const class FName& InvokerName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.ToggleAIHUDVisibility");
		
		UBPFL_Activities_C_ToggleAIHUDVisibility_Params params {};
		params.IsVisible = IsVisible;
		params.Character = Character;
		params.InvokerName = InvokerName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.GetAttackSequenceFromAssetLinkage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAssetLinkage*                               AssetLinkageobj                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAttackSequence*                             AsAttackSequence                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::GetAttackSequenceFromAssetLinkage(class UAssetLinkage* AssetLinkageobj, const class FName& Name, class UObject* __WorldContext, class UAttackSequence** AsAttackSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.GetAttackSequenceFromAssetLinkage");
		
		UBPFL_Activities_C_GetAttackSequenceFromAssetLinkage_Params params {};
		params.AssetLinkageobj = AssetLinkageobj;
		params.Name = Name;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsAttackSequence != nullptr)
			*AsAttackSequence = params.AsAttackSequence;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.GetLevelSequenceFromAssetLinkage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAssetLinkage*                               AssetLinkageobj                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULevelSequence*                              LevelSequence                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::GetLevelSequenceFromAssetLinkage(class UAssetLinkage* AssetLinkageobj, const class FName& Name, class UObject* __WorldContext, class ULevelSequence** LevelSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.GetLevelSequenceFromAssetLinkage");
		
		UBPFL_Activities_C_GetLevelSequenceFromAssetLinkage_Params params {};
		params.AssetLinkageobj = AssetLinkageobj;
		params.Name = Name;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelSequence != nullptr)
			*LevelSequence = params.LevelSequence;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.GetBoundAssetEntryForActivityType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   ParticipantSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseDefaultTable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAssetLinkage*                               AssetLinkage                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::GetBoundAssetEntryForActivityType(class UParticipantSlotComponent** ParticipantSlot, const class FName& SequenceName, bool UseDefaultTable, class UObject* __WorldContext, class UAssetLinkage** AssetLinkage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.GetBoundAssetEntryForActivityType");
		
		UBPFL_Activities_C_GetBoundAssetEntryForActivityType_Params params {};
		params.SequenceName = SequenceName;
		params.UseDefaultTable = UseDefaultTable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticipantSlot != nullptr)
			*ParticipantSlot = params.ParticipantSlot;
		if (AssetLinkage != nullptr)
			*AssetLinkage = params.AssetLinkage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.GetActivityAnimSetData_WithNameAndTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ActivityAnimationTable                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, struct FAnimSetCollectionItem>   AnimSetMap                                                 (Parm, OutParm, ContainsInstancedReference)
	 * 		class FName                                        ActivityAnimationRowName                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::GetActivityAnimSetData_WithNameAndTable(class UDataTable* DataTable, const class FName& ActivityAnimationTable, class UObject* __WorldContext, TMap<class FName, struct FAnimSetCollectionItem>* AnimSetMap, class FName* ActivityAnimationRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.GetActivityAnimSetData_WithNameAndTable");
		
		UBPFL_Activities_C_GetActivityAnimSetData_WithNameAndTable_Params params {};
		params.DataTable = DataTable;
		params.ActivityAnimationTable = ActivityAnimationTable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimSetMap != nullptr)
			*AnimSetMap = params.AnimSetMap;
		if (ActivityAnimationRowName != nullptr)
			*ActivityAnimationRowName = params.ActivityAnimationRowName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.UnloadAnimSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDIAnimInstance*                             CharacterAnimInstance                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AnimSetID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::UnloadAnimSet(class UDIAnimInstance* CharacterAnimInstance, int32_t AnimSetID, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.UnloadAnimSet");
		
		UBPFL_Activities_C_UnloadAnimSet_Params params {};
		params.CharacterAnimInstance = CharacterAnimInstance;
		params.AnimSetID = AnimSetID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.SetupActivitiesLogger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDSLogChannelHandle*                         ActivitiesLogger                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::SetupActivitiesLogger(class AActivityActor* Activity, class UObject* __WorldContext, class UDSLogChannelHandle** ActivitiesLogger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.SetupActivitiesLogger");
		
		UBPFL_Activities_C_SetupActivitiesLogger_Params params {};
		params.Activity = Activity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActivitiesLogger != nullptr)
			*ActivitiesLogger = params.ActivitiesLogger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.DisplayActivitiesLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActivityActor*                              Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LogMessage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UDSLogChannelHandle*                         ActivityLogger                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDSLogVerbosity                                    LogVerbosity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::DisplayActivitiesLog(class AActivityActor* Activity, const class FString& LogMessage, class UDSLogChannelHandle* ActivityLogger, EDSLogVerbosity LogVerbosity, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.DisplayActivitiesLog");
		
		UBPFL_Activities_C_DisplayActivitiesLog_Params params {};
		params.Activity = Activity;
		params.LogMessage = LogMessage;
		params.ActivityLogger = ActivityLogger;
		params.LogVerbosity = LogVerbosity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.UpdateEditorPreviewAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            ActivityAnimationTable                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      AnimationPreview                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::UpdateEditorPreviewAnimation(const struct FFixedDataTableEditableRowHandle& ActivityAnimationTable, class USkeletalMeshComponent* AnimationPreview, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.UpdateEditorPreviewAnimation");
		
		UBPFL_Activities_C_UpdateEditorPreviewAnimation_Params params {};
		params.ActivityAnimationTable = ActivityAnimationTable;
		params.AnimationPreview = AnimationPreview;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.SetupActivityCharacterRefs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticipantSlotComponent*                   Participant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADIAICharacter*                              CharacterRef                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDIAnimInstance*                             CharacterAnimInstanceRef                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::SetupActivityCharacterRefs(class UParticipantSlotComponent* Participant, class UObject* __WorldContext, class ADIAICharacter** CharacterRef, class UDIAnimInstance** CharacterAnimInstanceRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.SetupActivityCharacterRefs");
		
		UBPFL_Activities_C_SetupActivityCharacterRefs_Params params {};
		params.Participant = Participant;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterRef != nullptr)
			*CharacterRef = params.CharacterRef;
		if (CharacterAnimInstanceRef != nullptr)
			*CharacterAnimInstanceRef = params.CharacterAnimInstanceRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.LoadAndResolveActivityLS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDIAnimInstance*                             CharacterAnimInstance                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, struct FAnimSetCollectionItem>   AnimSetMap                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		class FName                                        ActivityAnimationRowName                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AnimSetID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULevelSequence*                              IntoLevelSequence                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULevelSequence*                              LoopLevelSequence                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULevelSequence*                              OutOfLevelSequence                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::LoadAndResolveActivityLS(class UDIAnimInstance* CharacterAnimInstance, TMap<class FName, struct FAnimSetCollectionItem> AnimSetMap, const class FName& ActivityAnimationRowName, class UObject* __WorldContext, int32_t* AnimSetID, class ULevelSequence** IntoLevelSequence, class ULevelSequence** LoopLevelSequence, class ULevelSequence** OutOfLevelSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.LoadAndResolveActivityLS");
		
		UBPFL_Activities_C_LoadAndResolveActivityLS_Params params {};
		params.CharacterAnimInstance = CharacterAnimInstance;
		params.AnimSetMap = AnimSetMap;
		params.ActivityAnimationRowName = ActivityAnimationRowName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimSetID != nullptr)
			*AnimSetID = params.AnimSetID;
		if (IntoLevelSequence != nullptr)
			*IntoLevelSequence = params.IntoLevelSequence;
		if (LoopLevelSequence != nullptr)
			*LoopLevelSequence = params.LoopLevelSequence;
		if (OutOfLevelSequence != nullptr)
			*OutOfLevelSequence = params.OutOfLevelSequence;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPFL_Activities.BPFL_Activities_C.GetActivityAnimSetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFixedDataTableEditableRowHandle            ActivityAnimationTable                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, struct FAnimSetCollectionItem>   AnimSetMap                                                 (Parm, OutParm, ContainsInstancedReference)
	 * 		class FName                                        ActivityAnimationRowName                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFL_Activities_C::GetActivityAnimSetData(const struct FFixedDataTableEditableRowHandle& ActivityAnimationTable, class UObject* __WorldContext, TMap<class FName, struct FAnimSetCollectionItem>* AnimSetMap, class FName* ActivityAnimationRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFL_Activities.BPFL_Activities_C.GetActivityAnimSetData");
		
		UBPFL_Activities_C_GetActivityAnimSetData_Params params {};
		params.ActivityAnimationTable = ActivityAnimationTable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimSetMap != nullptr)
			*AnimSetMap = params.AnimSetMap;
		if (ActivityAnimationRowName != nullptr)
			*ActivityAnimationRowName = params.ActivityAnimationRowName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFL_Activities_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFL_Activities_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Activities.BPFL_Activities_C");
		return ptr;
	}

}


