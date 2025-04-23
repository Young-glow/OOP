#include "People.hpp"
#include <iostream>

Person::Person() : intelligence(100) {}
Person::~Person() {}

void Person::Think()
{
    std::cout << name << " is thinking with intelligence: " << intelligence << std::endl;
}
