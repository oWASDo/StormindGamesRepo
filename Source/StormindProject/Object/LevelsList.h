// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Level.h"
#include "LevelsList.generated.h"

/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class STORMINDPROJECT_API ULevelsList : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<UWorld*> FArrayOfLevels;


};
