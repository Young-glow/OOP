#include "PikemanRider.hpp"
#include <iostream>



PikemanRider::PikemanRider()
{
    std::cout << "PikemanRider was born" << std::endl;
    name = "PikemanRider";
}

PikemanRider::~PikemanRider() {
    std::cout << "PikemanRider died" << std::endl;
} 

void PikemanRider::Print()
{
    std::cout << "PikemanRider HP: " << hp<< std::endl;
    std::cout << "PikemanRider say Bla-Bla-Bla" << std::endl;
    Pikeman::Think();
}
