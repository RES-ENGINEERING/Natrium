#include "Bionic/Creature/microbe.hpp"

#include <string>

namespace Creature
{
    namespace Bionic
    {
        namespace Microbe
        {
            struct Properties
            {
                std::string name = "Microbe";
                float health = 100;
                float hunger = 500;
                float motivation = 50;
                float speed = 10;
                float lifespan = 1000;
                float metabolism = 100;
                float reproduction_energy_exhaust_cost = 75;
                float energy = 750;
                int age = 0;
            };
        }

    }
}