// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UselessInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class STORMINDPROJECT_API UUselessInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**
 * 
 */
class STORMINDPROJECT_API IUselessInterface
{
	GENERATED_IINTERFACE_BODY()

public:
		UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		bool DoStuffs();

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
};
