// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/ProyectilParabolico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectilParabolico() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AProyectilParabolico_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AProyectilParabolico();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AGALAGA_USFXFVMProjectile();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void AProyectilParabolico::StaticRegisterNativesAProyectilParabolico()
	{
	}
	UClass* Z_Construct_UClass_AProyectilParabolico_NoRegister()
	{
		return AProyectilParabolico::StaticClass();
	}
	struct Z_Construct_UClass_AProyectilParabolico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectilParabolico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGALAGA_USFXFVMProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilParabolico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProyectilParabolico.h" },
		{ "ModuleRelativePath", "ProyectilParabolico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectilParabolico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectilParabolico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectilParabolico_Statics::ClassParams = {
		&AProyectilParabolico::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AProyectilParabolico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilParabolico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectilParabolico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectilParabolico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectilParabolico, 192556113);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AProyectilParabolico>()
	{
		return AProyectilParabolico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectilParabolico(Z_Construct_UClass_AProyectilParabolico, &AProyectilParabolico::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AProyectilParabolico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectilParabolico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
