#include "Pilot.hpp"
#include <iostream>

Pilot::Pilot()
{
    type = EntityType::PILOT;
    hp = 200;
    x = 5;
    y = 6;
    name = "Pilot";
}

Pilot::~Pilot() {}

void Pilot::Print()
{
    std::cout << "Pilot HP: " << hp << std::endl;
    std::cout << "Pilot flies on a griffin and navigates the skies!" << std::endl;
    Think();
}
