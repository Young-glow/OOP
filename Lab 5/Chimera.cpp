#include "Chimera.hpp"
#include <iostream>

Chimera::Chimera()
{
    std::cout << "Chimera was born" << std::endl;
    hp = 15000; 
    x = 20;     
    y = 30;
    name = "Chimera";
}

Chimera::~Chimera()
{
    std::cout << "Chimera died" << std::endl;
}

void Chimera::Print()
{
    std::cout << "Chimera: HP: " << hp << ", Position: (" << x << ", " << y << ")" << std::endl;
    std::cout << "Chimera combines the might of a Dragon and the agility of a Griffin!" << std::endl;
}