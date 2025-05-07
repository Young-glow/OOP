#ifndef RIDER_HPP
#define RIDER_HPP
#include "Person.hpp"
#include "Dragon.hpp"

class Rider : virtual public Person
{
public:
    Rider();
    ~Rider();

    void Print() override;
};

#endif
