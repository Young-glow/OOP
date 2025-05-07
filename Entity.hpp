#ifndef ENTITY_HPP
#define ENTITY_HPP
#include <iostream>
#include <string>

class Entity
{
public:
  Entity();
  virtual ~Entity();

  int hp;
  int x, y;
  std::string name;

  virtual void Print();
};

#endif
