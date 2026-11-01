#include "World/world.hpp"

#include <vector>

#include "Bionic/Creature/microbe.hpp"

namespace Simulation
{
    void World::Bionic_Manager::Add_Microbe()
    {
        World::Bionic_Manager::microbes.emplace_back();
    }

    void World::Update(float delta_time) {}
}