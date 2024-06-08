// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/NaveTanque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveTanque() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveTanque_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveTanque();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UCompositeNavesEnemigas_NoRegister();
// End Cross Module References
	void ANaveTanque::StaticRegisterNativesANaveTanque()
	{
	}
	UClass* Z_Construct_UClass_ANaveTanque_NoRegister()
	{
		return ANaveTanque::StaticClass();
	}
	struct Z_Construct_UClass_ANaveTanque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveTanque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveTanque_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveTanque.h" },
		{ "ModuleRelativePath", "NaveTanque.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveTanque_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCompositeNavesEnemigas_NoRegister, (int32)VTABLE_OFFSET(ANaveTanque, ICompositeNavesEnemigas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveTanque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveTanque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveTanque_Statics::ClassParams = {
		&ANaveTanque::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveTanque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveTanque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveTanque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveTanque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveTanque, 3223257476);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<ANaveTanque>()
	{
		return ANaveTanque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveTanque(Z_Construct_UClass_ANaveTanque, &ANaveTanque::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("ANaveTanque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveTanque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
