// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/InterfazGamePlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfazGamePlay() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UInterfazGamePlay_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UInterfazGamePlay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UInterfazGamePlay::StaticRegisterNativesUInterfazGamePlay()
	{
	}
	UClass* Z_Construct_UClass_UInterfazGamePlay_NoRegister()
	{
		return UInterfazGamePlay::StaticClass();
	}
	struct Z_Construct_UClass_UInterfazGamePlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarraVida_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarraVida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarraPoder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarraPoder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfazGamePlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfazGamePlay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InterfazGamePlay.h" },
		{ "ModuleRelativePath", "InterfazGamePlay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraVida_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InterfazGamePlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InterfazGamePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraVida = { "BarraVida", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterfazGamePlay, BarraVida), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraVida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraVida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraPoder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InterfazGamePlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InterfazGamePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraPoder = { "BarraPoder", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterfazGamePlay, BarraPoder), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraPoder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraPoder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterfazGamePlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraVida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterfazGamePlay_Statics::NewProp_BarraPoder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfazGamePlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterfazGamePlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfazGamePlay_Statics::ClassParams = {
		&UInterfazGamePlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterfazGamePlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterfazGamePlay_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterfazGamePlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfazGamePlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfazGamePlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfazGamePlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfazGamePlay, 3966204350);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<UInterfazGamePlay>()
	{
		return UInterfazGamePlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfazGamePlay(Z_Construct_UClass_UInterfazGamePlay, &UInterfazGamePlay::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("UInterfazGamePlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfazGamePlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
