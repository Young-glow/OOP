#include "Pilot.hpp"
#include <iostream>

Pilot::Pilot()
{
    std::cout << "Pilot was born" << std::endl;
    hp = 200;
    x = 5;
    y = 6;
    name = "Pilot";
}

Pilot::~Pilot() {
    std::cout << "Pilot died" << std::endl;
}

void Pilot::Print()
{
    std::cout << "Pilot HP: " << hp << std::endl;
    std::cout << "Pilot flies on a griffin and navigates the skies!" << std::endl;
    Think();
}
