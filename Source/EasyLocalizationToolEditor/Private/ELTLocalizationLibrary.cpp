// Copyright (c) 2026 Crezetique. All rights reserved.

#include "ELTLocalizationLibrary.h"
#include "ELTEditor.h"

bool UELTLocalizationLibrary::GenerateLocalization(
	const FString& CSVPath,
	const FString& LocPath,
	const FString& LocName,
	const FString& GlobalNamespace,
	const FString& Separator,
	const FString& FallbackWhenEmpty,
	bool bGenerateStringTables)
{
	FString OutMessage;
	bool bSuccess = UELTEditor::GenerateLocFilesImpl(CSVPath, LocPath, LocName, GlobalNamespace, Separator, FallbackWhenEmpty, bGenerateStringTables, OutMessage);
	if (bSuccess)
	{
		UE_LOG(ELTEditorLog, Log, TEXT("[ELT] Successfully generated localization!"));
	} else
	{
		UE_LOG(ELTEditorLog, Error, TEXT("[ELT] Failed to generate localization: %s"), *OutMessage);
	}
	return bSuccess;
}