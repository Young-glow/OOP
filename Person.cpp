#include "Person.hpp"
#include <iostream>

Person::Person() : intelligence(100) {
    std::cout << "Person constructor called" << std::endl;
}
Person::~Person() {
    std::cout << "Person destructor called" << std::endl;
}

void Person::Think()
{
    std::cout << name << " is thinking with intelligence: " << intelligence << std::endl;
}
