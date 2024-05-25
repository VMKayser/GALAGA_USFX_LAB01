// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFXFVM/MenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuWidget() {}
// Cross Module References
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
	GALAGA_USFXFVM_API UClass* Z_Construct_UClass_UMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFXFVM();
// End Cross Module References
	DEFINE_FUNCTION(UMenuWidget::execElegirNivel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ElegirNivel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidget::execCambiarDificultad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CambiarDificultad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidget::execSalirJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SalirJuego();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidget::execIniciarJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IniciarJuego();
		P_NATIVE_END;
	}
	void UMenuWidget::StaticRegisterNativesUMenuWidget()
	{
		UClass* Class = UMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CambiarDificultad", &UMenuWidget::execCambiarDificultad },
			{ "ElegirNivel", &UMenuWidget::execElegirNivel },
			{ "IniciarJuego", &UMenuWidget::execIniciarJuego },
			{ "SalirJuego", &UMenuWidget::execSalirJuego },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMenuWidget_CambiarDificultad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidget_CambiarDificultad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "MenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_CambiarDificultad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "CambiarDificultad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidget_CambiarDificultad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_CambiarDificultad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidget_CambiarDificultad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidget_CambiarDificultad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidget_ElegirNivel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidget_ElegirNivel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "MenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_ElegirNivel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "ElegirNivel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidget_ElegirNivel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_ElegirNivel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidget_ElegirNivel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidget_ElegirNivel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidget_IniciarJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidget_IniciarJuego_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "MenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_IniciarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "IniciarJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidget_IniciarJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_IniciarJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidget_IniciarJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidget_IniciarJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidget_SalirJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidget_SalirJuego_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "MenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_SalirJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "SalirJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidget_SalirJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_SalirJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidget_SalirJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMenuWidget_SalirJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMenuWidget_NoRegister()
	{
		return UMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFXFVM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuWidget_CambiarDificultad, "CambiarDificultad" }, // 3906229948
		{ &Z_Construct_UFunction_UMenuWidget_ElegirNivel, "ElegirNivel" }, // 2229230660
		{ &Z_Construct_UFunction_UMenuWidget_IniciarJuego, "IniciarJuego" }, // 3456424475
		{ &Z_Construct_UFunction_UMenuWidget_SalirJuego, "SalirJuego" }, // 1424476796
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MenuWidget.h" },
		{ "ModuleRelativePath", "MenuWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuWidget_Statics::ClassParams = {
		&UMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuWidget, 3267546305);
	template<> GALAGA_USFXFVM_API UClass* StaticClass<UMenuWidget>()
	{
		return UMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuWidget(Z_Construct_UClass_UMenuWidget, &UMenuWidget::StaticClass, TEXT("/Script/GALAGA_USFXFVM"), TEXT("UMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
