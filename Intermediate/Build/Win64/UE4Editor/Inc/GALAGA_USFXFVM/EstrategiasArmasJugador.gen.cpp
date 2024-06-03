// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/EstrategiasArmasJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiasArmasJugador() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UEstrategiasArmasJugador_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UEstrategiasArmasJugador();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void UEstrategiasArmasJugador::StaticRegisterNativesUEstrategiasArmasJugador()
	{
	}
	UClass* Z_Construct_UClass_UEstrategiasArmasJugador_NoRegister()
	{
		return UEstrategiasArmasJugador::StaticClass();
	}
	struct Z_Construct_UClass_UEstrategiasArmasJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstrategiasArmasJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstrategiasArmasJugador_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EstrategiasArmasJugador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstrategiasArmasJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstrategiasArmasJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstrategiasArmasJugador_Statics::ClassParams = {
		&UEstrategiasArmasJugador::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEstrategiasArmasJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstrategiasArmasJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstrategiasArmasJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstrategiasArmasJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstrategiasArmasJugador, 3988623216);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<UEstrategiasArmasJugador>()
	{
		return UEstrategiasArmasJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstrategiasArmasJugador(Z_Construct_UClass_UEstrategiasArmasJugador, &UEstrategiasArmasJugador::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("UEstrategiasArmasJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstrategiasArmasJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
