// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/LatentActionManager.h"
#include "UselessObject.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class STORMINDPROJECT_API UUselessObject : public UObject {
	GENERATED_BODY()


protected:


	UFUNCTION(BlueprintCallable, Category = "CustomDelay", meta = (Latent))
		static void Delay(float Duration = 0.2f);

};
