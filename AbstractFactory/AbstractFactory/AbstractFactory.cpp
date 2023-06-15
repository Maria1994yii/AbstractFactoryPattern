// AbstractFactory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Sofa.h"
#include "CofffeeTable.h"
#include "FurnitureFactory.h"

class Chair {
public:
    virtual ~Chair() = 0;
    virtual void hasLegs() = 0;
    virtual void sitOn()  = 0;
};

class VictorianChair : public Chair {
public:
    void hasLegs()override {
        std::cout << "has 4 legs" << std::endl;
    }
    void sitOn()override {
        std::cout << "can sit one person" << std::endl;
    }
};


class ModernChair : public Chair {
public:
    void hasLegs()override {
        std::cout << "has no legs" << std::endl;
    }
    void sitOn()override {
        std::cout << "can sit one person" << std::endl;
    }
};


class ArtDecoChair : public Chair {
public:
    void hasLegs()override {
        std::cout << "has 4 legs" << std::endl;
    }
    void sitOn()override {
        std::cout << "can sit one person" << std::endl;
    }
};


void ClientCode(const FurnitureFactory &furniture)
{ 
    const Chair* chair = furniture.createChair();
    const Sofa* sofa = furniture.createSofa();
    const CoffeeTable* coffetable = furniture.createCoffeeTable();
    chair->hasLegs();
    
}

int main()
{
    VictorianFurnitureFactory* f = new VictorianFurnitureFactory();
    ClientCode(*f);
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
