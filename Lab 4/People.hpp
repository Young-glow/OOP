#ifndef PEOPLE_HPP
#define PEOPLE_HPP
#include "Entity.hpp"

class Person : public Entity
{
protected:
    int intelligence;

public:
    Person();
    ~Person();
    void Think();
};

#endif
