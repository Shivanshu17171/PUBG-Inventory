// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Bag.h"
#include "ItemData/PBagData.h"

void ABag::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (Mesh && BagData && BagData->BagMesh)
	{
		Mesh->SetStaticMesh(BagData->BagMesh);
	}
}

