// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/NaveNodrizaDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveNodrizaDirector() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveNodrizaDirector_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveNodrizaDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	void ANaveNodrizaDirector::StaticRegisterNativesANaveNodrizaDirector()
	{
	}
	UClass* Z_Construct_UClass_ANaveNodrizaDirector_NoRegister()
	{
		return ANaveNodrizaDirector::StaticClass();
	}
	struct Z_Construct_UClass_ANaveNodrizaDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveNodrizaDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveNodrizaDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveNodrizaDirector.h" },
		{ "ModuleRelativePath", "NaveNodrizaDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveNodrizaDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveNodrizaDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveNodrizaDirector_Statics::ClassParams = {
		&ANaveNodrizaDirector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveNodrizaDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveNodrizaDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveNodrizaDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveNodrizaDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveNodrizaDirector, 725516392);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<ANaveNodrizaDirector>()
	{
		return ANaveNodrizaDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveNodrizaDirector(Z_Construct_UClass_ANaveNodrizaDirector, &ANaveNodrizaDirector::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("ANaveNodrizaDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveNodrizaDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
