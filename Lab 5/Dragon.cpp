#include "Dragon.hpp"
#include <iostream>

Dragon::Dragon()
{
    std::cout << "Dragon was born" << std::endl;
    hp = 10000;
    x = 10;
    y = 20;
    name = "Dragon";
}

Dragon::~Dragon() {
    std::cout << "Dragon died" << std::endl;
    std::cout << "Liiiiam noooooo!!!" << std::endl;
}

void Dragon::Print()
{
    std::cout << "Dragon: HP: " << hp << ", Position: (" << x << ", " << y << ")" << std::endl;
    std::cout << "Dragon breathes fire, flies, and roars!" << std::endl;                 
}