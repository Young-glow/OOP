#ifndef RIDER_HPP
#define RIDER_HPP
#include "Entity.hpp"


class Rider : virtual public Entity
{
public:
    Rider();
    virtual ~Rider() override;

    void Print() override;
};

#endif