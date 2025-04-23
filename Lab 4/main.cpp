#include "Dragon.hpp"
#include "Griffin.hpp"
#include "Rider.hpp"
#include "Pilot.hpp"
#include <iostream>
#include <vector>

int main()
{
  std::vector<Entity *> entities;
  entities.push_back(new Dragon());
  entities.push_back(new Griffin());
  entities.push_back(new Rider());
  entities.push_back(new Pilot());

  while (true)
  {
    for (Entity *e : entities)
    {
      e->Print();
    }

    int x;
    std::cout << "Ctrl+C to exit: ";
    std::cin >> x;
  }

  return 0;
}
