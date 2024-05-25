// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/Armas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmas() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AArmas_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AArmas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AArmas::StaticRegisterNativesAArmas()
	{
	}
	UClass* Z_Construct_UClass_AArmas_NoRegister()
	{
		return AArmas::StaticClass();
	}
	struct Z_Construct_UClass_AArmas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaArma_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaArma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Armas.h" },
		{ "ModuleRelativePath", "Armas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmas_Statics::NewProp_mallaArma_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Arma" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Armas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmas_Statics::NewProp_mallaArma = { "mallaArma", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmas, mallaArma), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmas_Statics::NewProp_mallaArma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmas_Statics::NewProp_mallaArma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmas_Statics::NewProp_mallaArma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmas_Statics::ClassParams = {
		&AArmas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmas_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AArmas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmas, 1014976075);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AArmas>()
	{
		return AArmas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmas(Z_Construct_UClass_AArmas, &AArmas::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AArmas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
