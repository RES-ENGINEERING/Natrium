#pragma once

#include <vector>

#include "Bionic/Creature/microbe.hpp"

namespace Simulation
{
    class World
    {
        public:
            class Bionic_Manager
            {
                public:
                    std::vector<Creature::Bionic::Microbe> microbes;
                    void Add_Microbe();
            };

        void World::Update(float delta_time);
    };
}