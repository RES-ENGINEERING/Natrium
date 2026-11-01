#include "World/world.hpp"

#include <vector>

#include "Bionic/Creature/microbe.hpp"

namespace Simulation
{
    void World::Bionic_Manager::Add_Microbe()
    {
        microbes.emplace_back();
    }

    void World::Physics_Procession(float delta_time) {}
}