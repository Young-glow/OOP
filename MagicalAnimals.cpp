#include "MagicalAnimals.hpp"
#include <iostream>

MagicalAnimal::MagicalAnimal() : canCastSpells(true) {
    std::cout << "MagicalAnimal constructor called" << std::endl;
}
MagicalAnimal::~MagicalAnimal() {
    std::cout << "MagicalAnimal destructor called" << std::endl;
}

void MagicalAnimal::CastSpell()
{
    if (canCastSpells)
    {
        std::cout << name << " casts a magical spell!" << std::endl;
    }
    else
    {
        std::cout << name << " cannot cast spells." << std::endl;
    }
}