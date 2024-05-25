// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/ArmaDN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaDN() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AArmaDN_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AArmaDN();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AArmas();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void AArmaDN::StaticRegisterNativesAArmaDN()
	{
	}
	UClass* Z_Construct_UClass_AArmaDN_NoRegister()
	{
		return AArmaDN::StaticClass();
	}
	struct Z_Construct_UClass_AArmaDN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaDN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArmas,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaDN_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArmaDN.h" },
		{ "ModuleRelativePath", "ArmaDN.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaDN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaDN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaDN_Statics::ClassParams = {
		&AArmaDN::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArmaDN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaDN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaDN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaDN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaDN, 3523649630);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AArmaDN>()
	{
		return AArmaDN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaDN(Z_Construct_UClass_AArmaDN, &AArmaDN::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AArmaDN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaDN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
