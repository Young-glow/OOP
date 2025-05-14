#ifndef PILOT_HPP
#define PILOT_HPP
#include "Entity.hpp"

class Pilot : virtual public Entity
{
public:
    Pilot();
    ~Pilot();

    void Print() override;
};

#endif