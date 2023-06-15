#pragma once
#include <iostream>
class Sofa
{
public:
	virtual ~Sofa() = 0;
	virtual void hasLegs() = 0;
	virtual void sitOn() = 0;
};

class ArtDecoSofa : public Sofa{
public:
	void hasLegs()override;
	void sitOn()override;
};

class VictorianSofa : public Sofa {
public:
	void hasLegs()override;
	void sitOn()override;
};


class ModernSofa : public Sofa {
public:
	void hasLegs()override;
	void sitOn()override;
};

