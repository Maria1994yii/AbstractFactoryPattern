#include "Sofa.h"
#include <iostream>

void ArtDecoSofa :: hasLegs()
{
		std::cout << "has 4 legs" << std::endl;
}

void ArtDecoSofa::sitOn()
{
	std::cout << "can sit 7 person" << std::endl;
}

void VictorianSofa::hasLegs()
{
	std::cout << "has 4 legs" << std::endl;
}

void VictorianSofa::sitOn()
{
	std::cout << "can sit 5 person" << std::endl;
}

void ModernSofa::hasLegs()
{
	std::cout << "has no legs" << std::endl;
}

void ModernSofa::sitOn()
{
	std::cout << "can sit 8 person" << std::endl;
}


