#include "Rider.hpp"
#include <iostream>

Rider::Rider()
{
    std::cout << "Rider was born" << std::endl;
    hp = 500;
    x = 2;
    y = 3;
    name = "Rider";
}

Rider::~Rider() {
    std::cout << "Rider died" << std::endl;
}

void Rider::Print()
{
    std::cout << "Rider HP: " << hp << std::endl;
    std::cout << "Rider flies on a dragon and gains magical power!" << std::endl;
    Think();
}
