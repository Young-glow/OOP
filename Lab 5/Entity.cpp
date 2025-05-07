#include "Entity.hpp"

Entity::Entity() : hp(0), x(0), y(0), name("Entity") {
    std::cout << "Entity constructor called" << std::endl;
}
Entity::~Entity() {
    std::cout << "Entity destructor called" << std::endl;
}

void Entity::Print()
{
    std::cout << "Entity HP: " << hp << std::endl;
    std::cout << "Entity position: (" << x << ", " << y << ")" << std::endl;
    std::cout << "Entity name: " << name << std::endl;
}
