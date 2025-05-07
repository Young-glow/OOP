#ifndef PIKEMANRIDER_HPP
#define PIKEMANRIDER_HPP
#include "Pikeman.hpp"
#include "Rider.hpp"

class PikemanRider : public Pikeman, public Rider 
{
public:
    PikemanRider();
    ~PikemanRider();

    void Print() override;
};

#endif