// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_USFXFVM_NaveEnemiga_generated_h
#error "NaveEnemiga.generated.h already included, missing '#pragma once' in NaveEnemiga.h"
#endif
#define GALAGA_USFXFVM_NaveEnemiga_generated_h

#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_SPARSE_DATA
#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaveEnemiga(); \
	friend struct Z_Construct_UClass_ANaveEnemiga_Statics; \
public: \
	DECLARE_CLASS(ANaveEnemiga, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_USFXFVM"), NO_API) \
	DECLARE_SERIALIZER(ANaveEnemiga)


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANaveEnemiga(); \
	friend struct Z_Construct_UClass_ANaveEnemiga_Statics; \
public: \
	DECLARE_CLASS(ANaveEnemiga, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_USFXFVM"), NO_API) \
	DECLARE_SERIALIZER(ANaveEnemiga)


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANaveEnemiga(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANaveEnemiga) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveEnemiga); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveEnemiga(ANaveEnemiga&&); \
	NO_API ANaveEnemiga(const ANaveEnemiga&); \
public:


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveEnemiga(ANaveEnemiga&&); \
	NO_API ANaveEnemiga(const ANaveEnemiga&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveEnemiga); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ANaveEnemiga)


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__velocidad() { return STRUCT_OFFSET(ANaveEnemiga, velocidad); } \
	FORCEINLINE static uint32 __PPO__danoProducido() { return STRUCT_OFFSET(ANaveEnemiga, danoProducido); } \
	FORCEINLINE static uint32 __PPO__cadenciaDisparo() { return STRUCT_OFFSET(ANaveEnemiga, cadenciaDisparo); } \
	FORCEINLINE static uint32 __PPO__capacidadMunicion() { return STRUCT_OFFSET(ANaveEnemiga, capacidadMunicion); } \
	FORCEINLINE static uint32 __PPO__experiencia() { return STRUCT_OFFSET(ANaveEnemiga, experiencia); } \
	FORCEINLINE static uint32 __PPO__vida() { return STRUCT_OFFSET(ANaveEnemiga, vida); } \
	FORCEINLINE static uint32 __PPO__nombre() { return STRUCT_OFFSET(ANaveEnemiga, nombre); } \
	FORCEINLINE static uint32 __PPO__posicion() { return STRUCT_OFFSET(ANaveEnemiga, posicion); } \
	FORCEINLINE static uint32 __PPO__projectileSpawn() { return STRUCT_OFFSET(ANaveEnemiga, projectileSpawn); }


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_13_PROLOG
#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_PRIVATE_PROPERTY_OFFSET \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_SPARSE_DATA \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_RPC_WRAPPERS \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_INCLASS \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_PRIVATE_PROPERTY_OFFSET \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_SPARSE_DATA \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_INCLASS_NO_PURE_DECLS \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFXFVM_API UClass* StaticClass<class ANaveEnemiga>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_USFXFVM_Source_GALAGA_USFXFVM_NaveEnemiga_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
