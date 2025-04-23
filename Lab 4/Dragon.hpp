#ifndef DRAGON_HPP
#define DRAGON_HPP
#include "MagicalAnimals.hpp"

class Dragon : public MagicalAnimal
{
public:
    Dragon();
    ~Dragon();

    void Print() override;
};

#endif
