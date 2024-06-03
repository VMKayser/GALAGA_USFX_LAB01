// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/EstadoInvencibleJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoInvencibleJugador() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEstadoInvencibleJugador_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEstadoInvencibleJugador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UEstadoNaveJugador_NoRegister();
// End Cross Module References
	void AEstadoInvencibleJugador::StaticRegisterNativesAEstadoInvencibleJugador()
	{
	}
	UClass* Z_Construct_UClass_AEstadoInvencibleJugador_NoRegister()
	{
		return AEstadoInvencibleJugador::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoInvencibleJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoInvencibleJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoInvencibleJugador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoInvencibleJugador.h" },
		{ "ModuleRelativePath", "EstadoInvencibleJugador.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoInvencibleJugador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoNaveJugador_NoRegister, (int32)VTABLE_OFFSET(AEstadoInvencibleJugador, IEstadoNaveJugador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoInvencibleJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoInvencibleJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoInvencibleJugador_Statics::ClassParams = {
		&AEstadoInvencibleJugador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoInvencibleJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoInvencibleJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoInvencibleJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoInvencibleJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoInvencibleJugador, 1115571697);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AEstadoInvencibleJugador>()
	{
		return AEstadoInvencibleJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoInvencibleJugador(Z_Construct_UClass_AEstadoInvencibleJugador, &AEstadoInvencibleJugador::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AEstadoInvencibleJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoInvencibleJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
