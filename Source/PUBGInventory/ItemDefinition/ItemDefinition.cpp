// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDefinition/ItemDefinition.h"

// Sets default values
AItemDefinition::AItemDefinition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	
}


