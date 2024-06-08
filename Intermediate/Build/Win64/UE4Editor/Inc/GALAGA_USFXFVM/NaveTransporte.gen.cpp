// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/NaveTransporte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTransporte() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveTransporte_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveTransporte();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UCompositeNavesEnemigas_NoRegister();
// End Cross Module References
	void ANaveTransporte::StaticRegisterNativesANaveTransporte()
	{
	}
	UClass* Z_Construct_UClass_ANaveTransporte_NoRegister()
	{
		return ANaveTransporte::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTransporte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTransporte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTransporte_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveTransporte.h" },
		{ "ModuleRelativePath", "NaveTransporte.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveTransporte_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCompositeNavesEnemigas_NoRegister, (int32)VTABLE_OFFSET(ANaveTransporte, ICompositeNavesEnemigas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTransporte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTransporte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTransporte_Statics::ClassParams = {
		&ANaveTransporte::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveTransporte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTransporte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTransporte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTransporte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTransporte, 1662224015);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<ANaveTransporte>()
	{
		return ANaveTransporte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTransporte(Z_Construct_UClass_ANaveTransporte, &ANaveTransporte::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("ANaveTransporte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTransporte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
