#ifndef ENTITY_HPP
#define ENTITY_HPP
#include <iostream>
#include <string>

enum class EntityType
{
  ENTITY,
  DRAGON,
  GRIFFIN,
  RIDER,
  PILOT
};

class Entity
{
public:
  Entity();
  virtual ~Entity();

  int hp;
  EntityType type;
  int x, y;
  std::string name;

  virtual void Print();
};

#endif
