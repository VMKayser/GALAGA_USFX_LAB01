// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/EstrategiaAtaqueEscudo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaAtaqueEscudo() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEstrategiaAtaqueEscudo_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEstrategiaAtaqueEscudo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UEstrategiasArmasJugador_NoRegister();
// End Cross Module References
	void AEstrategiaAtaqueEscudo::StaticRegisterNativesAEstrategiaAtaqueEscudo()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaAtaqueEscudo_NoRegister()
	{
		return AEstrategiaAtaqueEscudo::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaAtaqueEscudo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaAtaqueEscudo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaAtaqueEscudo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaAtaqueEscudo.h" },
		{ "ModuleRelativePath", "EstrategiaAtaqueEscudo.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaAtaqueEscudo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategiasArmasJugador_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaAtaqueEscudo, IEstrategiasArmasJugador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaAtaqueEscudo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaAtaqueEscudo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaAtaqueEscudo_Statics::ClassParams = {
		&AEstrategiaAtaqueEscudo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaAtaqueEscudo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaAtaqueEscudo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaAtaqueEscudo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaAtaqueEscudo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaAtaqueEscudo, 66712867);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AEstrategiaAtaqueEscudo>()
	{
		return AEstrategiaAtaqueEscudo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaAtaqueEscudo(Z_Construct_UClass_AEstrategiaAtaqueEscudo, &AEstrategiaAtaqueEscudo::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AEstrategiaAtaqueEscudo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaAtaqueEscudo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
