// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/PantallaFinDeJuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePantallaFinDeJuego() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_APantallaFinDeJuego_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_APantallaFinDeJuego();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_USubscriptorEvento_NoRegister();
// End Cross Module References
	void APantallaFinDeJuego::StaticRegisterNativesAPantallaFinDeJuego()
	{
	}
	UClass* Z_Construct_UClass_APantallaFinDeJuego_NoRegister()
	{
		return APantallaFinDeJuego::StaticClass();
	}
	struct Z_Construct_UClass_APantallaFinDeJuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APantallaFinDeJuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APantallaFinDeJuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PantallaFinDeJuego.h" },
		{ "ModuleRelativePath", "PantallaFinDeJuego.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APantallaFinDeJuego_Statics::NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PantallaFinDeJuego.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APantallaFinDeJuego_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APantallaFinDeJuego, MainMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APantallaFinDeJuego_Statics::NewProp_MainMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APantallaFinDeJuego_Statics::NewProp_MainMenuWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APantallaFinDeJuego_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APantallaFinDeJuego_Statics::NewProp_MainMenuWidgetClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APantallaFinDeJuego_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USubscriptorEvento_NoRegister, (int32)VTABLE_OFFSET(APantallaFinDeJuego, ISubscriptorEvento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APantallaFinDeJuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APantallaFinDeJuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APantallaFinDeJuego_Statics::ClassParams = {
		&APantallaFinDeJuego::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APantallaFinDeJuego_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APantallaFinDeJuego_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APantallaFinDeJuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APantallaFinDeJuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APantallaFinDeJuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APantallaFinDeJuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APantallaFinDeJuego, 235768159);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<APantallaFinDeJuego>()
	{
		return APantallaFinDeJuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APantallaFinDeJuego(Z_Construct_UClass_APantallaFinDeJuego, &APantallaFinDeJuego::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("APantallaFinDeJuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APantallaFinDeJuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
