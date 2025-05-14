#include "Griffin.hpp"
#include <iostream>

Griffin::Griffin()
{
    std::cout << "Griffin was born" << std::endl;
    hp = 8000;
    x = 12;
    y = 18;
    name = "Griffin";
}

Griffin::~Griffin() {
    std::cout << "Griffin died" << std::endl;
}

void Griffin::Print()
{
    std::cout << "Griffin: HP: " << hp << ", Position: (" << x << ", " << y << ")" << std::endl;
    std::cout << "Griffin flies with majesty and screeches!" << std::endl;                 
}
