// Copyright (c) 2026 Crezetique. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELTLocalizationLibrary.generated.h"

/**
 * Python/Blueprint callable wrapper around UELTEditor::GenerateLocFilesImpl.
 */
UCLASS()
class EASYLOCALIZATIONTOOLEDITOR_API UELTLocalizationLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "ELT|Localization")
	static bool GenerateLocalization(
		const FString& CSVPath,
		const FString& LocPath,
		const FString& LocName,
		const FString& GlobalNamespace,
		const FString& Separator,
		const FString& FallbackWhenEmpty,
		bool bGenerateStringTables
	);
};