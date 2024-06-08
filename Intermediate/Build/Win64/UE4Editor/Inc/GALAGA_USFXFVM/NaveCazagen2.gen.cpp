// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/NaveCazagen2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveCazagen2() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveCazagen2_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveCazagen2();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveCaza();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void ANaveCazagen2::StaticRegisterNativesANaveCazagen2()
	{
	}
	UClass* Z_Construct_UClass_ANaveCazagen2_NoRegister()
	{
		return ANaveCazagen2::StaticClass();
	}
	struct Z_Construct_UClass_ANaveCazagen2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveCazagen2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveCaza,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCazagen2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveCazagen2.h" },
		{ "ModuleRelativePath", "NaveCazagen2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveCazagen2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveCazagen2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveCazagen2_Statics::ClassParams = {
		&ANaveCazagen2::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveCazagen2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCazagen2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveCazagen2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveCazagen2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveCazagen2, 2337817906);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<ANaveCazagen2>()
	{
		return ANaveCazagen2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveCazagen2(Z_Construct_UClass_ANaveCazagen2, &ANaveCazagen2::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("ANaveCazagen2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveCazagen2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
