// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/UselessInterface.h"
#include "UselessActor.generated.h"

UCLASS()
class STORMINDPROJECT_API AUselessActor : public AActor, public IUselessInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUselessActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool DoStuffs();
		virtual bool DoStuffs_Implementation() override;

};
