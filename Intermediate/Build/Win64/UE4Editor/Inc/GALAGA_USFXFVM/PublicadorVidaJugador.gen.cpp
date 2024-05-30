// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/PublicadorVidaJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicadorVidaJugador() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_APublicadorVidaJugador_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_APublicadorVidaJugador();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_APublicadorEventos();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void APublicadorVidaJugador::StaticRegisterNativesAPublicadorVidaJugador()
	{
	}
	UClass* Z_Construct_UClass_APublicadorVidaJugador_NoRegister()
	{
		return APublicadorVidaJugador::StaticClass();
	}
	struct Z_Construct_UClass_APublicadorVidaJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VidaJugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VidaJugador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APublicadorVidaJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublicadorEventos,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicadorVidaJugador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PublicadorVidaJugador.h" },
		{ "ModuleRelativePath", "PublicadorVidaJugador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicadorVidaJugador_Statics::NewProp_VidaJugador_MetaData[] = {
		{ "Category", "Vida" },
		{ "Comment", "// Player's life variable\n" },
		{ "ModuleRelativePath", "PublicadorVidaJugador.h" },
		{ "ToolTip", "Player's life variable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APublicadorVidaJugador_Statics::NewProp_VidaJugador = { "VidaJugador", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APublicadorVidaJugador, VidaJugador), METADATA_PARAMS(Z_Construct_UClass_APublicadorVidaJugador_Statics::NewProp_VidaJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APublicadorVidaJugador_Statics::NewProp_VidaJugador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APublicadorVidaJugador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APublicadorVidaJugador_Statics::NewProp_VidaJugador,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APublicadorVidaJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APublicadorVidaJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APublicadorVidaJugador_Statics::ClassParams = {
		&APublicadorVidaJugador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APublicadorVidaJugador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APublicadorVidaJugador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APublicadorVidaJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APublicadorVidaJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APublicadorVidaJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APublicadorVidaJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APublicadorVidaJugador, 1281224990);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<APublicadorVidaJugador>()
	{
		return APublicadorVidaJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APublicadorVidaJugador(Z_Construct_UClass_APublicadorVidaJugador, &APublicadorVidaJugador::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("APublicadorVidaJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APublicadorVidaJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
