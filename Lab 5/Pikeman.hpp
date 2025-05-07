#ifndef PIKEMAN_HPP
#define PIKEMAN_HPP
#include "Person.hpp"
#include "Griffin.hpp"

class Pikeman : virtual public Person
{
public:
    Pikeman();
    ~Pikeman();

    void Print() override;
};

#endif
