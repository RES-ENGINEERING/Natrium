#include "World/world.hpp"

#include <vector>

#include "Bionic/Creature/microbe.hpp"

namespace Simulation
{
    void World::Create_Microbe()
    {
        microbes.emplace_back();
    }
}