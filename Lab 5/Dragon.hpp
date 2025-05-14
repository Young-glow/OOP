#ifndef DRAGON_HPP
#define DRAGON_HPP
#include "Entity.hpp"

class Dragon : virtual public Entity
{
public:
    Dragon();
    ~Dragon();

    void Print() override;
};

#endif