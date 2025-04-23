#ifndef PILOT_HPP
#define PILOT_HPP
#include "People.hpp"
#include "Griffin.hpp"

class Pilot : public Person
{
public:
    Pilot();
    ~Pilot();

    void Print() override;
};

#endif