#include "Dragon.hpp"
#include "Griffin.hpp"
#include "Rider.hpp"
#include "Pilot.hpp"
#include "Pikeman.hpp"
#include "PikemanRider.hpp"
#include "Chimera.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<Entity*> entities;
    entities.push_back(new Dragon());
    entities.push_back(new Griffin());
    entities.push_back(new Rider());
    entities.push_back(new Pilot());
    entities.push_back(new Pikeman());
    entities.push_back(new PikemanRider());
    entities.push_back(new Chimera());

    for (Entity* e : entities)
    {
        e->Print();
    }

    for (Entity* e : entities)
    {
        delete e; 
    }

    return 0;
}
