#include "PikemanRider.hpp"
#include <iostream>

PikemanRider::PikemanRider()
{
    std::cout << "PikemanRider was born" << std::endl;
    hp = 100;
    x = 150;
    y = 250;
    name = "PikemanRider";
}

PikemanRider::~PikemanRider() {
    std::cout << "PikemanRider died" << std::endl;
}

void PikemanRider::Print()
{
    std::cout << "PikemanRider: HP: " << hp << ", Position: (" << x << ", " << y << ")" << std::endl;
    std::cout << "PikemanRider says Bla-Bla-Bla!" << std::endl;              
}
