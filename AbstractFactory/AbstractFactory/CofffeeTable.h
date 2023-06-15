#pragma once
class CoffeeTable
{
public:
	virtual ~CoffeeTable() = 0;
	virtual void hasLegs() = 0;
	virtual void design() = 0;
};

class ArtDecoCoffeeTable : public CoffeeTable
{
public:
	void hasLegs()override;
	void design()override;
};

class VictorianCoffeeTable : public CoffeeTable
{
public:
	void hasLegs()override;
	void design()override;
};


class ModernCoffeeTable : public CoffeeTable
{
public:
	void hasLegs()override;
	void design()override;
};

