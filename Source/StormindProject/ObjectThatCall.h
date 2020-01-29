// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Actor/UselessActor.h"
#include "ObjectThatCall.generated.h"

/**
 * 
 */
UCLASS()
class STORMINDPROJECT_API UObjectThatCall : public UObject
{
	GENERATED_BODY()

public:
	bool RunInterfaceFunction(AUselessActor* actor);
	
};
