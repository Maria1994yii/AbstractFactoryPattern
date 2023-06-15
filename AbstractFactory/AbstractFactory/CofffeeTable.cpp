#include "CofffeeTable.h"
#include <iostream>

void ArtDecoCoffeeTable::hasLegs()
{
	std::cout << "has no legs" << std::endl;
}

void ArtDecoCoffeeTable::design()
{
	std::cout << "rectangle" << std::endl;
}

void VictorianCoffeeTable::hasLegs()
{
	std::cout << "has 4 legs" << std::endl;
}

void VictorianCoffeeTable::design()
{
	std::cout << "square" << std::endl;
}

void ModernCoffeeTable::hasLegs()
{
	std::cout << "has 4 legs" << std::endl;
}

void ModernCoffeeTable::design()
{
	std::cout << "elips" << std::endl;
}


