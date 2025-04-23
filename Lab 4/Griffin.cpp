#include "Griffin.hpp"
#include <iostream>

Griffin::Griffin()
{
    type = EntityType::GRIFFIN;
    hp = 8000;
    x = 12;
    y = 18;
    name = "Griffin";
}

Griffin::~Griffin() {}

void Griffin::Print()
{
    std::cout << "Griffin HP: " << hp << std::endl;
    std::cout << "Griffin flies with majesty!" << std::endl;
    std::cout << "Griffin screeches!" << std::endl;
    CastSpell();
}
