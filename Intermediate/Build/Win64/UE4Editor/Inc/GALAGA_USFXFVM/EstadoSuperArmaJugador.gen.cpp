// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/EstadoSuperArmaJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoSuperArmaJugador() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEstadoSuperArmaJugador_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEstadoSuperArmaJugador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UEstadoNaveJugador_NoRegister();
// End Cross Module References
	void AEstadoSuperArmaJugador::StaticRegisterNativesAEstadoSuperArmaJugador()
	{
	}
	UClass* Z_Construct_UClass_AEstadoSuperArmaJugador_NoRegister()
	{
		return AEstadoSuperArmaJugador::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoSuperArmaJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoSuperArmaJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoSuperArmaJugador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoSuperArmaJugador.h" },
		{ "ModuleRelativePath", "EstadoSuperArmaJugador.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoSuperArmaJugador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoNaveJugador_NoRegister, (int32)VTABLE_OFFSET(AEstadoSuperArmaJugador, IEstadoNaveJugador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoSuperArmaJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoSuperArmaJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoSuperArmaJugador_Statics::ClassParams = {
		&AEstadoSuperArmaJugador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoSuperArmaJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoSuperArmaJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoSuperArmaJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoSuperArmaJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoSuperArmaJugador, 877933181);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AEstadoSuperArmaJugador>()
	{
		return AEstadoSuperArmaJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoSuperArmaJugador(Z_Construct_UClass_AEstadoSuperArmaJugador, &AEstadoSuperArmaJugador::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AEstadoSuperArmaJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoSuperArmaJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
