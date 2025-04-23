#ifndef RIDER_HPP
#define RIDER_HPP
#include "People.hpp"
#include "Dragon.hpp"

class Rider : public Person
{
public:
    Rider();
    ~Rider();

    void Print() override;
};

#endif
