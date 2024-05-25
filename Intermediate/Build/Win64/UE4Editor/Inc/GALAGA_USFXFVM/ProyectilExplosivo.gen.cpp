// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/ProyectilExplosivo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectilExplosivo() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AProyectilExplosivo_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AProyectilExplosivo();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AGALAGA_USFXFVMProjectile();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void AProyectilExplosivo::StaticRegisterNativesAProyectilExplosivo()
	{
	}
	UClass* Z_Construct_UClass_AProyectilExplosivo_NoRegister()
	{
		return AProyectilExplosivo::StaticClass();
	}
	struct Z_Construct_UClass_AProyectilExplosivo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectilExplosivo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGALAGA_USFXFVMProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilExplosivo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProyectilExplosivo.h" },
		{ "ModuleRelativePath", "ProyectilExplosivo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectilExplosivo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectilExplosivo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectilExplosivo_Statics::ClassParams = {
		&AProyectilExplosivo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProyectilExplosivo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilExplosivo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectilExplosivo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectilExplosivo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectilExplosivo, 322876412);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AProyectilExplosivo>()
	{
		return AProyectilExplosivo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectilExplosivo(Z_Construct_UClass_AProyectilExplosivo, &AProyectilExplosivo::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AProyectilExplosivo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectilExplosivo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
