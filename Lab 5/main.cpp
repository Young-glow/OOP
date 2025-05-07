#include "Dragon.hpp"
#include "Griffin.hpp"
#include "Rider.hpp"
#include "Pilot.hpp"
#include "PikemanRider.hpp"
#include <iostream>
#include <vector>

int main()
{
  std::vector<Entity*> entities;
  entities.push_back(new Dragon());
  entities.push_back(new Griffin());
  entities.push_back(new Rider());
  entities.push_back(new Pilot());
  entities.push_back(new PikemanRider());

  while (true)
  {
    for (Entity *e : entities)
    {
      e->Print();
    }

    int x;
    std::cout << "Enter 0 to exit, any other number to continue: ";
    std::cin >> x;
    
    if (x == 0) {
      break;
    }
  }

  // Звільнення пам'яті
  for (Entity *e : entities)
  {
    delete e;
  }
  entities.clear();

  return 0;
}
