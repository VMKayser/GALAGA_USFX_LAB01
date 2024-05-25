// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/EscudoN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoN() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEscudoN_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEscudoN();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AEscudos();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void AEscudoN::StaticRegisterNativesAEscudoN()
	{
	}
	UClass* Z_Construct_UClass_AEscudoN_NoRegister()
	{
		return AEscudoN::StaticClass();
	}
	struct Z_Construct_UClass_AEscudoN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudoN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEscudos,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoN_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EscudoN.h" },
		{ "ModuleRelativePath", "EscudoN.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudoN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudoN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudoN_Statics::ClassParams = {
		&AEscudoN::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscudoN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudoN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudoN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudoN, 3141247599);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AEscudoN>()
	{
		return AEscudoN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudoN(Z_Construct_UClass_AEscudoN, &AEscudoN::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AEscudoN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudoN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
