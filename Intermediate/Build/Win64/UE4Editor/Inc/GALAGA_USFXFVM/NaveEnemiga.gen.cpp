// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/NaveEnemiga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemiga() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveEnemiga();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UMovimientoNavesEnemigas_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANaveEnemiga::execOnProjectileHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ANaveEnemiga::StaticRegisterNativesANaveEnemiga()
	{
		UClass* Class = ANaveEnemiga::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectileHit", &ANaveEnemiga::execOnProjectileHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics
	{
		struct NaveEnemiga_eventOnProjectileHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemiga_eventOnProjectileHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemiga_eventOnProjectileHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemiga_eventOnProjectileHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemiga_eventOnProjectileHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemiga_eventOnProjectileHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveEnemiga.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaveEnemiga, nullptr, "OnProjectileHit", nullptr, nullptr, sizeof(NaveEnemiga_eventOnProjectileHit_Parms), Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister()
	{
		return ANaveEnemiga::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemiga_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaNaveEnemiga_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaNaveEnemiga;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_danoProducido_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_danoProducido;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cadenciaDisparo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cadenciaDisparo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capacidadMunicion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_capacidadMunicion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_experiencia_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_experiencia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_vida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nombre_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nombre;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_posicion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_posicion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectileSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_projectileSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovimientoNavesEnemigas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovimientoNavesEnemigas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemiga_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANaveEnemiga_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANaveEnemiga_OnProjectileHit, "OnProjectileHit" }, // 1034347875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemiga.h" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_mallaNaveEnemiga_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_mallaNaveEnemiga = { "mallaNaveEnemiga", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, mallaNaveEnemiga), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_mallaNaveEnemiga_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_mallaNaveEnemiga_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_velocidad_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_velocidad = { "velocidad", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, velocidad), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_danoProducido_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "Comment", "// Velocidad de la nave enemiga\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Velocidad de la nave enemiga" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_danoProducido = { "danoProducido", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, danoProducido), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_danoProducido_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_danoProducido_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_cadenciaDisparo_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "Comment", "// Potencia de cada proyectil que dispara la nave\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Potencia de cada proyectil que dispara la nave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_cadenciaDisparo = { "cadenciaDisparo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, cadenciaDisparo), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_cadenciaDisparo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_cadenciaDisparo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_capacidadMunicion_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "Comment", "// Tiempo que debe transcurrir entre cada disparo\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Tiempo que debe transcurrir entre cada disparo" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_capacidadMunicion = { "capacidadMunicion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, capacidadMunicion), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_capacidadMunicion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_capacidadMunicion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_experiencia_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "Comment", "// Numero de disparos que puede realizar antes de recargar\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Numero de disparos que puede realizar antes de recargar" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_experiencia = { "experiencia", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, experiencia), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_experiencia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_experiencia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_vida_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "Comment", "// Cantidad de puntos que se obtienen al destruir la nave\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Cantidad de puntos que se obtienen al destruir la nave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_vida = { "vida", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, vida), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_nombre_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "Comment", "// Vida de la nave enemiga\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Vida de la nave enemiga" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_nombre = { "nombre", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, nombre), METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_nombre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_nombre_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_posicion_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "Comment", "// Nombre de la nave enemiga\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Nombre de la nave enemiga" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_posicion = { "posicion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_posicion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_posicion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_projectileSpawn_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "Comment", "// Posici\xc3\xb3n actual de la nave enemiga\n" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
		{ "ToolTip", "Posici\xc3\xb3n actual de la nave enemiga" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_projectileSpawn = { "projectileSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, projectileSpawn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_projectileSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_projectileSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_MovimientoNavesEnemigas_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveEnemiga.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_MovimientoNavesEnemigas = { "MovimientoNavesEnemigas", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemiga, MovimientoNavesEnemigas), Z_Construct_UClass_UMovimientoNavesEnemigas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_MovimientoNavesEnemigas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_MovimientoNavesEnemigas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemiga_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_mallaNaveEnemiga,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_danoProducido,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_cadenciaDisparo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_capacidadMunicion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_experiencia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_nombre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_posicion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_projectileSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemiga_Statics::NewProp_MovimientoNavesEnemigas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemiga_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemiga>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemiga_Statics::ClassParams = {
		&ANaveEnemiga::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANaveEnemiga_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemiga_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemiga_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemiga()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemiga_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemiga, 299495128);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<ANaveEnemiga>()
	{
		return ANaveEnemiga::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemiga(Z_Construct_UClass_ANaveEnemiga, &ANaveEnemiga::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("ANaveEnemiga"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemiga);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
