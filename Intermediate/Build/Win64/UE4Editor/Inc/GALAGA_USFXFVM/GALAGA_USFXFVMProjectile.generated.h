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
#ifdef GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_generated_h
#error "GALAGA_USFXFVMProjectile.generated.h already included, missing '#pragma once' in GALAGA_USFXFVMProjectile.h"
#endif
#define GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_generated_h

#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_SPARSE_DATA
#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGALAGA_USFXFVMProjectile(); \
	friend struct Z_Construct_UClass_AGALAGA_USFXFVMProjectile_Statics; \
public: \
	DECLARE_CLASS(AGALAGA_USFXFVMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_USFXFVM"), NO_API) \
	DECLARE_SERIALIZER(AGALAGA_USFXFVMProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGALAGA_USFXFVMProjectile(); \
	friend struct Z_Construct_UClass_AGALAGA_USFXFVMProjectile_Statics; \
public: \
	DECLARE_CLASS(AGALAGA_USFXFVMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GALAGA_USFXFVM"), NO_API) \
	DECLARE_SERIALIZER(AGALAGA_USFXFVMProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGALAGA_USFXFVMProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGALAGA_USFXFVMProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGA_USFXFVMProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGA_USFXFVMProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGA_USFXFVMProjectile(AGALAGA_USFXFVMProjectile&&); \
	NO_API AGALAGA_USFXFVMProjectile(const AGALAGA_USFXFVMProjectile&); \
public:


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGALAGA_USFXFVMProjectile(AGALAGA_USFXFVMProjectile&&); \
	NO_API AGALAGA_USFXFVMProjectile(const AGALAGA_USFXFVMProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGALAGA_USFXFVMProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGALAGA_USFXFVMProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGALAGA_USFXFVMProjectile)


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGALAGA_USFXFVMProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGALAGA_USFXFVMProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__DanioCausado() { return STRUCT_OFFSET(AGALAGA_USFXFVMProjectile, DanioCausado); }


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_13_PROLOG
#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_SPARSE_DATA \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_RPC_WRAPPERS \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_INCLASS \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_SPARSE_DATA \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_INCLASS_NO_PURE_DECLS \
	GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFXFVM_API UClass* StaticClass<class AGALAGA_USFXFVMProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GALAGA_USFXFVM_Source_GALAGA_USFXFVM_GALAGA_USFXFVMProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
