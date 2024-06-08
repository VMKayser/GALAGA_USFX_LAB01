// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/FacadeDificultadJuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeDificultadJuego() {}
// Cross Module References
	GALAGA_USFXFVM_API UScriptStruct* Z_Construct_UScriptStruct_FValoresNaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AFacadeDificultadJuego_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AFacadeDificultadJuego();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FValoresNaveEnemiga::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GALAGA_USFXFVM_API uint32 Get_Z_Construct_UScriptStruct_FValoresNaveEnemiga_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FValoresNaveEnemiga, Z_Construct_UPackage__Script_GALAGA_USFXFVM(), TEXT("ValoresNaveEnemiga"), sizeof(FValoresNaveEnemiga), Get_Z_Construct_UScriptStruct_FValoresNaveEnemiga_Hash());
	}
	return Singleton;
}
template<> GALAGA_USFXFVM_API UScriptStruct* StaticStruct<FValoresNaveEnemiga>()
{
	return FValoresNaveEnemiga::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FValoresNaveEnemiga(FValoresNaveEnemiga::StaticStruct, TEXT("/Script/GALAGA_USFXFVM"), TEXT("ValoresNaveEnemiga"), false, nullptr, nullptr);
static struct FScriptStruct_GALAGA_USFXFVM_StaticRegisterNativesFValoresNaveEnemiga
{
	FScriptStruct_GALAGA_USFXFVM_StaticRegisterNativesFValoresNaveEnemiga()
	{
		UScriptStruct::DeferCppStructOps<FValoresNaveEnemiga>(FName(TEXT("ValoresNaveEnemiga")));
	}
} ScriptStruct_GALAGA_USFXFVM_StaticRegisterNativesFValoresNaveEnemiga;
	struct Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VidaEnemigo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VidaEnemigo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dano_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dano;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CadenciaDisparo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CadenciaDisparo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapacidadMunicion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CapacidadMunicion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Experiencia_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Experiencia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FacadeDificultadJuego.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValoresNaveEnemiga>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_VidaEnemigo_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "ModuleRelativePath", "FacadeDificultadJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_VidaEnemigo = { "VidaEnemigo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValoresNaveEnemiga, VidaEnemigo), METADATA_PARAMS(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_VidaEnemigo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_VidaEnemigo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "ModuleRelativePath", "FacadeDificultadJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValoresNaveEnemiga, Velocidad), METADATA_PARAMS(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Dano_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "ModuleRelativePath", "FacadeDificultadJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Dano = { "Dano", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValoresNaveEnemiga, Dano), METADATA_PARAMS(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Dano_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Dano_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CadenciaDisparo_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "ModuleRelativePath", "FacadeDificultadJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CadenciaDisparo = { "CadenciaDisparo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValoresNaveEnemiga, CadenciaDisparo), METADATA_PARAMS(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CadenciaDisparo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CadenciaDisparo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CapacidadMunicion_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "ModuleRelativePath", "FacadeDificultadJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CapacidadMunicion = { "CapacidadMunicion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValoresNaveEnemiga, CapacidadMunicion), METADATA_PARAMS(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CapacidadMunicion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CapacidadMunicion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Experiencia_MetaData[] = {
		{ "Category", "NaveEnemiga" },
		{ "ModuleRelativePath", "FacadeDificultadJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Experiencia = { "Experiencia", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValoresNaveEnemiga, Experiencia), METADATA_PARAMS(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Experiencia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Experiencia_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_VidaEnemigo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Dano,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CadenciaDisparo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_CapacidadMunicion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::NewProp_Experiencia,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
		nullptr,
		&NewStructOps,
		"ValoresNaveEnemiga",
		sizeof(FValoresNaveEnemiga),
		alignof(FValoresNaveEnemiga),
		Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FValoresNaveEnemiga()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FValoresNaveEnemiga_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GALAGA_USFXFVM();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ValoresNaveEnemiga"), sizeof(FValoresNaveEnemiga), Get_Z_Construct_UScriptStruct_FValoresNaveEnemiga_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FValoresNaveEnemiga_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FValoresNaveEnemiga_Hash() { return 3799274167U; }
	void AFacadeDificultadJuego::StaticRegisterNativesAFacadeDificultadJuego()
	{
	}
	UClass* Z_Construct_UClass_AFacadeDificultadJuego_NoRegister()
	{
		return AFacadeDificultadJuego::StaticClass();
	}
	struct Z_Construct_UClass_AFacadeDificultadJuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacadeDificultadJuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacadeDificultadJuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeDificultadJuego.h" },
		{ "ModuleRelativePath", "FacadeDificultadJuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacadeDificultadJuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeDificultadJuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacadeDificultadJuego_Statics::ClassParams = {
		&AFacadeDificultadJuego::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacadeDificultadJuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeDificultadJuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacadeDificultadJuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacadeDificultadJuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacadeDificultadJuego, 4221715394);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AFacadeDificultadJuego>()
	{
		return AFacadeDificultadJuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacadeDificultadJuego(Z_Construct_UClass_AFacadeDificultadJuego, &AFacadeDificultadJuego::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AFacadeDificultadJuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeDificultadJuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
