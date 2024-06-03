// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/EstadoIntangibleJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoIntangibleJugador() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEstadoIntangibleJugador_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEstadoIntangibleJugador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UEstadoNaveJugador_NoRegister();
// End Cross Module References
	void AEstadoIntangibleJugador::StaticRegisterNativesAEstadoIntangibleJugador()
	{
	}
	UClass* Z_Construct_UClass_AEstadoIntangibleJugador_NoRegister()
	{
		return AEstadoIntangibleJugador::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoIntangibleJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoIntangibleJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoIntangibleJugador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoIntangibleJugador.h" },
		{ "ModuleRelativePath", "EstadoIntangibleJugador.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoIntangibleJugador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoNaveJugador_NoRegister, (int32)VTABLE_OFFSET(AEstadoIntangibleJugador, IEstadoNaveJugador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoIntangibleJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoIntangibleJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoIntangibleJugador_Statics::ClassParams = {
		&AEstadoIntangibleJugador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoIntangibleJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoIntangibleJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoIntangibleJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoIntangibleJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoIntangibleJugador, 977457224);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AEstadoIntangibleJugador>()
	{
		return AEstadoIntangibleJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoIntangibleJugador(Z_Construct_UClass_AEstadoIntangibleJugador, &AEstadoIntangibleJugador::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AEstadoIntangibleJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoIntangibleJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
