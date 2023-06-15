#pragma once
#include "Sofa.h"
#include "CofffeeTable.h"
#include "AbstractFactory.cpp"

class FurnitureFactory
{
public:
	virtual Chair* createChair() const = 0;
	virtual Sofa* createSofa() const = 0;
	virtual CoffeeTable* createCoffeeTable() const = 0;
};

class VictorianFurnitureFactory : public FurnitureFactory
{
public:
	Chair* createChair() const;
	Sofa* createSofa() const;
	CoffeeTable* createCoffeeTable() const;
};


class ModernFurnitureFactory : public FurnitureFactory
{
public:
	Chair* createChair() const;
	Sofa* createSofa() const;
	CoffeeTable* createCoffeeTable() const;
};


class ArtDecoFurnitureFactory : public FurnitureFactory
{
public:
	Chair* createChair() const;
	Sofa* createSofa() const;
	CoffeeTable* createCoffeeTable() const;
};



