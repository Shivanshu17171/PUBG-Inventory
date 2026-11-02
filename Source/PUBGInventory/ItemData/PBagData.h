// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemData/CoreItemData.h"
#include "PBagData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class PUBGINVENTORY_API UPBagData : public UCoreItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* BagMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BagSocketName = "Spine";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WeightThisBagCanCarry;


	// Getter Functions

	int GetWeightThisBagCanCarry();



};
