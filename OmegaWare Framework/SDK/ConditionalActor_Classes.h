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
	 * Class ConditionalActor.ConditionalActor
	 * Size -> 0x00C8 (FullSize[0x0410] - InheritedSize[0x0348])
	 */
	class AConditionalActor : public AScopedKnowledgeBaseExpressionActor
	{
	public:
		unsigned char                                              UnknownData_B7H3[0x10];                                  // 0x0348(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnConditionalActorSpawned;                               // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConditionalActorDeleted;                               // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bSpawnedActorShouldAffectNavigation;                     // 0x0378(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5KVG[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConditionalActorData                               ActorData;                                               // 0x0380(0x0030) Edit, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UUniversalCooldownObject*                            UniversalCooldown;                                       // 0x03B0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUniversalCooldownDataAsset*                         UniversalCooldownDataAsset;                              // 0x03B8(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UUniversalCooldownDataAsset*                         DefaultUniversalCooldownDataAsset;                       // 0x03C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UConditionalActorPostSpawnOperation*                 PostSpawnOperation;                                      // 0x03C8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EConditionalActorDespawnMethod                             DespawnMethod;                                           // 0x03D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RYT5[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActorSource*                                        ActorSource;                                             // 0x03D8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     RootSceneComponent;                                      // 0x03E0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              ConditionalActorTemplate;                                // 0x03E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRequiresPersistence;                                    // 0x03F0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K3SJ[0x1F];                                  // 0x03F1(0x001F) MISSED OFFSET (PADDING)

	public:
		void OnSpawnHandlerSpawned(bool bSuccess, TArray<class AActor*> SpawnedActors);
		void OnSpawnedActorDestroyed(class AActor* Actor, EEndPlayReason EndPlayReason);
		void OnCooldownComplete();
		void OnActorSourceProvidedActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class ConditionalActor.ConditionalActorPostSpawnOperation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConditionalActorPostSpawnOperation : public UObject
	{
	public:
		void Execute(class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
