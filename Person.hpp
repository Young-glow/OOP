#ifndef PERSON_HPP
#define PERSON_HPP
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
