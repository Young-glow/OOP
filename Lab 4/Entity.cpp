#include "Entity.hpp"

Entity::Entity() : hp(0), type(EntityType::ENTITY), x(0), y(0), name("Entity") {}
Entity::~Entity() {}

void Entity::Print()
{
    std::cout << "Entity HP: " << hp << std::endl;
    std::cout << "Entity position: (" << x << ", " << y << ")" << std::endl;
    std::cout << "Entity name: " << name << std::endl;
}
