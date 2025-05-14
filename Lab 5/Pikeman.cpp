#include "Pikeman.hpp"
#include <iostream>

Pikeman::Pikeman()
{
    std::cout << "Pikeman was born" << std::endl;
    hp = 100;
    x = 10;
    y = 10;
    name = "Pikeman";
}

Pikeman::~Pikeman() {
    std::cout << "Pikeman died" << std::endl;
}

void Pikeman::Print()
{
    std::cout << "Pikeman: HP: " << hp << ", Position: (" << x << ", " << y << ")" << std::endl;
    std::cout << "Pikeman fights bravely with his pike!" << std::endl;                 
}
