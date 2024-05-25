// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/InstanciaJuegoNivel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstanciaJuegoNivel() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UInstanciaJuegoNivel_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UInstanciaJuegoNivel();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	GALAGA_USFXFVM_API UScriptStruct* Z_Construct_UScriptStruct_FValoresNaveEnemiga();
// End Cross Module References
	void UInstanciaJuegoNivel::StaticRegisterNativesUInstanciaJuegoNivel()
	{
	}
	UClass* Z_Construct_UClass_UInstanciaJuegoNivel_NoRegister()
	{
		return UInstanciaJuegoNivel::StaticClass();
	}
	struct Z_Construct_UClass_UInstanciaJuegoNivel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DificultadJuego_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DificultadJuego;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValoresNaveEnemiga_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValoresNaveEnemiga;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInstanciaJuegoNivel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstanciaJuegoNivel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InstanciaJuegoNivel.h" },
		{ "ModuleRelativePath", "InstanciaJuegoNivel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_DificultadJuego_MetaData[] = {
		{ "Category", "Configuracion del Juego" },
		{ "ModuleRelativePath", "InstanciaJuegoNivel.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_DificultadJuego = { "DificultadJuego", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstanciaJuegoNivel, DificultadJuego), METADATA_PARAMS(Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_DificultadJuego_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_DificultadJuego_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_ValoresNaveEnemiga_MetaData[] = {
		{ "Category", "Configuracion del Juego" },
		{ "ModuleRelativePath", "InstanciaJuegoNivel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_ValoresNaveEnemiga = { "ValoresNaveEnemiga", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstanciaJuegoNivel, ValoresNaveEnemiga), Z_Construct_UScriptStruct_FValoresNaveEnemiga, METADATA_PARAMS(Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_ValoresNaveEnemiga_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_ValoresNaveEnemiga_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInstanciaJuegoNivel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_DificultadJuego,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstanciaJuegoNivel_Statics::NewProp_ValoresNaveEnemiga,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInstanciaJuegoNivel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstanciaJuegoNivel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInstanciaJuegoNivel_Statics::ClassParams = {
		&UInstanciaJuegoNivel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInstanciaJuegoNivel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInstanciaJuegoNivel_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInstanciaJuegoNivel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInstanciaJuegoNivel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInstanciaJuegoNivel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInstanciaJuegoNivel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInstanciaJuegoNivel, 182981639);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<UInstanciaJuegoNivel>()
	{
		return UInstanciaJuegoNivel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInstanciaJuegoNivel(Z_Construct_UClass_UInstanciaJuegoNivel, &UInstanciaJuegoNivel::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("UInstanciaJuegoNivel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInstanciaJuegoNivel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
