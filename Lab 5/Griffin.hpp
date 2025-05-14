#ifndef GRIFFIN_HPP
#define GRIFFIN_HPP
#include "Entity.hpp"

class Griffin : virtual public Entity
{
public:
    Griffin();
    ~Griffin();

    void Print() override;
};

#endif