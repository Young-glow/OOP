#ifndef MAGICAL_ANIMALS_HPP
#define MAGICAL_ANIMALS_HPP
#include "Entity.hpp"

class MagicalAnimal : public Entity
{
protected:
    bool canCastSpells;

public:
    MagicalAnimal();
    ~MagicalAnimal();

    void CastSpell();
};

#endif
