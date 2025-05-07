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
    std::cout << "Pikeman HP: " << hp << std::endl;
    std::cout << "Pilot flies on a griffin and navigates the skies!" << std::endl;
    Think();
}
