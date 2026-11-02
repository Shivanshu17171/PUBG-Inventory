// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CoreItemData.generated.h"

/**
 * 
 */
UCLASS()
class PUBGINVENTORY_API UCoreItemData : public UPrimaryDataAsset
{
	GENERATED_BODY()


	// Item Common Data
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText ItenName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText ItemDefinition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* ItemIcon;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bItemIsStackable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemStackSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemWeight;
	
};
