#include "Dragon.hpp"
#include <iostream>

Dragon::Dragon()
{
    type = EntityType::DRAGON;
    hp = 10000;
    x = 10;
    y = 20;
    name = "Dragon";
}

Dragon::~Dragon() {}

void Dragon::Print()
{
    std::cout << "Dragon HP: " << hp << std::endl;
    std::cout << "Dragon breathes fire!" << std::endl;
    std::cout << "Dragon flies!" << std::endl;
    std::cout << "Dragon roars!" << std::endl;
    CastSpell();
}
