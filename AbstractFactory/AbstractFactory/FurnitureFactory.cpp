#include "FurnitureFactory.h"

Chair* VictorianFurnitureFactory::createChair() const
{
	return new VictorianChair();
}

Sofa* VictorianFurnitureFactory::createSofa() const
{
	return new VictorianSofa();
}

CoffeeTable* VictorianFurnitureFactory::createCoffeeTable() const
{
	return new VictorianCoffeeTable();
}


Chair* ModernFurnitureFactory::createChair() const
{
	return new ModernChair();
}

Sofa* ModernFurnitureFactory::createSofa() const
{
	return new ModernSofa();
}

CoffeeTable* ModernFurnitureFactory::createCoffeeTable() const
{
	return new ModernCoffeeTable();
}


Chair* ArtDecoFurnitureFactory::createChair() const 
{
	return new ArtDecoChair();
}

Sofa* ArtDecoFurnitureFactory::createSofa() const
{
	return new ArtDecoSofa();
}

CoffeeTable* ArtDecoFurnitureFactory::createCoffeeTable() const 
{
	return new ArtDecoCoffeeTable();
}

