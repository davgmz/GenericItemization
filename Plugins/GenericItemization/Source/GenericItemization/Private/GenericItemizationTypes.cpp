// Copyright Fissure Entertainment, Pty Ltd. All Rights Reserved.

#include "GenericItemizationTypes.h"
#include "GenericItemizationPickFunctions.h"
#include "GenericItemizationInstancingFunctions.h"

FItemDropTableCollectionRow::FItemDropTableCollectionRow()
{
	PickRequirements = FInstancedStruct::Make<FItemDropTableCollectionPickRequirements>();
	PickFunction = UItemDropTableCollectionPickFunction::StaticClass();
}

FItemDefinitionCollection::FItemDefinitionCollection()
{
	PickRequirements = FInstancedStruct::Make<FItemDefinitionCollectionPickRequirements>();
	PickFunction = UItemDefinitionCollectionPickFunction::StaticClass();
}

FItemDefinition::FItemDefinition()
{
	InstancingFunction = UItemInstancingFunction::StaticClass();
}