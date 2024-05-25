// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/ArmaDP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaDP() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AArmaDP_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AArmaDP();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_AArmas();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void AArmaDP::StaticRegisterNativesAArmaDP()
	{
	}
	UClass* Z_Construct_UClass_AArmaDP_NoRegister()
	{
		return AArmaDP::StaticClass();
	}
	struct Z_Construct_UClass_AArmaDP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaDP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArmas,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaDP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArmaDP.h" },
		{ "ModuleRelativePath", "ArmaDP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaDP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaDP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaDP_Statics::ClassParams = {
		&AArmaDP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArmaDP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaDP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaDP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaDP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaDP, 1246272067);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<AArmaDP>()
	{
		return AArmaDP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaDP(Z_Construct_UClass_AArmaDP, &AArmaDP::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("AArmaDP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaDP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
