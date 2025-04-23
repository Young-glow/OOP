#include "MagicalAnimals.hpp"
#include <iostream>

MagicalAnimal::MagicalAnimal() : canCastSpells(true) {}
MagicalAnimal::~MagicalAnimal() {}

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
