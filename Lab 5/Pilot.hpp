#ifndef PILOT_HPP
#define PILOT_HPP
#include "Person.hpp"
#include "Griffin.hpp"

class Pilot : public Person
{
public:
    Pilot();
    ~Pilot();

    void Print() override;
};

#endif
