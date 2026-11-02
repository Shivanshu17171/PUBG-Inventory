// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemDefinition/ItemDefinition.h"
#include "Bag.generated.h"

/**
 * 
 */
UCLASS()
class PUBGINVENTORY_API ABag : public AItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPBagData* BagData;

	virtual void OnConstruction(const FTransform& Transform) override;
	
};
