#ifndef PIKEMAN_HPP
#define PIKEMAN_HPP
#include "Entity.hpp"


class Pikeman : virtual public Entity
{
public:
    Pikeman();
    ~Pikeman();

    void Print() override;
};

#endif