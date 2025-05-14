#ifndef PIKEMANRIDER_HPP
#define PIKEMANRIDER_HPP
#include "Pikeman.hpp"
#include "Rider.hpp"
#include "Pilot.hpp"

class PikemanRider : public Pikeman, public Rider, public Pilot
{
public:
    PikemanRider();
    virtual ~PikemanRider() override;

    void Print() override;
};

#endif