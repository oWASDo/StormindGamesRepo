// Fill out your copyright notice in the Description page of Project Settings.


#include "UselessObject.h"




void UUselessObject::Delay(float Duration) {
	FLatentActionInfo FInfo;
	UKismetSystemLibrary::Delay(nullptr, Duration, FInfo);
}
