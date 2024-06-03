// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/EstadoNaveJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoNaveJugador() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UEstadoNaveJugador_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UEstadoNaveJugador();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void UEstadoNaveJugador::StaticRegisterNativesUEstadoNaveJugador()
	{
	}
	UClass* Z_Construct_UClass_UEstadoNaveJugador_NoRegister()
	{
		return UEstadoNaveJugador::StaticClass();
	}
	struct Z_Construct_UClass_UEstadoNaveJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstadoNaveJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstadoNaveJugador_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EstadoNaveJugador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstadoNaveJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstadoNaveJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstadoNaveJugador_Statics::ClassParams = {
		&UEstadoNaveJugador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEstadoNaveJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstadoNaveJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstadoNaveJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstadoNaveJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstadoNaveJugador, 2537325488);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<UEstadoNaveJugador>()
	{
		return UEstadoNaveJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstadoNaveJugador(Z_Construct_UClass_UEstadoNaveJugador, &UEstadoNaveJugador::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("UEstadoNaveJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstadoNaveJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
